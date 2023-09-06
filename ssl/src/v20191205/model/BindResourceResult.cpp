/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/ssl/v20191205/model/BindResourceResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

BindResourceResult::BindResourceResult() :
    m_resourceTypeHasBeenSet(false),
    m_bindResourceRegionResultHasBeenSet(false)
{
}

CoreInternalOutcome BindResourceResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindResourceResult.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("BindResourceRegionResult") && !value["BindResourceRegionResult"].IsNull())
    {
        if (!value["BindResourceRegionResult"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BindResourceResult.BindResourceRegionResult` is not array type"));

        const rapidjson::Value &tmpValue = value["BindResourceRegionResult"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BindResourceRegionResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bindResourceRegionResult.push_back(item);
        }
        m_bindResourceRegionResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BindResourceResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_bindResourceRegionResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindResourceRegionResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bindResourceRegionResult.begin(); itr != m_bindResourceRegionResult.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string BindResourceResult::GetResourceType() const
{
    return m_resourceType;
}

void BindResourceResult::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool BindResourceResult::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

vector<BindResourceRegionResult> BindResourceResult::GetBindResourceRegionResult() const
{
    return m_bindResourceRegionResult;
}

void BindResourceResult::SetBindResourceRegionResult(const vector<BindResourceRegionResult>& _bindResourceRegionResult)
{
    m_bindResourceRegionResult = _bindResourceRegionResult;
    m_bindResourceRegionResultHasBeenSet = true;
}

bool BindResourceResult::BindResourceRegionResultHasBeenSet() const
{
    return m_bindResourceRegionResultHasBeenSet;
}

