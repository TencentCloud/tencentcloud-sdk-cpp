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

#include <tencentcloud/aca/v20210323/model/Dict.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

Dict::Dict() :
    m_freqCodeHasBeenSet(false),
    m_freqNameHasBeenSet(false),
    m_disableHasBeenSet(false),
    m_usageCodeHasBeenSet(false),
    m_usageNameHasBeenSet(false),
    m_deptIdHasBeenSet(false),
    m_deptNameHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_outpatientOnHasBeenSet(false),
    m_inHospitalOnHasBeenSet(false),
    m_diagCodeHasBeenSet(false),
    m_diagNameHasBeenSet(false),
    m_icdCodeHasBeenSet(false)
{
}

CoreInternalOutcome Dict::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FreqCode") && !value["FreqCode"].IsNull())
    {
        if (!value["FreqCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Dict.FreqCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_freqCode = string(value["FreqCode"].GetString());
        m_freqCodeHasBeenSet = true;
    }

    if (value.HasMember("FreqName") && !value["FreqName"].IsNull())
    {
        if (!value["FreqName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Dict.FreqName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_freqName = string(value["FreqName"].GetString());
        m_freqNameHasBeenSet = true;
    }

    if (value.HasMember("Disable") && !value["Disable"].IsNull())
    {
        if (!value["Disable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Dict.Disable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_disable = value["Disable"].GetInt64();
        m_disableHasBeenSet = true;
    }

    if (value.HasMember("UsageCode") && !value["UsageCode"].IsNull())
    {
        if (!value["UsageCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Dict.UsageCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usageCode = string(value["UsageCode"].GetString());
        m_usageCodeHasBeenSet = true;
    }

    if (value.HasMember("UsageName") && !value["UsageName"].IsNull())
    {
        if (!value["UsageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Dict.UsageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usageName = string(value["UsageName"].GetString());
        m_usageNameHasBeenSet = true;
    }

    if (value.HasMember("DeptId") && !value["DeptId"].IsNull())
    {
        if (!value["DeptId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Dict.DeptId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deptId = string(value["DeptId"].GetString());
        m_deptIdHasBeenSet = true;
    }

    if (value.HasMember("DeptName") && !value["DeptName"].IsNull())
    {
        if (!value["DeptName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Dict.DeptName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deptName = string(value["DeptName"].GetString());
        m_deptNameHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Dict.Scope` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scope = value["Scope"].GetInt64();
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("OutpatientOn") && !value["OutpatientOn"].IsNull())
    {
        if (!value["OutpatientOn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Dict.OutpatientOn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_outpatientOn = value["OutpatientOn"].GetBool();
        m_outpatientOnHasBeenSet = true;
    }

    if (value.HasMember("InHospitalOn") && !value["InHospitalOn"].IsNull())
    {
        if (!value["InHospitalOn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Dict.InHospitalOn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_inHospitalOn = value["InHospitalOn"].GetBool();
        m_inHospitalOnHasBeenSet = true;
    }

    if (value.HasMember("DiagCode") && !value["DiagCode"].IsNull())
    {
        if (!value["DiagCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Dict.DiagCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diagCode = string(value["DiagCode"].GetString());
        m_diagCodeHasBeenSet = true;
    }

    if (value.HasMember("DiagName") && !value["DiagName"].IsNull())
    {
        if (!value["DiagName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Dict.DiagName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diagName = string(value["DiagName"].GetString());
        m_diagNameHasBeenSet = true;
    }

    if (value.HasMember("IcdCode") && !value["IcdCode"].IsNull())
    {
        if (!value["IcdCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Dict.IcdCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_icdCode = string(value["IcdCode"].GetString());
        m_icdCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Dict::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_freqCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreqCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_freqCode.c_str(), allocator).Move(), allocator);
    }

    if (m_freqNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreqName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_freqName.c_str(), allocator).Move(), allocator);
    }

    if (m_disableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disable, allocator);
    }

    if (m_usageCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usageCode.c_str(), allocator).Move(), allocator);
    }

    if (m_usageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usageName.c_str(), allocator).Move(), allocator);
    }

    if (m_deptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeptId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deptId.c_str(), allocator).Move(), allocator);
    }

    if (m_deptNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeptName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deptName.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scope, allocator);
    }

    if (m_outpatientOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutpatientOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outpatientOn, allocator);
    }

    if (m_inHospitalOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InHospitalOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inHospitalOn, allocator);
    }

    if (m_diagCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiagCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diagCode.c_str(), allocator).Move(), allocator);
    }

    if (m_diagNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiagName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diagName.c_str(), allocator).Move(), allocator);
    }

    if (m_icdCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IcdCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_icdCode.c_str(), allocator).Move(), allocator);
    }

}


string Dict::GetFreqCode() const
{
    return m_freqCode;
}

void Dict::SetFreqCode(const string& _freqCode)
{
    m_freqCode = _freqCode;
    m_freqCodeHasBeenSet = true;
}

bool Dict::FreqCodeHasBeenSet() const
{
    return m_freqCodeHasBeenSet;
}

string Dict::GetFreqName() const
{
    return m_freqName;
}

void Dict::SetFreqName(const string& _freqName)
{
    m_freqName = _freqName;
    m_freqNameHasBeenSet = true;
}

bool Dict::FreqNameHasBeenSet() const
{
    return m_freqNameHasBeenSet;
}

int64_t Dict::GetDisable() const
{
    return m_disable;
}

void Dict::SetDisable(const int64_t& _disable)
{
    m_disable = _disable;
    m_disableHasBeenSet = true;
}

bool Dict::DisableHasBeenSet() const
{
    return m_disableHasBeenSet;
}

string Dict::GetUsageCode() const
{
    return m_usageCode;
}

void Dict::SetUsageCode(const string& _usageCode)
{
    m_usageCode = _usageCode;
    m_usageCodeHasBeenSet = true;
}

bool Dict::UsageCodeHasBeenSet() const
{
    return m_usageCodeHasBeenSet;
}

string Dict::GetUsageName() const
{
    return m_usageName;
}

void Dict::SetUsageName(const string& _usageName)
{
    m_usageName = _usageName;
    m_usageNameHasBeenSet = true;
}

bool Dict::UsageNameHasBeenSet() const
{
    return m_usageNameHasBeenSet;
}

string Dict::GetDeptId() const
{
    return m_deptId;
}

void Dict::SetDeptId(const string& _deptId)
{
    m_deptId = _deptId;
    m_deptIdHasBeenSet = true;
}

bool Dict::DeptIdHasBeenSet() const
{
    return m_deptIdHasBeenSet;
}

string Dict::GetDeptName() const
{
    return m_deptName;
}

void Dict::SetDeptName(const string& _deptName)
{
    m_deptName = _deptName;
    m_deptNameHasBeenSet = true;
}

bool Dict::DeptNameHasBeenSet() const
{
    return m_deptNameHasBeenSet;
}

int64_t Dict::GetScope() const
{
    return m_scope;
}

void Dict::SetScope(const int64_t& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool Dict::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

bool Dict::GetOutpatientOn() const
{
    return m_outpatientOn;
}

void Dict::SetOutpatientOn(const bool& _outpatientOn)
{
    m_outpatientOn = _outpatientOn;
    m_outpatientOnHasBeenSet = true;
}

bool Dict::OutpatientOnHasBeenSet() const
{
    return m_outpatientOnHasBeenSet;
}

bool Dict::GetInHospitalOn() const
{
    return m_inHospitalOn;
}

void Dict::SetInHospitalOn(const bool& _inHospitalOn)
{
    m_inHospitalOn = _inHospitalOn;
    m_inHospitalOnHasBeenSet = true;
}

bool Dict::InHospitalOnHasBeenSet() const
{
    return m_inHospitalOnHasBeenSet;
}

string Dict::GetDiagCode() const
{
    return m_diagCode;
}

void Dict::SetDiagCode(const string& _diagCode)
{
    m_diagCode = _diagCode;
    m_diagCodeHasBeenSet = true;
}

bool Dict::DiagCodeHasBeenSet() const
{
    return m_diagCodeHasBeenSet;
}

string Dict::GetDiagName() const
{
    return m_diagName;
}

void Dict::SetDiagName(const string& _diagName)
{
    m_diagName = _diagName;
    m_diagNameHasBeenSet = true;
}

bool Dict::DiagNameHasBeenSet() const
{
    return m_diagNameHasBeenSet;
}

string Dict::GetIcdCode() const
{
    return m_icdCode;
}

void Dict::SetIcdCode(const string& _icdCode)
{
    m_icdCode = _icdCode;
    m_icdCodeHasBeenSet = true;
}

bool Dict::IcdCodeHasBeenSet() const
{
    return m_icdCodeHasBeenSet;
}

