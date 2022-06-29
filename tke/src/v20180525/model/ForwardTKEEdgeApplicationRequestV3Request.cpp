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

#include <tencentcloud/tke/v20180525/model/ForwardTKEEdgeApplicationRequestV3Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ForwardTKEEdgeApplicationRequestV3Request::ForwardTKEEdgeApplicationRequestV3Request() :
    m_methodHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_acceptHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_requestBodyHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_encodedBodyHasBeenSet(false)
{
}

string ForwardTKEEdgeApplicationRequestV3Request::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_acceptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Accept";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accept.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }

    if (m_requestBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestBody";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requestBody.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_encodedBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncodedBody";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encodedBody.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ForwardTKEEdgeApplicationRequestV3Request::GetMethod() const
{
    return m_method;
}

void ForwardTKEEdgeApplicationRequestV3Request::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool ForwardTKEEdgeApplicationRequestV3Request::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string ForwardTKEEdgeApplicationRequestV3Request::GetPath() const
{
    return m_path;
}

void ForwardTKEEdgeApplicationRequestV3Request::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool ForwardTKEEdgeApplicationRequestV3Request::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string ForwardTKEEdgeApplicationRequestV3Request::GetAccept() const
{
    return m_accept;
}

void ForwardTKEEdgeApplicationRequestV3Request::SetAccept(const string& _accept)
{
    m_accept = _accept;
    m_acceptHasBeenSet = true;
}

bool ForwardTKEEdgeApplicationRequestV3Request::AcceptHasBeenSet() const
{
    return m_acceptHasBeenSet;
}

string ForwardTKEEdgeApplicationRequestV3Request::GetContentType() const
{
    return m_contentType;
}

void ForwardTKEEdgeApplicationRequestV3Request::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool ForwardTKEEdgeApplicationRequestV3Request::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

string ForwardTKEEdgeApplicationRequestV3Request::GetRequestBody() const
{
    return m_requestBody;
}

void ForwardTKEEdgeApplicationRequestV3Request::SetRequestBody(const string& _requestBody)
{
    m_requestBody = _requestBody;
    m_requestBodyHasBeenSet = true;
}

bool ForwardTKEEdgeApplicationRequestV3Request::RequestBodyHasBeenSet() const
{
    return m_requestBodyHasBeenSet;
}

string ForwardTKEEdgeApplicationRequestV3Request::GetClusterName() const
{
    return m_clusterName;
}

void ForwardTKEEdgeApplicationRequestV3Request::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ForwardTKEEdgeApplicationRequestV3Request::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string ForwardTKEEdgeApplicationRequestV3Request::GetEncodedBody() const
{
    return m_encodedBody;
}

void ForwardTKEEdgeApplicationRequestV3Request::SetEncodedBody(const string& _encodedBody)
{
    m_encodedBody = _encodedBody;
    m_encodedBodyHasBeenSet = true;
}

bool ForwardTKEEdgeApplicationRequestV3Request::EncodedBodyHasBeenSet() const
{
    return m_encodedBodyHasBeenSet;
}


