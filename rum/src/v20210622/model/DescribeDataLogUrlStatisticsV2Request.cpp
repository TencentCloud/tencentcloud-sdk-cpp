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

#include <tencentcloud/rum/v20210622/model/DescribeDataLogUrlStatisticsV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeDataLogUrlStatisticsV2Request::DescribeDataLogUrlStatisticsV2Request() :
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
    m_errorMsgHasBeenSet(false),
    m_extFourthHasBeenSet(false),
    m_extFifthHasBeenSet(false),
    m_extSixthHasBeenSet(false),
    m_extSeventhHasBeenSet(false),
    m_extEighthHasBeenSet(false),
    m_extNinthHasBeenSet(false),
    m_extTenthHasBeenSet(false),
    m_granularityHasBeenSet(false)
{
}

string DescribeDataLogUrlStatisticsV2Request::ToJsonString() const
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

    if (m_extFourthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtFourth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extFourth.c_str(), allocator).Move(), allocator);
    }

    if (m_extFifthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtFifth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extFifth.c_str(), allocator).Move(), allocator);
    }

    if (m_extSixthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtSixth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extSixth.c_str(), allocator).Move(), allocator);
    }

    if (m_extSeventhHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtSeventh";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extSeventh.c_str(), allocator).Move(), allocator);
    }

    if (m_extEighthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtEighth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extEighth.c_str(), allocator).Move(), allocator);
    }

    if (m_extNinthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtNinth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extNinth.c_str(), allocator).Move(), allocator);
    }

    if (m_extTenthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtTenth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extTenth.c_str(), allocator).Move(), allocator);
    }

    if (m_granularityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Granularity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_granularity.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeDataLogUrlStatisticsV2Request::GetStartTime() const
{
    return m_startTime;
}

void DescribeDataLogUrlStatisticsV2Request::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetType() const
{
    return m_type;
}

void DescribeDataLogUrlStatisticsV2Request::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t DescribeDataLogUrlStatisticsV2Request::GetEndTime() const
{
    return m_endTime;
}

void DescribeDataLogUrlStatisticsV2Request::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeDataLogUrlStatisticsV2Request::GetID() const
{
    return m_iD;
}

void DescribeDataLogUrlStatisticsV2Request::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetExtSecond() const
{
    return m_extSecond;
}

void DescribeDataLogUrlStatisticsV2Request::SetExtSecond(const string& _extSecond)
{
    m_extSecond = _extSecond;
    m_extSecondHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::ExtSecondHasBeenSet() const
{
    return m_extSecondHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetEngine() const
{
    return m_engine;
}

void DescribeDataLogUrlStatisticsV2Request::SetEngine(const string& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetIsp() const
{
    return m_isp;
}

void DescribeDataLogUrlStatisticsV2Request::SetIsp(const string& _isp)
{
    m_isp = _isp;
    m_ispHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetFrom() const
{
    return m_from;
}

void DescribeDataLogUrlStatisticsV2Request::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetLevel() const
{
    return m_level;
}

void DescribeDataLogUrlStatisticsV2Request::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetBrand() const
{
    return m_brand;
}

void DescribeDataLogUrlStatisticsV2Request::SetBrand(const string& _brand)
{
    m_brand = _brand;
    m_brandHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::BrandHasBeenSet() const
{
    return m_brandHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetArea() const
{
    return m_area;
}

void DescribeDataLogUrlStatisticsV2Request::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetVersionNum() const
{
    return m_versionNum;
}

void DescribeDataLogUrlStatisticsV2Request::SetVersionNum(const string& _versionNum)
{
    m_versionNum = _versionNum;
    m_versionNumHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::VersionNumHasBeenSet() const
{
    return m_versionNumHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetPlatform() const
{
    return m_platform;
}

void DescribeDataLogUrlStatisticsV2Request::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetExtThird() const
{
    return m_extThird;
}

void DescribeDataLogUrlStatisticsV2Request::SetExtThird(const string& _extThird)
{
    m_extThird = _extThird;
    m_extThirdHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::ExtThirdHasBeenSet() const
{
    return m_extThirdHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetExtFirst() const
{
    return m_extFirst;
}

void DescribeDataLogUrlStatisticsV2Request::SetExtFirst(const string& _extFirst)
{
    m_extFirst = _extFirst;
    m_extFirstHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::ExtFirstHasBeenSet() const
{
    return m_extFirstHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetNetType() const
{
    return m_netType;
}

void DescribeDataLogUrlStatisticsV2Request::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetDevice() const
{
    return m_device;
}

void DescribeDataLogUrlStatisticsV2Request::SetDevice(const string& _device)
{
    m_device = _device;
    m_deviceHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::DeviceHasBeenSet() const
{
    return m_deviceHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetIsAbroad() const
{
    return m_isAbroad;
}

void DescribeDataLogUrlStatisticsV2Request::SetIsAbroad(const string& _isAbroad)
{
    m_isAbroad = _isAbroad;
    m_isAbroadHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::IsAbroadHasBeenSet() const
{
    return m_isAbroadHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetOs() const
{
    return m_os;
}

void DescribeDataLogUrlStatisticsV2Request::SetOs(const string& _os)
{
    m_os = _os;
    m_osHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::OsHasBeenSet() const
{
    return m_osHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetBrowser() const
{
    return m_browser;
}

void DescribeDataLogUrlStatisticsV2Request::SetBrowser(const string& _browser)
{
    m_browser = _browser;
    m_browserHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::BrowserHasBeenSet() const
{
    return m_browserHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetEnv() const
{
    return m_env;
}

void DescribeDataLogUrlStatisticsV2Request::SetEnv(const string& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetErrorMsg() const
{
    return m_errorMsg;
}

void DescribeDataLogUrlStatisticsV2Request::SetErrorMsg(const string& _errorMsg)
{
    m_errorMsg = _errorMsg;
    m_errorMsgHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetExtFourth() const
{
    return m_extFourth;
}

void DescribeDataLogUrlStatisticsV2Request::SetExtFourth(const string& _extFourth)
{
    m_extFourth = _extFourth;
    m_extFourthHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::ExtFourthHasBeenSet() const
{
    return m_extFourthHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetExtFifth() const
{
    return m_extFifth;
}

void DescribeDataLogUrlStatisticsV2Request::SetExtFifth(const string& _extFifth)
{
    m_extFifth = _extFifth;
    m_extFifthHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::ExtFifthHasBeenSet() const
{
    return m_extFifthHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetExtSixth() const
{
    return m_extSixth;
}

void DescribeDataLogUrlStatisticsV2Request::SetExtSixth(const string& _extSixth)
{
    m_extSixth = _extSixth;
    m_extSixthHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::ExtSixthHasBeenSet() const
{
    return m_extSixthHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetExtSeventh() const
{
    return m_extSeventh;
}

void DescribeDataLogUrlStatisticsV2Request::SetExtSeventh(const string& _extSeventh)
{
    m_extSeventh = _extSeventh;
    m_extSeventhHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::ExtSeventhHasBeenSet() const
{
    return m_extSeventhHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetExtEighth() const
{
    return m_extEighth;
}

void DescribeDataLogUrlStatisticsV2Request::SetExtEighth(const string& _extEighth)
{
    m_extEighth = _extEighth;
    m_extEighthHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::ExtEighthHasBeenSet() const
{
    return m_extEighthHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetExtNinth() const
{
    return m_extNinth;
}

void DescribeDataLogUrlStatisticsV2Request::SetExtNinth(const string& _extNinth)
{
    m_extNinth = _extNinth;
    m_extNinthHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::ExtNinthHasBeenSet() const
{
    return m_extNinthHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetExtTenth() const
{
    return m_extTenth;
}

void DescribeDataLogUrlStatisticsV2Request::SetExtTenth(const string& _extTenth)
{
    m_extTenth = _extTenth;
    m_extTenthHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::ExtTenthHasBeenSet() const
{
    return m_extTenthHasBeenSet;
}

string DescribeDataLogUrlStatisticsV2Request::GetGranularity() const
{
    return m_granularity;
}

void DescribeDataLogUrlStatisticsV2Request::SetGranularity(const string& _granularity)
{
    m_granularity = _granularity;
    m_granularityHasBeenSet = true;
}

bool DescribeDataLogUrlStatisticsV2Request::GranularityHasBeenSet() const
{
    return m_granularityHasBeenSet;
}


