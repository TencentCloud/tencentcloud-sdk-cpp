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

#include <tencentcloud/ckafka/v20190819/model/CreateInstancePostData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

CreateInstancePostData::CreateInstancePostData() :
    m_flowIdHasBeenSet(false),
    m_dealNamesHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_dealNameInstanceIdMappingHasBeenSet(false)
{
}

CoreInternalOutcome CreateInstancePostData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstancePostData.FlowId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = value["FlowId"].GetInt64();
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("DealNames") && !value["DealNames"].IsNull())
    {
        if (!value["DealNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateInstancePostData.DealNames` is not array type"));

        const rapidjson::Value &tmpValue = value["DealNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dealNames.push_back((*itr).GetString());
        }
        m_dealNamesHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstancePostData.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("DealNameInstanceIdMapping") && !value["DealNameInstanceIdMapping"].IsNull())
    {
        if (!value["DealNameInstanceIdMapping"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateInstancePostData.DealNameInstanceIdMapping` is not array type"));

        const rapidjson::Value &tmpValue = value["DealNameInstanceIdMapping"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DealInstanceDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dealNameInstanceIdMapping.push_back(item);
        }
        m_dealNameInstanceIdMappingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateInstancePostData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowId, allocator);
    }

    if (m_dealNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dealNames.begin(); itr != m_dealNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dealNameInstanceIdMappingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealNameInstanceIdMapping";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dealNameInstanceIdMapping.begin(); itr != m_dealNameInstanceIdMapping.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t CreateInstancePostData::GetFlowId() const
{
    return m_flowId;
}

void CreateInstancePostData::SetFlowId(const int64_t& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool CreateInstancePostData::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

vector<string> CreateInstancePostData::GetDealNames() const
{
    return m_dealNames;
}

void CreateInstancePostData::SetDealNames(const vector<string>& _dealNames)
{
    m_dealNames = _dealNames;
    m_dealNamesHasBeenSet = true;
}

bool CreateInstancePostData::DealNamesHasBeenSet() const
{
    return m_dealNamesHasBeenSet;
}

string CreateInstancePostData::GetInstanceId() const
{
    return m_instanceId;
}

void CreateInstancePostData::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateInstancePostData::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<DealInstanceDTO> CreateInstancePostData::GetDealNameInstanceIdMapping() const
{
    return m_dealNameInstanceIdMapping;
}

void CreateInstancePostData::SetDealNameInstanceIdMapping(const vector<DealInstanceDTO>& _dealNameInstanceIdMapping)
{
    m_dealNameInstanceIdMapping = _dealNameInstanceIdMapping;
    m_dealNameInstanceIdMappingHasBeenSet = true;
}

bool CreateInstancePostData::DealNameInstanceIdMappingHasBeenSet() const
{
    return m_dealNameInstanceIdMappingHasBeenSet;
}

