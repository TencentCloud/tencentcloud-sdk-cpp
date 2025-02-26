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

#include <tencentcloud/lowcode/v20210108/model/DeleteKnowledgeDocumentSetRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

DeleteKnowledgeDocumentSetRsp::DeleteKnowledgeDocumentSetRsp() :
    m_affectedCountHasBeenSet(false)
{
}

CoreInternalOutcome DeleteKnowledgeDocumentSetRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AffectedCount") && !value["AffectedCount"].IsNull())
    {
        if (!value["AffectedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteKnowledgeDocumentSetRsp.AffectedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_affectedCount = value["AffectedCount"].GetInt64();
        m_affectedCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeleteKnowledgeDocumentSetRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_affectedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectedCount, allocator);
    }

}


int64_t DeleteKnowledgeDocumentSetRsp::GetAffectedCount() const
{
    return m_affectedCount;
}

void DeleteKnowledgeDocumentSetRsp::SetAffectedCount(const int64_t& _affectedCount)
{
    m_affectedCount = _affectedCount;
    m_affectedCountHasBeenSet = true;
}

bool DeleteKnowledgeDocumentSetRsp::AffectedCountHasBeenSet() const
{
    return m_affectedCountHasBeenSet;
}

