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

#include <tencentcloud/live/v20180801/model/StartLivePadStreamRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

StartLivePadStreamRequest::StartLivePadStreamRequest() :
    m_appNameHasBeenSet(false),
    m_pushDomainNameHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string StartLivePadStreamRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_pushDomainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushDomainName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pushDomainName.c_str(), allocator).Move(), allocator);
    }

    if (m_streamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_streamName.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string StartLivePadStreamRequest::GetAppName() const
{
    return m_appName;
}

void StartLivePadStreamRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool StartLivePadStreamRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string StartLivePadStreamRequest::GetPushDomainName() const
{
    return m_pushDomainName;
}

void StartLivePadStreamRequest::SetPushDomainName(const string& _pushDomainName)
{
    m_pushDomainName = _pushDomainName;
    m_pushDomainNameHasBeenSet = true;
}

bool StartLivePadStreamRequest::PushDomainNameHasBeenSet() const
{
    return m_pushDomainNameHasBeenSet;
}

string StartLivePadStreamRequest::GetStreamName() const
{
    return m_streamName;
}

void StartLivePadStreamRequest::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool StartLivePadStreamRequest::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

string StartLivePadStreamRequest::GetOperator() const
{
    return m_operator;
}

void StartLivePadStreamRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool StartLivePadStreamRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


