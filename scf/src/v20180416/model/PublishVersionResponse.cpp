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

#include <tencentcloud/scf/v20180416/model/PublishVersionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

PublishVersionResponse::PublishVersionResponse() :
    m_functionVersionHasBeenSet(false),
    m_codeSizeHasBeenSet(false),
    m_memorySizeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_handlerHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_runtimeHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

CoreInternalOutcome PublishVersionResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("FunctionVersion") && !rsp["FunctionVersion"].IsNull())
    {
        if (!rsp["FunctionVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionVersion = string(rsp["FunctionVersion"].GetString());
        m_functionVersionHasBeenSet = true;
    }

    if (rsp.HasMember("CodeSize") && !rsp["CodeSize"].IsNull())
    {
        if (!rsp["CodeSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_codeSize = rsp["CodeSize"].GetInt64();
        m_codeSizeHasBeenSet = true;
    }

    if (rsp.HasMember("MemorySize") && !rsp["MemorySize"].IsNull())
    {
        if (!rsp["MemorySize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MemorySize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memorySize = rsp["MemorySize"].GetInt64();
        m_memorySizeHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("Handler") && !rsp["Handler"].IsNull())
    {
        if (!rsp["Handler"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Handler` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_handler = string(rsp["Handler"].GetString());
        m_handlerHasBeenSet = true;
    }

    if (rsp.HasMember("Timeout") && !rsp["Timeout"].IsNull())
    {
        if (!rsp["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = rsp["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }

    if (rsp.HasMember("Runtime") && !rsp["Runtime"].IsNull())
    {
        if (!rsp["Runtime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Runtime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtime = string(rsp["Runtime"].GetString());
        m_runtimeHasBeenSet = true;
    }

    if (rsp.HasMember("Namespace") && !rsp["Namespace"].IsNull())
    {
        if (!rsp["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(rsp["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string PublishVersionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_functionVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_codeSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_codeSize, allocator);
    }

    if (m_memorySizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemorySize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memorySize, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_handlerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Handler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_handler.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_runtimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Runtime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtime.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string PublishVersionResponse::GetFunctionVersion() const
{
    return m_functionVersion;
}

bool PublishVersionResponse::FunctionVersionHasBeenSet() const
{
    return m_functionVersionHasBeenSet;
}

int64_t PublishVersionResponse::GetCodeSize() const
{
    return m_codeSize;
}

bool PublishVersionResponse::CodeSizeHasBeenSet() const
{
    return m_codeSizeHasBeenSet;
}

int64_t PublishVersionResponse::GetMemorySize() const
{
    return m_memorySize;
}

bool PublishVersionResponse::MemorySizeHasBeenSet() const
{
    return m_memorySizeHasBeenSet;
}

string PublishVersionResponse::GetDescription() const
{
    return m_description;
}

bool PublishVersionResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string PublishVersionResponse::GetHandler() const
{
    return m_handler;
}

bool PublishVersionResponse::HandlerHasBeenSet() const
{
    return m_handlerHasBeenSet;
}

int64_t PublishVersionResponse::GetTimeout() const
{
    return m_timeout;
}

bool PublishVersionResponse::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string PublishVersionResponse::GetRuntime() const
{
    return m_runtime;
}

bool PublishVersionResponse::RuntimeHasBeenSet() const
{
    return m_runtimeHasBeenSet;
}

string PublishVersionResponse::GetNamespace() const
{
    return m_namespace;
}

bool PublishVersionResponse::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}


