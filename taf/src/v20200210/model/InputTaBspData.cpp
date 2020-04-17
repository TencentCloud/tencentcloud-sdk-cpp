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

#include <tencentcloud/taf/v20200210/model/InputTaBspData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Taf::V20200210::Model;
using namespace rapidjson;
using namespace std;

InputTaBspData::InputTaBspData() :
    m_seqHasBeenSet(false),
    m_osTypeHasBeenSet(false),
    m_ageFloorHasBeenSet(false),
    m_ageCeilHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_userTimeHasBeenSet(false),
    m_imeiHasBeenSet(false),
    m_imeiMd5HasBeenSet(false),
    m_idfaHasBeenSet(false),
    m_idfaMd5HasBeenSet(false),
    m_userIpHasBeenSet(false),
    m_macHasBeenSet(false),
    m_phoneNumHasBeenSet(false),
    m_userAgentHasBeenSet(false),
    m_appHasBeenSet(false),
    m_packageHasBeenSet(false),
    m_deviceMakerHasBeenSet(false),
    m_deviceModuleHasBeenSet(false),
    m_accessModeHasBeenSet(false),
    m_spHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_latitudeHasBeenSet(false),
    m_longitudeHasBeenSet(false),
    m_contextHasBeenSet(false)
{
}

CoreInternalOutcome InputTaBspData::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Seq") && !value["Seq"].IsNull())
    {
        if (!value["Seq"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InputTaBspData.Seq` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_seq = value["Seq"].GetInt64();
        m_seqHasBeenSet = true;
    }

    if (value.HasMember("OsType") && !value["OsType"].IsNull())
    {
        if (!value["OsType"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputTaBspData.OsType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osType = string(value["OsType"].GetString());
        m_osTypeHasBeenSet = true;
    }

    if (value.HasMember("AgeFloor") && !value["AgeFloor"].IsNull())
    {
        if (!value["AgeFloor"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InputTaBspData.AgeFloor` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ageFloor = value["AgeFloor"].GetInt64();
        m_ageFloorHasBeenSet = true;
    }

    if (value.HasMember("AgeCeil") && !value["AgeCeil"].IsNull())
    {
        if (!value["AgeCeil"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InputTaBspData.AgeCeil` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ageCeil = value["AgeCeil"].GetInt64();
        m_ageCeilHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InputTaBspData.Gender` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gender = value["Gender"].GetInt64();
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("UserTime") && !value["UserTime"].IsNull())
    {
        if (!value["UserTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InputTaBspData.UserTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userTime = value["UserTime"].GetInt64();
        m_userTimeHasBeenSet = true;
    }

    if (value.HasMember("Imei") && !value["Imei"].IsNull())
    {
        if (!value["Imei"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputTaBspData.Imei` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imei = string(value["Imei"].GetString());
        m_imeiHasBeenSet = true;
    }

    if (value.HasMember("ImeiMd5") && !value["ImeiMd5"].IsNull())
    {
        if (!value["ImeiMd5"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputTaBspData.ImeiMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imeiMd5 = string(value["ImeiMd5"].GetString());
        m_imeiMd5HasBeenSet = true;
    }

    if (value.HasMember("Idfa") && !value["Idfa"].IsNull())
    {
        if (!value["Idfa"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputTaBspData.Idfa` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idfa = string(value["Idfa"].GetString());
        m_idfaHasBeenSet = true;
    }

    if (value.HasMember("IdfaMd5") && !value["IdfaMd5"].IsNull())
    {
        if (!value["IdfaMd5"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputTaBspData.IdfaMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idfaMd5 = string(value["IdfaMd5"].GetString());
        m_idfaMd5HasBeenSet = true;
    }

    if (value.HasMember("UserIp") && !value["UserIp"].IsNull())
    {
        if (!value["UserIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputTaBspData.UserIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userIp = string(value["UserIp"].GetString());
        m_userIpHasBeenSet = true;
    }

    if (value.HasMember("Mac") && !value["Mac"].IsNull())
    {
        if (!value["Mac"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputTaBspData.Mac` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mac = string(value["Mac"].GetString());
        m_macHasBeenSet = true;
    }

    if (value.HasMember("PhoneNum") && !value["PhoneNum"].IsNull())
    {
        if (!value["PhoneNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputTaBspData.PhoneNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNum = string(value["PhoneNum"].GetString());
        m_phoneNumHasBeenSet = true;
    }

    if (value.HasMember("UserAgent") && !value["UserAgent"].IsNull())
    {
        if (!value["UserAgent"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputTaBspData.UserAgent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAgent = string(value["UserAgent"].GetString());
        m_userAgentHasBeenSet = true;
    }

    if (value.HasMember("App") && !value["App"].IsNull())
    {
        if (!value["App"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputTaBspData.App` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_app = string(value["App"].GetString());
        m_appHasBeenSet = true;
    }

    if (value.HasMember("Package") && !value["Package"].IsNull())
    {
        if (!value["Package"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputTaBspData.Package` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_package = string(value["Package"].GetString());
        m_packageHasBeenSet = true;
    }

    if (value.HasMember("DeviceMaker") && !value["DeviceMaker"].IsNull())
    {
        if (!value["DeviceMaker"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputTaBspData.DeviceMaker` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceMaker = string(value["DeviceMaker"].GetString());
        m_deviceMakerHasBeenSet = true;
    }

    if (value.HasMember("DeviceModule") && !value["DeviceModule"].IsNull())
    {
        if (!value["DeviceModule"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputTaBspData.DeviceModule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceModule = string(value["DeviceModule"].GetString());
        m_deviceModuleHasBeenSet = true;
    }

    if (value.HasMember("AccessMode") && !value["AccessMode"].IsNull())
    {
        if (!value["AccessMode"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputTaBspData.AccessMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessMode = string(value["AccessMode"].GetString());
        m_accessModeHasBeenSet = true;
    }

    if (value.HasMember("Sp") && !value["Sp"].IsNull())
    {
        if (!value["Sp"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputTaBspData.Sp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sp = string(value["Sp"].GetString());
        m_spHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputTaBspData.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputTaBspData.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("Latitude") && !value["Latitude"].IsNull())
    {
        if (!value["Latitude"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputTaBspData.Latitude` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latitude = string(value["Latitude"].GetString());
        m_latitudeHasBeenSet = true;
    }

    if (value.HasMember("Longitude") && !value["Longitude"].IsNull())
    {
        if (!value["Longitude"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputTaBspData.Longitude` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_longitude = string(value["Longitude"].GetString());
        m_longitudeHasBeenSet = true;
    }

    if (value.HasMember("Context") && !value["Context"].IsNull())
    {
        if (!value["Context"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputTaBspData.Context` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_context = string(value["Context"].GetString());
        m_contextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputTaBspData::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_seqHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Seq";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_seq, allocator);
    }

    if (m_osTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_osType.c_str(), allocator).Move(), allocator);
    }

    if (m_ageFloorHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AgeFloor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ageFloor, allocator);
    }

    if (m_ageCeilHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AgeCeil";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ageCeil, allocator);
    }

    if (m_genderHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gender, allocator);
    }

    if (m_userTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userTime, allocator);
    }

    if (m_imeiHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Imei";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_imei.c_str(), allocator).Move(), allocator);
    }

    if (m_imeiMd5HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImeiMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_imeiMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_idfaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Idfa";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_idfa.c_str(), allocator).Move(), allocator);
    }

    if (m_idfaMd5HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IdfaMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_idfaMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_userIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_userIp.c_str(), allocator).Move(), allocator);
    }

    if (m_macHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Mac";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_mac.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PhoneNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_phoneNum.c_str(), allocator).Move(), allocator);
    }

    if (m_userAgentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserAgent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_userAgent.c_str(), allocator).Move(), allocator);
    }

    if (m_appHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "App";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_app.c_str(), allocator).Move(), allocator);
    }

    if (m_packageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Package";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_package.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceMakerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceMaker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_deviceMaker.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceModuleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceModule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_deviceModule.c_str(), allocator).Move(), allocator);
    }

    if (m_accessModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccessMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_accessMode.c_str(), allocator).Move(), allocator);
    }

    if (m_spHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Sp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_sp.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_latitudeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Latitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_latitude.c_str(), allocator).Move(), allocator);
    }

    if (m_longitudeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Longitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_longitude.c_str(), allocator).Move(), allocator);
    }

    if (m_contextHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_context.c_str(), allocator).Move(), allocator);
    }

}


int64_t InputTaBspData::GetSeq() const
{
    return m_seq;
}

void InputTaBspData::SetSeq(const int64_t& _seq)
{
    m_seq = _seq;
    m_seqHasBeenSet = true;
}

bool InputTaBspData::SeqHasBeenSet() const
{
    return m_seqHasBeenSet;
}

string InputTaBspData::GetOsType() const
{
    return m_osType;
}

void InputTaBspData::SetOsType(const string& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool InputTaBspData::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

int64_t InputTaBspData::GetAgeFloor() const
{
    return m_ageFloor;
}

void InputTaBspData::SetAgeFloor(const int64_t& _ageFloor)
{
    m_ageFloor = _ageFloor;
    m_ageFloorHasBeenSet = true;
}

bool InputTaBspData::AgeFloorHasBeenSet() const
{
    return m_ageFloorHasBeenSet;
}

int64_t InputTaBspData::GetAgeCeil() const
{
    return m_ageCeil;
}

void InputTaBspData::SetAgeCeil(const int64_t& _ageCeil)
{
    m_ageCeil = _ageCeil;
    m_ageCeilHasBeenSet = true;
}

bool InputTaBspData::AgeCeilHasBeenSet() const
{
    return m_ageCeilHasBeenSet;
}

int64_t InputTaBspData::GetGender() const
{
    return m_gender;
}

void InputTaBspData::SetGender(const int64_t& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool InputTaBspData::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

int64_t InputTaBspData::GetUserTime() const
{
    return m_userTime;
}

void InputTaBspData::SetUserTime(const int64_t& _userTime)
{
    m_userTime = _userTime;
    m_userTimeHasBeenSet = true;
}

bool InputTaBspData::UserTimeHasBeenSet() const
{
    return m_userTimeHasBeenSet;
}

string InputTaBspData::GetImei() const
{
    return m_imei;
}

void InputTaBspData::SetImei(const string& _imei)
{
    m_imei = _imei;
    m_imeiHasBeenSet = true;
}

bool InputTaBspData::ImeiHasBeenSet() const
{
    return m_imeiHasBeenSet;
}

string InputTaBspData::GetImeiMd5() const
{
    return m_imeiMd5;
}

void InputTaBspData::SetImeiMd5(const string& _imeiMd5)
{
    m_imeiMd5 = _imeiMd5;
    m_imeiMd5HasBeenSet = true;
}

bool InputTaBspData::ImeiMd5HasBeenSet() const
{
    return m_imeiMd5HasBeenSet;
}

string InputTaBspData::GetIdfa() const
{
    return m_idfa;
}

void InputTaBspData::SetIdfa(const string& _idfa)
{
    m_idfa = _idfa;
    m_idfaHasBeenSet = true;
}

bool InputTaBspData::IdfaHasBeenSet() const
{
    return m_idfaHasBeenSet;
}

string InputTaBspData::GetIdfaMd5() const
{
    return m_idfaMd5;
}

void InputTaBspData::SetIdfaMd5(const string& _idfaMd5)
{
    m_idfaMd5 = _idfaMd5;
    m_idfaMd5HasBeenSet = true;
}

bool InputTaBspData::IdfaMd5HasBeenSet() const
{
    return m_idfaMd5HasBeenSet;
}

string InputTaBspData::GetUserIp() const
{
    return m_userIp;
}

void InputTaBspData::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool InputTaBspData::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

string InputTaBspData::GetMac() const
{
    return m_mac;
}

void InputTaBspData::SetMac(const string& _mac)
{
    m_mac = _mac;
    m_macHasBeenSet = true;
}

bool InputTaBspData::MacHasBeenSet() const
{
    return m_macHasBeenSet;
}

string InputTaBspData::GetPhoneNum() const
{
    return m_phoneNum;
}

void InputTaBspData::SetPhoneNum(const string& _phoneNum)
{
    m_phoneNum = _phoneNum;
    m_phoneNumHasBeenSet = true;
}

bool InputTaBspData::PhoneNumHasBeenSet() const
{
    return m_phoneNumHasBeenSet;
}

string InputTaBspData::GetUserAgent() const
{
    return m_userAgent;
}

void InputTaBspData::SetUserAgent(const string& _userAgent)
{
    m_userAgent = _userAgent;
    m_userAgentHasBeenSet = true;
}

bool InputTaBspData::UserAgentHasBeenSet() const
{
    return m_userAgentHasBeenSet;
}

string InputTaBspData::GetApp() const
{
    return m_app;
}

void InputTaBspData::SetApp(const string& _app)
{
    m_app = _app;
    m_appHasBeenSet = true;
}

bool InputTaBspData::AppHasBeenSet() const
{
    return m_appHasBeenSet;
}

string InputTaBspData::GetPackage() const
{
    return m_package;
}

void InputTaBspData::SetPackage(const string& _package)
{
    m_package = _package;
    m_packageHasBeenSet = true;
}

bool InputTaBspData::PackageHasBeenSet() const
{
    return m_packageHasBeenSet;
}

string InputTaBspData::GetDeviceMaker() const
{
    return m_deviceMaker;
}

void InputTaBspData::SetDeviceMaker(const string& _deviceMaker)
{
    m_deviceMaker = _deviceMaker;
    m_deviceMakerHasBeenSet = true;
}

bool InputTaBspData::DeviceMakerHasBeenSet() const
{
    return m_deviceMakerHasBeenSet;
}

string InputTaBspData::GetDeviceModule() const
{
    return m_deviceModule;
}

void InputTaBspData::SetDeviceModule(const string& _deviceModule)
{
    m_deviceModule = _deviceModule;
    m_deviceModuleHasBeenSet = true;
}

bool InputTaBspData::DeviceModuleHasBeenSet() const
{
    return m_deviceModuleHasBeenSet;
}

string InputTaBspData::GetAccessMode() const
{
    return m_accessMode;
}

void InputTaBspData::SetAccessMode(const string& _accessMode)
{
    m_accessMode = _accessMode;
    m_accessModeHasBeenSet = true;
}

bool InputTaBspData::AccessModeHasBeenSet() const
{
    return m_accessModeHasBeenSet;
}

string InputTaBspData::GetSp() const
{
    return m_sp;
}

void InputTaBspData::SetSp(const string& _sp)
{
    m_sp = _sp;
    m_spHasBeenSet = true;
}

bool InputTaBspData::SpHasBeenSet() const
{
    return m_spHasBeenSet;
}

string InputTaBspData::GetUrl() const
{
    return m_url;
}

void InputTaBspData::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool InputTaBspData::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string InputTaBspData::GetLocation() const
{
    return m_location;
}

void InputTaBspData::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool InputTaBspData::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

string InputTaBspData::GetLatitude() const
{
    return m_latitude;
}

void InputTaBspData::SetLatitude(const string& _latitude)
{
    m_latitude = _latitude;
    m_latitudeHasBeenSet = true;
}

bool InputTaBspData::LatitudeHasBeenSet() const
{
    return m_latitudeHasBeenSet;
}

string InputTaBspData::GetLongitude() const
{
    return m_longitude;
}

void InputTaBspData::SetLongitude(const string& _longitude)
{
    m_longitude = _longitude;
    m_longitudeHasBeenSet = true;
}

bool InputTaBspData::LongitudeHasBeenSet() const
{
    return m_longitudeHasBeenSet;
}

string InputTaBspData::GetContext() const
{
    return m_context;
}

void InputTaBspData::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool InputTaBspData::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

