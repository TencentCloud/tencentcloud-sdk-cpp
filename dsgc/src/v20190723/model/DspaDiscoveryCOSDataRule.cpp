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

#include <tencentcloud/dsgc/v20190723/model/DspaDiscoveryCOSDataRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DspaDiscoveryCOSDataRule::DspaDiscoveryCOSDataRule() :
    m_operatorHasBeenSet(false),
    m_contentsHasBeenSet(false)
{
}

CoreInternalOutcome DspaDiscoveryCOSDataRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryCOSDataRule.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("Contents") && !value["Contents"].IsNull())
    {
        if (!value["Contents"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryCOSDataRule.Contents` is not array type"));

        const rapidjson::Value &tmpValue = value["Contents"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DspaDiscoveryDataContent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_contents.push_back(item);
        }
        m_contentsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspaDiscoveryCOSDataRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_contentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Contents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_contents.begin(); itr != m_contents.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DspaDiscoveryCOSDataRule::GetOperator() const
{
    return m_operator;
}

void DspaDiscoveryCOSDataRule::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DspaDiscoveryCOSDataRule::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<DspaDiscoveryDataContent> DspaDiscoveryCOSDataRule::GetContents() const
{
    return m_contents;
}

void DspaDiscoveryCOSDataRule::SetContents(const vector<DspaDiscoveryDataContent>& _contents)
{
    m_contents = _contents;
    m_contentsHasBeenSet = true;
}

bool DspaDiscoveryCOSDataRule::ContentsHasBeenSet() const
{
    return m_contentsHasBeenSet;
}

