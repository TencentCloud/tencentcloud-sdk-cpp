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

#include <tencentcloud/vod/v20180717/model/DeleteRoundPlayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

DeleteRoundPlayRequest::DeleteRoundPlayRequest() :
    m_roundPlayIdHasBeenSet(false),
    m_subAppIdHasBeenSet(false)
{
}

string DeleteRoundPlayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_roundPlayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoundPlayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roundPlayId.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteRoundPlayRequest::GetRoundPlayId() const
{
    return m_roundPlayId;
}

void DeleteRoundPlayRequest::SetRoundPlayId(const string& _roundPlayId)
{
    m_roundPlayId = _roundPlayId;
    m_roundPlayIdHasBeenSet = true;
}

bool DeleteRoundPlayRequest::RoundPlayIdHasBeenSet() const
{
    return m_roundPlayIdHasBeenSet;
}

uint64_t DeleteRoundPlayRequest::GetSubAppId() const
{
    return m_subAppId;
}

void DeleteRoundPlayRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool DeleteRoundPlayRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}


