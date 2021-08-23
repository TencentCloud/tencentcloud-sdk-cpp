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

#include <tencentcloud/wav/v20210129/model/LiveCodeDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

LiveCodeDetail::LiveCodeDetail() :
    m_liveCodeIdHasBeenSet(false),
    m_liveCodeNameHasBeenSet(false),
    m_shortChainAddressHasBeenSet(false),
    m_liveCodePreviewHasBeenSet(false),
    m_activityIdHasBeenSet(false),
    m_activityNameHasBeenSet(false),
    m_liveCodeStateHasBeenSet(false),
    m_liveCodeDataHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome LiveCodeDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LiveCodeId") && !value["LiveCodeId"].IsNull())
    {
        if (!value["LiveCodeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveCodeDetail.LiveCodeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_liveCodeId = value["LiveCodeId"].GetUint64();
        m_liveCodeIdHasBeenSet = true;
    }

    if (value.HasMember("LiveCodeName") && !value["LiveCodeName"].IsNull())
    {
        if (!value["LiveCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveCodeDetail.LiveCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_liveCodeName = string(value["LiveCodeName"].GetString());
        m_liveCodeNameHasBeenSet = true;
    }

    if (value.HasMember("ShortChainAddress") && !value["ShortChainAddress"].IsNull())
    {
        if (!value["ShortChainAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveCodeDetail.ShortChainAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shortChainAddress = string(value["ShortChainAddress"].GetString());
        m_shortChainAddressHasBeenSet = true;
    }

    if (value.HasMember("LiveCodePreview") && !value["LiveCodePreview"].IsNull())
    {
        if (!value["LiveCodePreview"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveCodeDetail.LiveCodePreview` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_liveCodePreview = string(value["LiveCodePreview"].GetString());
        m_liveCodePreviewHasBeenSet = true;
    }

    if (value.HasMember("ActivityId") && !value["ActivityId"].IsNull())
    {
        if (!value["ActivityId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveCodeDetail.ActivityId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activityId = value["ActivityId"].GetInt64();
        m_activityIdHasBeenSet = true;
    }

    if (value.HasMember("ActivityName") && !value["ActivityName"].IsNull())
    {
        if (!value["ActivityName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveCodeDetail.ActivityName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityName = string(value["ActivityName"].GetString());
        m_activityNameHasBeenSet = true;
    }

    if (value.HasMember("LiveCodeState") && !value["LiveCodeState"].IsNull())
    {
        if (!value["LiveCodeState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveCodeDetail.LiveCodeState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_liveCodeState = value["LiveCodeState"].GetInt64();
        m_liveCodeStateHasBeenSet = true;
    }

    if (value.HasMember("LiveCodeData") && !value["LiveCodeData"].IsNull())
    {
        if (!value["LiveCodeData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveCodeDetail.LiveCodeData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_liveCodeData = string(value["LiveCodeData"].GetString());
        m_liveCodeDataHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveCodeDetail.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveCodeDetail.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveCodeDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_liveCodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveCodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_liveCodeId, allocator);
    }

    if (m_liveCodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_liveCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_shortChainAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShortChainAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shortChainAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_liveCodePreviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveCodePreview";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_liveCodePreview.c_str(), allocator).Move(), allocator);
    }

    if (m_activityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activityId, allocator);
    }

    if (m_activityNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activityName.c_str(), allocator).Move(), allocator);
    }

    if (m_liveCodeStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveCodeState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_liveCodeState, allocator);
    }

    if (m_liveCodeDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveCodeData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_liveCodeData.c_str(), allocator).Move(), allocator);
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


uint64_t LiveCodeDetail::GetLiveCodeId() const
{
    return m_liveCodeId;
}

void LiveCodeDetail::SetLiveCodeId(const uint64_t& _liveCodeId)
{
    m_liveCodeId = _liveCodeId;
    m_liveCodeIdHasBeenSet = true;
}

bool LiveCodeDetail::LiveCodeIdHasBeenSet() const
{
    return m_liveCodeIdHasBeenSet;
}

string LiveCodeDetail::GetLiveCodeName() const
{
    return m_liveCodeName;
}

void LiveCodeDetail::SetLiveCodeName(const string& _liveCodeName)
{
    m_liveCodeName = _liveCodeName;
    m_liveCodeNameHasBeenSet = true;
}

bool LiveCodeDetail::LiveCodeNameHasBeenSet() const
{
    return m_liveCodeNameHasBeenSet;
}

string LiveCodeDetail::GetShortChainAddress() const
{
    return m_shortChainAddress;
}

void LiveCodeDetail::SetShortChainAddress(const string& _shortChainAddress)
{
    m_shortChainAddress = _shortChainAddress;
    m_shortChainAddressHasBeenSet = true;
}

bool LiveCodeDetail::ShortChainAddressHasBeenSet() const
{
    return m_shortChainAddressHasBeenSet;
}

string LiveCodeDetail::GetLiveCodePreview() const
{
    return m_liveCodePreview;
}

void LiveCodeDetail::SetLiveCodePreview(const string& _liveCodePreview)
{
    m_liveCodePreview = _liveCodePreview;
    m_liveCodePreviewHasBeenSet = true;
}

bool LiveCodeDetail::LiveCodePreviewHasBeenSet() const
{
    return m_liveCodePreviewHasBeenSet;
}

int64_t LiveCodeDetail::GetActivityId() const
{
    return m_activityId;
}

void LiveCodeDetail::SetActivityId(const int64_t& _activityId)
{
    m_activityId = _activityId;
    m_activityIdHasBeenSet = true;
}

bool LiveCodeDetail::ActivityIdHasBeenSet() const
{
    return m_activityIdHasBeenSet;
}

string LiveCodeDetail::GetActivityName() const
{
    return m_activityName;
}

void LiveCodeDetail::SetActivityName(const string& _activityName)
{
    m_activityName = _activityName;
    m_activityNameHasBeenSet = true;
}

bool LiveCodeDetail::ActivityNameHasBeenSet() const
{
    return m_activityNameHasBeenSet;
}

int64_t LiveCodeDetail::GetLiveCodeState() const
{
    return m_liveCodeState;
}

void LiveCodeDetail::SetLiveCodeState(const int64_t& _liveCodeState)
{
    m_liveCodeState = _liveCodeState;
    m_liveCodeStateHasBeenSet = true;
}

bool LiveCodeDetail::LiveCodeStateHasBeenSet() const
{
    return m_liveCodeStateHasBeenSet;
}

string LiveCodeDetail::GetLiveCodeData() const
{
    return m_liveCodeData;
}

void LiveCodeDetail::SetLiveCodeData(const string& _liveCodeData)
{
    m_liveCodeData = _liveCodeData;
    m_liveCodeDataHasBeenSet = true;
}

bool LiveCodeDetail::LiveCodeDataHasBeenSet() const
{
    return m_liveCodeDataHasBeenSet;
}

uint64_t LiveCodeDetail::GetCreateTime() const
{
    return m_createTime;
}

void LiveCodeDetail::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LiveCodeDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t LiveCodeDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void LiveCodeDetail::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool LiveCodeDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

