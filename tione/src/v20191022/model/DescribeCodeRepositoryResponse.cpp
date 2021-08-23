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

#include <tencentcloud/tione/v20191022/model/DescribeCodeRepositoryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

DescribeCodeRepositoryResponse::DescribeCodeRepositoryResponse() :
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_codeRepositoryNameHasBeenSet(false),
    m_gitConfigHasBeenSet(false),
    m_noSecretHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCodeRepositoryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CreationTime") && !rsp["CreationTime"].IsNull())
    {
        if (!rsp["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(rsp["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LastModifiedTime") && !rsp["LastModifiedTime"].IsNull())
    {
        if (!rsp["LastModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifiedTime = string(rsp["LastModifiedTime"].GetString());
        m_lastModifiedTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CodeRepositoryName") && !rsp["CodeRepositoryName"].IsNull())
    {
        if (!rsp["CodeRepositoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeRepositoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeRepositoryName = string(rsp["CodeRepositoryName"].GetString());
        m_codeRepositoryNameHasBeenSet = true;
    }

    if (rsp.HasMember("GitConfig") && !rsp["GitConfig"].IsNull())
    {
        if (!rsp["GitConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GitConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gitConfig.Deserialize(rsp["GitConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gitConfigHasBeenSet = true;
    }

    if (rsp.HasMember("NoSecret") && !rsp["NoSecret"].IsNull())
    {
        if (!rsp["NoSecret"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NoSecret` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_noSecret = rsp["NoSecret"].GetBool();
        m_noSecretHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCodeRepositoryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastModifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_codeRepositoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeRepositoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeRepositoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_gitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GitConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gitConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_noSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noSecret, allocator);
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


string DescribeCodeRepositoryResponse::GetCreationTime() const
{
    return m_creationTime;
}

bool DescribeCodeRepositoryResponse::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string DescribeCodeRepositoryResponse::GetLastModifiedTime() const
{
    return m_lastModifiedTime;
}

bool DescribeCodeRepositoryResponse::LastModifiedTimeHasBeenSet() const
{
    return m_lastModifiedTimeHasBeenSet;
}

string DescribeCodeRepositoryResponse::GetCodeRepositoryName() const
{
    return m_codeRepositoryName;
}

bool DescribeCodeRepositoryResponse::CodeRepositoryNameHasBeenSet() const
{
    return m_codeRepositoryNameHasBeenSet;
}

GitConfig DescribeCodeRepositoryResponse::GetGitConfig() const
{
    return m_gitConfig;
}

bool DescribeCodeRepositoryResponse::GitConfigHasBeenSet() const
{
    return m_gitConfigHasBeenSet;
}

bool DescribeCodeRepositoryResponse::GetNoSecret() const
{
    return m_noSecret;
}

bool DescribeCodeRepositoryResponse::NoSecretHasBeenSet() const
{
    return m_noSecretHasBeenSet;
}


