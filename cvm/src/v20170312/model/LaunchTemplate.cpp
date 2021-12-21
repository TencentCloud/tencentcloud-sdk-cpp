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

#include <tencentcloud/cvm/v20170312/model/LaunchTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

LaunchTemplate::LaunchTemplate() :
    m_launchTemplateIdHasBeenSet(false),
    m_launchTemplateVersionHasBeenSet(false)
{
}

CoreInternalOutcome LaunchTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LaunchTemplateId") && !value["LaunchTemplateId"].IsNull())
    {
        if (!value["LaunchTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplate.LaunchTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_launchTemplateId = string(value["LaunchTemplateId"].GetString());
        m_launchTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("LaunchTemplateVersion") && !value["LaunchTemplateVersion"].IsNull())
    {
        if (!value["LaunchTemplateVersion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LaunchTemplate.LaunchTemplateVersion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_launchTemplateVersion = value["LaunchTemplateVersion"].GetUint64();
        m_launchTemplateVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LaunchTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_launchTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_launchTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_launchTemplateVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchTemplateVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_launchTemplateVersion, allocator);
    }

}


string LaunchTemplate::GetLaunchTemplateId() const
{
    return m_launchTemplateId;
}

void LaunchTemplate::SetLaunchTemplateId(const string& _launchTemplateId)
{
    m_launchTemplateId = _launchTemplateId;
    m_launchTemplateIdHasBeenSet = true;
}

bool LaunchTemplate::LaunchTemplateIdHasBeenSet() const
{
    return m_launchTemplateIdHasBeenSet;
}

uint64_t LaunchTemplate::GetLaunchTemplateVersion() const
{
    return m_launchTemplateVersion;
}

void LaunchTemplate::SetLaunchTemplateVersion(const uint64_t& _launchTemplateVersion)
{
    m_launchTemplateVersion = _launchTemplateVersion;
    m_launchTemplateVersionHasBeenSet = true;
}

bool LaunchTemplate::LaunchTemplateVersionHasBeenSet() const
{
    return m_launchTemplateVersionHasBeenSet;
}

