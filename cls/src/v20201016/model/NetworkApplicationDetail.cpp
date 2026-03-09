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

#include <tencentcloud/cls/v20201016/model/NetworkApplicationDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

NetworkApplicationDetail::NetworkApplicationDetail() :
    m_networkAppIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_subUinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome NetworkApplicationDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NetworkAppId") && !value["NetworkAppId"].IsNull())
    {
        if (!value["NetworkAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkApplicationDetail.NetworkAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkAppId = string(value["NetworkAppId"].GetString());
        m_networkAppIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkApplicationDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkApplicationDetail.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkApplicationDetail.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("LogsetId") && !value["LogsetId"].IsNull())
    {
        if (!value["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkApplicationDetail.LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(value["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkApplicationDetail.Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(value["Token"].GetString());
        m_tokenHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkApplicationDetail.Uin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetUint64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SubUin") && !value["SubUin"].IsNull())
    {
        if (!value["SubUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkApplicationDetail.SubUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = value["SubUin"].GetUint64();
        m_subUinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkApplicationDetail.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkApplicationDetail.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkApplicationDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
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


string NetworkApplicationDetail::GetNetworkAppId() const
{
    return m_networkAppId;
}

void NetworkApplicationDetail::SetNetworkAppId(const string& _networkAppId)
{
    m_networkAppId = _networkAppId;
    m_networkAppIdHasBeenSet = true;
}

bool NetworkApplicationDetail::NetworkAppIdHasBeenSet() const
{
    return m_networkAppIdHasBeenSet;
}

string NetworkApplicationDetail::GetName() const
{
    return m_name;
}

void NetworkApplicationDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NetworkApplicationDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string NetworkApplicationDetail::GetRegion() const
{
    return m_region;
}

void NetworkApplicationDetail::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool NetworkApplicationDetail::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string NetworkApplicationDetail::GetTopicId() const
{
    return m_topicId;
}

void NetworkApplicationDetail::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool NetworkApplicationDetail::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string NetworkApplicationDetail::GetLogsetId() const
{
    return m_logsetId;
}

void NetworkApplicationDetail::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool NetworkApplicationDetail::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string NetworkApplicationDetail::GetToken() const
{
    return m_token;
}

void NetworkApplicationDetail::SetToken(const string& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool NetworkApplicationDetail::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

uint64_t NetworkApplicationDetail::GetUin() const
{
    return m_uin;
}

void NetworkApplicationDetail::SetUin(const uint64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool NetworkApplicationDetail::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

uint64_t NetworkApplicationDetail::GetSubUin() const
{
    return m_subUin;
}

void NetworkApplicationDetail::SetSubUin(const uint64_t& _subUin)
{
    m_subUin = _subUin;
    m_subUinHasBeenSet = true;
}

bool NetworkApplicationDetail::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

uint64_t NetworkApplicationDetail::GetCreateTime() const
{
    return m_createTime;
}

void NetworkApplicationDetail::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool NetworkApplicationDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t NetworkApplicationDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void NetworkApplicationDetail::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool NetworkApplicationDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

