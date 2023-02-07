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

#include <tencentcloud/cdwch/v20200915/model/InstanceConfigInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

InstanceConfigInfo::InstanceConfigInfo() :
    m_confKeyHasBeenSet(false),
    m_confValueHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_needRestartHasBeenSet(false),
    m_editableHasBeenSet(false),
    m_confDescHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_modifyRuleTypeHasBeenSet(false),
    m_modifyRuleValueHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome InstanceConfigInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfKey") && !value["ConfKey"].IsNull())
    {
        if (!value["ConfKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfigInfo.ConfKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_confKey = string(value["ConfKey"].GetString());
        m_confKeyHasBeenSet = true;
    }

    if (value.HasMember("ConfValue") && !value["ConfValue"].IsNull())
    {
        if (!value["ConfValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfigInfo.ConfValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_confValue = string(value["ConfValue"].GetString());
        m_confValueHasBeenSet = true;
    }

    if (value.HasMember("DefaultValue") && !value["DefaultValue"].IsNull())
    {
        if (!value["DefaultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfigInfo.DefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValue = string(value["DefaultValue"].GetString());
        m_defaultValueHasBeenSet = true;
    }

    if (value.HasMember("NeedRestart") && !value["NeedRestart"].IsNull())
    {
        if (!value["NeedRestart"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfigInfo.NeedRestart` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needRestart = value["NeedRestart"].GetBool();
        m_needRestartHasBeenSet = true;
    }

    if (value.HasMember("Editable") && !value["Editable"].IsNull())
    {
        if (!value["Editable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfigInfo.Editable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_editable = value["Editable"].GetBool();
        m_editableHasBeenSet = true;
    }

    if (value.HasMember("ConfDesc") && !value["ConfDesc"].IsNull())
    {
        if (!value["ConfDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfigInfo.ConfDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_confDesc = string(value["ConfDesc"].GetString());
        m_confDescHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfigInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("ModifyRuleType") && !value["ModifyRuleType"].IsNull())
    {
        if (!value["ModifyRuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfigInfo.ModifyRuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyRuleType = string(value["ModifyRuleType"].GetString());
        m_modifyRuleTypeHasBeenSet = true;
    }

    if (value.HasMember("ModifyRuleValue") && !value["ModifyRuleValue"].IsNull())
    {
        if (!value["ModifyRuleValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfigInfo.ModifyRuleValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyRuleValue = string(value["ModifyRuleValue"].GetString());
        m_modifyRuleValueHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfigInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfigInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceConfigInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_confKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_confKey.c_str(), allocator).Move(), allocator);
    }

    if (m_confValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_confValue.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
    }

    if (m_needRestartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedRestart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needRestart, allocator);
    }

    if (m_editableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Editable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_editable, allocator);
    }

    if (m_confDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_confDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyRuleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyRuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyRuleType.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyRuleValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyRuleValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyRuleValue.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

}


string InstanceConfigInfo::GetConfKey() const
{
    return m_confKey;
}

void InstanceConfigInfo::SetConfKey(const string& _confKey)
{
    m_confKey = _confKey;
    m_confKeyHasBeenSet = true;
}

bool InstanceConfigInfo::ConfKeyHasBeenSet() const
{
    return m_confKeyHasBeenSet;
}

string InstanceConfigInfo::GetConfValue() const
{
    return m_confValue;
}

void InstanceConfigInfo::SetConfValue(const string& _confValue)
{
    m_confValue = _confValue;
    m_confValueHasBeenSet = true;
}

bool InstanceConfigInfo::ConfValueHasBeenSet() const
{
    return m_confValueHasBeenSet;
}

string InstanceConfigInfo::GetDefaultValue() const
{
    return m_defaultValue;
}

void InstanceConfigInfo::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool InstanceConfigInfo::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}

bool InstanceConfigInfo::GetNeedRestart() const
{
    return m_needRestart;
}

void InstanceConfigInfo::SetNeedRestart(const bool& _needRestart)
{
    m_needRestart = _needRestart;
    m_needRestartHasBeenSet = true;
}

bool InstanceConfigInfo::NeedRestartHasBeenSet() const
{
    return m_needRestartHasBeenSet;
}

bool InstanceConfigInfo::GetEditable() const
{
    return m_editable;
}

void InstanceConfigInfo::SetEditable(const bool& _editable)
{
    m_editable = _editable;
    m_editableHasBeenSet = true;
}

bool InstanceConfigInfo::EditableHasBeenSet() const
{
    return m_editableHasBeenSet;
}

string InstanceConfigInfo::GetConfDesc() const
{
    return m_confDesc;
}

void InstanceConfigInfo::SetConfDesc(const string& _confDesc)
{
    m_confDesc = _confDesc;
    m_confDescHasBeenSet = true;
}

bool InstanceConfigInfo::ConfDescHasBeenSet() const
{
    return m_confDescHasBeenSet;
}

string InstanceConfigInfo::GetFileName() const
{
    return m_fileName;
}

void InstanceConfigInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool InstanceConfigInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string InstanceConfigInfo::GetModifyRuleType() const
{
    return m_modifyRuleType;
}

void InstanceConfigInfo::SetModifyRuleType(const string& _modifyRuleType)
{
    m_modifyRuleType = _modifyRuleType;
    m_modifyRuleTypeHasBeenSet = true;
}

bool InstanceConfigInfo::ModifyRuleTypeHasBeenSet() const
{
    return m_modifyRuleTypeHasBeenSet;
}

string InstanceConfigInfo::GetModifyRuleValue() const
{
    return m_modifyRuleValue;
}

void InstanceConfigInfo::SetModifyRuleValue(const string& _modifyRuleValue)
{
    m_modifyRuleValue = _modifyRuleValue;
    m_modifyRuleValueHasBeenSet = true;
}

bool InstanceConfigInfo::ModifyRuleValueHasBeenSet() const
{
    return m_modifyRuleValueHasBeenSet;
}

string InstanceConfigInfo::GetUin() const
{
    return m_uin;
}

void InstanceConfigInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool InstanceConfigInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string InstanceConfigInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void InstanceConfigInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool InstanceConfigInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

