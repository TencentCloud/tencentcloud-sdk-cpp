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

#include <tencentcloud/live/v20180801/model/CreateCasterInputPushUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CreateCasterInputPushUrlRequest::CreateCasterInputPushUrlRequest() :
    m_casterIdHasBeenSet(false),
    m_inputIndexHasBeenSet(false),
    m_protocolHasBeenSet(false)
{
}

string CreateCasterInputPushUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_casterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CasterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_casterId, allocator);
    }

    if (m_inputIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_inputIndex, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateCasterInputPushUrlRequest::GetCasterId() const
{
    return m_casterId;
}

void CreateCasterInputPushUrlRequest::SetCasterId(const uint64_t& _casterId)
{
    m_casterId = _casterId;
    m_casterIdHasBeenSet = true;
}

bool CreateCasterInputPushUrlRequest::CasterIdHasBeenSet() const
{
    return m_casterIdHasBeenSet;
}

uint64_t CreateCasterInputPushUrlRequest::GetInputIndex() const
{
    return m_inputIndex;
}

void CreateCasterInputPushUrlRequest::SetInputIndex(const uint64_t& _inputIndex)
{
    m_inputIndex = _inputIndex;
    m_inputIndexHasBeenSet = true;
}

bool CreateCasterInputPushUrlRequest::InputIndexHasBeenSet() const
{
    return m_inputIndexHasBeenSet;
}

string CreateCasterInputPushUrlRequest::GetProtocol() const
{
    return m_protocol;
}

void CreateCasterInputPushUrlRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateCasterInputPushUrlRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}


