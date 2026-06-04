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

#include <tencentcloud/adp/v20260520/model/ModelDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModelDetailInfo::ModelDetailInfo() :
    m_aliasHasBeenSet(false),
    m_historyLimitHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_modelParamsHasBeenSet(false)
{
}

CoreInternalOutcome ModelDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelDetailInfo.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("HistoryLimit") && !value["HistoryLimit"].IsNull())
    {
        if (!value["HistoryLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelDetailInfo.HistoryLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_historyLimit = value["HistoryLimit"].GetUint64();
        m_historyLimitHasBeenSet = true;
    }

    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelDetailInfo.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("ModelParams") && !value["ModelParams"].IsNull())
    {
        if (!value["ModelParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelDetailInfo.ModelParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modelParams.Deserialize(value["ModelParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_historyLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HistoryLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_historyLimit, allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelParams.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ModelDetailInfo::GetAlias() const
{
    return m_alias;
}

void ModelDetailInfo::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool ModelDetailInfo::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

uint64_t ModelDetailInfo::GetHistoryLimit() const
{
    return m_historyLimit;
}

void ModelDetailInfo::SetHistoryLimit(const uint64_t& _historyLimit)
{
    m_historyLimit = _historyLimit;
    m_historyLimitHasBeenSet = true;
}

bool ModelDetailInfo::HistoryLimitHasBeenSet() const
{
    return m_historyLimitHasBeenSet;
}

string ModelDetailInfo::GetModelId() const
{
    return m_modelId;
}

void ModelDetailInfo::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool ModelDetailInfo::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

ModelParams ModelDetailInfo::GetModelParams() const
{
    return m_modelParams;
}

void ModelDetailInfo::SetModelParams(const ModelParams& _modelParams)
{
    m_modelParams = _modelParams;
    m_modelParamsHasBeenSet = true;
}

bool ModelDetailInfo::ModelParamsHasBeenSet() const
{
    return m_modelParamsHasBeenSet;
}

