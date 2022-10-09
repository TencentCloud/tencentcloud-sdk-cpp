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

#include <tencentcloud/rum/v20210622/model/DescribeDataFetchUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeDataFetchUrlRequest::DescribeDataFetchUrlRequest() :
    m_startTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_extSecondHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_brandHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_versionNumHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_extThirdHasBeenSet(false),
    m_extFirstHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_deviceHasBeenSet(false),
    m_isAbroadHasBeenSet(false),
    m_osHasBeenSet(false),
    m_browserHasBeenSet(false),
    m_costTypeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_envHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_retHasBeenSet(false),
    m_netStatusHasBeenSet(false)
{
}

string DescribeDataFetchUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iD, allocator);
    }

    if (m_extSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtSecond";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extSecond.c_str(), allocator).Move(), allocator);
    }

    if (m_engineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Engine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engine.c_str(), allocator).Move(), allocator);
    }

    if (m_ispHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isp.c_str(), allocator).Move(), allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_from.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_brandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brand";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_brand.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_versionNum.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_extThirdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtThird";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extThird.c_str(), allocator).Move(), allocator);
    }

    if (m_extFirstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtFirst";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extFirst.c_str(), allocator).Move(), allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_netType.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Device";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_device.c_str(), allocator).Move(), allocator);
    }

    if (m_isAbroadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAbroad";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isAbroad.c_str(), allocator).Move(), allocator);
    }

    if (m_osHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Os";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_os.c_str(), allocator).Move(), allocator);
    }

    if (m_browserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Browser";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_browser.c_str(), allocator).Move(), allocator);
    }

    if (m_costTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_costType.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_envHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Env";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_env.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_retHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ret";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ret.c_str(), allocator).Move(), allocator);
    }

    if (m_netStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_netStatus.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeDataFetchUrlRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeDataFetchUrlRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeDataFetchUrlRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeDataFetchUrlRequest::GetType() const
{
    return m_type;
}

void DescribeDataFetchUrlRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeDataFetchUrlRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t DescribeDataFetchUrlRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeDataFetchUrlRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeDataFetchUrlRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeDataFetchUrlRequest::GetID() const
{
    return m_iD;
}

void DescribeDataFetchUrlRequest::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DescribeDataFetchUrlRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string DescribeDataFetchUrlRequest::GetExtSecond() const
{
    return m_extSecond;
}

void DescribeDataFetchUrlRequest::SetExtSecond(const string& _extSecond)
{
    m_extSecond = _extSecond;
    m_extSecondHasBeenSet = true;
}

bool DescribeDataFetchUrlRequest::ExtSecondHasBeenSet() const
{
    return m_extSecondHasBeenSet;
}

string DescribeDataFetchUrlRequest::GetEngine() const
{
    return m_engine;
}

void DescribeDataFetchUrlRequest::SetEngine(const string& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool DescribeDataFetchUrlRequest::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

string DescribeDataFetchUrlRequest::GetIsp() const
{
    return m_isp;
}

void DescribeDataFetchUrlRequest::SetIsp(const string& _isp)
{
    m_isp = _isp;
    m_ispHasBeenSet = true;
}

bool DescribeDataFetchUrlRequest::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}

string DescribeDataFetchUrlRequest::GetFrom() const
{
    return m_from;
}

void DescribeDataFetchUrlRequest::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool DescribeDataFetchUrlRequest::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

string DescribeDataFetchUrlRequest::GetLevel() const
{
    return m_level;
}

void DescribeDataFetchUrlRequest::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool DescribeDataFetchUrlRequest::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string DescribeDataFetchUrlRequest::GetBrand() const
{
    return m_brand;
}

void DescribeDataFetchUrlRequest::SetBrand(const string& _brand)
{
    m_brand = _brand;
    m_brandHasBeenSet = true;
}

bool DescribeDataFetchUrlRequest::BrandHasBeenSet() const
{
    return m_brandHasBeenSet;
}

string DescribeDataFetchUrlRequest::GetArea() const
{
    return m_area;
}

void DescribeDataFetchUrlRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool DescribeDataFetchUrlRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string DescribeDataFetchUrlRequest::GetVersionNum() const
{
    return m_versionNum;
}

void DescribeDataFetchUrlRequest::SetVersionNum(const string& _versionNum)
{
    m_versionNum = _versionNum;
    m_versionNumHasBeenSet = true;
}

bool DescribeDataFetchUrlRequest::VersionNumHasBeenSet() const
{
    return m_versionNumHasBeenSet;
}

string DescribeDataFetchUrlRequest::GetPlatform() const
{
    return m_platform;
}

void DescribeDataFetchUrlRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DescribeDataFetchUrlRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DescribeDataFetchUrlRequest::GetExtThird() const
{
    return m_extThird;
}

void DescribeDataFetchUrlRequest::SetExtThird(const string& _extThird)
{
    m_extThird = _extThird;
    m_extThirdHasBeenSet = true;
}

bool DescribeDataFetchUrlRequest::ExtThirdHasBeenSet() const
{
    return m_extThirdHasBeenSet;
}

string DescribeDataFetchUrlRequest::GetExtFirst() const
{
    return m_extFirst;
}

void DescribeDataFetchUrlRequest::SetExtFirst(const string& _extFirst)
{
    m_extFirst = _extFirst;
    m_extFirstHasBeenSet = true;
}

bool DescribeDataFetchUrlRequest::ExtFirstHasBeenSet() const
{
    return m_extFirstHasBeenSet;
}

string DescribeDataFetchUrlRequest::GetNetType() const
{
    return m_netType;
}

void DescribeDataFetchUrlRequest::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool DescribeDataFetchUrlRequest::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string DescribeDataFetchUrlRequest::GetDevice() const
{
    return m_device;
}

void DescribeDataFetchUrlRequest::SetDevice(const string& _device)
{
    m_device = _device;
    m_deviceHasBeenSet = true;
}

bool DescribeDataFetchUrlRequest::DeviceHasBeenSet() const
{
    return m_deviceHasBeenSet;
}

string DescribeDataFetchUrlRequest::GetIsAbroad() const
{
    return m_isAbroad;
}

void DescribeDataFetchUrlRequest::SetIsAbroad(const string& _isAbroad)
{
    m_isAbroad = _isAbroad;
    m_isAbroadHasBeenSet = true;
}

bool DescribeDataFetchUrlRequest::IsAbroadHasBeenSet() const
{
    return m_isAbroadHasBeenSet;
}

string DescribeDataFetchUrlRequest::GetOs() const
{
    return m_os;
}

void DescribeDataFetchUrlRequest::SetOs(const string& _os)
{
    m_os = _os;
    m_osHasBeenSet = true;
}

bool DescribeDataFetchUrlRequest::OsHasBeenSet() const
{
    return m_osHasBeenSet;
}

string DescribeDataFetchUrlRequest::GetBrowser() const
{
    return m_browser;
}

void DescribeDataFetchUrlRequest::SetBrowser(const string& _browser)
{
    m_browser = _browser;
    m_browserHasBeenSet = true;
}

bool DescribeDataFetchUrlRequest::BrowserHasBeenSet() const
{
    return m_browserHasBeenSet;
}

string DescribeDataFetchUrlRequest::GetCostType() const
{
    return m_costType;
}

void DescribeDataFetchUrlRequest::SetCostType(const string& _costType)
{
    m_costType = _costType;
    m_costTypeHasBeenSet = true;
}

bool DescribeDataFetchUrlRequest::CostTypeHasBeenSet() const
{
    return m_costTypeHasBeenSet;
}

string DescribeDataFetchUrlRequest::GetUrl() const
{
    return m_url;
}

void DescribeDataFetchUrlRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool DescribeDataFetchUrlRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string DescribeDataFetchUrlRequest::GetEnv() const
{
    return m_env;
}

void DescribeDataFetchUrlRequest::SetEnv(const string& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool DescribeDataFetchUrlRequest::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

string DescribeDataFetchUrlRequest::GetStatus() const
{
    return m_status;
}

void DescribeDataFetchUrlRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeDataFetchUrlRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeDataFetchUrlRequest::GetRet() const
{
    return m_ret;
}

void DescribeDataFetchUrlRequest::SetRet(const string& _ret)
{
    m_ret = _ret;
    m_retHasBeenSet = true;
}

bool DescribeDataFetchUrlRequest::RetHasBeenSet() const
{
    return m_retHasBeenSet;
}

string DescribeDataFetchUrlRequest::GetNetStatus() const
{
    return m_netStatus;
}

void DescribeDataFetchUrlRequest::SetNetStatus(const string& _netStatus)
{
    m_netStatus = _netStatus;
    m_netStatusHasBeenSet = true;
}

bool DescribeDataFetchUrlRequest::NetStatusHasBeenSet() const
{
    return m_netStatusHasBeenSet;
}


