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

#include <tencentcloud/tsf/v20180326/model/ContainerGroupObservabilityConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ContainerGroupObservabilityConfig::ContainerGroupObservabilityConfig() :
    m_businessLogConfigIdListHasBeenSet(false),
    m_businessLogDeliveryConfigIdListHasBeenSet(false)
{
}

CoreInternalOutcome ContainerGroupObservabilityConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BusinessLogConfigIdList") && !value["BusinessLogConfigIdList"].IsNull())
    {
        if (!value["BusinessLogConfigIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerGroupObservabilityConfig.BusinessLogConfigIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["BusinessLogConfigIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_businessLogConfigIdList.push_back((*itr).GetString());
        }
        m_businessLogConfigIdListHasBeenSet = true;
    }

    if (value.HasMember("BusinessLogDeliveryConfigIdList") && !value["BusinessLogDeliveryConfigIdList"].IsNull())
    {
        if (!value["BusinessLogDeliveryConfigIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerGroupObservabilityConfig.BusinessLogDeliveryConfigIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["BusinessLogDeliveryConfigIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_businessLogDeliveryConfigIdList.push_back((*itr).GetString());
        }
        m_businessLogDeliveryConfigIdListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerGroupObservabilityConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_businessLogConfigIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLogConfigIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_businessLogConfigIdList.begin(); itr != m_businessLogConfigIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_businessLogDeliveryConfigIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLogDeliveryConfigIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_businessLogDeliveryConfigIdList.begin(); itr != m_businessLogDeliveryConfigIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> ContainerGroupObservabilityConfig::GetBusinessLogConfigIdList() const
{
    return m_businessLogConfigIdList;
}

void ContainerGroupObservabilityConfig::SetBusinessLogConfigIdList(const vector<string>& _businessLogConfigIdList)
{
    m_businessLogConfigIdList = _businessLogConfigIdList;
    m_businessLogConfigIdListHasBeenSet = true;
}

bool ContainerGroupObservabilityConfig::BusinessLogConfigIdListHasBeenSet() const
{
    return m_businessLogConfigIdListHasBeenSet;
}

vector<string> ContainerGroupObservabilityConfig::GetBusinessLogDeliveryConfigIdList() const
{
    return m_businessLogDeliveryConfigIdList;
}

void ContainerGroupObservabilityConfig::SetBusinessLogDeliveryConfigIdList(const vector<string>& _businessLogDeliveryConfigIdList)
{
    m_businessLogDeliveryConfigIdList = _businessLogDeliveryConfigIdList;
    m_businessLogDeliveryConfigIdListHasBeenSet = true;
}

bool ContainerGroupObservabilityConfig::BusinessLogDeliveryConfigIdListHasBeenSet() const
{
    return m_businessLogDeliveryConfigIdListHasBeenSet;
}

