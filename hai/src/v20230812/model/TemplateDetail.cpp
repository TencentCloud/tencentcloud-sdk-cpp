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

#include <tencentcloud/hai/v20230812/model/TemplateDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

TemplateDetail::TemplateDetail() :
    m_templateIdHasBeenSet(false),
    m_deployModeHasBeenSet(false),
    m_engineTypeHasBeenSet(false),
    m_computeSetHasBeenSet(false),
    m_supportFuncHasBeenSet(false)
{
}

CoreInternalOutcome TemplateDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateDetail.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("DeployMode") && !value["DeployMode"].IsNull())
    {
        if (!value["DeployMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateDetail.DeployMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployMode = string(value["DeployMode"].GetString());
        m_deployModeHasBeenSet = true;
    }

    if (value.HasMember("EngineType") && !value["EngineType"].IsNull())
    {
        if (!value["EngineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateDetail.EngineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineType = string(value["EngineType"].GetString());
        m_engineTypeHasBeenSet = true;
    }

    if (value.HasMember("ComputeSet") && !value["ComputeSet"].IsNull())
    {
        if (!value["ComputeSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemplateDetail.ComputeSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ComputeSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ComputeDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_computeSet.push_back(item);
        }
        m_computeSetHasBeenSet = true;
    }

    if (value.HasMember("SupportFunc") && !value["SupportFunc"].IsNull())
    {
        if (!value["SupportFunc"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemplateDetail.SupportFunc` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportFunc"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportFunc.push_back((*itr).GetString());
        }
        m_supportFuncHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TemplateDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_deployModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployMode.c_str(), allocator).Move(), allocator);
    }

    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineType.c_str(), allocator).Move(), allocator);
    }

    if (m_computeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_computeSet.begin(); itr != m_computeSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_supportFuncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportFunc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportFunc.begin(); itr != m_supportFunc.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string TemplateDetail::GetTemplateId() const
{
    return m_templateId;
}

void TemplateDetail::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool TemplateDetail::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string TemplateDetail::GetDeployMode() const
{
    return m_deployMode;
}

void TemplateDetail::SetDeployMode(const string& _deployMode)
{
    m_deployMode = _deployMode;
    m_deployModeHasBeenSet = true;
}

bool TemplateDetail::DeployModeHasBeenSet() const
{
    return m_deployModeHasBeenSet;
}

string TemplateDetail::GetEngineType() const
{
    return m_engineType;
}

void TemplateDetail::SetEngineType(const string& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool TemplateDetail::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}

vector<ComputeDetail> TemplateDetail::GetComputeSet() const
{
    return m_computeSet;
}

void TemplateDetail::SetComputeSet(const vector<ComputeDetail>& _computeSet)
{
    m_computeSet = _computeSet;
    m_computeSetHasBeenSet = true;
}

bool TemplateDetail::ComputeSetHasBeenSet() const
{
    return m_computeSetHasBeenSet;
}

vector<string> TemplateDetail::GetSupportFunc() const
{
    return m_supportFunc;
}

void TemplateDetail::SetSupportFunc(const vector<string>& _supportFunc)
{
    m_supportFunc = _supportFunc;
    m_supportFuncHasBeenSet = true;
}

bool TemplateDetail::SupportFuncHasBeenSet() const
{
    return m_supportFuncHasBeenSet;
}

