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

#include <tencentcloud/tsf/v20180326/model/ApiVersionArray.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ApiVersionArray::ApiVersionArray() :
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_pkgVersionHasBeenSet(false)
{
}

CoreInternalOutcome ApiVersionArray::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiVersionArray.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiVersionArray.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("PkgVersion") && !value["PkgVersion"].IsNull())
    {
        if (!value["PkgVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiVersionArray.PkgVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgVersion = string(value["PkgVersion"].GetString());
        m_pkgVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiVersionArray::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pkgVersion.c_str(), allocator).Move(), allocator);
    }

}


string ApiVersionArray::GetApplicationId() const
{
    return m_applicationId;
}

void ApiVersionArray::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ApiVersionArray::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string ApiVersionArray::GetApplicationName() const
{
    return m_applicationName;
}

void ApiVersionArray::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool ApiVersionArray::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string ApiVersionArray::GetPkgVersion() const
{
    return m_pkgVersion;
}

void ApiVersionArray::SetPkgVersion(const string& _pkgVersion)
{
    m_pkgVersion = _pkgVersion;
    m_pkgVersionHasBeenSet = true;
}

bool ApiVersionArray::PkgVersionHasBeenSet() const
{
    return m_pkgVersionHasBeenSet;
}

