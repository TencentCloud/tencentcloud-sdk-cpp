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

#include <tencentcloud/emr/v20190103/model/ScriptBootstrapActionConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ScriptBootstrapActionConfig::ScriptBootstrapActionConfig() :
    m_cosFileURIHasBeenSet(false),
    m_executionMomentHasBeenSet(false),
    m_argsHasBeenSet(false),
    m_cosFileNameHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome ScriptBootstrapActionConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CosFileURI") && !value["CosFileURI"].IsNull())
    {
        if (!value["CosFileURI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptBootstrapActionConfig.CosFileURI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosFileURI = string(value["CosFileURI"].GetString());
        m_cosFileURIHasBeenSet = true;
    }

    if (value.HasMember("ExecutionMoment") && !value["ExecutionMoment"].IsNull())
    {
        if (!value["ExecutionMoment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptBootstrapActionConfig.ExecutionMoment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionMoment = string(value["ExecutionMoment"].GetString());
        m_executionMomentHasBeenSet = true;
    }

    if (value.HasMember("Args") && !value["Args"].IsNull())
    {
        if (!value["Args"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScriptBootstrapActionConfig.Args` is not array type"));

        const rapidjson::Value &tmpValue = value["Args"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_args.push_back((*itr).GetString());
        }
        m_argsHasBeenSet = true;
    }

    if (value.HasMember("CosFileName") && !value["CosFileName"].IsNull())
    {
        if (!value["CosFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptBootstrapActionConfig.CosFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosFileName = string(value["CosFileName"].GetString());
        m_cosFileNameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptBootstrapActionConfig.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScriptBootstrapActionConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cosFileURIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosFileURI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosFileURI.c_str(), allocator).Move(), allocator);
    }

    if (m_executionMomentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionMoment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionMoment.c_str(), allocator).Move(), allocator);
    }

    if (m_argsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Args";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_args.begin(); itr != m_args.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cosFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


string ScriptBootstrapActionConfig::GetCosFileURI() const
{
    return m_cosFileURI;
}

void ScriptBootstrapActionConfig::SetCosFileURI(const string& _cosFileURI)
{
    m_cosFileURI = _cosFileURI;
    m_cosFileURIHasBeenSet = true;
}

bool ScriptBootstrapActionConfig::CosFileURIHasBeenSet() const
{
    return m_cosFileURIHasBeenSet;
}

string ScriptBootstrapActionConfig::GetExecutionMoment() const
{
    return m_executionMoment;
}

void ScriptBootstrapActionConfig::SetExecutionMoment(const string& _executionMoment)
{
    m_executionMoment = _executionMoment;
    m_executionMomentHasBeenSet = true;
}

bool ScriptBootstrapActionConfig::ExecutionMomentHasBeenSet() const
{
    return m_executionMomentHasBeenSet;
}

vector<string> ScriptBootstrapActionConfig::GetArgs() const
{
    return m_args;
}

void ScriptBootstrapActionConfig::SetArgs(const vector<string>& _args)
{
    m_args = _args;
    m_argsHasBeenSet = true;
}

bool ScriptBootstrapActionConfig::ArgsHasBeenSet() const
{
    return m_argsHasBeenSet;
}

string ScriptBootstrapActionConfig::GetCosFileName() const
{
    return m_cosFileName;
}

void ScriptBootstrapActionConfig::SetCosFileName(const string& _cosFileName)
{
    m_cosFileName = _cosFileName;
    m_cosFileNameHasBeenSet = true;
}

bool ScriptBootstrapActionConfig::CosFileNameHasBeenSet() const
{
    return m_cosFileNameHasBeenSet;
}

string ScriptBootstrapActionConfig::GetRemark() const
{
    return m_remark;
}

void ScriptBootstrapActionConfig::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ScriptBootstrapActionConfig::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

