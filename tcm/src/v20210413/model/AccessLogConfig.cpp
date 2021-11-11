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

#include <tencentcloud/tcm/v20210413/model/AccessLogConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

AccessLogConfig::AccessLogConfig() :
    m_enableHasBeenSet(false),
    m_templateHasBeenSet(false),
    m_selectedRangeHasBeenSet(false),
    m_cLSHasBeenSet(false)
{
}

CoreInternalOutcome AccessLogConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AccessLogConfig.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("Template") && !value["Template"].IsNull())
    {
        if (!value["Template"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessLogConfig.Template` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_template = string(value["Template"].GetString());
        m_templateHasBeenSet = true;
    }

    if (value.HasMember("SelectedRange") && !value["SelectedRange"].IsNull())
    {
        if (!value["SelectedRange"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccessLogConfig.SelectedRange` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_selectedRange.Deserialize(value["SelectedRange"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_selectedRangeHasBeenSet = true;
    }

    if (value.HasMember("CLS") && !value["CLS"].IsNull())
    {
        if (!value["CLS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccessLogConfig.CLS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cLS.Deserialize(value["CLS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cLSHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessLogConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_templateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Template";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_template.c_str(), allocator).Move(), allocator);
    }

    if (m_selectedRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectedRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_selectedRange.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cLSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cLS.ToJsonObject(value[key.c_str()], allocator);
    }

}


bool AccessLogConfig::GetEnable() const
{
    return m_enable;
}

void AccessLogConfig::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool AccessLogConfig::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string AccessLogConfig::GetTemplate() const
{
    return m_template;
}

void AccessLogConfig::SetTemplate(const string& _template)
{
    m_template = _template;
    m_templateHasBeenSet = true;
}

bool AccessLogConfig::TemplateHasBeenSet() const
{
    return m_templateHasBeenSet;
}

SelectedRange AccessLogConfig::GetSelectedRange() const
{
    return m_selectedRange;
}

void AccessLogConfig::SetSelectedRange(const SelectedRange& _selectedRange)
{
    m_selectedRange = _selectedRange;
    m_selectedRangeHasBeenSet = true;
}

bool AccessLogConfig::SelectedRangeHasBeenSet() const
{
    return m_selectedRangeHasBeenSet;
}

CLS AccessLogConfig::GetCLS() const
{
    return m_cLS;
}

void AccessLogConfig::SetCLS(const CLS& _cLS)
{
    m_cLS = _cLS;
    m_cLSHasBeenSet = true;
}

bool AccessLogConfig::CLSHasBeenSet() const
{
    return m_cLSHasBeenSet;
}

