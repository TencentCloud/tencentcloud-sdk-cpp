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

#include <tencentcloud/antiddos/v20200309/model/PacketFilterRelation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

PacketFilterRelation::PacketFilterRelation() :
    m_packetFilterConfigHasBeenSet(false),
    m_instanceDetailListHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome PacketFilterRelation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PacketFilterConfig") && !value["PacketFilterConfig"].IsNull())
    {
        if (!value["PacketFilterConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterRelation.PacketFilterConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_packetFilterConfig.Deserialize(value["PacketFilterConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_packetFilterConfigHasBeenSet = true;
    }

    if (value.HasMember("InstanceDetailList") && !value["InstanceDetailList"].IsNull())
    {
        if (!value["InstanceDetailList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PacketFilterRelation.InstanceDetailList` is not array type"));

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

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterRelation.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PacketFilterRelation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_packetFilterConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PacketFilterConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_packetFilterConfig.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

}


PacketFilterConfig PacketFilterRelation::GetPacketFilterConfig() const
{
    return m_packetFilterConfig;
}

void PacketFilterRelation::SetPacketFilterConfig(const PacketFilterConfig& _packetFilterConfig)
{
    m_packetFilterConfig = _packetFilterConfig;
    m_packetFilterConfigHasBeenSet = true;
}

bool PacketFilterRelation::PacketFilterConfigHasBeenSet() const
{
    return m_packetFilterConfigHasBeenSet;
}

vector<InstanceRelation> PacketFilterRelation::GetInstanceDetailList() const
{
    return m_instanceDetailList;
}

void PacketFilterRelation::SetInstanceDetailList(const vector<InstanceRelation>& _instanceDetailList)
{
    m_instanceDetailList = _instanceDetailList;
    m_instanceDetailListHasBeenSet = true;
}

bool PacketFilterRelation::InstanceDetailListHasBeenSet() const
{
    return m_instanceDetailListHasBeenSet;
}

string PacketFilterRelation::GetModifyTime() const
{
    return m_modifyTime;
}

void PacketFilterRelation::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool PacketFilterRelation::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

