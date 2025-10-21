/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cdn/v20180606/model/ResourceOriginData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

ResourceOriginData::ResourceOriginData() :
    m_resourceHasBeenSet(false),
    m_originDataHasBeenSet(false)
{
}

CoreInternalOutcome ResourceOriginData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceOriginData.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("OriginData") && !value["OriginData"].IsNull())
    {
        if (!value["OriginData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceOriginData.OriginData` is not array type"));

        const rapidjson::Value &tmpValue = value["OriginData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CdnData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_originData.push_back(item);
        }
        m_originDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceOriginData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_originDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_originData.begin(); itr != m_originData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ResourceOriginData::GetResource() const
{
    return m_resource;
}

void ResourceOriginData::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool ResourceOriginData::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

vector<CdnData> ResourceOriginData::GetOriginData() const
{
    return m_originData;
}

void ResourceOriginData::SetOriginData(const vector<CdnData>& _originData)
{
    m_originData = _originData;
    m_originDataHasBeenSet = true;
}

bool ResourceOriginData::OriginDataHasBeenSet() const
{
    return m_originDataHasBeenSet;
}

