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

#include <tencentcloud/wedata/v20250806/model/CreateQualityRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateQualityRuleRequest::CreateQualityRuleRequest() :
    m_projectIdHasBeenSet(false),
    m_createRuleSceneHasBeenSet(false),
    m_ruleBOListHasBeenSet(false)
{
}

string CreateQualityRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_createRuleSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateRuleScene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_createRuleScene, allocator);
    }

    if (m_ruleBOListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleBOList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleBOList.begin(); itr != m_ruleBOList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateQualityRuleRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateQualityRuleRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateQualityRuleRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t CreateQualityRuleRequest::GetCreateRuleScene() const
{
    return m_createRuleScene;
}

void CreateQualityRuleRequest::SetCreateRuleScene(const int64_t& _createRuleScene)
{
    m_createRuleScene = _createRuleScene;
    m_createRuleSceneHasBeenSet = true;
}

bool CreateQualityRuleRequest::CreateRuleSceneHasBeenSet() const
{
    return m_createRuleSceneHasBeenSet;
}

vector<QualityRuleInfo> CreateQualityRuleRequest::GetRuleBOList() const
{
    return m_ruleBOList;
}

void CreateQualityRuleRequest::SetRuleBOList(const vector<QualityRuleInfo>& _ruleBOList)
{
    m_ruleBOList = _ruleBOList;
    m_ruleBOListHasBeenSet = true;
}

bool CreateQualityRuleRequest::RuleBOListHasBeenSet() const
{
    return m_ruleBOListHasBeenSet;
}


