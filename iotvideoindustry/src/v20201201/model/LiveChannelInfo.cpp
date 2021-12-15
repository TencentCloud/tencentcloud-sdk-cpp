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

#include <tencentcloud/iotvideoindustry/v20201201/model/LiveChannelInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

LiveChannelInfo::LiveChannelInfo() :
    m_liveChannelIdHasBeenSet(false),
    m_liveChannelNameHasBeenSet(false),
    m_liveChannelTypeHasBeenSet(false),
    m_liveStatusHasBeenSet(false),
    m_pushStreamAddressHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome LiveChannelInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LiveChannelId") && !value["LiveChannelId"].IsNull())
    {
        if (!value["LiveChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveChannelInfo.LiveChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_liveChannelId = string(value["LiveChannelId"].GetString());
        m_liveChannelIdHasBeenSet = true;
    }

    if (value.HasMember("LiveChannelName") && !value["LiveChannelName"].IsNull())
    {
        if (!value["LiveChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveChannelInfo.LiveChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_liveChannelName = string(value["LiveChannelName"].GetString());
        m_liveChannelNameHasBeenSet = true;
    }

    if (value.HasMember("LiveChannelType") && !value["LiveChannelType"].IsNull())
    {
        if (!value["LiveChannelType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveChannelInfo.LiveChannelType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_liveChannelType = value["LiveChannelType"].GetInt64();
        m_liveChannelTypeHasBeenSet = true;
    }

    if (value.HasMember("LiveStatus") && !value["LiveStatus"].IsNull())
    {
        if (!value["LiveStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveChannelInfo.LiveStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_liveStatus = value["LiveStatus"].GetInt64();
        m_liveStatusHasBeenSet = true;
    }

    if (value.HasMember("PushStreamAddress") && !value["PushStreamAddress"].IsNull())
    {
        if (!value["PushStreamAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveChannelInfo.PushStreamAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushStreamAddress = string(value["PushStreamAddress"].GetString());
        m_pushStreamAddressHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveChannelInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveChannelInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveChannelInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_liveChannelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_liveChannelId.c_str(), allocator).Move(), allocator);
    }

    if (m_liveChannelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_liveChannelName.c_str(), allocator).Move(), allocator);
    }

    if (m_liveChannelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveChannelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_liveChannelType, allocator);
    }

    if (m_liveStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_liveStatus, allocator);
    }

    if (m_pushStreamAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushStreamAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushStreamAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string LiveChannelInfo::GetLiveChannelId() const
{
    return m_liveChannelId;
}

void LiveChannelInfo::SetLiveChannelId(const string& _liveChannelId)
{
    m_liveChannelId = _liveChannelId;
    m_liveChannelIdHasBeenSet = true;
}

bool LiveChannelInfo::LiveChannelIdHasBeenSet() const
{
    return m_liveChannelIdHasBeenSet;
}

string LiveChannelInfo::GetLiveChannelName() const
{
    return m_liveChannelName;
}

void LiveChannelInfo::SetLiveChannelName(const string& _liveChannelName)
{
    m_liveChannelName = _liveChannelName;
    m_liveChannelNameHasBeenSet = true;
}

bool LiveChannelInfo::LiveChannelNameHasBeenSet() const
{
    return m_liveChannelNameHasBeenSet;
}

int64_t LiveChannelInfo::GetLiveChannelType() const
{
    return m_liveChannelType;
}

void LiveChannelInfo::SetLiveChannelType(const int64_t& _liveChannelType)
{
    m_liveChannelType = _liveChannelType;
    m_liveChannelTypeHasBeenSet = true;
}

bool LiveChannelInfo::LiveChannelTypeHasBeenSet() const
{
    return m_liveChannelTypeHasBeenSet;
}

int64_t LiveChannelInfo::GetLiveStatus() const
{
    return m_liveStatus;
}

void LiveChannelInfo::SetLiveStatus(const int64_t& _liveStatus)
{
    m_liveStatus = _liveStatus;
    m_liveStatusHasBeenSet = true;
}

bool LiveChannelInfo::LiveStatusHasBeenSet() const
{
    return m_liveStatusHasBeenSet;
}

string LiveChannelInfo::GetPushStreamAddress() const
{
    return m_pushStreamAddress;
}

void LiveChannelInfo::SetPushStreamAddress(const string& _pushStreamAddress)
{
    m_pushStreamAddress = _pushStreamAddress;
    m_pushStreamAddressHasBeenSet = true;
}

bool LiveChannelInfo::PushStreamAddressHasBeenSet() const
{
    return m_pushStreamAddressHasBeenSet;
}

string LiveChannelInfo::GetCreateTime() const
{
    return m_createTime;
}

void LiveChannelInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LiveChannelInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string LiveChannelInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void LiveChannelInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool LiveChannelInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

