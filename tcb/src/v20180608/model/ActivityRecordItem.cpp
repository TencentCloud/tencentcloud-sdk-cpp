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

#include <tencentcloud/tcb/v20180608/model/ActivityRecordItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

ActivityRecordItem::ActivityRecordItem() :
    m_uinHasBeenSet(false),
    m_activityIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subStatusHasBeenSet(false)
{
}

CoreInternalOutcome ActivityRecordItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityRecordItem.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("ActivityId") && !value["ActivityId"].IsNull())
    {
        if (!value["ActivityId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityRecordItem.ActivityId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activityId = value["ActivityId"].GetInt64();
        m_activityIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityRecordItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SubStatus") && !value["SubStatus"].IsNull())
    {
        if (!value["SubStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivityRecordItem.SubStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subStatus = string(value["SubStatus"].GetString());
        m_subStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ActivityRecordItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_activityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activityId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_subStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subStatus.c_str(), allocator).Move(), allocator);
    }

}


string ActivityRecordItem::GetUin() const
{
    return m_uin;
}

void ActivityRecordItem::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool ActivityRecordItem::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t ActivityRecordItem::GetActivityId() const
{
    return m_activityId;
}

void ActivityRecordItem::SetActivityId(const int64_t& _activityId)
{
    m_activityId = _activityId;
    m_activityIdHasBeenSet = true;
}

bool ActivityRecordItem::ActivityIdHasBeenSet() const
{
    return m_activityIdHasBeenSet;
}

int64_t ActivityRecordItem::GetStatus() const
{
    return m_status;
}

void ActivityRecordItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ActivityRecordItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ActivityRecordItem::GetSubStatus() const
{
    return m_subStatus;
}

void ActivityRecordItem::SetSubStatus(const string& _subStatus)
{
    m_subStatus = _subStatus;
    m_subStatusHasBeenSet = true;
}

bool ActivityRecordItem::SubStatusHasBeenSet() const
{
    return m_subStatusHasBeenSet;
}

