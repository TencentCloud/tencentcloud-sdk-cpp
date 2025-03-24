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

#include <tencentcloud/chc/v20230418/model/ModelVersionDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

ModelVersionDetail::ModelVersionDetail() :
    m_versionHasBeenSet(false),
    m_checkResultHasBeenSet(false),
    m_optionSetHasBeenSet(false),
    m_modelVersionHasBeenSet(false)
{
}

CoreInternalOutcome ModelVersionDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelVersionDetail.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("CheckResult") && !value["CheckResult"].IsNull())
    {
        if (!value["CheckResult"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelVersionDetail.CheckResult` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_checkResult = value["CheckResult"].GetUint64();
        m_checkResultHasBeenSet = true;
    }

    if (value.HasMember("OptionSet") && !value["OptionSet"].IsNull())
    {
        if (!value["OptionSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelVersionDetail.OptionSet` is not array type"));

        const rapidjson::Value &tmpValue = value["OptionSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TemplateOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_optionSet.push_back(item);
        }
        m_optionSetHasBeenSet = true;
    }

    if (value.HasMember("ModelVersion") && !value["ModelVersion"].IsNull())
    {
        if (!value["ModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelVersionDetail.ModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelVersion = string(value["ModelVersion"].GetString());
        m_modelVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelVersionDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_checkResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkResult, allocator);
    }

    if (m_optionSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptionSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_optionSet.begin(); itr != m_optionSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_modelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelVersion.c_str(), allocator).Move(), allocator);
    }

}


string ModelVersionDetail::GetVersion() const
{
    return m_version;
}

void ModelVersionDetail::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ModelVersionDetail::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

uint64_t ModelVersionDetail::GetCheckResult() const
{
    return m_checkResult;
}

void ModelVersionDetail::SetCheckResult(const uint64_t& _checkResult)
{
    m_checkResult = _checkResult;
    m_checkResultHasBeenSet = true;
}

bool ModelVersionDetail::CheckResultHasBeenSet() const
{
    return m_checkResultHasBeenSet;
}

vector<TemplateOption> ModelVersionDetail::GetOptionSet() const
{
    return m_optionSet;
}

void ModelVersionDetail::SetOptionSet(const vector<TemplateOption>& _optionSet)
{
    m_optionSet = _optionSet;
    m_optionSetHasBeenSet = true;
}

bool ModelVersionDetail::OptionSetHasBeenSet() const
{
    return m_optionSetHasBeenSet;
}

string ModelVersionDetail::GetModelVersion() const
{
    return m_modelVersion;
}

void ModelVersionDetail::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool ModelVersionDetail::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

