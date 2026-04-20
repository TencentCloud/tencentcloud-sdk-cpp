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

#include <tencentcloud/tdai/v20250717/model/ClawConfigInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

ClawConfigInfo::ClawConfigInfo() :
    m_templateIdHasBeenSet(false),
    m_dbTypesHasBeenSet(false),
    m_deployHasBeenSet(false)
{
}

CoreInternalOutcome ClawConfigInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClawConfigInfo.TemplateId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = value["TemplateId"].GetInt64();
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("DbTypes") && !value["DbTypes"].IsNull())
    {
        if (!value["DbTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClawConfigInfo.DbTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["DbTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dbTypes.push_back((*itr).GetString());
        }
        m_dbTypesHasBeenSet = true;
    }

    if (value.HasMember("Deploy") && !value["Deploy"].IsNull())
    {
        if (!value["Deploy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClawConfigInfo.Deploy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deploy.Deserialize(value["Deploy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deployHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClawConfigInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateId, allocator);
    }

    if (m_dbTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dbTypes.begin(); itr != m_dbTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_deployHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deploy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deploy.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t ClawConfigInfo::GetTemplateId() const
{
    return m_templateId;
}

void ClawConfigInfo::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool ClawConfigInfo::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

vector<string> ClawConfigInfo::GetDbTypes() const
{
    return m_dbTypes;
}

void ClawConfigInfo::SetDbTypes(const vector<string>& _dbTypes)
{
    m_dbTypes = _dbTypes;
    m_dbTypesHasBeenSet = true;
}

bool ClawConfigInfo::DbTypesHasBeenSet() const
{
    return m_dbTypesHasBeenSet;
}

ClawDeployInfo ClawConfigInfo::GetDeploy() const
{
    return m_deploy;
}

void ClawConfigInfo::SetDeploy(const ClawDeployInfo& _deploy)
{
    m_deploy = _deploy;
    m_deployHasBeenSet = true;
}

bool ClawConfigInfo::DeployHasBeenSet() const
{
    return m_deployHasBeenSet;
}

