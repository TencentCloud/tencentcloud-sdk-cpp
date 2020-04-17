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

#include <tencentcloud/cam/v20190116/model/DetectStateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace rapidjson;
using namespace std;

DetectStateRequest::DetectStateRequest() :
    m_clientIPHasBeenSet(false),
    m_clientUAHasBeenSet(false),
    m_faceIdTokenHasBeenSet(false)
{
}

string DetectStateRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clientIPHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientIP";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clientIP.c_str(), allocator).Move(), allocator);
    }

    if (m_clientUAHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientUA";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clientUA.c_str(), allocator).Move(), allocator);
    }

    if (m_faceIdTokenHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FaceIdToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_faceIdToken.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DetectStateRequest::GetClientIP() const
{
    return m_clientIP;
}

void DetectStateRequest::SetClientIP(const string& _clientIP)
{
    m_clientIP = _clientIP;
    m_clientIPHasBeenSet = true;
}

bool DetectStateRequest::ClientIPHasBeenSet() const
{
    return m_clientIPHasBeenSet;
}

string DetectStateRequest::GetClientUA() const
{
    return m_clientUA;
}

void DetectStateRequest::SetClientUA(const string& _clientUA)
{
    m_clientUA = _clientUA;
    m_clientUAHasBeenSet = true;
}

bool DetectStateRequest::ClientUAHasBeenSet() const
{
    return m_clientUAHasBeenSet;
}

string DetectStateRequest::GetFaceIdToken() const
{
    return m_faceIdToken;
}

void DetectStateRequest::SetFaceIdToken(const string& _faceIdToken)
{
    m_faceIdToken = _faceIdToken;
    m_faceIdTokenHasBeenSet = true;
}

bool DetectStateRequest::FaceIdTokenHasBeenSet() const
{
    return m_faceIdTokenHasBeenSet;
}


