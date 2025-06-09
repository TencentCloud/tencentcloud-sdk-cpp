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

#include <tencentcloud/lke/v20231130/model/TaskFLowVar.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

TaskFLowVar::TaskFLowVar() :
    m_varIdHasBeenSet(false),
    m_varNameHasBeenSet(false),
    m_varDescHasBeenSet(false),
    m_varTypeHasBeenSet(false),
    m_varDefaultValueHasBeenSet(false),
    m_varDefaultFileNameHasBeenSet(false)
{
}

CoreInternalOutcome TaskFLowVar::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VarId") && !value["VarId"].IsNull())
    {
        if (!value["VarId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFLowVar.VarId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_varId = string(value["VarId"].GetString());
        m_varIdHasBeenSet = true;
    }

    if (value.HasMember("VarName") && !value["VarName"].IsNull())
    {
        if (!value["VarName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFLowVar.VarName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_varName = string(value["VarName"].GetString());
        m_varNameHasBeenSet = true;
    }

    if (value.HasMember("VarDesc") && !value["VarDesc"].IsNull())
    {
        if (!value["VarDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFLowVar.VarDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_varDesc = string(value["VarDesc"].GetString());
        m_varDescHasBeenSet = true;
    }

    if (value.HasMember("VarType") && !value["VarType"].IsNull())
    {
        if (!value["VarType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFLowVar.VarType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_varType = string(value["VarType"].GetString());
        m_varTypeHasBeenSet = true;
    }

    if (value.HasMember("VarDefaultValue") && !value["VarDefaultValue"].IsNull())
    {
        if (!value["VarDefaultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFLowVar.VarDefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_varDefaultValue = string(value["VarDefaultValue"].GetString());
        m_varDefaultValueHasBeenSet = true;
    }

    if (value.HasMember("VarDefaultFileName") && !value["VarDefaultFileName"].IsNull())
    {
        if (!value["VarDefaultFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFLowVar.VarDefaultFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_varDefaultFileName = string(value["VarDefaultFileName"].GetString());
        m_varDefaultFileNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskFLowVar::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_varIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VarId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_varId.c_str(), allocator).Move(), allocator);
    }

    if (m_varNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VarName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_varName.c_str(), allocator).Move(), allocator);
    }

    if (m_varDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VarDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_varDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_varTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VarType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_varType.c_str(), allocator).Move(), allocator);
    }

    if (m_varDefaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VarDefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_varDefaultValue.c_str(), allocator).Move(), allocator);
    }

    if (m_varDefaultFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VarDefaultFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_varDefaultFileName.c_str(), allocator).Move(), allocator);
    }

}


string TaskFLowVar::GetVarId() const
{
    return m_varId;
}

void TaskFLowVar::SetVarId(const string& _varId)
{
    m_varId = _varId;
    m_varIdHasBeenSet = true;
}

bool TaskFLowVar::VarIdHasBeenSet() const
{
    return m_varIdHasBeenSet;
}

string TaskFLowVar::GetVarName() const
{
    return m_varName;
}

void TaskFLowVar::SetVarName(const string& _varName)
{
    m_varName = _varName;
    m_varNameHasBeenSet = true;
}

bool TaskFLowVar::VarNameHasBeenSet() const
{
    return m_varNameHasBeenSet;
}

string TaskFLowVar::GetVarDesc() const
{
    return m_varDesc;
}

void TaskFLowVar::SetVarDesc(const string& _varDesc)
{
    m_varDesc = _varDesc;
    m_varDescHasBeenSet = true;
}

bool TaskFLowVar::VarDescHasBeenSet() const
{
    return m_varDescHasBeenSet;
}

string TaskFLowVar::GetVarType() const
{
    return m_varType;
}

void TaskFLowVar::SetVarType(const string& _varType)
{
    m_varType = _varType;
    m_varTypeHasBeenSet = true;
}

bool TaskFLowVar::VarTypeHasBeenSet() const
{
    return m_varTypeHasBeenSet;
}

string TaskFLowVar::GetVarDefaultValue() const
{
    return m_varDefaultValue;
}

void TaskFLowVar::SetVarDefaultValue(const string& _varDefaultValue)
{
    m_varDefaultValue = _varDefaultValue;
    m_varDefaultValueHasBeenSet = true;
}

bool TaskFLowVar::VarDefaultValueHasBeenSet() const
{
    return m_varDefaultValueHasBeenSet;
}

string TaskFLowVar::GetVarDefaultFileName() const
{
    return m_varDefaultFileName;
}

void TaskFLowVar::SetVarDefaultFileName(const string& _varDefaultFileName)
{
    m_varDefaultFileName = _varDefaultFileName;
    m_varDefaultFileNameHasBeenSet = true;
}

bool TaskFLowVar::VarDefaultFileNameHasBeenSet() const
{
    return m_varDefaultFileNameHasBeenSet;
}

