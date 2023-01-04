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

#include <tencentcloud/cfw/v20190904/model/CreateNatFwInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

CreateNatFwInstanceRequest::CreateNatFwInstanceRequest() :
    m_nameHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_newModeItemsHasBeenSet(false),
    m_natGwListHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_zoneBakHasBeenSet(false),
    m_crossAZoneHasBeenSet(false),
    m_fwCidrInfoHasBeenSet(false)
{
}

string CreateNatFwInstanceRequest::ToJsonString() const
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


string CreateNatFwInstanceRequest::GetName() const
{
    return m_name;
}

void CreateNatFwInstanceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateNatFwInstanceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t CreateNatFwInstanceRequest::GetWidth() const
{
    return m_width;
}

void CreateNatFwInstanceRequest::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool CreateNatFwInstanceRequest::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t CreateNatFwInstanceRequest::GetMode() const
{
    return m_mode;
}

void CreateNatFwInstanceRequest::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool CreateNatFwInstanceRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

NewModeItems CreateNatFwInstanceRequest::GetNewModeItems() const
{
    return m_newModeItems;
}

void CreateNatFwInstanceRequest::SetNewModeItems(const NewModeItems& _newModeItems)
{
    m_newModeItems = _newModeItems;
    m_newModeItemsHasBeenSet = true;
}

bool CreateNatFwInstanceRequest::NewModeItemsHasBeenSet() const
{
    return m_newModeItemsHasBeenSet;
}

vector<string> CreateNatFwInstanceRequest::GetNatGwList() const
{
    return m_natGwList;
}

void CreateNatFwInstanceRequest::SetNatGwList(const vector<string>& _natGwList)
{
    m_natGwList = _natGwList;
    m_natGwListHasBeenSet = true;
}

bool CreateNatFwInstanceRequest::NatGwListHasBeenSet() const
{
    return m_natGwListHasBeenSet;
}

string CreateNatFwInstanceRequest::GetZone() const
{
    return m_zone;
}

void CreateNatFwInstanceRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateNatFwInstanceRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CreateNatFwInstanceRequest::GetZoneBak() const
{
    return m_zoneBak;
}

void CreateNatFwInstanceRequest::SetZoneBak(const string& _zoneBak)
{
    m_zoneBak = _zoneBak;
    m_zoneBakHasBeenSet = true;
}

bool CreateNatFwInstanceRequest::ZoneBakHasBeenSet() const
{
    return m_zoneBakHasBeenSet;
}

int64_t CreateNatFwInstanceRequest::GetCrossAZone() const
{
    return m_crossAZone;
}

void CreateNatFwInstanceRequest::SetCrossAZone(const int64_t& _crossAZone)
{
    m_crossAZone = _crossAZone;
    m_crossAZoneHasBeenSet = true;
}

bool CreateNatFwInstanceRequest::CrossAZoneHasBeenSet() const
{
    return m_crossAZoneHasBeenSet;
}

FwCidrInfo CreateNatFwInstanceRequest::GetFwCidrInfo() const
{
    return m_fwCidrInfo;
}

void CreateNatFwInstanceRequest::SetFwCidrInfo(const FwCidrInfo& _fwCidrInfo)
{
    m_fwCidrInfo = _fwCidrInfo;
    m_fwCidrInfoHasBeenSet = true;
}

bool CreateNatFwInstanceRequest::FwCidrInfoHasBeenSet() const
{
    return m_fwCidrInfoHasBeenSet;
}


