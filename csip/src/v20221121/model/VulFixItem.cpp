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

#include <tencentcloud/csip/v20221121/model/VulFixItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

VulFixItem::VulFixItem() :
    m_instanceIdsHasBeenSet(false),
    m_vulIdHasBeenSet(false),
    m_kBIdHasBeenSet(false)
{
}

CoreInternalOutcome VulFixItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceIds") && !value["InstanceIds"].IsNull())
    {
        if (!value["InstanceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulFixItem.InstanceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceIds.push_back((*itr).GetString());
        }
        m_instanceIdsHasBeenSet = true;
    }

    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixItem.VulId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = value["VulId"].GetInt64();
        m_vulIdHasBeenSet = true;
    }

    if (value.HasMember("KBId") && !value["KBId"].IsNull())
    {
        if (!value["KBId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixItem.KBId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_kBId = value["KBId"].GetInt64();
        m_kBIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulFixItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulId, allocator);
    }

    if (m_kBIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KBId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kBId, allocator);
    }

}


vector<string> VulFixItem::GetInstanceIds() const
{
    return m_instanceIds;
}

void VulFixItem::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool VulFixItem::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

int64_t VulFixItem::GetVulId() const
{
    return m_vulId;
}

void VulFixItem::SetVulId(const int64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool VulFixItem::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

int64_t VulFixItem::GetKBId() const
{
    return m_kBId;
}

void VulFixItem::SetKBId(const int64_t& _kBId)
{
    m_kBId = _kBId;
    m_kBIdHasBeenSet = true;
}

bool VulFixItem::KBIdHasBeenSet() const
{
    return m_kBIdHasBeenSet;
}

