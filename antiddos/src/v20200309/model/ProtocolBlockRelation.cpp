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

#include <tencentcloud/antiddos/v20200309/model/ProtocolBlockRelation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

ProtocolBlockRelation::ProtocolBlockRelation() :
    m_protocolBlockConfigHasBeenSet(false),
    m_instanceDetailListHasBeenSet(false)
{
}

CoreInternalOutcome ProtocolBlockRelation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProtocolBlockConfig") && !value["ProtocolBlockConfig"].IsNull())
    {
        if (!value["ProtocolBlockConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProtocolBlockRelation.ProtocolBlockConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_protocolBlockConfig.Deserialize(value["ProtocolBlockConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_protocolBlockConfigHasBeenSet = true;
    }

    if (value.HasMember("InstanceDetailList") && !value["InstanceDetailList"].IsNull())
    {
        if (!value["InstanceDetailList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProtocolBlockRelation.InstanceDetailList` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceDetailList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceRelation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceDetailList.push_back(item);
        }
        m_instanceDetailListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProtocolBlockRelation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protocolBlockConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolBlockConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_protocolBlockConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceDetailListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDetailList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceDetailList.begin(); itr != m_instanceDetailList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


ProtocolBlockConfig ProtocolBlockRelation::GetProtocolBlockConfig() const
{
    return m_protocolBlockConfig;
}

void ProtocolBlockRelation::SetProtocolBlockConfig(const ProtocolBlockConfig& _protocolBlockConfig)
{
    m_protocolBlockConfig = _protocolBlockConfig;
    m_protocolBlockConfigHasBeenSet = true;
}

bool ProtocolBlockRelation::ProtocolBlockConfigHasBeenSet() const
{
    return m_protocolBlockConfigHasBeenSet;
}

vector<InstanceRelation> ProtocolBlockRelation::GetInstanceDetailList() const
{
    return m_instanceDetailList;
}

void ProtocolBlockRelation::SetInstanceDetailList(const vector<InstanceRelation>& _instanceDetailList)
{
    m_instanceDetailList = _instanceDetailList;
    m_instanceDetailListHasBeenSet = true;
}

bool ProtocolBlockRelation::InstanceDetailListHasBeenSet() const
{
    return m_instanceDetailListHasBeenSet;
}

