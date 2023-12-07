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

#include <tencentcloud/tke/v20180525/model/ResourceDeleteOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ResourceDeleteOption::ResourceDeleteOption() :
    m_resourceTypeHasBeenSet(false),
    m_deleteModeHasBeenSet(false),
    m_skipDeletionProtectionHasBeenSet(false)
{
}

CoreInternalOutcome ResourceDeleteOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDeleteOption.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("DeleteMode") && !value["DeleteMode"].IsNull())
    {
        if (!value["DeleteMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDeleteOption.DeleteMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deleteMode = string(value["DeleteMode"].GetString());
        m_deleteModeHasBeenSet = true;
    }

    if (value.HasMember("SkipDeletionProtection") && !value["SkipDeletionProtection"].IsNull())
    {
        if (!value["SkipDeletionProtection"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDeleteOption.SkipDeletionProtection` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_skipDeletionProtection = value["SkipDeletionProtection"].GetBool();
        m_skipDeletionProtectionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceDeleteOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deleteMode.c_str(), allocator).Move(), allocator);
    }

    if (m_skipDeletionProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipDeletionProtection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_skipDeletionProtection, allocator);
    }

}


string ResourceDeleteOption::GetResourceType() const
{
    return m_resourceType;
}

void ResourceDeleteOption::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ResourceDeleteOption::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string ResourceDeleteOption::GetDeleteMode() const
{
    return m_deleteMode;
}

void ResourceDeleteOption::SetDeleteMode(const string& _deleteMode)
{
    m_deleteMode = _deleteMode;
    m_deleteModeHasBeenSet = true;
}

bool ResourceDeleteOption::DeleteModeHasBeenSet() const
{
    return m_deleteModeHasBeenSet;
}

bool ResourceDeleteOption::GetSkipDeletionProtection() const
{
    return m_skipDeletionProtection;
}

void ResourceDeleteOption::SetSkipDeletionProtection(const bool& _skipDeletionProtection)
{
    m_skipDeletionProtection = _skipDeletionProtection;
    m_skipDeletionProtectionHasBeenSet = true;
}

bool ResourceDeleteOption::SkipDeletionProtectionHasBeenSet() const
{
    return m_skipDeletionProtectionHasBeenSet;
}

