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

#include <tencentcloud/cws/v20180312/model/VulsTimeline.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cws::V20180312::Model;
using namespace std;

VulsTimeline::VulsTimeline() :
    m_idHasBeenSet(false),
    m_appidHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_pageCountHasBeenSet(false),
    m_siteNumHasBeenSet(false),
    m_impactSiteNumHasBeenSet(false),
    m_vulsHighNumHasBeenSet(false),
    m_vulsMiddleNumHasBeenSet(false),
    m_vulsLowNumHasBeenSet(false),
    m_vulsNoticeNumHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

CoreInternalOutcome VulsTimeline::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulsTimeline.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Appid") && !value["Appid"].IsNull())
    {
        if (!value["Appid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulsTimeline.Appid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appid = value["Appid"].GetUint64();
        m_appidHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulsTimeline.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("PageCount") && !value["PageCount"].IsNull())
    {
        if (!value["PageCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulsTimeline.PageCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageCount = value["PageCount"].GetUint64();
        m_pageCountHasBeenSet = true;
    }

    if (value.HasMember("SiteNum") && !value["SiteNum"].IsNull())
    {
        if (!value["SiteNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulsTimeline.SiteNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_siteNum = value["SiteNum"].GetUint64();
        m_siteNumHasBeenSet = true;
    }

    if (value.HasMember("ImpactSiteNum") && !value["ImpactSiteNum"].IsNull())
    {
        if (!value["ImpactSiteNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulsTimeline.ImpactSiteNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_impactSiteNum = value["ImpactSiteNum"].GetUint64();
        m_impactSiteNumHasBeenSet = true;
    }

    if (value.HasMember("VulsHighNum") && !value["VulsHighNum"].IsNull())
    {
        if (!value["VulsHighNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulsTimeline.VulsHighNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulsHighNum = value["VulsHighNum"].GetUint64();
        m_vulsHighNumHasBeenSet = true;
    }

    if (value.HasMember("VulsMiddleNum") && !value["VulsMiddleNum"].IsNull())
    {
        if (!value["VulsMiddleNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulsTimeline.VulsMiddleNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulsMiddleNum = value["VulsMiddleNum"].GetUint64();
        m_vulsMiddleNumHasBeenSet = true;
    }

    if (value.HasMember("VulsLowNum") && !value["VulsLowNum"].IsNull())
    {
        if (!value["VulsLowNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulsTimeline.VulsLowNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulsLowNum = value["VulsLowNum"].GetUint64();
        m_vulsLowNumHasBeenSet = true;
    }

    if (value.HasMember("VulsNoticeNum") && !value["VulsNoticeNum"].IsNull())
    {
        if (!value["VulsNoticeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulsTimeline.VulsNoticeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulsNoticeNum = value["VulsNoticeNum"].GetUint64();
        m_vulsNoticeNumHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulsTimeline.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulsTimeline.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulsTimeline::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_appidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Appid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appid, allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_pageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageCount, allocator);
    }

    if (m_siteNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SiteNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_siteNum, allocator);
    }

    if (m_impactSiteNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImpactSiteNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_impactSiteNum, allocator);
    }

    if (m_vulsHighNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulsHighNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulsHighNum, allocator);
    }

    if (m_vulsMiddleNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulsMiddleNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulsMiddleNum, allocator);
    }

    if (m_vulsLowNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulsLowNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulsLowNum, allocator);
    }

    if (m_vulsNoticeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulsNoticeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulsNoticeNum, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

}


uint64_t VulsTimeline::GetId() const
{
    return m_id;
}

void VulsTimeline::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool VulsTimeline::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t VulsTimeline::GetAppid() const
{
    return m_appid;
}

void VulsTimeline::SetAppid(const uint64_t& _appid)
{
    m_appid = _appid;
    m_appidHasBeenSet = true;
}

bool VulsTimeline::AppidHasBeenSet() const
{
    return m_appidHasBeenSet;
}

string VulsTimeline::GetDate() const
{
    return m_date;
}

void VulsTimeline::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool VulsTimeline::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

uint64_t VulsTimeline::GetPageCount() const
{
    return m_pageCount;
}

void VulsTimeline::SetPageCount(const uint64_t& _pageCount)
{
    m_pageCount = _pageCount;
    m_pageCountHasBeenSet = true;
}

bool VulsTimeline::PageCountHasBeenSet() const
{
    return m_pageCountHasBeenSet;
}

uint64_t VulsTimeline::GetSiteNum() const
{
    return m_siteNum;
}

void VulsTimeline::SetSiteNum(const uint64_t& _siteNum)
{
    m_siteNum = _siteNum;
    m_siteNumHasBeenSet = true;
}

bool VulsTimeline::SiteNumHasBeenSet() const
{
    return m_siteNumHasBeenSet;
}

uint64_t VulsTimeline::GetImpactSiteNum() const
{
    return m_impactSiteNum;
}

void VulsTimeline::SetImpactSiteNum(const uint64_t& _impactSiteNum)
{
    m_impactSiteNum = _impactSiteNum;
    m_impactSiteNumHasBeenSet = true;
}

bool VulsTimeline::ImpactSiteNumHasBeenSet() const
{
    return m_impactSiteNumHasBeenSet;
}

uint64_t VulsTimeline::GetVulsHighNum() const
{
    return m_vulsHighNum;
}

void VulsTimeline::SetVulsHighNum(const uint64_t& _vulsHighNum)
{
    m_vulsHighNum = _vulsHighNum;
    m_vulsHighNumHasBeenSet = true;
}

bool VulsTimeline::VulsHighNumHasBeenSet() const
{
    return m_vulsHighNumHasBeenSet;
}

uint64_t VulsTimeline::GetVulsMiddleNum() const
{
    return m_vulsMiddleNum;
}

void VulsTimeline::SetVulsMiddleNum(const uint64_t& _vulsMiddleNum)
{
    m_vulsMiddleNum = _vulsMiddleNum;
    m_vulsMiddleNumHasBeenSet = true;
}

bool VulsTimeline::VulsMiddleNumHasBeenSet() const
{
    return m_vulsMiddleNumHasBeenSet;
}

uint64_t VulsTimeline::GetVulsLowNum() const
{
    return m_vulsLowNum;
}

void VulsTimeline::SetVulsLowNum(const uint64_t& _vulsLowNum)
{
    m_vulsLowNum = _vulsLowNum;
    m_vulsLowNumHasBeenSet = true;
}

bool VulsTimeline::VulsLowNumHasBeenSet() const
{
    return m_vulsLowNumHasBeenSet;
}

uint64_t VulsTimeline::GetVulsNoticeNum() const
{
    return m_vulsNoticeNum;
}

void VulsTimeline::SetVulsNoticeNum(const uint64_t& _vulsNoticeNum)
{
    m_vulsNoticeNum = _vulsNoticeNum;
    m_vulsNoticeNumHasBeenSet = true;
}

bool VulsTimeline::VulsNoticeNumHasBeenSet() const
{
    return m_vulsNoticeNumHasBeenSet;
}

string VulsTimeline::GetCreatedAt() const
{
    return m_createdAt;
}

void VulsTimeline::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool VulsTimeline::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string VulsTimeline::GetUpdatedAt() const
{
    return m_updatedAt;
}

void VulsTimeline::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool VulsTimeline::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

