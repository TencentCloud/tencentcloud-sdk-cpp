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

#include <tencentcloud/bsca/v20210811/model/ComponentVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bsca::V20210811::Model;
using namespace std;

ComponentVersion::ComponentVersion() :
    m_pURLHasBeenSet(false),
    m_licenseExpressionHasBeenSet(false),
    m_versionInfoHasBeenSet(false)
{
}

CoreInternalOutcome ComponentVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PURL") && !value["PURL"].IsNull())
    {
        if (!value["PURL"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentVersion.PURL` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pURL.Deserialize(value["PURL"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pURLHasBeenSet = true;
    }

    if (value.HasMember("LicenseExpression") && !value["LicenseExpression"].IsNull())
    {
        if (!value["LicenseExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentVersion.LicenseExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseExpression = string(value["LicenseExpression"].GetString());
        m_licenseExpressionHasBeenSet = true;
    }

    if (value.HasMember("VersionInfo") && !value["VersionInfo"].IsNull())
    {
        if (!value["VersionInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentVersion.VersionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_versionInfo.Deserialize(value["VersionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_versionInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComponentVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pURL.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_licenseExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_versionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_versionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


PURL ComponentVersion::GetPURL() const
{
    return m_pURL;
}

void ComponentVersion::SetPURL(const PURL& _pURL)
{
    m_pURL = _pURL;
    m_pURLHasBeenSet = true;
}

bool ComponentVersion::PURLHasBeenSet() const
{
    return m_pURLHasBeenSet;
}

string ComponentVersion::GetLicenseExpression() const
{
    return m_licenseExpression;
}

void ComponentVersion::SetLicenseExpression(const string& _licenseExpression)
{
    m_licenseExpression = _licenseExpression;
    m_licenseExpressionHasBeenSet = true;
}

bool ComponentVersion::LicenseExpressionHasBeenSet() const
{
    return m_licenseExpressionHasBeenSet;
}

ComponentVersionInfo ComponentVersion::GetVersionInfo() const
{
    return m_versionInfo;
}

void ComponentVersion::SetVersionInfo(const ComponentVersionInfo& _versionInfo)
{
    m_versionInfo = _versionInfo;
    m_versionInfoHasBeenSet = true;
}

bool ComponentVersion::VersionInfoHasBeenSet() const
{
    return m_versionInfoHasBeenSet;
}

