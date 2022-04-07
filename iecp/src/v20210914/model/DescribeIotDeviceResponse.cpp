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

#include <tencentcloud/iecp/v20210914/model/DescribeIotDeviceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DescribeIotDeviceResponse::DescribeIotDeviceResponse() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_certHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_pskHasBeenSet(false),
    m_disabledHasBeenSet(false),
    m_logSettingHasBeenSet(false),
    m_logLevelHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_clientIDHasBeenSet(false),
    m_pskHexHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_unitIDHasBeenSet(false),
    m_unitNameHasBeenSet(false)
{
}

CoreInternalOutcome DescribeIotDeviceResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Id") && !rsp["Id"].IsNull())
    {
        if (!rsp["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = rsp["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Version") && !rsp["Version"].IsNull())
    {
        if (!rsp["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(rsp["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (rsp.HasMember("Cert") && !rsp["Cert"].IsNull())
    {
        if (!rsp["Cert"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cert = string(rsp["Cert"].GetString());
        m_certHasBeenSet = true;
    }

    if (rsp.HasMember("PrivateKey") && !rsp["PrivateKey"].IsNull())
    {
        if (!rsp["PrivateKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateKey = string(rsp["PrivateKey"].GetString());
        m_privateKeyHasBeenSet = true;
    }

    if (rsp.HasMember("Psk") && !rsp["Psk"].IsNull())
    {
        if (!rsp["Psk"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Psk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_psk = string(rsp["Psk"].GetString());
        m_pskHasBeenSet = true;
    }

    if (rsp.HasMember("Disabled") && !rsp["Disabled"].IsNull())
    {
        if (!rsp["Disabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Disabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disabled = rsp["Disabled"].GetBool();
        m_disabledHasBeenSet = true;
    }

    if (rsp.HasMember("LogSetting") && !rsp["LogSetting"].IsNull())
    {
        if (!rsp["LogSetting"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogSetting` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logSetting = rsp["LogSetting"].GetInt64();
        m_logSettingHasBeenSet = true;
    }

    if (rsp.HasMember("LogLevel") && !rsp["LogLevel"].IsNull())
    {
        if (!rsp["LogLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logLevel = rsp["LogLevel"].GetInt64();
        m_logLevelHasBeenSet = true;
    }

    if (rsp.HasMember("UserName") && !rsp["UserName"].IsNull())
    {
        if (!rsp["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(rsp["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (rsp.HasMember("Password") && !rsp["Password"].IsNull())
    {
        if (!rsp["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(rsp["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (rsp.HasMember("ClientID") && !rsp["ClientID"].IsNull())
    {
        if (!rsp["ClientID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientID = string(rsp["ClientID"].GetString());
        m_clientIDHasBeenSet = true;
    }

    if (rsp.HasMember("PskHex") && !rsp["PskHex"].IsNull())
    {
        if (!rsp["PskHex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PskHex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pskHex = string(rsp["PskHex"].GetString());
        m_pskHexHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Region") && !rsp["Region"].IsNull())
    {
        if (!rsp["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(rsp["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (rsp.HasMember("UnitID") && !rsp["UnitID"].IsNull())
    {
        if (!rsp["UnitID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UnitID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unitID = rsp["UnitID"].GetInt64();
        m_unitIDHasBeenSet = true;
    }

    if (rsp.HasMember("UnitName") && !rsp["UnitName"].IsNull())
    {
        if (!rsp["UnitName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnitName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitName = string(rsp["UnitName"].GetString());
        m_unitNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeIotDeviceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_certHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cert.c_str(), allocator).Move(), allocator);
    }

    if (m_privateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_pskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Psk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_psk.c_str(), allocator).Move(), allocator);
    }

    if (m_disabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disabled, allocator);
    }

    if (m_logSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logSetting, allocator);
    }

    if (m_logLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logLevel, allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientID.c_str(), allocator).Move(), allocator);
    }

    if (m_pskHexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PskHex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pskHex.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_unitIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unitID, allocator);
    }

    if (m_unitNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unitName.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeIotDeviceResponse::GetId() const
{
    return m_id;
}

bool DescribeIotDeviceResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeIotDeviceResponse::GetName() const
{
    return m_name;
}

bool DescribeIotDeviceResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeIotDeviceResponse::GetVersion() const
{
    return m_version;
}

bool DescribeIotDeviceResponse::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string DescribeIotDeviceResponse::GetCert() const
{
    return m_cert;
}

bool DescribeIotDeviceResponse::CertHasBeenSet() const
{
    return m_certHasBeenSet;
}

string DescribeIotDeviceResponse::GetPrivateKey() const
{
    return m_privateKey;
}

bool DescribeIotDeviceResponse::PrivateKeyHasBeenSet() const
{
    return m_privateKeyHasBeenSet;
}

string DescribeIotDeviceResponse::GetPsk() const
{
    return m_psk;
}

bool DescribeIotDeviceResponse::PskHasBeenSet() const
{
    return m_pskHasBeenSet;
}

bool DescribeIotDeviceResponse::GetDisabled() const
{
    return m_disabled;
}

bool DescribeIotDeviceResponse::DisabledHasBeenSet() const
{
    return m_disabledHasBeenSet;
}

int64_t DescribeIotDeviceResponse::GetLogSetting() const
{
    return m_logSetting;
}

bool DescribeIotDeviceResponse::LogSettingHasBeenSet() const
{
    return m_logSettingHasBeenSet;
}

int64_t DescribeIotDeviceResponse::GetLogLevel() const
{
    return m_logLevel;
}

bool DescribeIotDeviceResponse::LogLevelHasBeenSet() const
{
    return m_logLevelHasBeenSet;
}

string DescribeIotDeviceResponse::GetUserName() const
{
    return m_userName;
}

bool DescribeIotDeviceResponse::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string DescribeIotDeviceResponse::GetPassword() const
{
    return m_password;
}

bool DescribeIotDeviceResponse::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string DescribeIotDeviceResponse::GetClientID() const
{
    return m_clientID;
}

bool DescribeIotDeviceResponse::ClientIDHasBeenSet() const
{
    return m_clientIDHasBeenSet;
}

string DescribeIotDeviceResponse::GetPskHex() const
{
    return m_pskHex;
}

bool DescribeIotDeviceResponse::PskHexHasBeenSet() const
{
    return m_pskHexHasBeenSet;
}

string DescribeIotDeviceResponse::GetDescription() const
{
    return m_description;
}

bool DescribeIotDeviceResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t DescribeIotDeviceResponse::GetStatus() const
{
    return m_status;
}

bool DescribeIotDeviceResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeIotDeviceResponse::GetRegion() const
{
    return m_region;
}

bool DescribeIotDeviceResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t DescribeIotDeviceResponse::GetUnitID() const
{
    return m_unitID;
}

bool DescribeIotDeviceResponse::UnitIDHasBeenSet() const
{
    return m_unitIDHasBeenSet;
}

string DescribeIotDeviceResponse::GetUnitName() const
{
    return m_unitName;
}

bool DescribeIotDeviceResponse::UnitNameHasBeenSet() const
{
    return m_unitNameHasBeenSet;
}


