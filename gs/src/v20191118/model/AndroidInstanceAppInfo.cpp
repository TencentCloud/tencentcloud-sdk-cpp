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

#include <tencentcloud/gs/v20191118/model/AndroidInstanceAppInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

AndroidInstanceAppInfo::AndroidInstanceAppInfo() :
    m_androidAppIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_androidAppVersionHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_packageVersionHasBeenSet(false),
    m_packageLabelHasBeenSet(false)
{
}

CoreInternalOutcome AndroidInstanceAppInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AndroidAppId") && !value["AndroidAppId"].IsNull())
    {
        if (!value["AndroidAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceAppInfo.AndroidAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidAppId = string(value["AndroidAppId"].GetString());
        m_androidAppIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceAppInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AndroidAppVersion") && !value["AndroidAppVersion"].IsNull())
    {
        if (!value["AndroidAppVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceAppInfo.AndroidAppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidAppVersion = string(value["AndroidAppVersion"].GetString());
        m_androidAppVersionHasBeenSet = true;
    }

    if (value.HasMember("PackageName") && !value["PackageName"].IsNull())
    {
        if (!value["PackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceAppInfo.PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(value["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }

    if (value.HasMember("PackageVersion") && !value["PackageVersion"].IsNull())
    {
        if (!value["PackageVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceAppInfo.PackageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageVersion = string(value["PackageVersion"].GetString());
        m_packageVersionHasBeenSet = true;
    }

    if (value.HasMember("PackageLabel") && !value["PackageLabel"].IsNull())
    {
        if (!value["PackageLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceAppInfo.PackageLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageLabel = string(value["PackageLabel"].GetString());
        m_packageLabelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AndroidInstanceAppInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_androidAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_androidAppVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidAppVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidAppVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_packageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_packageLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageLabel.c_str(), allocator).Move(), allocator);
    }

}


string AndroidInstanceAppInfo::GetAndroidAppId() const
{
    return m_androidAppId;
}

void AndroidInstanceAppInfo::SetAndroidAppId(const string& _androidAppId)
{
    m_androidAppId = _androidAppId;
    m_androidAppIdHasBeenSet = true;
}

bool AndroidInstanceAppInfo::AndroidAppIdHasBeenSet() const
{
    return m_androidAppIdHasBeenSet;
}

string AndroidInstanceAppInfo::GetName() const
{
    return m_name;
}

void AndroidInstanceAppInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AndroidInstanceAppInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AndroidInstanceAppInfo::GetAndroidAppVersion() const
{
    return m_androidAppVersion;
}

void AndroidInstanceAppInfo::SetAndroidAppVersion(const string& _androidAppVersion)
{
    m_androidAppVersion = _androidAppVersion;
    m_androidAppVersionHasBeenSet = true;
}

bool AndroidInstanceAppInfo::AndroidAppVersionHasBeenSet() const
{
    return m_androidAppVersionHasBeenSet;
}

string AndroidInstanceAppInfo::GetPackageName() const
{
    return m_packageName;
}

void AndroidInstanceAppInfo::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool AndroidInstanceAppInfo::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

string AndroidInstanceAppInfo::GetPackageVersion() const
{
    return m_packageVersion;
}

void AndroidInstanceAppInfo::SetPackageVersion(const string& _packageVersion)
{
    m_packageVersion = _packageVersion;
    m_packageVersionHasBeenSet = true;
}

bool AndroidInstanceAppInfo::PackageVersionHasBeenSet() const
{
    return m_packageVersionHasBeenSet;
}

string AndroidInstanceAppInfo::GetPackageLabel() const
{
    return m_packageLabel;
}

void AndroidInstanceAppInfo::SetPackageLabel(const string& _packageLabel)
{
    m_packageLabel = _packageLabel;
    m_packageLabelHasBeenSet = true;
}

bool AndroidInstanceAppInfo::PackageLabelHasBeenSet() const
{
    return m_packageLabelHasBeenSet;
}

