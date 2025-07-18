/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tse/v20201207/model/ModifyNativeGatewayServiceSourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ModifyNativeGatewayServiceSourceRequest::ModifyNativeGatewayServiceSourceRequest() :
    m_gatewayIDHasBeenSet(false),
    m_sourceIDHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_sourceInfoHasBeenSet(false)
{
}

string ModifyNativeGatewayServiceSourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayID.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceID.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyNativeGatewayServiceSourceRequest::GetGatewayID() const
{
    return m_gatewayID;
}

void ModifyNativeGatewayServiceSourceRequest::SetGatewayID(const string& _gatewayID)
{
    m_gatewayID = _gatewayID;
    m_gatewayIDHasBeenSet = true;
}

bool ModifyNativeGatewayServiceSourceRequest::GatewayIDHasBeenSet() const
{
    return m_gatewayIDHasBeenSet;
}

string ModifyNativeGatewayServiceSourceRequest::GetSourceID() const
{
    return m_sourceID;
}

void ModifyNativeGatewayServiceSourceRequest::SetSourceID(const string& _sourceID)
{
    m_sourceID = _sourceID;
    m_sourceIDHasBeenSet = true;
}

bool ModifyNativeGatewayServiceSourceRequest::SourceIDHasBeenSet() const
{
    return m_sourceIDHasBeenSet;
}

string ModifyNativeGatewayServiceSourceRequest::GetSourceName() const
{
    return m_sourceName;
}

void ModifyNativeGatewayServiceSourceRequest::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool ModifyNativeGatewayServiceSourceRequest::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

SourceInfo ModifyNativeGatewayServiceSourceRequest::GetSourceInfo() const
{
    return m_sourceInfo;
}

void ModifyNativeGatewayServiceSourceRequest::SetSourceInfo(const SourceInfo& _sourceInfo)
{
    m_sourceInfo = _sourceInfo;
    m_sourceInfoHasBeenSet = true;
}

bool ModifyNativeGatewayServiceSourceRequest::SourceInfoHasBeenSet() const
{
    return m_sourceInfoHasBeenSet;
}


