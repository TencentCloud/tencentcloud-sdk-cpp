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

#include <tencentcloud/dlc/v20210125/model/GetModelReadmeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

GetModelReadmeResponse::GetModelReadmeResponse() :
    m_modelNameHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_modelTypeHasBeenSet(false),
    m_parameterSizeHasBeenSet(false),
    m_builtInHasBeenSet(false),
    m_readmeHasBeenSet(false)
{
}

CoreInternalOutcome GetModelReadmeResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ModelName") && !rsp["ModelName"].IsNull())
    {
        if (!rsp["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(rsp["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (rsp.HasMember("Provider") && !rsp["Provider"].IsNull())
    {
        if (!rsp["Provider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Provider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provider = string(rsp["Provider"].GetString());
        m_providerHasBeenSet = true;
    }

    if (rsp.HasMember("ModelType") && !rsp["ModelType"].IsNull())
    {
        if (!rsp["ModelType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelType = string(rsp["ModelType"].GetString());
        m_modelTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ParameterSize") && !rsp["ParameterSize"].IsNull())
    {
        if (!rsp["ParameterSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameterSize = string(rsp["ParameterSize"].GetString());
        m_parameterSizeHasBeenSet = true;
    }

    if (rsp.HasMember("BuiltIn") && !rsp["BuiltIn"].IsNull())
    {
        if (!rsp["BuiltIn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BuiltIn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_builtIn = rsp["BuiltIn"].GetBool();
        m_builtInHasBeenSet = true;
    }

    if (rsp.HasMember("Readme") && !rsp["Readme"].IsNull())
    {
        if (!rsp["Readme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Readme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_readme = string(rsp["Readme"].GetString());
        m_readmeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetModelReadmeResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

    if (m_modelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelType.c_str(), allocator).Move(), allocator);
    }

    if (m_parameterSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParameterSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parameterSize.c_str(), allocator).Move(), allocator);
    }

    if (m_builtInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuiltIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_builtIn, allocator);
    }

    if (m_readmeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Readme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_readme.c_str(), allocator).Move(), allocator);
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


string GetModelReadmeResponse::GetModelName() const
{
    return m_modelName;
}

bool GetModelReadmeResponse::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string GetModelReadmeResponse::GetProvider() const
{
    return m_provider;
}

bool GetModelReadmeResponse::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string GetModelReadmeResponse::GetModelType() const
{
    return m_modelType;
}

bool GetModelReadmeResponse::ModelTypeHasBeenSet() const
{
    return m_modelTypeHasBeenSet;
}

string GetModelReadmeResponse::GetParameterSize() const
{
    return m_parameterSize;
}

bool GetModelReadmeResponse::ParameterSizeHasBeenSet() const
{
    return m_parameterSizeHasBeenSet;
}

bool GetModelReadmeResponse::GetBuiltIn() const
{
    return m_builtIn;
}

bool GetModelReadmeResponse::BuiltInHasBeenSet() const
{
    return m_builtInHasBeenSet;
}

string GetModelReadmeResponse::GetReadme() const
{
    return m_readme;
}

bool GetModelReadmeResponse::ReadmeHasBeenSet() const
{
    return m_readmeHasBeenSet;
}


