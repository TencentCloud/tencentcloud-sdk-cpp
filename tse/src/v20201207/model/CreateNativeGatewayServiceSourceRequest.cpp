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

#include <tencentcloud/tse/v20201207/model/CreateNativeGatewayServiceSourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CreateNativeGatewayServiceSourceRequest::CreateNativeGatewayServiceSourceRequest() :
    m_gatewayIDHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceIDHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_sourceInfoHasBeenSet(false)
{
}

string CreateNativeGatewayServiceSourceRequest::ToJsonString() const
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

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
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


string CreateNativeGatewayServiceSourceRequest::GetGatewayID() const
{
    return m_gatewayID;
}

void CreateNativeGatewayServiceSourceRequest::SetGatewayID(const string& _gatewayID)
{
    m_gatewayID = _gatewayID;
    m_gatewayIDHasBeenSet = true;
}

bool CreateNativeGatewayServiceSourceRequest::GatewayIDHasBeenSet() const
{
    return m_gatewayIDHasBeenSet;
}

string CreateNativeGatewayServiceSourceRequest::GetSourceType() const
{
    return m_sourceType;
}

void CreateNativeGatewayServiceSourceRequest::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool CreateNativeGatewayServiceSourceRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string CreateNativeGatewayServiceSourceRequest::GetSourceID() const
{
    return m_sourceID;
}

void CreateNativeGatewayServiceSourceRequest::SetSourceID(const string& _sourceID)
{
    m_sourceID = _sourceID;
    m_sourceIDHasBeenSet = true;
}

bool CreateNativeGatewayServiceSourceRequest::SourceIDHasBeenSet() const
{
    return m_sourceIDHasBeenSet;
}

string CreateNativeGatewayServiceSourceRequest::GetSourceName() const
{
    return m_sourceName;
}

void CreateNativeGatewayServiceSourceRequest::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool CreateNativeGatewayServiceSourceRequest::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

SourceInfo CreateNativeGatewayServiceSourceRequest::GetSourceInfo() const
{
    return m_sourceInfo;
}

void CreateNativeGatewayServiceSourceRequest::SetSourceInfo(const SourceInfo& _sourceInfo)
{
    m_sourceInfo = _sourceInfo;
    m_sourceInfoHasBeenSet = true;
}

bool CreateNativeGatewayServiceSourceRequest::SourceInfoHasBeenSet() const
{
    return m_sourceInfoHasBeenSet;
}


