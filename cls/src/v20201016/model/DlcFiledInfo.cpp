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

#include <tencentcloud/cls/v20201016/model/DlcFiledInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DlcFiledInfo::DlcFiledInfo() :
    m_clsFieldHasBeenSet(false),
    m_dlcFieldHasBeenSet(false),
    m_dlcFieldTypeHasBeenSet(false),
    m_fillFieldHasBeenSet(false),
    m_disableHasBeenSet(false)
{
}

CoreInternalOutcome DlcFiledInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClsField") && !value["ClsField"].IsNull())
    {
        if (!value["ClsField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DlcFiledInfo.ClsField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clsField = string(value["ClsField"].GetString());
        m_clsFieldHasBeenSet = true;
    }

    if (value.HasMember("DlcField") && !value["DlcField"].IsNull())
    {
        if (!value["DlcField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DlcFiledInfo.DlcField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dlcField = string(value["DlcField"].GetString());
        m_dlcFieldHasBeenSet = true;
    }

    if (value.HasMember("DlcFieldType") && !value["DlcFieldType"].IsNull())
    {
        if (!value["DlcFieldType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DlcFiledInfo.DlcFieldType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dlcFieldType = string(value["DlcFieldType"].GetString());
        m_dlcFieldTypeHasBeenSet = true;
    }

    if (value.HasMember("FillField") && !value["FillField"].IsNull())
    {
        if (!value["FillField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DlcFiledInfo.FillField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fillField = string(value["FillField"].GetString());
        m_fillFieldHasBeenSet = true;
    }

    if (value.HasMember("Disable") && !value["Disable"].IsNull())
    {
        if (!value["Disable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DlcFiledInfo.Disable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disable = value["Disable"].GetBool();
        m_disableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DlcFiledInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clsFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clsField.c_str(), allocator).Move(), allocator);
    }

    if (m_dlcFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DlcField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dlcField.c_str(), allocator).Move(), allocator);
    }

    if (m_dlcFieldTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DlcFieldType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dlcFieldType.c_str(), allocator).Move(), allocator);
    }

    if (m_fillFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FillField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fillField.c_str(), allocator).Move(), allocator);
    }

    if (m_disableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disable, allocator);
    }

}


string DlcFiledInfo::GetClsField() const
{
    return m_clsField;
}

void DlcFiledInfo::SetClsField(const string& _clsField)
{
    m_clsField = _clsField;
    m_clsFieldHasBeenSet = true;
}

bool DlcFiledInfo::ClsFieldHasBeenSet() const
{
    return m_clsFieldHasBeenSet;
}

string DlcFiledInfo::GetDlcField() const
{
    return m_dlcField;
}

void DlcFiledInfo::SetDlcField(const string& _dlcField)
{
    m_dlcField = _dlcField;
    m_dlcFieldHasBeenSet = true;
}

bool DlcFiledInfo::DlcFieldHasBeenSet() const
{
    return m_dlcFieldHasBeenSet;
}

string DlcFiledInfo::GetDlcFieldType() const
{
    return m_dlcFieldType;
}

void DlcFiledInfo::SetDlcFieldType(const string& _dlcFieldType)
{
    m_dlcFieldType = _dlcFieldType;
    m_dlcFieldTypeHasBeenSet = true;
}

bool DlcFiledInfo::DlcFieldTypeHasBeenSet() const
{
    return m_dlcFieldTypeHasBeenSet;
}

string DlcFiledInfo::GetFillField() const
{
    return m_fillField;
}

void DlcFiledInfo::SetFillField(const string& _fillField)
{
    m_fillField = _fillField;
    m_fillFieldHasBeenSet = true;
}

bool DlcFiledInfo::FillFieldHasBeenSet() const
{
    return m_fillFieldHasBeenSet;
}

bool DlcFiledInfo::GetDisable() const
{
    return m_disable;
}

void DlcFiledInfo::SetDisable(const bool& _disable)
{
    m_disable = _disable;
    m_disableHasBeenSet = true;
}

bool DlcFiledInfo::DisableHasBeenSet() const
{
    return m_disableHasBeenSet;
}

