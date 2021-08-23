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

#include <tencentcloud/tbm/v20180129/model/Comment.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbm::V20180129::Model;
using namespace std;

Comment::Comment() :
    m_dateHasBeenSet(false),
    m_negCommentCountHasBeenSet(false),
    m_posCommentCountHasBeenSet(false)
{
}

CoreInternalOutcome Comment::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Comment.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("NegCommentCount") && !value["NegCommentCount"].IsNull())
    {
        if (!value["NegCommentCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Comment.NegCommentCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_negCommentCount = value["NegCommentCount"].GetUint64();
        m_negCommentCountHasBeenSet = true;
    }

    if (value.HasMember("PosCommentCount") && !value["PosCommentCount"].IsNull())
    {
        if (!value["PosCommentCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Comment.PosCommentCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_posCommentCount = value["PosCommentCount"].GetUint64();
        m_posCommentCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Comment::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_negCommentCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NegCommentCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_negCommentCount, allocator);
    }

    if (m_posCommentCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PosCommentCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_posCommentCount, allocator);
    }

}


string Comment::GetDate() const
{
    return m_date;
}

void Comment::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool Comment::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

uint64_t Comment::GetNegCommentCount() const
{
    return m_negCommentCount;
}

void Comment::SetNegCommentCount(const uint64_t& _negCommentCount)
{
    m_negCommentCount = _negCommentCount;
    m_negCommentCountHasBeenSet = true;
}

bool Comment::NegCommentCountHasBeenSet() const
{
    return m_negCommentCountHasBeenSet;
}

uint64_t Comment::GetPosCommentCount() const
{
    return m_posCommentCount;
}

void Comment::SetPosCommentCount(const uint64_t& _posCommentCount)
{
    m_posCommentCount = _posCommentCount;
    m_posCommentCountHasBeenSet = true;
}

bool Comment::PosCommentCountHasBeenSet() const
{
    return m_posCommentCountHasBeenSet;
}

