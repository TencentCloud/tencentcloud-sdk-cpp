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

#include <tencentcloud/iotexplorer/v20190423/model/LicenseOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

LicenseOverview::LicenseOverview() :
    m_activationLicenseHasBeenSet(false),
    m_licenseTypeHasBeenSet(false)
{
}

CoreInternalOutcome LicenseOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActivationLicense") && !value["ActivationLicense"].IsNull())
    {
        if (!value["ActivationLicense"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LicenseOverview.ActivationLicense` is not array type"));

        const rapidjson::Value &tmpValue = value["ActivationLicense"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ActivationLicense item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_activationLicense.push_back(item);
        }
        m_activationLicenseHasBeenSet = true;
    }

    if (value.HasMember("LicenseType") && !value["LicenseType"].IsNull())
    {
        if (!value["LicenseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseOverview.LicenseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseType = string(value["LicenseType"].GetString());
        m_licenseTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LicenseOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_activationLicenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivationLicense";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_activationLicense.begin(); itr != m_activationLicense.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_licenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseType.c_str(), allocator).Move(), allocator);
    }

}


vector<ActivationLicense> LicenseOverview::GetActivationLicense() const
{
    return m_activationLicense;
}

void LicenseOverview::SetActivationLicense(const vector<ActivationLicense>& _activationLicense)
{
    m_activationLicense = _activationLicense;
    m_activationLicenseHasBeenSet = true;
}

bool LicenseOverview::ActivationLicenseHasBeenSet() const
{
    return m_activationLicenseHasBeenSet;
}

string LicenseOverview::GetLicenseType() const
{
    return m_licenseType;
}

void LicenseOverview::SetLicenseType(const string& _licenseType)
{
    m_licenseType = _licenseType;
    m_licenseTypeHasBeenSet = true;
}

bool LicenseOverview::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}

