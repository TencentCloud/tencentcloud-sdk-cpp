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

#include <tencentcloud/csip/v20221121/model/CosPermissionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosPermissionInfo::CosPermissionInfo() :
    m_permissionSourceHasBeenSet(false),
    m_permissionContentHasBeenSet(false),
    m_grantResourceHasBeenSet(false),
    m_grantActionHasBeenSet(false),
    m_grantConditionHasBeenSet(false)
{
}

CoreInternalOutcome CosPermissionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PermissionSource") && !value["PermissionSource"].IsNull())
    {
        if (!value["PermissionSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosPermissionInfo.PermissionSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_permissionSource = string(value["PermissionSource"].GetString());
        m_permissionSourceHasBeenSet = true;
    }

    if (value.HasMember("PermissionContent") && !value["PermissionContent"].IsNull())
    {
        if (!value["PermissionContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosPermissionInfo.PermissionContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_permissionContent = string(value["PermissionContent"].GetString());
        m_permissionContentHasBeenSet = true;
    }

    if (value.HasMember("GrantResource") && !value["GrantResource"].IsNull())
    {
        if (!value["GrantResource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosPermissionInfo.GrantResource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grantResource = string(value["GrantResource"].GetString());
        m_grantResourceHasBeenSet = true;
    }

    if (value.HasMember("GrantAction") && !value["GrantAction"].IsNull())
    {
        if (!value["GrantAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosPermissionInfo.GrantAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grantAction = string(value["GrantAction"].GetString());
        m_grantActionHasBeenSet = true;
    }

    if (value.HasMember("GrantCondition") && !value["GrantCondition"].IsNull())
    {
        if (!value["GrantCondition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosPermissionInfo.GrantCondition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grantCondition = string(value["GrantCondition"].GetString());
        m_grantConditionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosPermissionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_permissionSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_permissionSource.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_permissionContent.c_str(), allocator).Move(), allocator);
    }

    if (m_grantResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrantResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grantResource.c_str(), allocator).Move(), allocator);
    }

    if (m_grantActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrantAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grantAction.c_str(), allocator).Move(), allocator);
    }

    if (m_grantConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrantCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grantCondition.c_str(), allocator).Move(), allocator);
    }

}


string CosPermissionInfo::GetPermissionSource() const
{
    return m_permissionSource;
}

void CosPermissionInfo::SetPermissionSource(const string& _permissionSource)
{
    m_permissionSource = _permissionSource;
    m_permissionSourceHasBeenSet = true;
}

bool CosPermissionInfo::PermissionSourceHasBeenSet() const
{
    return m_permissionSourceHasBeenSet;
}

string CosPermissionInfo::GetPermissionContent() const
{
    return m_permissionContent;
}

void CosPermissionInfo::SetPermissionContent(const string& _permissionContent)
{
    m_permissionContent = _permissionContent;
    m_permissionContentHasBeenSet = true;
}

bool CosPermissionInfo::PermissionContentHasBeenSet() const
{
    return m_permissionContentHasBeenSet;
}

string CosPermissionInfo::GetGrantResource() const
{
    return m_grantResource;
}

void CosPermissionInfo::SetGrantResource(const string& _grantResource)
{
    m_grantResource = _grantResource;
    m_grantResourceHasBeenSet = true;
}

bool CosPermissionInfo::GrantResourceHasBeenSet() const
{
    return m_grantResourceHasBeenSet;
}

string CosPermissionInfo::GetGrantAction() const
{
    return m_grantAction;
}

void CosPermissionInfo::SetGrantAction(const string& _grantAction)
{
    m_grantAction = _grantAction;
    m_grantActionHasBeenSet = true;
}

bool CosPermissionInfo::GrantActionHasBeenSet() const
{
    return m_grantActionHasBeenSet;
}

string CosPermissionInfo::GetGrantCondition() const
{
    return m_grantCondition;
}

void CosPermissionInfo::SetGrantCondition(const string& _grantCondition)
{
    m_grantCondition = _grantCondition;
    m_grantConditionHasBeenSet = true;
}

bool CosPermissionInfo::GrantConditionHasBeenSet() const
{
    return m_grantConditionHasBeenSet;
}

