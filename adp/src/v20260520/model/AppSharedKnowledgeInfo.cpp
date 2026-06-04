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

#include <tencentcloud/adp/v20260520/model/AppSharedKnowledgeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppSharedKnowledgeInfo::AppSharedKnowledgeInfo() :
    m_knowledgeIdHasBeenSet(false),
    m_knowledgeNameHasBeenSet(false)
{
}

CoreInternalOutcome AppSharedKnowledgeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KnowledgeId") && !value["KnowledgeId"].IsNull())
    {
        if (!value["KnowledgeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppSharedKnowledgeInfo.KnowledgeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_knowledgeId = string(value["KnowledgeId"].GetString());
        m_knowledgeIdHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeName") && !value["KnowledgeName"].IsNull())
    {
        if (!value["KnowledgeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppSharedKnowledgeInfo.KnowledgeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_knowledgeName = string(value["KnowledgeName"].GetString());
        m_knowledgeNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppSharedKnowledgeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_knowledgeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_knowledgeId.c_str(), allocator).Move(), allocator);
    }

    if (m_knowledgeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_knowledgeName.c_str(), allocator).Move(), allocator);
    }

}


string AppSharedKnowledgeInfo::GetKnowledgeId() const
{
    return m_knowledgeId;
}

void AppSharedKnowledgeInfo::SetKnowledgeId(const string& _knowledgeId)
{
    m_knowledgeId = _knowledgeId;
    m_knowledgeIdHasBeenSet = true;
}

bool AppSharedKnowledgeInfo::KnowledgeIdHasBeenSet() const
{
    return m_knowledgeIdHasBeenSet;
}

string AppSharedKnowledgeInfo::GetKnowledgeName() const
{
    return m_knowledgeName;
}

void AppSharedKnowledgeInfo::SetKnowledgeName(const string& _knowledgeName)
{
    m_knowledgeName = _knowledgeName;
    m_knowledgeNameHasBeenSet = true;
}

bool AppSharedKnowledgeInfo::KnowledgeNameHasBeenSet() const
{
    return m_knowledgeNameHasBeenSet;
}

