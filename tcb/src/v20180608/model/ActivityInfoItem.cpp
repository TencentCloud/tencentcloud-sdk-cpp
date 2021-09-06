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

#include <tencentcloud/tcb/v20180608/model/ActivityInfoItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

ActivityInfoItem::ActivityInfoItem() :
    m_activityIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_tagHasBeenSet(false)
{
}

CoreInternalOutcome ActivityInfoItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActivityId") && !value["ActivityId"].IsNull())
    {
        if (!value["ActivityId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityInfoItem.ActivityId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activityId = value["ActivityId"].GetInt64();
        m_activityIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityInfoItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityInfoItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityInfoItem.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityInfoItem.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityInfoItem.Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(value["Tag"].GetString());
        m_tagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ActivityInfoItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_activityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activityId, allocator);
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

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

}


int64_t ActivityInfoItem::GetActivityId() const
{
    return m_activityId;
}

void ActivityInfoItem::SetActivityId(const int64_t& _activityId)
{
    m_activityId = _activityId;
    m_activityIdHasBeenSet = true;
}

bool ActivityInfoItem::ActivityIdHasBeenSet() const
{
    return m_activityIdHasBeenSet;
}

string ActivityInfoItem::GetCreateTime() const
{
    return m_createTime;
}

void ActivityInfoItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ActivityInfoItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ActivityInfoItem::GetUpdateTime() const
{
    return m_updateTime;
}

void ActivityInfoItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ActivityInfoItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ActivityInfoItem::GetStartTime() const
{
    return m_startTime;
}

void ActivityInfoItem::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ActivityInfoItem::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ActivityInfoItem::GetExpireTime() const
{
    return m_expireTime;
}

void ActivityInfoItem::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool ActivityInfoItem::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string ActivityInfoItem::GetTag() const
{
    return m_tag;
}

void ActivityInfoItem::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool ActivityInfoItem::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

