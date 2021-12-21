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

#include <tencentcloud/cvm/v20170312/model/LaunchTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

LaunchTemplateInfo::LaunchTemplateInfo() :
    m_latestVersionNumberHasBeenSet(false),
    m_launchTemplateIdHasBeenSet(false),
    m_launchTemplateNameHasBeenSet(false),
    m_defaultVersionNumberHasBeenSet(false),
    m_launchTemplateVersionCountHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
}

CoreInternalOutcome LaunchTemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LatestVersionNumber") && !value["LatestVersionNumber"].IsNull())
    {
        if (!value["LatestVersionNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateInfo.LatestVersionNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_latestVersionNumber = value["LatestVersionNumber"].GetUint64();
        m_latestVersionNumberHasBeenSet = true;
    }

    if (value.HasMember("LaunchTemplateId") && !value["LaunchTemplateId"].IsNull())
    {
        if (!value["LaunchTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateInfo.LaunchTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_launchTemplateId = string(value["LaunchTemplateId"].GetString());
        m_launchTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("LaunchTemplateName") && !value["LaunchTemplateName"].IsNull())
    {
        if (!value["LaunchTemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateInfo.LaunchTemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_launchTemplateName = string(value["LaunchTemplateName"].GetString());
        m_launchTemplateNameHasBeenSet = true;
    }

    if (value.HasMember("DefaultVersionNumber") && !value["DefaultVersionNumber"].IsNull())
    {
        if (!value["DefaultVersionNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateInfo.DefaultVersionNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultVersionNumber = value["DefaultVersionNumber"].GetUint64();
        m_defaultVersionNumberHasBeenSet = true;
    }

    if (value.HasMember("LaunchTemplateVersionCount") && !value["LaunchTemplateVersionCount"].IsNull())
    {
        if (!value["LaunchTemplateVersionCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateInfo.LaunchTemplateVersionCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_launchTemplateVersionCount = value["LaunchTemplateVersionCount"].GetUint64();
        m_launchTemplateVersionCountHasBeenSet = true;
    }

    if (value.HasMember("CreatedBy") && !value["CreatedBy"].IsNull())
    {
        if (!value["CreatedBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateInfo.CreatedBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdBy = string(value["CreatedBy"].GetString());
        m_createdByHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplateInfo.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LaunchTemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_latestVersionNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestVersionNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latestVersionNumber, allocator);
    }

    if (m_launchTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_launchTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_launchTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchTemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_launchTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultVersionNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultVersionNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultVersionNumber, allocator);
    }

    if (m_launchTemplateVersionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchTemplateVersionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_launchTemplateVersionCount, allocator);
    }

    if (m_createdByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdBy.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t LaunchTemplateInfo::GetLatestVersionNumber() const
{
    return m_latestVersionNumber;
}

void LaunchTemplateInfo::SetLatestVersionNumber(const uint64_t& _latestVersionNumber)
{
    m_latestVersionNumber = _latestVersionNumber;
    m_latestVersionNumberHasBeenSet = true;
}

bool LaunchTemplateInfo::LatestVersionNumberHasBeenSet() const
{
    return m_latestVersionNumberHasBeenSet;
}

string LaunchTemplateInfo::GetLaunchTemplateId() const
{
    return m_launchTemplateId;
}

void LaunchTemplateInfo::SetLaunchTemplateId(const string& _launchTemplateId)
{
    m_launchTemplateId = _launchTemplateId;
    m_launchTemplateIdHasBeenSet = true;
}

bool LaunchTemplateInfo::LaunchTemplateIdHasBeenSet() const
{
    return m_launchTemplateIdHasBeenSet;
}

string LaunchTemplateInfo::GetLaunchTemplateName() const
{
    return m_launchTemplateName;
}

void LaunchTemplateInfo::SetLaunchTemplateName(const string& _launchTemplateName)
{
    m_launchTemplateName = _launchTemplateName;
    m_launchTemplateNameHasBeenSet = true;
}

bool LaunchTemplateInfo::LaunchTemplateNameHasBeenSet() const
{
    return m_launchTemplateNameHasBeenSet;
}

uint64_t LaunchTemplateInfo::GetDefaultVersionNumber() const
{
    return m_defaultVersionNumber;
}

void LaunchTemplateInfo::SetDefaultVersionNumber(const uint64_t& _defaultVersionNumber)
{
    m_defaultVersionNumber = _defaultVersionNumber;
    m_defaultVersionNumberHasBeenSet = true;
}

bool LaunchTemplateInfo::DefaultVersionNumberHasBeenSet() const
{
    return m_defaultVersionNumberHasBeenSet;
}

uint64_t LaunchTemplateInfo::GetLaunchTemplateVersionCount() const
{
    return m_launchTemplateVersionCount;
}

void LaunchTemplateInfo::SetLaunchTemplateVersionCount(const uint64_t& _launchTemplateVersionCount)
{
    m_launchTemplateVersionCount = _launchTemplateVersionCount;
    m_launchTemplateVersionCountHasBeenSet = true;
}

bool LaunchTemplateInfo::LaunchTemplateVersionCountHasBeenSet() const
{
    return m_launchTemplateVersionCountHasBeenSet;
}

string LaunchTemplateInfo::GetCreatedBy() const
{
    return m_createdBy;
}

void LaunchTemplateInfo::SetCreatedBy(const string& _createdBy)
{
    m_createdBy = _createdBy;
    m_createdByHasBeenSet = true;
}

bool LaunchTemplateInfo::CreatedByHasBeenSet() const
{
    return m_createdByHasBeenSet;
}

string LaunchTemplateInfo::GetCreationTime() const
{
    return m_creationTime;
}

void LaunchTemplateInfo::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool LaunchTemplateInfo::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

