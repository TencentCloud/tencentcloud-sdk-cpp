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

#include <tencentcloud/lke/v20231130/model/ChannelListInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ChannelListInfo::ChannelListInfo() :
    m_channelTypeHasBeenSet(false),
    m_channelStatusHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updatedUserHasBeenSet(false),
    m_yuanQiInfoHasBeenSet(false)
{
}

CoreInternalOutcome ChannelListInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelType") && !value["ChannelType"].IsNull())
    {
        if (!value["ChannelType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelListInfo.ChannelType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_channelType = value["ChannelType"].GetUint64();
        m_channelTypeHasBeenSet = true;
    }

    if (value.HasMember("ChannelStatus") && !value["ChannelStatus"].IsNull())
    {
        if (!value["ChannelStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelListInfo.ChannelStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_channelStatus = value["ChannelStatus"].GetUint64();
        m_channelStatusHasBeenSet = true;
    }

    if (value.HasMember("ChannelName") && !value["ChannelName"].IsNull())
    {
        if (!value["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelListInfo.ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(value["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }

    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelListInfo.ChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = string(value["ChannelId"].GetString());
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelListInfo.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelListInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelListInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedUser") && !value["UpdatedUser"].IsNull())
    {
        if (!value["UpdatedUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelListInfo.UpdatedUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedUser = string(value["UpdatedUser"].GetString());
        m_updatedUserHasBeenSet = true;
    }

    if (value.HasMember("YuanQiInfo") && !value["YuanQiInfo"].IsNull())
    {
        if (!value["YuanQiInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelListInfo.YuanQiInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_yuanQiInfo.Deserialize(value["YuanQiInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_yuanQiInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChannelListInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelType, allocator);
    }

    if (m_channelStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelStatus, allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedUser.c_str(), allocator).Move(), allocator);
    }

    if (m_yuanQiInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YuanQiInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_yuanQiInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t ChannelListInfo::GetChannelType() const
{
    return m_channelType;
}

void ChannelListInfo::SetChannelType(const uint64_t& _channelType)
{
    m_channelType = _channelType;
    m_channelTypeHasBeenSet = true;
}

bool ChannelListInfo::ChannelTypeHasBeenSet() const
{
    return m_channelTypeHasBeenSet;
}

uint64_t ChannelListInfo::GetChannelStatus() const
{
    return m_channelStatus;
}

void ChannelListInfo::SetChannelStatus(const uint64_t& _channelStatus)
{
    m_channelStatus = _channelStatus;
    m_channelStatusHasBeenSet = true;
}

bool ChannelListInfo::ChannelStatusHasBeenSet() const
{
    return m_channelStatusHasBeenSet;
}

string ChannelListInfo::GetChannelName() const
{
    return m_channelName;
}

void ChannelListInfo::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool ChannelListInfo::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string ChannelListInfo::GetChannelId() const
{
    return m_channelId;
}

void ChannelListInfo::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool ChannelListInfo::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string ChannelListInfo::GetComment() const
{
    return m_comment;
}

void ChannelListInfo::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ChannelListInfo::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string ChannelListInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void ChannelListInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ChannelListInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ChannelListInfo::GetCreateTime() const
{
    return m_createTime;
}

void ChannelListInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ChannelListInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ChannelListInfo::GetUpdatedUser() const
{
    return m_updatedUser;
}

void ChannelListInfo::SetUpdatedUser(const string& _updatedUser)
{
    m_updatedUser = _updatedUser;
    m_updatedUserHasBeenSet = true;
}

bool ChannelListInfo::UpdatedUserHasBeenSet() const
{
    return m_updatedUserHasBeenSet;
}

YuanQi ChannelListInfo::GetYuanQiInfo() const
{
    return m_yuanQiInfo;
}

void ChannelListInfo::SetYuanQiInfo(const YuanQi& _yuanQiInfo)
{
    m_yuanQiInfo = _yuanQiInfo;
    m_yuanQiInfoHasBeenSet = true;
}

bool ChannelListInfo::YuanQiInfoHasBeenSet() const
{
    return m_yuanQiInfoHasBeenSet;
}

