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

#include <tencentcloud/rum/v20210622/model/DescribeDataLogUrlStatisticsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeDataLogUrlStatisticsRequest::DescribeDataLogUrlStatisticsRequest() :
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
    m_envHasBeenSet(false),
    m_errorMsgHasBeenSet(false)
{
}

string DescribeDataLogUrlStatisticsRequest::ToJsonString() const
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

    if (m_envHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Env";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_env.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeDataLogUrlStatisticsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeDataLogUrlStatisticsRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeDataLogUrlStatisticsRequest::GetType() const
{
    return m_type;
}

void DescribeDataLogUrlStatisticsRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t DescribeDataLogUrlStatisticsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeDataLogUrlStatisticsRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeDataLogUrlStatisticsRequest::GetID() const
{
    return m_iD;
}

void DescribeDataLogUrlStatisticsRequest::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string DescribeDataLogUrlStatisticsRequest::GetExtSecond() const
{
    return m_extSecond;
}

void DescribeDataLogUrlStatisticsRequest::SetExtSecond(const string& _extSecond)
{
    m_extSecond = _extSecond;
    m_extSecondHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsRequest::ExtSecondHasBeenSet() const
{
    return m_extSecondHasBeenSet;
}

string DescribeDataLogUrlStatisticsRequest::GetEngine() const
{
    return m_engine;
}

void DescribeDataLogUrlStatisticsRequest::SetEngine(const string& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsRequest::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

string DescribeDataLogUrlStatisticsRequest::GetIsp() const
{
    return m_isp;
}

void DescribeDataLogUrlStatisticsRequest::SetIsp(const string& _isp)
{
    m_isp = _isp;
    m_ispHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsRequest::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}

string DescribeDataLogUrlStatisticsRequest::GetFrom() const
{
    return m_from;
}

void DescribeDataLogUrlStatisticsRequest::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsRequest::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

string DescribeDataLogUrlStatisticsRequest::GetLevel() const
{
    return m_level;
}

void DescribeDataLogUrlStatisticsRequest::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsRequest::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string DescribeDataLogUrlStatisticsRequest::GetBrand() const
{
    return m_brand;
}

void DescribeDataLogUrlStatisticsRequest::SetBrand(const string& _brand)
{
    m_brand = _brand;
    m_brandHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsRequest::BrandHasBeenSet() const
{
    return m_brandHasBeenSet;
}

string DescribeDataLogUrlStatisticsRequest::GetArea() const
{
    return m_area;
}

void DescribeDataLogUrlStatisticsRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string DescribeDataLogUrlStatisticsRequest::GetVersionNum() const
{
    return m_versionNum;
}

void DescribeDataLogUrlStatisticsRequest::SetVersionNum(const string& _versionNum)
{
    m_versionNum = _versionNum;
    m_versionNumHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsRequest::VersionNumHasBeenSet() const
{
    return m_versionNumHasBeenSet;
}

string DescribeDataLogUrlStatisticsRequest::GetPlatform() const
{
    return m_platform;
}

void DescribeDataLogUrlStatisticsRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DescribeDataLogUrlStatisticsRequest::GetExtThird() const
{
    return m_extThird;
}

void DescribeDataLogUrlStatisticsRequest::SetExtThird(const string& _extThird)
{
    m_extThird = _extThird;
    m_extThirdHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsRequest::ExtThirdHasBeenSet() const
{
    return m_extThirdHasBeenSet;
}

string DescribeDataLogUrlStatisticsRequest::GetExtFirst() const
{
    return m_extFirst;
}

void DescribeDataLogUrlStatisticsRequest::SetExtFirst(const string& _extFirst)
{
    m_extFirst = _extFirst;
    m_extFirstHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsRequest::ExtFirstHasBeenSet() const
{
    return m_extFirstHasBeenSet;
}

string DescribeDataLogUrlStatisticsRequest::GetNetType() const
{
    return m_netType;
}

void DescribeDataLogUrlStatisticsRequest::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsRequest::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string DescribeDataLogUrlStatisticsRequest::GetDevice() const
{
    return m_device;
}

void DescribeDataLogUrlStatisticsRequest::SetDevice(const string& _device)
{
    m_device = _device;
    m_deviceHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsRequest::DeviceHasBeenSet() const
{
    return m_deviceHasBeenSet;
}

string DescribeDataLogUrlStatisticsRequest::GetIsAbroad() const
{
    return m_isAbroad;
}

void DescribeDataLogUrlStatisticsRequest::SetIsAbroad(const string& _isAbroad)
{
    m_isAbroad = _isAbroad;
    m_isAbroadHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsRequest::IsAbroadHasBeenSet() const
{
    return m_isAbroadHasBeenSet;
}

string DescribeDataLogUrlStatisticsRequest::GetOs() const
{
    return m_os;
}

void DescribeDataLogUrlStatisticsRequest::SetOs(const string& _os)
{
    m_os = _os;
    m_osHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsRequest::OsHasBeenSet() const
{
    return m_osHasBeenSet;
}

string DescribeDataLogUrlStatisticsRequest::GetBrowser() const
{
    return m_browser;
}

void DescribeDataLogUrlStatisticsRequest::SetBrowser(const string& _browser)
{
    m_browser = _browser;
    m_browserHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsRequest::BrowserHasBeenSet() const
{
    return m_browserHasBeenSet;
}

string DescribeDataLogUrlStatisticsRequest::GetEnv() const
{
    return m_env;
}

void DescribeDataLogUrlStatisticsRequest::SetEnv(const string& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsRequest::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

string DescribeDataLogUrlStatisticsRequest::GetErrorMsg() const
{
    return m_errorMsg;
}

void DescribeDataLogUrlStatisticsRequest::SetErrorMsg(const string& _errorMsg)
{
    m_errorMsg = _errorMsg;
    m_errorMsgHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsRequest::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}


