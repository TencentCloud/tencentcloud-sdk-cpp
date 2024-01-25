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

#include <tencentcloud/wedata/v20210820/model/ParameterInfoDsDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ParameterInfoDsDto::ParameterInfoDsDto() :
    m_idHasBeenSet(false),
    m_paramKeyHasBeenSet(false),
    m_paramTypeHasBeenSet(false),
    m_paramBelongHasBeenSet(false),
    m_paramDefineHasBeenSet(false),
    m_paramValueHasBeenSet(false),
    m_paramOwnerHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_msgHasBeenSet(false),
    m_paramDefineTestHasBeenSet(false),
    m_paramDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome ParameterInfoDsDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterInfoDsDto.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ParamKey") && !value["ParamKey"].IsNull())
    {
        if (!value["ParamKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterInfoDsDto.ParamKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramKey = string(value["ParamKey"].GetString());
        m_paramKeyHasBeenSet = true;
    }

    if (value.HasMember("ParamType") && !value["ParamType"].IsNull())
    {
        if (!value["ParamType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterInfoDsDto.ParamType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramType = string(value["ParamType"].GetString());
        m_paramTypeHasBeenSet = true;
    }

    if (value.HasMember("ParamBelong") && !value["ParamBelong"].IsNull())
    {
        if (!value["ParamBelong"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterInfoDsDto.ParamBelong` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramBelong = string(value["ParamBelong"].GetString());
        m_paramBelongHasBeenSet = true;
    }

    if (value.HasMember("ParamDefine") && !value["ParamDefine"].IsNull())
    {
        if (!value["ParamDefine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterInfoDsDto.ParamDefine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramDefine = string(value["ParamDefine"].GetString());
        m_paramDefineHasBeenSet = true;
    }

    if (value.HasMember("ParamValue") && !value["ParamValue"].IsNull())
    {
        if (!value["ParamValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterInfoDsDto.ParamValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramValue = string(value["ParamValue"].GetString());
        m_paramValueHasBeenSet = true;
    }

    if (value.HasMember("ParamOwner") && !value["ParamOwner"].IsNull())
    {
        if (!value["ParamOwner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterInfoDsDto.ParamOwner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramOwner = string(value["ParamOwner"].GetString());
        m_paramOwnerHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterInfoDsDto.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterInfoDsDto.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterInfoDsDto.Result` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_result = value["Result"].GetBool();
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Msg") && !value["Msg"].IsNull())
    {
        if (!value["Msg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterInfoDsDto.Msg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msg = string(value["Msg"].GetString());
        m_msgHasBeenSet = true;
    }

    if (value.HasMember("ParamDefineTest") && !value["ParamDefineTest"].IsNull())
    {
        if (!value["ParamDefineTest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterInfoDsDto.ParamDefineTest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramDefineTest = string(value["ParamDefineTest"].GetString());
        m_paramDefineTestHasBeenSet = true;
    }

    if (value.HasMember("ParamDescription") && !value["ParamDescription"].IsNull())
    {
        if (!value["ParamDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterInfoDsDto.ParamDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramDescription = string(value["ParamDescription"].GetString());
        m_paramDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParameterInfoDsDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_paramKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramKey.c_str(), allocator).Move(), allocator);
    }

    if (m_paramTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramType.c_str(), allocator).Move(), allocator);
    }

    if (m_paramBelongHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamBelong";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramBelong.c_str(), allocator).Move(), allocator);
    }

    if (m_paramDefineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamDefine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramDefine.c_str(), allocator).Move(), allocator);
    }

    if (m_paramValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramValue.c_str(), allocator).Move(), allocator);
    }

    if (m_paramOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramOwner.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

    if (m_msgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Msg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msg.c_str(), allocator).Move(), allocator);
    }

    if (m_paramDefineTestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamDefineTest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramDefineTest.c_str(), allocator).Move(), allocator);
    }

    if (m_paramDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramDescription.c_str(), allocator).Move(), allocator);
    }

}


int64_t ParameterInfoDsDto::GetId() const
{
    return m_id;
}

void ParameterInfoDsDto::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ParameterInfoDsDto::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ParameterInfoDsDto::GetParamKey() const
{
    return m_paramKey;
}

void ParameterInfoDsDto::SetParamKey(const string& _paramKey)
{
    m_paramKey = _paramKey;
    m_paramKeyHasBeenSet = true;
}

bool ParameterInfoDsDto::ParamKeyHasBeenSet() const
{
    return m_paramKeyHasBeenSet;
}

string ParameterInfoDsDto::GetParamType() const
{
    return m_paramType;
}

void ParameterInfoDsDto::SetParamType(const string& _paramType)
{
    m_paramType = _paramType;
    m_paramTypeHasBeenSet = true;
}

bool ParameterInfoDsDto::ParamTypeHasBeenSet() const
{
    return m_paramTypeHasBeenSet;
}

string ParameterInfoDsDto::GetParamBelong() const
{
    return m_paramBelong;
}

void ParameterInfoDsDto::SetParamBelong(const string& _paramBelong)
{
    m_paramBelong = _paramBelong;
    m_paramBelongHasBeenSet = true;
}

bool ParameterInfoDsDto::ParamBelongHasBeenSet() const
{
    return m_paramBelongHasBeenSet;
}

string ParameterInfoDsDto::GetParamDefine() const
{
    return m_paramDefine;
}

void ParameterInfoDsDto::SetParamDefine(const string& _paramDefine)
{
    m_paramDefine = _paramDefine;
    m_paramDefineHasBeenSet = true;
}

bool ParameterInfoDsDto::ParamDefineHasBeenSet() const
{
    return m_paramDefineHasBeenSet;
}

string ParameterInfoDsDto::GetParamValue() const
{
    return m_paramValue;
}

void ParameterInfoDsDto::SetParamValue(const string& _paramValue)
{
    m_paramValue = _paramValue;
    m_paramValueHasBeenSet = true;
}

bool ParameterInfoDsDto::ParamValueHasBeenSet() const
{
    return m_paramValueHasBeenSet;
}

string ParameterInfoDsDto::GetParamOwner() const
{
    return m_paramOwner;
}

void ParameterInfoDsDto::SetParamOwner(const string& _paramOwner)
{
    m_paramOwner = _paramOwner;
    m_paramOwnerHasBeenSet = true;
}

bool ParameterInfoDsDto::ParamOwnerHasBeenSet() const
{
    return m_paramOwnerHasBeenSet;
}

string ParameterInfoDsDto::GetCreateTime() const
{
    return m_createTime;
}

void ParameterInfoDsDto::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ParameterInfoDsDto::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ParameterInfoDsDto::GetUpdateTime() const
{
    return m_updateTime;
}

void ParameterInfoDsDto::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ParameterInfoDsDto::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

bool ParameterInfoDsDto::GetResult() const
{
    return m_result;
}

void ParameterInfoDsDto::SetResult(const bool& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool ParameterInfoDsDto::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string ParameterInfoDsDto::GetMsg() const
{
    return m_msg;
}

void ParameterInfoDsDto::SetMsg(const string& _msg)
{
    m_msg = _msg;
    m_msgHasBeenSet = true;
}

bool ParameterInfoDsDto::MsgHasBeenSet() const
{
    return m_msgHasBeenSet;
}

string ParameterInfoDsDto::GetParamDefineTest() const
{
    return m_paramDefineTest;
}

void ParameterInfoDsDto::SetParamDefineTest(const string& _paramDefineTest)
{
    m_paramDefineTest = _paramDefineTest;
    m_paramDefineTestHasBeenSet = true;
}

bool ParameterInfoDsDto::ParamDefineTestHasBeenSet() const
{
    return m_paramDefineTestHasBeenSet;
}

string ParameterInfoDsDto::GetParamDescription() const
{
    return m_paramDescription;
}

void ParameterInfoDsDto::SetParamDescription(const string& _paramDescription)
{
    m_paramDescription = _paramDescription;
    m_paramDescriptionHasBeenSet = true;
}

bool ParameterInfoDsDto::ParamDescriptionHasBeenSet() const
{
    return m_paramDescriptionHasBeenSet;
}

