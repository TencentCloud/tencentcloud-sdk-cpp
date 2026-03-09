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

#include <tencentcloud/cls/v20201016/model/NetworkApplicationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

NetworkApplicationInfo::NetworkApplicationInfo() :
    m_networkAppIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_subUinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome NetworkApplicationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NetworkAppId") && !value["NetworkAppId"].IsNull())
    {
        if (!value["NetworkAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkApplicationInfo.NetworkAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkAppId = string(value["NetworkAppId"].GetString());
        m_networkAppIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkApplicationInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkApplicationInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkApplicationInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("LogsetId") && !value["LogsetId"].IsNull())
    {
        if (!value["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkApplicationInfo.LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(value["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkApplicationInfo.Uin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetUint64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SubUin") && !value["SubUin"].IsNull())
    {
        if (!value["SubUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkApplicationInfo.SubUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = value["SubUin"].GetUint64();
        m_subUinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkApplicationInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkApplicationInfo.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkApplicationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_networkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uin, allocator);
    }

    if (m_subUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subUin, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string NetworkApplicationInfo::GetNetworkAppId() const
{
    return m_networkAppId;
}

void NetworkApplicationInfo::SetNetworkAppId(const string& _networkAppId)
{
    m_networkAppId = _networkAppId;
    m_networkAppIdHasBeenSet = true;
}

bool NetworkApplicationInfo::NetworkAppIdHasBeenSet() const
{
    return m_networkAppIdHasBeenSet;
}

string NetworkApplicationInfo::GetName() const
{
    return m_name;
}

void NetworkApplicationInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NetworkApplicationInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string NetworkApplicationInfo::GetRegion() const
{
    return m_region;
}

void NetworkApplicationInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool NetworkApplicationInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string NetworkApplicationInfo::GetTopicId() const
{
    return m_topicId;
}

void NetworkApplicationInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool NetworkApplicationInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string NetworkApplicationInfo::GetLogsetId() const
{
    return m_logsetId;
}

void NetworkApplicationInfo::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool NetworkApplicationInfo::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

uint64_t NetworkApplicationInfo::GetUin() const
{
    return m_uin;
}

void NetworkApplicationInfo::SetUin(const uint64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool NetworkApplicationInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

uint64_t NetworkApplicationInfo::GetSubUin() const
{
    return m_subUin;
}

void NetworkApplicationInfo::SetSubUin(const uint64_t& _subUin)
{
    m_subUin = _subUin;
    m_subUinHasBeenSet = true;
}

bool NetworkApplicationInfo::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

uint64_t NetworkApplicationInfo::GetCreateTime() const
{
    return m_createTime;
}

void NetworkApplicationInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool NetworkApplicationInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t NetworkApplicationInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void NetworkApplicationInfo::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool NetworkApplicationInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

