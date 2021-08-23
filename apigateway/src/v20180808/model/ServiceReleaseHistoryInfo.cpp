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

#include <tencentcloud/apigateway/v20180808/model/ServiceReleaseHistoryInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

ServiceReleaseHistoryInfo::ServiceReleaseHistoryInfo() :
    m_versionNameHasBeenSet(false),
    m_versionDescHasBeenSet(false),
    m_releaseTimeHasBeenSet(false)
{
}

CoreInternalOutcome ServiceReleaseHistoryInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceReleaseHistoryInfo.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (value.HasMember("VersionDesc") && !value["VersionDesc"].IsNull())
    {
        if (!value["VersionDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceReleaseHistoryInfo.VersionDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionDesc = string(value["VersionDesc"].GetString());
        m_versionDescHasBeenSet = true;
    }

    if (value.HasMember("ReleaseTime") && !value["ReleaseTime"].IsNull())
    {
        if (!value["ReleaseTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceReleaseHistoryInfo.ReleaseTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseTime = string(value["ReleaseTime"].GetString());
        m_releaseTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceReleaseHistoryInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_versionDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseTime.c_str(), allocator).Move(), allocator);
    }

}


string ServiceReleaseHistoryInfo::GetVersionName() const
{
    return m_versionName;
}

void ServiceReleaseHistoryInfo::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool ServiceReleaseHistoryInfo::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

string ServiceReleaseHistoryInfo::GetVersionDesc() const
{
    return m_versionDesc;
}

void ServiceReleaseHistoryInfo::SetVersionDesc(const string& _versionDesc)
{
    m_versionDesc = _versionDesc;
    m_versionDescHasBeenSet = true;
}

bool ServiceReleaseHistoryInfo::VersionDescHasBeenSet() const
{
    return m_versionDescHasBeenSet;
}

string ServiceReleaseHistoryInfo::GetReleaseTime() const
{
    return m_releaseTime;
}

void ServiceReleaseHistoryInfo::SetReleaseTime(const string& _releaseTime)
{
    m_releaseTime = _releaseTime;
    m_releaseTimeHasBeenSet = true;
}

bool ServiceReleaseHistoryInfo::ReleaseTimeHasBeenSet() const
{
    return m_releaseTimeHasBeenSet;
}

