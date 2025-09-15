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

#include <tencentcloud/tdai/v20250717/model/SqlAgentParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

SqlAgentParameter::SqlAgentParameter() :
    m_instanceInfosHasBeenSet(false),
    m_codeRepoHasBeenSet(false)
{
}

CoreInternalOutcome SqlAgentParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceInfos") && !value["InstanceInfos"].IsNull())
    {
        if (!value["InstanceInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SqlAgentParameter.InstanceInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceInfos item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceInfos.push_back(item);
        }
        m_instanceInfosHasBeenSet = true;
    }

    if (value.HasMember("CodeRepo") && !value["CodeRepo"].IsNull())
    {
        if (!value["CodeRepo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SqlAgentParameter.CodeRepo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_codeRepo.Deserialize(value["CodeRepo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_codeRepoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SqlAgentParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceInfos.begin(); itr != m_instanceInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_codeRepoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeRepo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_codeRepo.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<InstanceInfos> SqlAgentParameter::GetInstanceInfos() const
{
    return m_instanceInfos;
}

void SqlAgentParameter::SetInstanceInfos(const vector<InstanceInfos>& _instanceInfos)
{
    m_instanceInfos = _instanceInfos;
    m_instanceInfosHasBeenSet = true;
}

bool SqlAgentParameter::InstanceInfosHasBeenSet() const
{
    return m_instanceInfosHasBeenSet;
}

CodeRepo SqlAgentParameter::GetCodeRepo() const
{
    return m_codeRepo;
}

void SqlAgentParameter::SetCodeRepo(const CodeRepo& _codeRepo)
{
    m_codeRepo = _codeRepo;
    m_codeRepoHasBeenSet = true;
}

bool SqlAgentParameter::CodeRepoHasBeenSet() const
{
    return m_codeRepoHasBeenSet;
}

