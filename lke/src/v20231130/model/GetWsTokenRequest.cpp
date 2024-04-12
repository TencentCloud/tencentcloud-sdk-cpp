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

#include <tencentcloud/lke/v20231130/model/GetWsTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

GetWsTokenRequest::GetWsTokenRequest() :
    m_typeHasBeenSet(false),
    m_botAppKeyHasBeenSet(false),
    m_visitorBizIdHasBeenSet(false),
    m_visitorLabelsHasBeenSet(false)
{
}

string GetWsTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_botAppKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotAppKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_botAppKey.c_str(), allocator).Move(), allocator);
    }

    if (m_visitorBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VisitorBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_visitorBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_visitorLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VisitorLabels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_visitorLabels.begin(); itr != m_visitorLabels.end(); ++itr, ++i)
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


int64_t GetWsTokenRequest::GetType() const
{
    return m_type;
}

void GetWsTokenRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool GetWsTokenRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string GetWsTokenRequest::GetBotAppKey() const
{
    return m_botAppKey;
}

void GetWsTokenRequest::SetBotAppKey(const string& _botAppKey)
{
    m_botAppKey = _botAppKey;
    m_botAppKeyHasBeenSet = true;
}

bool GetWsTokenRequest::BotAppKeyHasBeenSet() const
{
    return m_botAppKeyHasBeenSet;
}

string GetWsTokenRequest::GetVisitorBizId() const
{
    return m_visitorBizId;
}

void GetWsTokenRequest::SetVisitorBizId(const string& _visitorBizId)
{
    m_visitorBizId = _visitorBizId;
    m_visitorBizIdHasBeenSet = true;
}

bool GetWsTokenRequest::VisitorBizIdHasBeenSet() const
{
    return m_visitorBizIdHasBeenSet;
}

vector<GetWsTokenReq_Label> GetWsTokenRequest::GetVisitorLabels() const
{
    return m_visitorLabels;
}

void GetWsTokenRequest::SetVisitorLabels(const vector<GetWsTokenReq_Label>& _visitorLabels)
{
    m_visitorLabels = _visitorLabels;
    m_visitorLabelsHasBeenSet = true;
}

bool GetWsTokenRequest::VisitorLabelsHasBeenSet() const
{
    return m_visitorLabelsHasBeenSet;
}


