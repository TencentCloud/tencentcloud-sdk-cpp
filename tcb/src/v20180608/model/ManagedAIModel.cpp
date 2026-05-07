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

#include <tencentcloud/tcb/v20180608/model/ManagedAIModel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

ManagedAIModel::ManagedAIModel() :
    m_modelHasBeenSet(false),
    m_enableMCPHasBeenSet(false),
    m_modelSpecHasBeenSet(false),
    m_modelChargingInfoHasBeenSet(false)
{
}

CoreInternalOutcome ManagedAIModel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagedAIModel.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("EnableMCP") && !value["EnableMCP"].IsNull())
    {
        if (!value["EnableMCP"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ManagedAIModel.EnableMCP` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableMCP = value["EnableMCP"].GetBool();
        m_enableMCPHasBeenSet = true;
    }

    if (value.HasMember("ModelSpec") && !value["ModelSpec"].IsNull())
    {
        if (!value["ModelSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ManagedAIModel.ModelSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modelSpec.Deserialize(value["ModelSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelSpecHasBeenSet = true;
    }

    if (value.HasMember("ModelChargingInfo") && !value["ModelChargingInfo"].IsNull())
    {
        if (!value["ModelChargingInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ManagedAIModel.ModelChargingInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ModelChargingInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ManagedAIModelChargingInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_modelChargingInfo.push_back(item);
        }
        m_modelChargingInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ManagedAIModel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_enableMCPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMCP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableMCP, allocator);
    }

    if (m_modelSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modelChargingInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelChargingInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_modelChargingInfo.begin(); itr != m_modelChargingInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ManagedAIModel::GetModel() const
{
    return m_model;
}

void ManagedAIModel::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool ManagedAIModel::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

bool ManagedAIModel::GetEnableMCP() const
{
    return m_enableMCP;
}

void ManagedAIModel::SetEnableMCP(const bool& _enableMCP)
{
    m_enableMCP = _enableMCP;
    m_enableMCPHasBeenSet = true;
}

bool ManagedAIModel::EnableMCPHasBeenSet() const
{
    return m_enableMCPHasBeenSet;
}

ManagedAIModelSpec ManagedAIModel::GetModelSpec() const
{
    return m_modelSpec;
}

void ManagedAIModel::SetModelSpec(const ManagedAIModelSpec& _modelSpec)
{
    m_modelSpec = _modelSpec;
    m_modelSpecHasBeenSet = true;
}

bool ManagedAIModel::ModelSpecHasBeenSet() const
{
    return m_modelSpecHasBeenSet;
}

vector<ManagedAIModelChargingInfo> ManagedAIModel::GetModelChargingInfo() const
{
    return m_modelChargingInfo;
}

void ManagedAIModel::SetModelChargingInfo(const vector<ManagedAIModelChargingInfo>& _modelChargingInfo)
{
    m_modelChargingInfo = _modelChargingInfo;
    m_modelChargingInfoHasBeenSet = true;
}

bool ManagedAIModel::ModelChargingInfoHasBeenSet() const
{
    return m_modelChargingInfoHasBeenSet;
}

