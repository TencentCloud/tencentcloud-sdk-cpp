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

#include <tencentcloud/vcube/v20220410/model/CreateActivityLicenseResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vcube::V20220410::Model;
using namespace std;

CreateActivityLicenseResponse::CreateActivityLicenseResponse() :
    m_appIdHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_licenseKeyHasBeenSet(false),
    m_licenseUrlHasBeenSet(false),
    m_residueDayHasBeenSet(false),
    m_residueHasBeenSet(false)
{
}

CoreInternalOutcome CreateActivityLicenseResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AppId") && !rsp["AppId"].IsNull())
    {
        if (!rsp["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(rsp["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (rsp.HasMember("AppName") && !rsp["AppName"].IsNull())
    {
        if (!rsp["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(rsp["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (rsp.HasMember("BundleId") && !rsp["BundleId"].IsNull())
    {
        if (!rsp["BundleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BundleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleId = string(rsp["BundleId"].GetString());
        m_bundleIdHasBeenSet = true;
    }

    if (rsp.HasMember("PackageName") && !rsp["PackageName"].IsNull())
    {
        if (!rsp["PackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(rsp["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }

    if (rsp.HasMember("Duration") && !rsp["Duration"].IsNull())
    {
        if (!rsp["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = rsp["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(rsp["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LicenseKey") && !rsp["LicenseKey"].IsNull())
    {
        if (!rsp["LicenseKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseKey = string(rsp["LicenseKey"].GetString());
        m_licenseKeyHasBeenSet = true;
    }

    if (rsp.HasMember("LicenseUrl") && !rsp["LicenseUrl"].IsNull())
    {
        if (!rsp["LicenseUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseUrl = string(rsp["LicenseUrl"].GetString());
        m_licenseUrlHasBeenSet = true;
    }

    if (rsp.HasMember("ResidueDay") && !rsp["ResidueDay"].IsNull())
    {
        if (!rsp["ResidueDay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResidueDay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_residueDay = rsp["ResidueDay"].GetUint64();
        m_residueDayHasBeenSet = true;
    }

    if (rsp.HasMember("Residue") && !rsp["Residue"].IsNull())
    {
        if (!rsp["Residue"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Residue` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_residue = rsp["Residue"].GetUint64();
        m_residueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateActivityLicenseResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseKey.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_residueDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResidueDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_residueDay, allocator);
    }

    if (m_residueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Residue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_residue, allocator);
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


string CreateActivityLicenseResponse::GetAppId() const
{
    return m_appId;
}

bool CreateActivityLicenseResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CreateActivityLicenseResponse::GetAppName() const
{
    return m_appName;
}

bool CreateActivityLicenseResponse::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string CreateActivityLicenseResponse::GetBundleId() const
{
    return m_bundleId;
}

bool CreateActivityLicenseResponse::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string CreateActivityLicenseResponse::GetPackageName() const
{
    return m_packageName;
}

bool CreateActivityLicenseResponse::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

uint64_t CreateActivityLicenseResponse::GetDuration() const
{
    return m_duration;
}

bool CreateActivityLicenseResponse::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string CreateActivityLicenseResponse::GetStartTime() const
{
    return m_startTime;
}

bool CreateActivityLicenseResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string CreateActivityLicenseResponse::GetEndTime() const
{
    return m_endTime;
}

bool CreateActivityLicenseResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string CreateActivityLicenseResponse::GetLicenseKey() const
{
    return m_licenseKey;
}

bool CreateActivityLicenseResponse::LicenseKeyHasBeenSet() const
{
    return m_licenseKeyHasBeenSet;
}

string CreateActivityLicenseResponse::GetLicenseUrl() const
{
    return m_licenseUrl;
}

bool CreateActivityLicenseResponse::LicenseUrlHasBeenSet() const
{
    return m_licenseUrlHasBeenSet;
}

uint64_t CreateActivityLicenseResponse::GetResidueDay() const
{
    return m_residueDay;
}

bool CreateActivityLicenseResponse::ResidueDayHasBeenSet() const
{
    return m_residueDayHasBeenSet;
}

uint64_t CreateActivityLicenseResponse::GetResidue() const
{
    return m_residue;
}

bool CreateActivityLicenseResponse::ResidueHasBeenSet() const
{
    return m_residueHasBeenSet;
}


