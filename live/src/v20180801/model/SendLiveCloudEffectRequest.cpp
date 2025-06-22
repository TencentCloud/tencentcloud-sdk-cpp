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

#include <tencentcloud/live/v20180801/model/SendLiveCloudEffectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

SendLiveCloudEffectRequest::SendLiveCloudEffectRequest() :
    m_appNameHasBeenSet(false),
    m_pushDomainNameHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_zoomFactorHasBeenSet(false),
    m_xPositionHasBeenSet(false),
    m_yPositionHasBeenSet(false)
{
}

string SendLiveCloudEffectRequest::ToJsonString() const
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

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_zoomFactorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoomFactor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_zoomFactor, allocator);
    }

    if (m_xPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XPosition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_xPosition.c_str(), allocator).Move(), allocator);
    }

    if (m_yPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YPosition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_yPosition.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SendLiveCloudEffectRequest::GetAppName() const
{
    return m_appName;
}

void SendLiveCloudEffectRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool SendLiveCloudEffectRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string SendLiveCloudEffectRequest::GetPushDomainName() const
{
    return m_pushDomainName;
}

void SendLiveCloudEffectRequest::SetPushDomainName(const string& _pushDomainName)
{
    m_pushDomainName = _pushDomainName;
    m_pushDomainNameHasBeenSet = true;
}

bool SendLiveCloudEffectRequest::PushDomainNameHasBeenSet() const
{
    return m_pushDomainNameHasBeenSet;
}

string SendLiveCloudEffectRequest::GetStreamName() const
{
    return m_streamName;
}

void SendLiveCloudEffectRequest::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool SendLiveCloudEffectRequest::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

string SendLiveCloudEffectRequest::GetId() const
{
    return m_id;
}

void SendLiveCloudEffectRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SendLiveCloudEffectRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string SendLiveCloudEffectRequest::GetOperator() const
{
    return m_operator;
}

void SendLiveCloudEffectRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool SendLiveCloudEffectRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

int64_t SendLiveCloudEffectRequest::GetZoomFactor() const
{
    return m_zoomFactor;
}

void SendLiveCloudEffectRequest::SetZoomFactor(const int64_t& _zoomFactor)
{
    m_zoomFactor = _zoomFactor;
    m_zoomFactorHasBeenSet = true;
}

bool SendLiveCloudEffectRequest::ZoomFactorHasBeenSet() const
{
    return m_zoomFactorHasBeenSet;
}

string SendLiveCloudEffectRequest::GetXPosition() const
{
    return m_xPosition;
}

void SendLiveCloudEffectRequest::SetXPosition(const string& _xPosition)
{
    m_xPosition = _xPosition;
    m_xPositionHasBeenSet = true;
}

bool SendLiveCloudEffectRequest::XPositionHasBeenSet() const
{
    return m_xPositionHasBeenSet;
}

string SendLiveCloudEffectRequest::GetYPosition() const
{
    return m_yPosition;
}

void SendLiveCloudEffectRequest::SetYPosition(const string& _yPosition)
{
    m_yPosition = _yPosition;
    m_yPositionHasBeenSet = true;
}

bool SendLiveCloudEffectRequest::YPositionHasBeenSet() const
{
    return m_yPositionHasBeenSet;
}


