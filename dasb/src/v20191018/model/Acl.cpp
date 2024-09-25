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

#include <tencentcloud/dasb/v20191018/model/Acl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

Acl::Acl() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_allowDiskRedirectHasBeenSet(false),
    m_allowClipFileUpHasBeenSet(false),
    m_allowClipFileDownHasBeenSet(false),
    m_allowClipTextUpHasBeenSet(false),
    m_allowClipTextDownHasBeenSet(false),
    m_allowFileUpHasBeenSet(false),
    m_maxFileUpSizeHasBeenSet(false),
    m_allowFileDownHasBeenSet(false),
    m_maxFileDownSizeHasBeenSet(false),
    m_allowAnyAccountHasBeenSet(false),
    m_userSetHasBeenSet(false),
    m_userGroupSetHasBeenSet(false),
    m_deviceSetHasBeenSet(false),
    m_deviceGroupSetHasBeenSet(false),
    m_accountSetHasBeenSet(false),
    m_cmdTemplateSetHasBeenSet(false),
    m_allowDiskFileUpHasBeenSet(false),
    m_allowDiskFileDownHasBeenSet(false),
    m_allowShellFileUpHasBeenSet(false),
    m_allowShellFileDownHasBeenSet(false),
    m_allowFileDelHasBeenSet(false),
    m_validateFromHasBeenSet(false),
    m_validateToHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_departmentHasBeenSet(false),
    m_allowAccessCredentialHasBeenSet(false),
    m_aCTemplateSetHasBeenSet(false),
    m_whiteCmdsHasBeenSet(false),
    m_allowKeyboardLoggerHasBeenSet(false)
{
}

CoreInternalOutcome Acl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AllowDiskRedirect") && !value["AllowDiskRedirect"].IsNull())
    {
        if (!value["AllowDiskRedirect"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.AllowDiskRedirect` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowDiskRedirect = value["AllowDiskRedirect"].GetBool();
        m_allowDiskRedirectHasBeenSet = true;
    }

    if (value.HasMember("AllowClipFileUp") && !value["AllowClipFileUp"].IsNull())
    {
        if (!value["AllowClipFileUp"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.AllowClipFileUp` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowClipFileUp = value["AllowClipFileUp"].GetBool();
        m_allowClipFileUpHasBeenSet = true;
    }

    if (value.HasMember("AllowClipFileDown") && !value["AllowClipFileDown"].IsNull())
    {
        if (!value["AllowClipFileDown"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.AllowClipFileDown` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowClipFileDown = value["AllowClipFileDown"].GetBool();
        m_allowClipFileDownHasBeenSet = true;
    }

    if (value.HasMember("AllowClipTextUp") && !value["AllowClipTextUp"].IsNull())
    {
        if (!value["AllowClipTextUp"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.AllowClipTextUp` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowClipTextUp = value["AllowClipTextUp"].GetBool();
        m_allowClipTextUpHasBeenSet = true;
    }

    if (value.HasMember("AllowClipTextDown") && !value["AllowClipTextDown"].IsNull())
    {
        if (!value["AllowClipTextDown"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.AllowClipTextDown` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowClipTextDown = value["AllowClipTextDown"].GetBool();
        m_allowClipTextDownHasBeenSet = true;
    }

    if (value.HasMember("AllowFileUp") && !value["AllowFileUp"].IsNull())
    {
        if (!value["AllowFileUp"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.AllowFileUp` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowFileUp = value["AllowFileUp"].GetBool();
        m_allowFileUpHasBeenSet = true;
    }

    if (value.HasMember("MaxFileUpSize") && !value["MaxFileUpSize"].IsNull())
    {
        if (!value["MaxFileUpSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.MaxFileUpSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxFileUpSize = value["MaxFileUpSize"].GetUint64();
        m_maxFileUpSizeHasBeenSet = true;
    }

    if (value.HasMember("AllowFileDown") && !value["AllowFileDown"].IsNull())
    {
        if (!value["AllowFileDown"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.AllowFileDown` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowFileDown = value["AllowFileDown"].GetBool();
        m_allowFileDownHasBeenSet = true;
    }

    if (value.HasMember("MaxFileDownSize") && !value["MaxFileDownSize"].IsNull())
    {
        if (!value["MaxFileDownSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.MaxFileDownSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxFileDownSize = value["MaxFileDownSize"].GetUint64();
        m_maxFileDownSizeHasBeenSet = true;
    }

    if (value.HasMember("AllowAnyAccount") && !value["AllowAnyAccount"].IsNull())
    {
        if (!value["AllowAnyAccount"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.AllowAnyAccount` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowAnyAccount = value["AllowAnyAccount"].GetBool();
        m_allowAnyAccountHasBeenSet = true;
    }

    if (value.HasMember("UserSet") && !value["UserSet"].IsNull())
    {
        if (!value["UserSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Acl.UserSet` is not array type"));

        const rapidjson::Value &tmpValue = value["UserSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            User item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_userSet.push_back(item);
        }
        m_userSetHasBeenSet = true;
    }

    if (value.HasMember("UserGroupSet") && !value["UserGroupSet"].IsNull())
    {
        if (!value["UserGroupSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Acl.UserGroupSet` is not array type"));

        const rapidjson::Value &tmpValue = value["UserGroupSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Group item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_userGroupSet.push_back(item);
        }
        m_userGroupSetHasBeenSet = true;
    }

    if (value.HasMember("DeviceSet") && !value["DeviceSet"].IsNull())
    {
        if (!value["DeviceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Acl.DeviceSet` is not array type"));

        const rapidjson::Value &tmpValue = value["DeviceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Device item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deviceSet.push_back(item);
        }
        m_deviceSetHasBeenSet = true;
    }

    if (value.HasMember("DeviceGroupSet") && !value["DeviceGroupSet"].IsNull())
    {
        if (!value["DeviceGroupSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Acl.DeviceGroupSet` is not array type"));

        const rapidjson::Value &tmpValue = value["DeviceGroupSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Group item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deviceGroupSet.push_back(item);
        }
        m_deviceGroupSetHasBeenSet = true;
    }

    if (value.HasMember("AccountSet") && !value["AccountSet"].IsNull())
    {
        if (!value["AccountSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Acl.AccountSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AccountSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_accountSet.push_back((*itr).GetString());
        }
        m_accountSetHasBeenSet = true;
    }

    if (value.HasMember("CmdTemplateSet") && !value["CmdTemplateSet"].IsNull())
    {
        if (!value["CmdTemplateSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Acl.CmdTemplateSet` is not array type"));

        const rapidjson::Value &tmpValue = value["CmdTemplateSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CmdTemplate item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cmdTemplateSet.push_back(item);
        }
        m_cmdTemplateSetHasBeenSet = true;
    }

    if (value.HasMember("AllowDiskFileUp") && !value["AllowDiskFileUp"].IsNull())
    {
        if (!value["AllowDiskFileUp"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.AllowDiskFileUp` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowDiskFileUp = value["AllowDiskFileUp"].GetBool();
        m_allowDiskFileUpHasBeenSet = true;
    }

    if (value.HasMember("AllowDiskFileDown") && !value["AllowDiskFileDown"].IsNull())
    {
        if (!value["AllowDiskFileDown"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.AllowDiskFileDown` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowDiskFileDown = value["AllowDiskFileDown"].GetBool();
        m_allowDiskFileDownHasBeenSet = true;
    }

    if (value.HasMember("AllowShellFileUp") && !value["AllowShellFileUp"].IsNull())
    {
        if (!value["AllowShellFileUp"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.AllowShellFileUp` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowShellFileUp = value["AllowShellFileUp"].GetBool();
        m_allowShellFileUpHasBeenSet = true;
    }

    if (value.HasMember("AllowShellFileDown") && !value["AllowShellFileDown"].IsNull())
    {
        if (!value["AllowShellFileDown"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.AllowShellFileDown` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowShellFileDown = value["AllowShellFileDown"].GetBool();
        m_allowShellFileDownHasBeenSet = true;
    }

    if (value.HasMember("AllowFileDel") && !value["AllowFileDel"].IsNull())
    {
        if (!value["AllowFileDel"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.AllowFileDel` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowFileDel = value["AllowFileDel"].GetBool();
        m_allowFileDelHasBeenSet = true;
    }

    if (value.HasMember("ValidateFrom") && !value["ValidateFrom"].IsNull())
    {
        if (!value["ValidateFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.ValidateFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validateFrom = string(value["ValidateFrom"].GetString());
        m_validateFromHasBeenSet = true;
    }

    if (value.HasMember("ValidateTo") && !value["ValidateTo"].IsNull())
    {
        if (!value["ValidateTo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.ValidateTo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validateTo = string(value["ValidateTo"].GetString());
        m_validateToHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Department") && !value["Department"].IsNull())
    {
        if (!value["Department"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.Department` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_department.Deserialize(value["Department"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_departmentHasBeenSet = true;
    }

    if (value.HasMember("AllowAccessCredential") && !value["AllowAccessCredential"].IsNull())
    {
        if (!value["AllowAccessCredential"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.AllowAccessCredential` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowAccessCredential = value["AllowAccessCredential"].GetBool();
        m_allowAccessCredentialHasBeenSet = true;
    }

    if (value.HasMember("ACTemplateSet") && !value["ACTemplateSet"].IsNull())
    {
        if (!value["ACTemplateSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Acl.ACTemplateSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ACTemplateSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ACTemplate item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aCTemplateSet.push_back(item);
        }
        m_aCTemplateSetHasBeenSet = true;
    }

    if (value.HasMember("WhiteCmds") && !value["WhiteCmds"].IsNull())
    {
        if (!value["WhiteCmds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Acl.WhiteCmds` is not array type"));

        const rapidjson::Value &tmpValue = value["WhiteCmds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_whiteCmds.push_back((*itr).GetString());
        }
        m_whiteCmdsHasBeenSet = true;
    }

    if (value.HasMember("AllowKeyboardLogger") && !value["AllowKeyboardLogger"].IsNull())
    {
        if (!value["AllowKeyboardLogger"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.AllowKeyboardLogger` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowKeyboardLogger = value["AllowKeyboardLogger"].GetBool();
        m_allowKeyboardLoggerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Acl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_allowDiskRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowDiskRedirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowDiskRedirect, allocator);
    }

    if (m_allowClipFileUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowClipFileUp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowClipFileUp, allocator);
    }

    if (m_allowClipFileDownHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowClipFileDown";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowClipFileDown, allocator);
    }

    if (m_allowClipTextUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowClipTextUp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowClipTextUp, allocator);
    }

    if (m_allowClipTextDownHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowClipTextDown";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowClipTextDown, allocator);
    }

    if (m_allowFileUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowFileUp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowFileUp, allocator);
    }

    if (m_maxFileUpSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxFileUpSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxFileUpSize, allocator);
    }

    if (m_allowFileDownHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowFileDown";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowFileDown, allocator);
    }

    if (m_maxFileDownSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxFileDownSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxFileDownSize, allocator);
    }

    if (m_allowAnyAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowAnyAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowAnyAccount, allocator);
    }

    if (m_userSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userSet.begin(); itr != m_userSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_userGroupSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userGroupSet.begin(); itr != m_userGroupSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deviceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deviceSet.begin(); itr != m_deviceSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deviceGroupSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceGroupSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deviceGroupSet.begin(); itr != m_deviceGroupSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_accountSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accountSet.begin(); itr != m_accountSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cmdTemplateSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdTemplateSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cmdTemplateSet.begin(); itr != m_cmdTemplateSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_allowDiskFileUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowDiskFileUp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowDiskFileUp, allocator);
    }

    if (m_allowDiskFileDownHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowDiskFileDown";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowDiskFileDown, allocator);
    }

    if (m_allowShellFileUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowShellFileUp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowShellFileUp, allocator);
    }

    if (m_allowShellFileDownHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowShellFileDown";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowShellFileDown, allocator);
    }

    if (m_allowFileDelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowFileDel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowFileDel, allocator);
    }

    if (m_validateFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidateFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validateFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_validateToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidateTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validateTo.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_departmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Department";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_department.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_allowAccessCredentialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowAccessCredential";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowAccessCredential, allocator);
    }

    if (m_aCTemplateSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ACTemplateSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aCTemplateSet.begin(); itr != m_aCTemplateSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_whiteCmdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteCmds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_whiteCmds.begin(); itr != m_whiteCmds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_allowKeyboardLoggerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowKeyboardLogger";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowKeyboardLogger, allocator);
    }

}


uint64_t Acl::GetId() const
{
    return m_id;
}

void Acl::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Acl::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Acl::GetName() const
{
    return m_name;
}

void Acl::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Acl::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool Acl::GetAllowDiskRedirect() const
{
    return m_allowDiskRedirect;
}

void Acl::SetAllowDiskRedirect(const bool& _allowDiskRedirect)
{
    m_allowDiskRedirect = _allowDiskRedirect;
    m_allowDiskRedirectHasBeenSet = true;
}

bool Acl::AllowDiskRedirectHasBeenSet() const
{
    return m_allowDiskRedirectHasBeenSet;
}

bool Acl::GetAllowClipFileUp() const
{
    return m_allowClipFileUp;
}

void Acl::SetAllowClipFileUp(const bool& _allowClipFileUp)
{
    m_allowClipFileUp = _allowClipFileUp;
    m_allowClipFileUpHasBeenSet = true;
}

bool Acl::AllowClipFileUpHasBeenSet() const
{
    return m_allowClipFileUpHasBeenSet;
}

bool Acl::GetAllowClipFileDown() const
{
    return m_allowClipFileDown;
}

void Acl::SetAllowClipFileDown(const bool& _allowClipFileDown)
{
    m_allowClipFileDown = _allowClipFileDown;
    m_allowClipFileDownHasBeenSet = true;
}

bool Acl::AllowClipFileDownHasBeenSet() const
{
    return m_allowClipFileDownHasBeenSet;
}

bool Acl::GetAllowClipTextUp() const
{
    return m_allowClipTextUp;
}

void Acl::SetAllowClipTextUp(const bool& _allowClipTextUp)
{
    m_allowClipTextUp = _allowClipTextUp;
    m_allowClipTextUpHasBeenSet = true;
}

bool Acl::AllowClipTextUpHasBeenSet() const
{
    return m_allowClipTextUpHasBeenSet;
}

bool Acl::GetAllowClipTextDown() const
{
    return m_allowClipTextDown;
}

void Acl::SetAllowClipTextDown(const bool& _allowClipTextDown)
{
    m_allowClipTextDown = _allowClipTextDown;
    m_allowClipTextDownHasBeenSet = true;
}

bool Acl::AllowClipTextDownHasBeenSet() const
{
    return m_allowClipTextDownHasBeenSet;
}

bool Acl::GetAllowFileUp() const
{
    return m_allowFileUp;
}

void Acl::SetAllowFileUp(const bool& _allowFileUp)
{
    m_allowFileUp = _allowFileUp;
    m_allowFileUpHasBeenSet = true;
}

bool Acl::AllowFileUpHasBeenSet() const
{
    return m_allowFileUpHasBeenSet;
}

uint64_t Acl::GetMaxFileUpSize() const
{
    return m_maxFileUpSize;
}

void Acl::SetMaxFileUpSize(const uint64_t& _maxFileUpSize)
{
    m_maxFileUpSize = _maxFileUpSize;
    m_maxFileUpSizeHasBeenSet = true;
}

bool Acl::MaxFileUpSizeHasBeenSet() const
{
    return m_maxFileUpSizeHasBeenSet;
}

bool Acl::GetAllowFileDown() const
{
    return m_allowFileDown;
}

void Acl::SetAllowFileDown(const bool& _allowFileDown)
{
    m_allowFileDown = _allowFileDown;
    m_allowFileDownHasBeenSet = true;
}

bool Acl::AllowFileDownHasBeenSet() const
{
    return m_allowFileDownHasBeenSet;
}

uint64_t Acl::GetMaxFileDownSize() const
{
    return m_maxFileDownSize;
}

void Acl::SetMaxFileDownSize(const uint64_t& _maxFileDownSize)
{
    m_maxFileDownSize = _maxFileDownSize;
    m_maxFileDownSizeHasBeenSet = true;
}

bool Acl::MaxFileDownSizeHasBeenSet() const
{
    return m_maxFileDownSizeHasBeenSet;
}

bool Acl::GetAllowAnyAccount() const
{
    return m_allowAnyAccount;
}

void Acl::SetAllowAnyAccount(const bool& _allowAnyAccount)
{
    m_allowAnyAccount = _allowAnyAccount;
    m_allowAnyAccountHasBeenSet = true;
}

bool Acl::AllowAnyAccountHasBeenSet() const
{
    return m_allowAnyAccountHasBeenSet;
}

vector<User> Acl::GetUserSet() const
{
    return m_userSet;
}

void Acl::SetUserSet(const vector<User>& _userSet)
{
    m_userSet = _userSet;
    m_userSetHasBeenSet = true;
}

bool Acl::UserSetHasBeenSet() const
{
    return m_userSetHasBeenSet;
}

vector<Group> Acl::GetUserGroupSet() const
{
    return m_userGroupSet;
}

void Acl::SetUserGroupSet(const vector<Group>& _userGroupSet)
{
    m_userGroupSet = _userGroupSet;
    m_userGroupSetHasBeenSet = true;
}

bool Acl::UserGroupSetHasBeenSet() const
{
    return m_userGroupSetHasBeenSet;
}

vector<Device> Acl::GetDeviceSet() const
{
    return m_deviceSet;
}

void Acl::SetDeviceSet(const vector<Device>& _deviceSet)
{
    m_deviceSet = _deviceSet;
    m_deviceSetHasBeenSet = true;
}

bool Acl::DeviceSetHasBeenSet() const
{
    return m_deviceSetHasBeenSet;
}

vector<Group> Acl::GetDeviceGroupSet() const
{
    return m_deviceGroupSet;
}

void Acl::SetDeviceGroupSet(const vector<Group>& _deviceGroupSet)
{
    m_deviceGroupSet = _deviceGroupSet;
    m_deviceGroupSetHasBeenSet = true;
}

bool Acl::DeviceGroupSetHasBeenSet() const
{
    return m_deviceGroupSetHasBeenSet;
}

vector<string> Acl::GetAccountSet() const
{
    return m_accountSet;
}

void Acl::SetAccountSet(const vector<string>& _accountSet)
{
    m_accountSet = _accountSet;
    m_accountSetHasBeenSet = true;
}

bool Acl::AccountSetHasBeenSet() const
{
    return m_accountSetHasBeenSet;
}

vector<CmdTemplate> Acl::GetCmdTemplateSet() const
{
    return m_cmdTemplateSet;
}

void Acl::SetCmdTemplateSet(const vector<CmdTemplate>& _cmdTemplateSet)
{
    m_cmdTemplateSet = _cmdTemplateSet;
    m_cmdTemplateSetHasBeenSet = true;
}

bool Acl::CmdTemplateSetHasBeenSet() const
{
    return m_cmdTemplateSetHasBeenSet;
}

bool Acl::GetAllowDiskFileUp() const
{
    return m_allowDiskFileUp;
}

void Acl::SetAllowDiskFileUp(const bool& _allowDiskFileUp)
{
    m_allowDiskFileUp = _allowDiskFileUp;
    m_allowDiskFileUpHasBeenSet = true;
}

bool Acl::AllowDiskFileUpHasBeenSet() const
{
    return m_allowDiskFileUpHasBeenSet;
}

bool Acl::GetAllowDiskFileDown() const
{
    return m_allowDiskFileDown;
}

void Acl::SetAllowDiskFileDown(const bool& _allowDiskFileDown)
{
    m_allowDiskFileDown = _allowDiskFileDown;
    m_allowDiskFileDownHasBeenSet = true;
}

bool Acl::AllowDiskFileDownHasBeenSet() const
{
    return m_allowDiskFileDownHasBeenSet;
}

bool Acl::GetAllowShellFileUp() const
{
    return m_allowShellFileUp;
}

void Acl::SetAllowShellFileUp(const bool& _allowShellFileUp)
{
    m_allowShellFileUp = _allowShellFileUp;
    m_allowShellFileUpHasBeenSet = true;
}

bool Acl::AllowShellFileUpHasBeenSet() const
{
    return m_allowShellFileUpHasBeenSet;
}

bool Acl::GetAllowShellFileDown() const
{
    return m_allowShellFileDown;
}

void Acl::SetAllowShellFileDown(const bool& _allowShellFileDown)
{
    m_allowShellFileDown = _allowShellFileDown;
    m_allowShellFileDownHasBeenSet = true;
}

bool Acl::AllowShellFileDownHasBeenSet() const
{
    return m_allowShellFileDownHasBeenSet;
}

bool Acl::GetAllowFileDel() const
{
    return m_allowFileDel;
}

void Acl::SetAllowFileDel(const bool& _allowFileDel)
{
    m_allowFileDel = _allowFileDel;
    m_allowFileDelHasBeenSet = true;
}

bool Acl::AllowFileDelHasBeenSet() const
{
    return m_allowFileDelHasBeenSet;
}

string Acl::GetValidateFrom() const
{
    return m_validateFrom;
}

void Acl::SetValidateFrom(const string& _validateFrom)
{
    m_validateFrom = _validateFrom;
    m_validateFromHasBeenSet = true;
}

bool Acl::ValidateFromHasBeenSet() const
{
    return m_validateFromHasBeenSet;
}

string Acl::GetValidateTo() const
{
    return m_validateTo;
}

void Acl::SetValidateTo(const string& _validateTo)
{
    m_validateTo = _validateTo;
    m_validateToHasBeenSet = true;
}

bool Acl::ValidateToHasBeenSet() const
{
    return m_validateToHasBeenSet;
}

uint64_t Acl::GetStatus() const
{
    return m_status;
}

void Acl::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Acl::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

Department Acl::GetDepartment() const
{
    return m_department;
}

void Acl::SetDepartment(const Department& _department)
{
    m_department = _department;
    m_departmentHasBeenSet = true;
}

bool Acl::DepartmentHasBeenSet() const
{
    return m_departmentHasBeenSet;
}

bool Acl::GetAllowAccessCredential() const
{
    return m_allowAccessCredential;
}

void Acl::SetAllowAccessCredential(const bool& _allowAccessCredential)
{
    m_allowAccessCredential = _allowAccessCredential;
    m_allowAccessCredentialHasBeenSet = true;
}

bool Acl::AllowAccessCredentialHasBeenSet() const
{
    return m_allowAccessCredentialHasBeenSet;
}

vector<ACTemplate> Acl::GetACTemplateSet() const
{
    return m_aCTemplateSet;
}

void Acl::SetACTemplateSet(const vector<ACTemplate>& _aCTemplateSet)
{
    m_aCTemplateSet = _aCTemplateSet;
    m_aCTemplateSetHasBeenSet = true;
}

bool Acl::ACTemplateSetHasBeenSet() const
{
    return m_aCTemplateSetHasBeenSet;
}

vector<string> Acl::GetWhiteCmds() const
{
    return m_whiteCmds;
}

void Acl::SetWhiteCmds(const vector<string>& _whiteCmds)
{
    m_whiteCmds = _whiteCmds;
    m_whiteCmdsHasBeenSet = true;
}

bool Acl::WhiteCmdsHasBeenSet() const
{
    return m_whiteCmdsHasBeenSet;
}

bool Acl::GetAllowKeyboardLogger() const
{
    return m_allowKeyboardLogger;
}

void Acl::SetAllowKeyboardLogger(const bool& _allowKeyboardLogger)
{
    m_allowKeyboardLogger = _allowKeyboardLogger;
    m_allowKeyboardLoggerHasBeenSet = true;
}

bool Acl::AllowKeyboardLoggerHasBeenSet() const
{
    return m_allowKeyboardLoggerHasBeenSet;
}

