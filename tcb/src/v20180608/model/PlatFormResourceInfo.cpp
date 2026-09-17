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

#include <tencentcloud/tcb/v20180608/model/PlatFormResourceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

PlatFormResourceInfo::PlatFormResourceInfo() :
    m_resTypeHasBeenSet(false),
    m_resNameHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome PlatFormResourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResType") && !value["ResType"].IsNull())
    {
        if (!value["ResType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatFormResourceInfo.ResType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resType = string(value["ResType"].GetString());
        m_resTypeHasBeenSet = true;
    }

    if (value.HasMember("ResName") && !value["ResName"].IsNull())
    {
        if (!value["ResName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatFormResourceInfo.ResName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resName = string(value["ResName"].GetString());
        m_resNameHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatFormResourceInfo.Detail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detail = string(value["Detail"].GetString());
        m_detailHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlatFormResourceInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PlatformId") && !value["PlatformId"].IsNull())
    {
        if (!value["PlatformId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlatFormResourceInfo.PlatformId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_platformId = value["PlatformId"].GetUint64();
        m_platformIdHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlatFormResourceInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlatFormResourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resType.c_str(), allocator).Move(), allocator);
    }

    if (m_resNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resName.c_str(), allocator).Move(), allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detail.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_platformId, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

}


string PlatFormResourceInfo::GetResType() const
{
    return m_resType;
}

void PlatFormResourceInfo::SetResType(const string& _resType)
{
    m_resType = _resType;
    m_resTypeHasBeenSet = true;
}

bool PlatFormResourceInfo::ResTypeHasBeenSet() const
{
    return m_resTypeHasBeenSet;
}

string PlatFormResourceInfo::GetResName() const
{
    return m_resName;
}

void PlatFormResourceInfo::SetResName(const string& _resName)
{
    m_resName = _resName;
    m_resNameHasBeenSet = true;
}

bool PlatFormResourceInfo::ResNameHasBeenSet() const
{
    return m_resNameHasBeenSet;
}

string PlatFormResourceInfo::GetDetail() const
{
    return m_detail;
}

void PlatFormResourceInfo::SetDetail(const string& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool PlatFormResourceInfo::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

uint64_t PlatFormResourceInfo::GetStatus() const
{
    return m_status;
}

void PlatFormResourceInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PlatFormResourceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t PlatFormResourceInfo::GetPlatformId() const
{
    return m_platformId;
}

void PlatFormResourceInfo::SetPlatformId(const uint64_t& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool PlatFormResourceInfo::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

uint64_t PlatFormResourceInfo::GetId() const
{
    return m_id;
}

void PlatFormResourceInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool PlatFormResourceInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

