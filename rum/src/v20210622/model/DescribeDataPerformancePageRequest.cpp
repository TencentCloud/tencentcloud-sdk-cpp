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

#include <tencentcloud/rum/v20210622/model/DescribeDataPerformancePageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeDataPerformancePageRequest::DescribeDataPerformancePageRequest() :
    m_iDHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_deviceHasBeenSet(false),
    m_versionNumHasBeenSet(false),
    m_extFirstHasBeenSet(false),
    m_extSecondHasBeenSet(false),
    m_extThirdHasBeenSet(false),
    m_isAbroadHasBeenSet(false),
    m_browserHasBeenSet(false),
    m_osHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_brandHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_costTypeHasBeenSet(false),
    m_envHasBeenSet(false),
    m_netStatusHasBeenSet(false),
    m_webVitalsHasBeenSet(false)
{
}

string DescribeDataPerformancePageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iD, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_ispHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isp.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_netType.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Device";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_device.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_versionNum.c_str(), allocator).Move(), allocator);
    }

    if (m_extFirstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtFirst";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extFirst.c_str(), allocator).Move(), allocator);
    }

    if (m_extSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtSecond";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extSecond.c_str(), allocator).Move(), allocator);
    }

    if (m_extThirdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtThird";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extThird.c_str(), allocator).Move(), allocator);
    }

    if (m_isAbroadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAbroad";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isAbroad.c_str(), allocator).Move(), allocator);
    }

    if (m_browserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Browser";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_browser.c_str(), allocator).Move(), allocator);
    }

    if (m_osHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Os";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_os.c_str(), allocator).Move(), allocator);
    }

    if (m_engineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Engine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engine.c_str(), allocator).Move(), allocator);
    }

    if (m_brandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brand";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_brand.c_str(), allocator).Move(), allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_from.c_str(), allocator).Move(), allocator);
    }

    if (m_costTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_costType.c_str(), allocator).Move(), allocator);
    }

    if (m_envHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Env";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_env.c_str(), allocator).Move(), allocator);
    }

    if (m_netStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_netStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_webVitalsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebVitals";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_webVitals, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeDataPerformancePageRequest::GetID() const
{
    return m_iD;
}

void DescribeDataPerformancePageRequest::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DescribeDataPerformancePageRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

int64_t DescribeDataPerformancePageRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeDataPerformancePageRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeDataPerformancePageRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeDataPerformancePageRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeDataPerformancePageRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeDataPerformancePageRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeDataPerformancePageRequest::GetType() const
{
    return m_type;
}

void DescribeDataPerformancePageRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeDataPerformancePageRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeDataPerformancePageRequest::GetLevel() const
{
    return m_level;
}

void DescribeDataPerformancePageRequest::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool DescribeDataPerformancePageRequest::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string DescribeDataPerformancePageRequest::GetIsp() const
{
    return m_isp;
}

void DescribeDataPerformancePageRequest::SetIsp(const string& _isp)
{
    m_isp = _isp;
    m_ispHasBeenSet = true;
}

bool DescribeDataPerformancePageRequest::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}

string DescribeDataPerformancePageRequest::GetArea() const
{
    return m_area;
}

void DescribeDataPerformancePageRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool DescribeDataPerformancePageRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string DescribeDataPerformancePageRequest::GetNetType() const
{
    return m_netType;
}

void DescribeDataPerformancePageRequest::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool DescribeDataPerformancePageRequest::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string DescribeDataPerformancePageRequest::GetPlatform() const
{
    return m_platform;
}

void DescribeDataPerformancePageRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DescribeDataPerformancePageRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DescribeDataPerformancePageRequest::GetDevice() const
{
    return m_device;
}

void DescribeDataPerformancePageRequest::SetDevice(const string& _device)
{
    m_device = _device;
    m_deviceHasBeenSet = true;
}

bool DescribeDataPerformancePageRequest::DeviceHasBeenSet() const
{
    return m_deviceHasBeenSet;
}

string DescribeDataPerformancePageRequest::GetVersionNum() const
{
    return m_versionNum;
}

void DescribeDataPerformancePageRequest::SetVersionNum(const string& _versionNum)
{
    m_versionNum = _versionNum;
    m_versionNumHasBeenSet = true;
}

bool DescribeDataPerformancePageRequest::VersionNumHasBeenSet() const
{
    return m_versionNumHasBeenSet;
}

string DescribeDataPerformancePageRequest::GetExtFirst() const
{
    return m_extFirst;
}

void DescribeDataPerformancePageRequest::SetExtFirst(const string& _extFirst)
{
    m_extFirst = _extFirst;
    m_extFirstHasBeenSet = true;
}

bool DescribeDataPerformancePageRequest::ExtFirstHasBeenSet() const
{
    return m_extFirstHasBeenSet;
}

string DescribeDataPerformancePageRequest::GetExtSecond() const
{
    return m_extSecond;
}

void DescribeDataPerformancePageRequest::SetExtSecond(const string& _extSecond)
{
    m_extSecond = _extSecond;
    m_extSecondHasBeenSet = true;
}

bool DescribeDataPerformancePageRequest::ExtSecondHasBeenSet() const
{
    return m_extSecondHasBeenSet;
}

string DescribeDataPerformancePageRequest::GetExtThird() const
{
    return m_extThird;
}

void DescribeDataPerformancePageRequest::SetExtThird(const string& _extThird)
{
    m_extThird = _extThird;
    m_extThirdHasBeenSet = true;
}

bool DescribeDataPerformancePageRequest::ExtThirdHasBeenSet() const
{
    return m_extThirdHasBeenSet;
}

string DescribeDataPerformancePageRequest::GetIsAbroad() const
{
    return m_isAbroad;
}

void DescribeDataPerformancePageRequest::SetIsAbroad(const string& _isAbroad)
{
    m_isAbroad = _isAbroad;
    m_isAbroadHasBeenSet = true;
}

bool DescribeDataPerformancePageRequest::IsAbroadHasBeenSet() const
{
    return m_isAbroadHasBeenSet;
}

string DescribeDataPerformancePageRequest::GetBrowser() const
{
    return m_browser;
}

void DescribeDataPerformancePageRequest::SetBrowser(const string& _browser)
{
    m_browser = _browser;
    m_browserHasBeenSet = true;
}

bool DescribeDataPerformancePageRequest::BrowserHasBeenSet() const
{
    return m_browserHasBeenSet;
}

string DescribeDataPerformancePageRequest::GetOs() const
{
    return m_os;
}

void DescribeDataPerformancePageRequest::SetOs(const string& _os)
{
    m_os = _os;
    m_osHasBeenSet = true;
}

bool DescribeDataPerformancePageRequest::OsHasBeenSet() const
{
    return m_osHasBeenSet;
}

string DescribeDataPerformancePageRequest::GetEngine() const
{
    return m_engine;
}

void DescribeDataPerformancePageRequest::SetEngine(const string& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool DescribeDataPerformancePageRequest::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

string DescribeDataPerformancePageRequest::GetBrand() const
{
    return m_brand;
}

void DescribeDataPerformancePageRequest::SetBrand(const string& _brand)
{
    m_brand = _brand;
    m_brandHasBeenSet = true;
}

bool DescribeDataPerformancePageRequest::BrandHasBeenSet() const
{
    return m_brandHasBeenSet;
}

string DescribeDataPerformancePageRequest::GetFrom() const
{
    return m_from;
}

void DescribeDataPerformancePageRequest::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool DescribeDataPerformancePageRequest::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

string DescribeDataPerformancePageRequest::GetCostType() const
{
    return m_costType;
}

void DescribeDataPerformancePageRequest::SetCostType(const string& _costType)
{
    m_costType = _costType;
    m_costTypeHasBeenSet = true;
}

bool DescribeDataPerformancePageRequest::CostTypeHasBeenSet() const
{
    return m_costTypeHasBeenSet;
}

string DescribeDataPerformancePageRequest::GetEnv() const
{
    return m_env;
}

void DescribeDataPerformancePageRequest::SetEnv(const string& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool DescribeDataPerformancePageRequest::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

string DescribeDataPerformancePageRequest::GetNetStatus() const
{
    return m_netStatus;
}

void DescribeDataPerformancePageRequest::SetNetStatus(const string& _netStatus)
{
    m_netStatus = _netStatus;
    m_netStatusHasBeenSet = true;
}

bool DescribeDataPerformancePageRequest::NetStatusHasBeenSet() const
{
    return m_netStatusHasBeenSet;
}

bool DescribeDataPerformancePageRequest::GetWebVitals() const
{
    return m_webVitals;
}

void DescribeDataPerformancePageRequest::SetWebVitals(const bool& _webVitals)
{
    m_webVitals = _webVitals;
    m_webVitalsHasBeenSet = true;
}

bool DescribeDataPerformancePageRequest::WebVitalsHasBeenSet() const
{
    return m_webVitalsHasBeenSet;
}


