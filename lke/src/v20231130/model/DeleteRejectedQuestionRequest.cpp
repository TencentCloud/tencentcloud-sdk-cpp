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

#include <tencentcloud/lke/v20231130/model/DeleteRejectedQuestionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

DeleteRejectedQuestionRequest::DeleteRejectedQuestionRequest() :
    m_botBizIdHasBeenSet(false),
    m_rejectedBizIdsHasBeenSet(false)
{
}

string DeleteRejectedQuestionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_botBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_botBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_rejectedBizIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RejectedBizIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_rejectedBizIds.begin(); itr != m_rejectedBizIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteRejectedQuestionRequest::GetBotBizId() const
{
    return m_botBizId;
}

void DeleteRejectedQuestionRequest::SetBotBizId(const string& _botBizId)
{
    m_botBizId = _botBizId;
    m_botBizIdHasBeenSet = true;
}

bool DeleteRejectedQuestionRequest::BotBizIdHasBeenSet() const
{
    return m_botBizIdHasBeenSet;
}

vector<string> DeleteRejectedQuestionRequest::GetRejectedBizIds() const
{
    return m_rejectedBizIds;
}

void DeleteRejectedQuestionRequest::SetRejectedBizIds(const vector<string>& _rejectedBizIds)
{
    m_rejectedBizIds = _rejectedBizIds;
    m_rejectedBizIdsHasBeenSet = true;
}

bool DeleteRejectedQuestionRequest::RejectedBizIdsHasBeenSet() const
{
    return m_rejectedBizIdsHasBeenSet;
}


