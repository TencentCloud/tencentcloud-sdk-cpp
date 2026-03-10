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

#include <tencentcloud/rum/v20210622/model/DescribeDataBridgeUrlV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeDataBridgeUrlV2Request::DescribeDataBridgeUrlV2Request() :
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
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_retHasBeenSet(false),
    m_netStatusHasBeenSet(false),
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

string DescribeDataBridgeUrlV2Request::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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


int64_t DescribeDataBridgeUrlV2Request::GetID() const
{
    return m_iD;
}

void DescribeDataBridgeUrlV2Request::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

int64_t DescribeDataBridgeUrlV2Request::GetStartTime() const
{
    return m_startTime;
}

void DescribeDataBridgeUrlV2Request::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeDataBridgeUrlV2Request::GetEndTime() const
{
    return m_endTime;
}

void DescribeDataBridgeUrlV2Request::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetType() const
{
    return m_type;
}

void DescribeDataBridgeUrlV2Request::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetLevel() const
{
    return m_level;
}

void DescribeDataBridgeUrlV2Request::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetIsp() const
{
    return m_isp;
}

void DescribeDataBridgeUrlV2Request::SetIsp(const string& _isp)
{
    m_isp = _isp;
    m_ispHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetArea() const
{
    return m_area;
}

void DescribeDataBridgeUrlV2Request::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetNetType() const
{
    return m_netType;
}

void DescribeDataBridgeUrlV2Request::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetPlatform() const
{
    return m_platform;
}

void DescribeDataBridgeUrlV2Request::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetDevice() const
{
    return m_device;
}

void DescribeDataBridgeUrlV2Request::SetDevice(const string& _device)
{
    m_device = _device;
    m_deviceHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::DeviceHasBeenSet() const
{
    return m_deviceHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetVersionNum() const
{
    return m_versionNum;
}

void DescribeDataBridgeUrlV2Request::SetVersionNum(const string& _versionNum)
{
    m_versionNum = _versionNum;
    m_versionNumHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::VersionNumHasBeenSet() const
{
    return m_versionNumHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetExtFirst() const
{
    return m_extFirst;
}

void DescribeDataBridgeUrlV2Request::SetExtFirst(const string& _extFirst)
{
    m_extFirst = _extFirst;
    m_extFirstHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::ExtFirstHasBeenSet() const
{
    return m_extFirstHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetExtSecond() const
{
    return m_extSecond;
}

void DescribeDataBridgeUrlV2Request::SetExtSecond(const string& _extSecond)
{
    m_extSecond = _extSecond;
    m_extSecondHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::ExtSecondHasBeenSet() const
{
    return m_extSecondHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetExtThird() const
{
    return m_extThird;
}

void DescribeDataBridgeUrlV2Request::SetExtThird(const string& _extThird)
{
    m_extThird = _extThird;
    m_extThirdHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::ExtThirdHasBeenSet() const
{
    return m_extThirdHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetIsAbroad() const
{
    return m_isAbroad;
}

void DescribeDataBridgeUrlV2Request::SetIsAbroad(const string& _isAbroad)
{
    m_isAbroad = _isAbroad;
    m_isAbroadHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::IsAbroadHasBeenSet() const
{
    return m_isAbroadHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetBrowser() const
{
    return m_browser;
}

void DescribeDataBridgeUrlV2Request::SetBrowser(const string& _browser)
{
    m_browser = _browser;
    m_browserHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::BrowserHasBeenSet() const
{
    return m_browserHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetOs() const
{
    return m_os;
}

void DescribeDataBridgeUrlV2Request::SetOs(const string& _os)
{
    m_os = _os;
    m_osHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::OsHasBeenSet() const
{
    return m_osHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetEngine() const
{
    return m_engine;
}

void DescribeDataBridgeUrlV2Request::SetEngine(const string& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetBrand() const
{
    return m_brand;
}

void DescribeDataBridgeUrlV2Request::SetBrand(const string& _brand)
{
    m_brand = _brand;
    m_brandHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::BrandHasBeenSet() const
{
    return m_brandHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetFrom() const
{
    return m_from;
}

void DescribeDataBridgeUrlV2Request::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetCostType() const
{
    return m_costType;
}

void DescribeDataBridgeUrlV2Request::SetCostType(const string& _costType)
{
    m_costType = _costType;
    m_costTypeHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::CostTypeHasBeenSet() const
{
    return m_costTypeHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetEnv() const
{
    return m_env;
}

void DescribeDataBridgeUrlV2Request::SetEnv(const string& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetName() const
{
    return m_name;
}

void DescribeDataBridgeUrlV2Request::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetStatus() const
{
    return m_status;
}

void DescribeDataBridgeUrlV2Request::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetRet() const
{
    return m_ret;
}

void DescribeDataBridgeUrlV2Request::SetRet(const string& _ret)
{
    m_ret = _ret;
    m_retHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::RetHasBeenSet() const
{
    return m_retHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetNetStatus() const
{
    return m_netStatus;
}

void DescribeDataBridgeUrlV2Request::SetNetStatus(const string& _netStatus)
{
    m_netStatus = _netStatus;
    m_netStatusHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::NetStatusHasBeenSet() const
{
    return m_netStatusHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetExtFourth() const
{
    return m_extFourth;
}

void DescribeDataBridgeUrlV2Request::SetExtFourth(const string& _extFourth)
{
    m_extFourth = _extFourth;
    m_extFourthHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::ExtFourthHasBeenSet() const
{
    return m_extFourthHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetExtFifth() const
{
    return m_extFifth;
}

void DescribeDataBridgeUrlV2Request::SetExtFifth(const string& _extFifth)
{
    m_extFifth = _extFifth;
    m_extFifthHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::ExtFifthHasBeenSet() const
{
    return m_extFifthHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetExtSixth() const
{
    return m_extSixth;
}

void DescribeDataBridgeUrlV2Request::SetExtSixth(const string& _extSixth)
{
    m_extSixth = _extSixth;
    m_extSixthHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::ExtSixthHasBeenSet() const
{
    return m_extSixthHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetExtSeventh() const
{
    return m_extSeventh;
}

void DescribeDataBridgeUrlV2Request::SetExtSeventh(const string& _extSeventh)
{
    m_extSeventh = _extSeventh;
    m_extSeventhHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::ExtSeventhHasBeenSet() const
{
    return m_extSeventhHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetExtEighth() const
{
    return m_extEighth;
}

void DescribeDataBridgeUrlV2Request::SetExtEighth(const string& _extEighth)
{
    m_extEighth = _extEighth;
    m_extEighthHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::ExtEighthHasBeenSet() const
{
    return m_extEighthHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetExtNinth() const
{
    return m_extNinth;
}

void DescribeDataBridgeUrlV2Request::SetExtNinth(const string& _extNinth)
{
    m_extNinth = _extNinth;
    m_extNinthHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::ExtNinthHasBeenSet() const
{
    return m_extNinthHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetExtTenth() const
{
    return m_extTenth;
}

void DescribeDataBridgeUrlV2Request::SetExtTenth(const string& _extTenth)
{
    m_extTenth = _extTenth;
    m_extTenthHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::ExtTenthHasBeenSet() const
{
    return m_extTenthHasBeenSet;
}

string DescribeDataBridgeUrlV2Request::GetGranularity() const
{
    return m_granularity;
}

void DescribeDataBridgeUrlV2Request::SetGranularity(const string& _granularity)
{
    m_granularity = _granularity;
    m_granularityHasBeenSet = true;
}

bool DescribeDataBridgeUrlV2Request::GranularityHasBeenSet() const
{
    return m_granularityHasBeenSet;
}


