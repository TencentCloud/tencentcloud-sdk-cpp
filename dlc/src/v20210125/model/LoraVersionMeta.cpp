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

#include <tencentcloud/dlc/v20210125/model/LoraVersionMeta.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

LoraVersionMeta::LoraVersionMeta() :
    m_rankHasBeenSet(false),
    m_alphaHasBeenSet(false),
    m_dropoutHasBeenSet(false),
    m_targetModulesHasBeenSet(false),
    m_pEFTTypeHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_baseModelNameOrPathHasBeenSet(false),
    m_maxRankHasBeenSet(false)
{
}

CoreInternalOutcome LoraVersionMeta::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Rank") && !value["Rank"].IsNull())
    {
        if (!value["Rank"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoraVersionMeta.Rank` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rank = value["Rank"].GetInt64();
        m_rankHasBeenSet = true;
    }

    if (value.HasMember("Alpha") && !value["Alpha"].IsNull())
    {
        if (!value["Alpha"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoraVersionMeta.Alpha` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alpha = value["Alpha"].GetInt64();
        m_alphaHasBeenSet = true;
    }

    if (value.HasMember("Dropout") && !value["Dropout"].IsNull())
    {
        if (!value["Dropout"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LoraVersionMeta.Dropout` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_dropout = value["Dropout"].GetDouble();
        m_dropoutHasBeenSet = true;
    }

    if (value.HasMember("TargetModules") && !value["TargetModules"].IsNull())
    {
        if (!value["TargetModules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoraVersionMeta.TargetModules` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetModules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_targetModules.push_back((*itr).GetString());
        }
        m_targetModulesHasBeenSet = true;
    }

    if (value.HasMember("PEFTType") && !value["PEFTType"].IsNull())
    {
        if (!value["PEFTType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoraVersionMeta.PEFTType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pEFTType = string(value["PEFTType"].GetString());
        m_pEFTTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoraVersionMeta.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("BaseModelNameOrPath") && !value["BaseModelNameOrPath"].IsNull())
    {
        if (!value["BaseModelNameOrPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoraVersionMeta.BaseModelNameOrPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_baseModelNameOrPath = string(value["BaseModelNameOrPath"].GetString());
        m_baseModelNameOrPathHasBeenSet = true;
    }

    if (value.HasMember("MaxRank") && !value["MaxRank"].IsNull())
    {
        if (!value["MaxRank"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoraVersionMeta.MaxRank` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRank = value["MaxRank"].GetInt64();
        m_maxRankHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoraVersionMeta::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rankHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rank";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rank, allocator);
    }

    if (m_alphaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alpha";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alpha, allocator);
    }

    if (m_dropoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dropout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dropout, allocator);
    }

    if (m_targetModulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetModules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetModules.begin(); itr != m_targetModules.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_pEFTTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PEFTType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pEFTType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_baseModelNameOrPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseModelNameOrPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_baseModelNameOrPath.c_str(), allocator).Move(), allocator);
    }

    if (m_maxRankHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRank";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRank, allocator);
    }

}


int64_t LoraVersionMeta::GetRank() const
{
    return m_rank;
}

void LoraVersionMeta::SetRank(const int64_t& _rank)
{
    m_rank = _rank;
    m_rankHasBeenSet = true;
}

bool LoraVersionMeta::RankHasBeenSet() const
{
    return m_rankHasBeenSet;
}

int64_t LoraVersionMeta::GetAlpha() const
{
    return m_alpha;
}

void LoraVersionMeta::SetAlpha(const int64_t& _alpha)
{
    m_alpha = _alpha;
    m_alphaHasBeenSet = true;
}

bool LoraVersionMeta::AlphaHasBeenSet() const
{
    return m_alphaHasBeenSet;
}

double LoraVersionMeta::GetDropout() const
{
    return m_dropout;
}

void LoraVersionMeta::SetDropout(const double& _dropout)
{
    m_dropout = _dropout;
    m_dropoutHasBeenSet = true;
}

bool LoraVersionMeta::DropoutHasBeenSet() const
{
    return m_dropoutHasBeenSet;
}

vector<string> LoraVersionMeta::GetTargetModules() const
{
    return m_targetModules;
}

void LoraVersionMeta::SetTargetModules(const vector<string>& _targetModules)
{
    m_targetModules = _targetModules;
    m_targetModulesHasBeenSet = true;
}

bool LoraVersionMeta::TargetModulesHasBeenSet() const
{
    return m_targetModulesHasBeenSet;
}

string LoraVersionMeta::GetPEFTType() const
{
    return m_pEFTType;
}

void LoraVersionMeta::SetPEFTType(const string& _pEFTType)
{
    m_pEFTType = _pEFTType;
    m_pEFTTypeHasBeenSet = true;
}

bool LoraVersionMeta::PEFTTypeHasBeenSet() const
{
    return m_pEFTTypeHasBeenSet;
}

string LoraVersionMeta::GetTaskType() const
{
    return m_taskType;
}

void LoraVersionMeta::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool LoraVersionMeta::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string LoraVersionMeta::GetBaseModelNameOrPath() const
{
    return m_baseModelNameOrPath;
}

void LoraVersionMeta::SetBaseModelNameOrPath(const string& _baseModelNameOrPath)
{
    m_baseModelNameOrPath = _baseModelNameOrPath;
    m_baseModelNameOrPathHasBeenSet = true;
}

bool LoraVersionMeta::BaseModelNameOrPathHasBeenSet() const
{
    return m_baseModelNameOrPathHasBeenSet;
}

int64_t LoraVersionMeta::GetMaxRank() const
{
    return m_maxRank;
}

void LoraVersionMeta::SetMaxRank(const int64_t& _maxRank)
{
    m_maxRank = _maxRank;
    m_maxRankHasBeenSet = true;
}

bool LoraVersionMeta::MaxRankHasBeenSet() const
{
    return m_maxRankHasBeenSet;
}

