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

#include <tencentcloud/ess/v20201111/model/CcInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CcInfo::CcInfo() :
    m_mobileHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ccTypeHasBeenSet(false),
    m_ccPermissionHasBeenSet(false),
    m_notifyTypeHasBeenSet(false)
{
}

CoreInternalOutcome CcInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcInfo.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CcType") && !value["CcType"].IsNull())
    {
        if (!value["CcType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CcInfo.CcType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ccType = value["CcType"].GetInt64();
        m_ccTypeHasBeenSet = true;
    }

    if (value.HasMember("CcPermission") && !value["CcPermission"].IsNull())
    {
        if (!value["CcPermission"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CcInfo.CcPermission` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ccPermission = value["CcPermission"].GetInt64();
        m_ccPermissionHasBeenSet = true;
    }

    if (value.HasMember("NotifyType") && !value["NotifyType"].IsNull())
    {
        if (!value["NotifyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcInfo.NotifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notifyType = string(value["NotifyType"].GetString());
        m_notifyTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CcInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ccTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ccType, allocator);
    }

    if (m_ccPermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcPermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ccPermission, allocator);
    }

    if (m_notifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notifyType.c_str(), allocator).Move(), allocator);
    }

}


string CcInfo::GetMobile() const
{
    return m_mobile;
}

void CcInfo::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool CcInfo::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string CcInfo::GetName() const
{
    return m_name;
}

void CcInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CcInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t CcInfo::GetCcType() const
{
    return m_ccType;
}

void CcInfo::SetCcType(const int64_t& _ccType)
{
    m_ccType = _ccType;
    m_ccTypeHasBeenSet = true;
}

bool CcInfo::CcTypeHasBeenSet() const
{
    return m_ccTypeHasBeenSet;
}

int64_t CcInfo::GetCcPermission() const
{
    return m_ccPermission;
}

void CcInfo::SetCcPermission(const int64_t& _ccPermission)
{
    m_ccPermission = _ccPermission;
    m_ccPermissionHasBeenSet = true;
}

bool CcInfo::CcPermissionHasBeenSet() const
{
    return m_ccPermissionHasBeenSet;
}

string CcInfo::GetNotifyType() const
{
    return m_notifyType;
}

void CcInfo::SetNotifyType(const string& _notifyType)
{
    m_notifyType = _notifyType;
    m_notifyTypeHasBeenSet = true;
}

bool CcInfo::NotifyTypeHasBeenSet() const
{
    return m_notifyTypeHasBeenSet;
}

