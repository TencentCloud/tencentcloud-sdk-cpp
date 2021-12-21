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

#include <tencentcloud/cvm/v20170312/model/LaunchTemplateVersionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

LaunchTemplateVersionInfo::LaunchTemplateVersionInfo() :
    m_launchTemplateVersionHasBeenSet(false),
    m_launchTemplateVersionDataHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_launchTemplateIdHasBeenSet(false),
    m_isDefaultVersionHasBeenSet(false),
    m_launchTemplateVersionDescriptionHasBeenSet(false),
    m_createdByHasBeenSet(false)
{
}

CoreInternalOutcome LaunchTemplateVersionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LaunchTemplateVersion") && !value["LaunchTemplateVersion"].IsNull())
    {
        if (!value["LaunchTemplateVersion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionInfo.LaunchTemplateVersion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_launchTemplateVersion = value["LaunchTemplateVersion"].GetUint64();
        m_launchTemplateVersionHasBeenSet = true;
    }

    if (value.HasMember("LaunchTemplateVersionData") && !value["LaunchTemplateVersionData"].IsNull())
    {
        if (!value["LaunchTemplateVersionData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionInfo.LaunchTemplateVersionData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_launchTemplateVersionData.Deserialize(value["LaunchTemplateVersionData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_launchTemplateVersionDataHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionInfo.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("LaunchTemplateId") && !value["LaunchTemplateId"].IsNull())
    {
        if (!value["LaunchTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionInfo.LaunchTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_launchTemplateId = string(value["LaunchTemplateId"].GetString());
        m_launchTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("IsDefaultVersion") && !value["IsDefaultVersion"].IsNull())
    {
        if (!value["IsDefaultVersion"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionInfo.IsDefaultVersion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefaultVersion = value["IsDefaultVersion"].GetBool();
        m_isDefaultVersionHasBeenSet = true;
    }

    if (value.HasMember("LaunchTemplateVersionDescription") && !value["LaunchTemplateVersionDescription"].IsNull())
    {
        if (!value["LaunchTemplateVersionDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionInfo.LaunchTemplateVersionDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_launchTemplateVersionDescription = string(value["LaunchTemplateVersionDescription"].GetString());
        m_launchTemplateVersionDescriptionHasBeenSet = true;
    }

    if (value.HasMember("CreatedBy") && !value["CreatedBy"].IsNull())
    {
        if (!value["CreatedBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateVersionInfo.CreatedBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdBy = string(value["CreatedBy"].GetString());
        m_createdByHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LaunchTemplateVersionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_launchTemplateVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchTemplateVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_launchTemplateVersion, allocator);
    }

    if (m_launchTemplateVersionDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchTemplateVersionData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_launchTemplateVersionData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_launchTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_launchTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefaultVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefaultVersion, allocator);
    }

    if (m_launchTemplateVersionDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchTemplateVersionDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_launchTemplateVersionDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_createdByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdBy.c_str(), allocator).Move(), allocator);
    }

}


uint64_t LaunchTemplateVersionInfo::GetLaunchTemplateVersion() const
{
    return m_launchTemplateVersion;
}

void LaunchTemplateVersionInfo::SetLaunchTemplateVersion(const uint64_t& _launchTemplateVersion)
{
    m_launchTemplateVersion = _launchTemplateVersion;
    m_launchTemplateVersionHasBeenSet = true;
}

bool LaunchTemplateVersionInfo::LaunchTemplateVersionHasBeenSet() const
{
    return m_launchTemplateVersionHasBeenSet;
}

LaunchTemplateVersionData LaunchTemplateVersionInfo::GetLaunchTemplateVersionData() const
{
    return m_launchTemplateVersionData;
}

void LaunchTemplateVersionInfo::SetLaunchTemplateVersionData(const LaunchTemplateVersionData& _launchTemplateVersionData)
{
    m_launchTemplateVersionData = _launchTemplateVersionData;
    m_launchTemplateVersionDataHasBeenSet = true;
}

bool LaunchTemplateVersionInfo::LaunchTemplateVersionDataHasBeenSet() const
{
    return m_launchTemplateVersionDataHasBeenSet;
}

string LaunchTemplateVersionInfo::GetCreationTime() const
{
    return m_creationTime;
}

void LaunchTemplateVersionInfo::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool LaunchTemplateVersionInfo::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string LaunchTemplateVersionInfo::GetLaunchTemplateId() const
{
    return m_launchTemplateId;
}

void LaunchTemplateVersionInfo::SetLaunchTemplateId(const string& _launchTemplateId)
{
    m_launchTemplateId = _launchTemplateId;
    m_launchTemplateIdHasBeenSet = true;
}

bool LaunchTemplateVersionInfo::LaunchTemplateIdHasBeenSet() const
{
    return m_launchTemplateIdHasBeenSet;
}

bool LaunchTemplateVersionInfo::GetIsDefaultVersion() const
{
    return m_isDefaultVersion;
}

void LaunchTemplateVersionInfo::SetIsDefaultVersion(const bool& _isDefaultVersion)
{
    m_isDefaultVersion = _isDefaultVersion;
    m_isDefaultVersionHasBeenSet = true;
}

bool LaunchTemplateVersionInfo::IsDefaultVersionHasBeenSet() const
{
    return m_isDefaultVersionHasBeenSet;
}

string LaunchTemplateVersionInfo::GetLaunchTemplateVersionDescription() const
{
    return m_launchTemplateVersionDescription;
}

void LaunchTemplateVersionInfo::SetLaunchTemplateVersionDescription(const string& _launchTemplateVersionDescription)
{
    m_launchTemplateVersionDescription = _launchTemplateVersionDescription;
    m_launchTemplateVersionDescriptionHasBeenSet = true;
}

bool LaunchTemplateVersionInfo::LaunchTemplateVersionDescriptionHasBeenSet() const
{
    return m_launchTemplateVersionDescriptionHasBeenSet;
}

string LaunchTemplateVersionInfo::GetCreatedBy() const
{
    return m_createdBy;
}

void LaunchTemplateVersionInfo::SetCreatedBy(const string& _createdBy)
{
    m_createdBy = _createdBy;
    m_createdByHasBeenSet = true;
}

bool LaunchTemplateVersionInfo::CreatedByHasBeenSet() const
{
    return m_createdByHasBeenSet;
}

