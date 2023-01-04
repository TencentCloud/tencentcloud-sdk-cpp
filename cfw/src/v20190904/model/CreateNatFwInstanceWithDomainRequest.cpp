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

#include <tencentcloud/cfw/v20190904/model/CreateNatFwInstanceWithDomainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

CreateNatFwInstanceWithDomainRequest::CreateNatFwInstanceWithDomainRequest() :
    m_nameHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_newModeItemsHasBeenSet(false),
    m_natGwListHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_zoneBakHasBeenSet(false),
    m_crossAZoneHasBeenSet(false),
    m_isCreateDomainHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_fwCidrInfoHasBeenSet(false)
{
}

string CreateNatFwInstanceWithDomainRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_width, allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mode, allocator);
    }

    if (m_newModeItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewModeItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_newModeItems.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_natGwListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatGwList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_natGwList.begin(); itr != m_natGwList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneBakHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneBak";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneBak.c_str(), allocator).Move(), allocator);
    }

    if (m_crossAZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossAZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_crossAZone, allocator);
    }

    if (m_isCreateDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCreateDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isCreateDomain, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_fwCidrInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwCidrInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fwCidrInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateNatFwInstanceWithDomainRequest::GetName() const
{
    return m_name;
}

void CreateNatFwInstanceWithDomainRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateNatFwInstanceWithDomainRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t CreateNatFwInstanceWithDomainRequest::GetWidth() const
{
    return m_width;
}

void CreateNatFwInstanceWithDomainRequest::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool CreateNatFwInstanceWithDomainRequest::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t CreateNatFwInstanceWithDomainRequest::GetMode() const
{
    return m_mode;
}

void CreateNatFwInstanceWithDomainRequest::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool CreateNatFwInstanceWithDomainRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

NewModeItems CreateNatFwInstanceWithDomainRequest::GetNewModeItems() const
{
    return m_newModeItems;
}

void CreateNatFwInstanceWithDomainRequest::SetNewModeItems(const NewModeItems& _newModeItems)
{
    m_newModeItems = _newModeItems;
    m_newModeItemsHasBeenSet = true;
}

bool CreateNatFwInstanceWithDomainRequest::NewModeItemsHasBeenSet() const
{
    return m_newModeItemsHasBeenSet;
}

vector<string> CreateNatFwInstanceWithDomainRequest::GetNatGwList() const
{
    return m_natGwList;
}

void CreateNatFwInstanceWithDomainRequest::SetNatGwList(const vector<string>& _natGwList)
{
    m_natGwList = _natGwList;
    m_natGwListHasBeenSet = true;
}

bool CreateNatFwInstanceWithDomainRequest::NatGwListHasBeenSet() const
{
    return m_natGwListHasBeenSet;
}

string CreateNatFwInstanceWithDomainRequest::GetZone() const
{
    return m_zone;
}

void CreateNatFwInstanceWithDomainRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateNatFwInstanceWithDomainRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CreateNatFwInstanceWithDomainRequest::GetZoneBak() const
{
    return m_zoneBak;
}

void CreateNatFwInstanceWithDomainRequest::SetZoneBak(const string& _zoneBak)
{
    m_zoneBak = _zoneBak;
    m_zoneBakHasBeenSet = true;
}

bool CreateNatFwInstanceWithDomainRequest::ZoneBakHasBeenSet() const
{
    return m_zoneBakHasBeenSet;
}

int64_t CreateNatFwInstanceWithDomainRequest::GetCrossAZone() const
{
    return m_crossAZone;
}

void CreateNatFwInstanceWithDomainRequest::SetCrossAZone(const int64_t& _crossAZone)
{
    m_crossAZone = _crossAZone;
    m_crossAZoneHasBeenSet = true;
}

bool CreateNatFwInstanceWithDomainRequest::CrossAZoneHasBeenSet() const
{
    return m_crossAZoneHasBeenSet;
}

int64_t CreateNatFwInstanceWithDomainRequest::GetIsCreateDomain() const
{
    return m_isCreateDomain;
}

void CreateNatFwInstanceWithDomainRequest::SetIsCreateDomain(const int64_t& _isCreateDomain)
{
    m_isCreateDomain = _isCreateDomain;
    m_isCreateDomainHasBeenSet = true;
}

bool CreateNatFwInstanceWithDomainRequest::IsCreateDomainHasBeenSet() const
{
    return m_isCreateDomainHasBeenSet;
}

string CreateNatFwInstanceWithDomainRequest::GetDomain() const
{
    return m_domain;
}

void CreateNatFwInstanceWithDomainRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreateNatFwInstanceWithDomainRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

FwCidrInfo CreateNatFwInstanceWithDomainRequest::GetFwCidrInfo() const
{
    return m_fwCidrInfo;
}

void CreateNatFwInstanceWithDomainRequest::SetFwCidrInfo(const FwCidrInfo& _fwCidrInfo)
{
    m_fwCidrInfo = _fwCidrInfo;
    m_fwCidrInfoHasBeenSet = true;
}

bool CreateNatFwInstanceWithDomainRequest::FwCidrInfoHasBeenSet() const
{
    return m_fwCidrInfoHasBeenSet;
}


