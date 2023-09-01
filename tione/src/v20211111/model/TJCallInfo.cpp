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

#include <tencentcloud/tione/v20211111/model/TJCallInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

TJCallInfo::TJCallInfo() :
    m_httpAddrHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_callExampleHasBeenSet(false)
{
}

CoreInternalOutcome TJCallInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HttpAddr") && !value["HttpAddr"].IsNull())
    {
        if (!value["HttpAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TJCallInfo.HttpAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpAddr = string(value["HttpAddr"].GetString());
        m_httpAddrHasBeenSet = true;
    }

    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TJCallInfo.Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(value["Token"].GetString());
        m_tokenHasBeenSet = true;
    }

    if (value.HasMember("CallExample") && !value["CallExample"].IsNull())
    {
        if (!value["CallExample"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TJCallInfo.CallExample` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callExample = string(value["CallExample"].GetString());
        m_callExampleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TJCallInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_httpAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

    if (m_callExampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallExample";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callExample.c_str(), allocator).Move(), allocator);
    }

}


string TJCallInfo::GetHttpAddr() const
{
    return m_httpAddr;
}

void TJCallInfo::SetHttpAddr(const string& _httpAddr)
{
    m_httpAddr = _httpAddr;
    m_httpAddrHasBeenSet = true;
}

bool TJCallInfo::HttpAddrHasBeenSet() const
{
    return m_httpAddrHasBeenSet;
}

string TJCallInfo::GetToken() const
{
    return m_token;
}

void TJCallInfo::SetToken(const string& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool TJCallInfo::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

string TJCallInfo::GetCallExample() const
{
    return m_callExample;
}

void TJCallInfo::SetCallExample(const string& _callExample)
{
    m_callExample = _callExample;
    m_callExampleHasBeenSet = true;
}

bool TJCallInfo::CallExampleHasBeenSet() const
{
    return m_callExampleHasBeenSet;
}

