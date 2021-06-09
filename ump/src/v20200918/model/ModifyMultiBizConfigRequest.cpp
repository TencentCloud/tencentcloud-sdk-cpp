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

#include <tencentcloud/ump/v20200918/model/ModifyMultiBizConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ump::V20200918::Model;
using namespace std;

ModifyMultiBizConfigRequest::ModifyMultiBizConfigRequest() :
    m_groupCodeHasBeenSet(false),
    m_mallIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_cameraIdHasBeenSet(false),
    m_monitoringAreasHasBeenSet(false)
{
}

string ModifyMultiBizConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupCode.c_str(), allocator).Move(), allocator);
    }

    if (m_mallIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MallId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mallId, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_cameraIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cameraId, allocator);
    }

    if (m_monitoringAreasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitoringAreas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_monitoringAreas.begin(); itr != m_monitoringAreas.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyMultiBizConfigRequest::GetGroupCode() const
{
    return m_groupCode;
}

void ModifyMultiBizConfigRequest::SetGroupCode(const string& _groupCode)
{
    m_groupCode = _groupCode;
    m_groupCodeHasBeenSet = true;
}

bool ModifyMultiBizConfigRequest::GroupCodeHasBeenSet() const
{
    return m_groupCodeHasBeenSet;
}

uint64_t ModifyMultiBizConfigRequest::GetMallId() const
{
    return m_mallId;
}

void ModifyMultiBizConfigRequest::SetMallId(const uint64_t& _mallId)
{
    m_mallId = _mallId;
    m_mallIdHasBeenSet = true;
}

bool ModifyMultiBizConfigRequest::MallIdHasBeenSet() const
{
    return m_mallIdHasBeenSet;
}

uint64_t ModifyMultiBizConfigRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyMultiBizConfigRequest::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyMultiBizConfigRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

uint64_t ModifyMultiBizConfigRequest::GetCameraId() const
{
    return m_cameraId;
}

void ModifyMultiBizConfigRequest::SetCameraId(const uint64_t& _cameraId)
{
    m_cameraId = _cameraId;
    m_cameraIdHasBeenSet = true;
}

bool ModifyMultiBizConfigRequest::CameraIdHasBeenSet() const
{
    return m_cameraIdHasBeenSet;
}

vector<Polygon> ModifyMultiBizConfigRequest::GetMonitoringAreas() const
{
    return m_monitoringAreas;
}

void ModifyMultiBizConfigRequest::SetMonitoringAreas(const vector<Polygon>& _monitoringAreas)
{
    m_monitoringAreas = _monitoringAreas;
    m_monitoringAreasHasBeenSet = true;
}

bool ModifyMultiBizConfigRequest::MonitoringAreasHasBeenSet() const
{
    return m_monitoringAreasHasBeenSet;
}


