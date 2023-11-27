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

#include <tencentcloud/mna/v20210119/model/Hardware.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

Hardware::Hardware() :
    m_sNHasBeenSet(false),
    m_licenseChargingModeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_hardwareIdHasBeenSet(false)
{
}

CoreInternalOutcome Hardware::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SN") && !value["SN"].IsNull())
    {
        if (!value["SN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Hardware.SN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sN = string(value["SN"].GetString());
        m_sNHasBeenSet = true;
    }

    if (value.HasMember("LicenseChargingMode") && !value["LicenseChargingMode"].IsNull())
    {
        if (!value["LicenseChargingMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Hardware.LicenseChargingMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseChargingMode = value["LicenseChargingMode"].GetInt64();
        m_licenseChargingModeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Hardware.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("HardwareId") && !value["HardwareId"].IsNull())
    {
        if (!value["HardwareId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Hardware.HardwareId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hardwareId = string(value["HardwareId"].GetString());
        m_hardwareIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Hardware::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sN.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseChargingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseChargingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseChargingMode, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_hardwareIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HardwareId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hardwareId.c_str(), allocator).Move(), allocator);
    }

}


string Hardware::GetSN() const
{
    return m_sN;
}

void Hardware::SetSN(const string& _sN)
{
    m_sN = _sN;
    m_sNHasBeenSet = true;
}

bool Hardware::SNHasBeenSet() const
{
    return m_sNHasBeenSet;
}

int64_t Hardware::GetLicenseChargingMode() const
{
    return m_licenseChargingMode;
}

void Hardware::SetLicenseChargingMode(const int64_t& _licenseChargingMode)
{
    m_licenseChargingMode = _licenseChargingMode;
    m_licenseChargingModeHasBeenSet = true;
}

bool Hardware::LicenseChargingModeHasBeenSet() const
{
    return m_licenseChargingModeHasBeenSet;
}

string Hardware::GetDescription() const
{
    return m_description;
}

void Hardware::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Hardware::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Hardware::GetHardwareId() const
{
    return m_hardwareId;
}

void Hardware::SetHardwareId(const string& _hardwareId)
{
    m_hardwareId = _hardwareId;
    m_hardwareIdHasBeenSet = true;
}

bool Hardware::HardwareIdHasBeenSet() const
{
    return m_hardwareIdHasBeenSet;
}

