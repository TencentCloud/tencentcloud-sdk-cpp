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

#include <tencentcloud/tbp/v20190311/model/CreateBotRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbp::V20190311::Model;
using namespace std;

CreateBotRequest::CreateBotRequest() :
    m_botNameHasBeenSet(false),
    m_botCnNameHasBeenSet(false)
{
}

string CreateBotRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_botNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_botName.c_str(), allocator).Move(), allocator);
    }

    if (m_botCnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotCnName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_botCnName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBotRequest::GetBotName() const
{
    return m_botName;
}

void CreateBotRequest::SetBotName(const string& _botName)
{
    m_botName = _botName;
    m_botNameHasBeenSet = true;
}

bool CreateBotRequest::BotNameHasBeenSet() const
{
    return m_botNameHasBeenSet;
}

string CreateBotRequest::GetBotCnName() const
{
    return m_botCnName;
}

void CreateBotRequest::SetBotCnName(const string& _botCnName)
{
    m_botCnName = _botCnName;
    m_botCnNameHasBeenSet = true;
}

bool CreateBotRequest::BotCnNameHasBeenSet() const
{
    return m_botCnNameHasBeenSet;
}


