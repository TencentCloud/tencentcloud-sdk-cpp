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

#include <tencentcloud/cloudapp/v20220530/model/SaleParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudapp::V20220530::Model;
using namespace std;

SaleParam::SaleParam() :
    m_paramKeyHasBeenSet(false),
    m_paramKeyNameHasBeenSet(false),
    m_paramIdHasBeenSet(false),
    m_paramValueIdHasBeenSet(false),
    m_paramValueHasBeenSet(false),
    m_paramValueNameHasBeenSet(false),
    m_paramTypeHasBeenSet(false),
    m_moduleIdHasBeenSet(false),
    m_moduleKeyHasBeenSet(false),
    m_moduleNameHasBeenSet(false)
{
}

CoreInternalOutcome SaleParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParamKey") && !value["ParamKey"].IsNull())
    {
        if (!value["ParamKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SaleParam.ParamKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramKey = string(value["ParamKey"].GetString());
        m_paramKeyHasBeenSet = true;
    }

    if (value.HasMember("ParamKeyName") && !value["ParamKeyName"].IsNull())
    {
        if (!value["ParamKeyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SaleParam.ParamKeyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramKeyName = string(value["ParamKeyName"].GetString());
        m_paramKeyNameHasBeenSet = true;
    }

    if (value.HasMember("ParamId") && !value["ParamId"].IsNull())
    {
        if (!value["ParamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SaleParam.ParamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramId = string(value["ParamId"].GetString());
        m_paramIdHasBeenSet = true;
    }

    if (value.HasMember("ParamValueId") && !value["ParamValueId"].IsNull())
    {
        if (!value["ParamValueId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SaleParam.ParamValueId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramValueId = string(value["ParamValueId"].GetString());
        m_paramValueIdHasBeenSet = true;
    }

    if (value.HasMember("ParamValue") && !value["ParamValue"].IsNull())
    {
        if (!value["ParamValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SaleParam.ParamValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramValue = string(value["ParamValue"].GetString());
        m_paramValueHasBeenSet = true;
    }

    if (value.HasMember("ParamValueName") && !value["ParamValueName"].IsNull())
    {
        if (!value["ParamValueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SaleParam.ParamValueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramValueName = string(value["ParamValueName"].GetString());
        m_paramValueNameHasBeenSet = true;
    }

    if (value.HasMember("ParamType") && !value["ParamType"].IsNull())
    {
        if (!value["ParamType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SaleParam.ParamType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramType = string(value["ParamType"].GetString());
        m_paramTypeHasBeenSet = true;
    }

    if (value.HasMember("ModuleId") && !value["ModuleId"].IsNull())
    {
        if (!value["ModuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SaleParam.ModuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moduleId = string(value["ModuleId"].GetString());
        m_moduleIdHasBeenSet = true;
    }

    if (value.HasMember("ModuleKey") && !value["ModuleKey"].IsNull())
    {
        if (!value["ModuleKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SaleParam.ModuleKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moduleKey = string(value["ModuleKey"].GetString());
        m_moduleKeyHasBeenSet = true;
    }

    if (value.HasMember("ModuleName") && !value["ModuleName"].IsNull())
    {
        if (!value["ModuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SaleParam.ModuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moduleName = string(value["ModuleName"].GetString());
        m_moduleNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SaleParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paramKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramKey.c_str(), allocator).Move(), allocator);
    }

    if (m_paramKeyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamKeyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramKeyName.c_str(), allocator).Move(), allocator);
    }

    if (m_paramIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramId.c_str(), allocator).Move(), allocator);
    }

    if (m_paramValueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamValueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramValueId.c_str(), allocator).Move(), allocator);
    }

    if (m_paramValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramValue.c_str(), allocator).Move(), allocator);
    }

    if (m_paramValueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamValueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramValueName.c_str(), allocator).Move(), allocator);
    }

    if (m_paramTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramType.c_str(), allocator).Move(), allocator);
    }

    if (m_moduleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moduleId.c_str(), allocator).Move(), allocator);
    }

    if (m_moduleKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moduleKey.c_str(), allocator).Move(), allocator);
    }

    if (m_moduleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moduleName.c_str(), allocator).Move(), allocator);
    }

}


string SaleParam::GetParamKey() const
{
    return m_paramKey;
}

void SaleParam::SetParamKey(const string& _paramKey)
{
    m_paramKey = _paramKey;
    m_paramKeyHasBeenSet = true;
}

bool SaleParam::ParamKeyHasBeenSet() const
{
    return m_paramKeyHasBeenSet;
}

string SaleParam::GetParamKeyName() const
{
    return m_paramKeyName;
}

void SaleParam::SetParamKeyName(const string& _paramKeyName)
{
    m_paramKeyName = _paramKeyName;
    m_paramKeyNameHasBeenSet = true;
}

bool SaleParam::ParamKeyNameHasBeenSet() const
{
    return m_paramKeyNameHasBeenSet;
}

string SaleParam::GetParamId() const
{
    return m_paramId;
}

void SaleParam::SetParamId(const string& _paramId)
{
    m_paramId = _paramId;
    m_paramIdHasBeenSet = true;
}

bool SaleParam::ParamIdHasBeenSet() const
{
    return m_paramIdHasBeenSet;
}

string SaleParam::GetParamValueId() const
{
    return m_paramValueId;
}

void SaleParam::SetParamValueId(const string& _paramValueId)
{
    m_paramValueId = _paramValueId;
    m_paramValueIdHasBeenSet = true;
}

bool SaleParam::ParamValueIdHasBeenSet() const
{
    return m_paramValueIdHasBeenSet;
}

string SaleParam::GetParamValue() const
{
    return m_paramValue;
}

void SaleParam::SetParamValue(const string& _paramValue)
{
    m_paramValue = _paramValue;
    m_paramValueHasBeenSet = true;
}

bool SaleParam::ParamValueHasBeenSet() const
{
    return m_paramValueHasBeenSet;
}

string SaleParam::GetParamValueName() const
{
    return m_paramValueName;
}

void SaleParam::SetParamValueName(const string& _paramValueName)
{
    m_paramValueName = _paramValueName;
    m_paramValueNameHasBeenSet = true;
}

bool SaleParam::ParamValueNameHasBeenSet() const
{
    return m_paramValueNameHasBeenSet;
}

string SaleParam::GetParamType() const
{
    return m_paramType;
}

void SaleParam::SetParamType(const string& _paramType)
{
    m_paramType = _paramType;
    m_paramTypeHasBeenSet = true;
}

bool SaleParam::ParamTypeHasBeenSet() const
{
    return m_paramTypeHasBeenSet;
}

string SaleParam::GetModuleId() const
{
    return m_moduleId;
}

void SaleParam::SetModuleId(const string& _moduleId)
{
    m_moduleId = _moduleId;
    m_moduleIdHasBeenSet = true;
}

bool SaleParam::ModuleIdHasBeenSet() const
{
    return m_moduleIdHasBeenSet;
}

string SaleParam::GetModuleKey() const
{
    return m_moduleKey;
}

void SaleParam::SetModuleKey(const string& _moduleKey)
{
    m_moduleKey = _moduleKey;
    m_moduleKeyHasBeenSet = true;
}

bool SaleParam::ModuleKeyHasBeenSet() const
{
    return m_moduleKeyHasBeenSet;
}

string SaleParam::GetModuleName() const
{
    return m_moduleName;
}

void SaleParam::SetModuleName(const string& _moduleName)
{
    m_moduleName = _moduleName;
    m_moduleNameHasBeenSet = true;
}

bool SaleParam::ModuleNameHasBeenSet() const
{
    return m_moduleNameHasBeenSet;
}

