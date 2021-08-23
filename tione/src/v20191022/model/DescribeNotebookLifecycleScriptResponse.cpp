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

#include <tencentcloud/tione/v20191022/model/DescribeNotebookLifecycleScriptResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

DescribeNotebookLifecycleScriptResponse::DescribeNotebookLifecycleScriptResponse() :
    m_notebookLifecycleScriptsNameHasBeenSet(false),
    m_createScriptHasBeenSet(false),
    m_startScriptHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeNotebookLifecycleScriptResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("NotebookLifecycleScriptsName") && !rsp["NotebookLifecycleScriptsName"].IsNull())
    {
        if (!rsp["NotebookLifecycleScriptsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookLifecycleScriptsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notebookLifecycleScriptsName = string(rsp["NotebookLifecycleScriptsName"].GetString());
        m_notebookLifecycleScriptsNameHasBeenSet = true;
    }

    if (rsp.HasMember("CreateScript") && !rsp["CreateScript"].IsNull())
    {
        if (!rsp["CreateScript"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateScript` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createScript = string(rsp["CreateScript"].GetString());
        m_createScriptHasBeenSet = true;
    }

    if (rsp.HasMember("StartScript") && !rsp["StartScript"].IsNull())
    {
        if (!rsp["StartScript"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartScript` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startScript = string(rsp["StartScript"].GetString());
        m_startScriptHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string DescribeNotebookLifecycleScriptResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_notebookLifecycleScriptsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotebookLifecycleScriptsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notebookLifecycleScriptsName.c_str(), allocator).Move(), allocator);
    }

    if (m_createScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateScript";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createScript.c_str(), allocator).Move(), allocator);
    }

    if (m_startScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartScript";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startScript.c_str(), allocator).Move(), allocator);
    }

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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeNotebookLifecycleScriptResponse::GetNotebookLifecycleScriptsName() const
{
    return m_notebookLifecycleScriptsName;
}

bool DescribeNotebookLifecycleScriptResponse::NotebookLifecycleScriptsNameHasBeenSet() const
{
    return m_notebookLifecycleScriptsNameHasBeenSet;
}

string DescribeNotebookLifecycleScriptResponse::GetCreateScript() const
{
    return m_createScript;
}

bool DescribeNotebookLifecycleScriptResponse::CreateScriptHasBeenSet() const
{
    return m_createScriptHasBeenSet;
}

string DescribeNotebookLifecycleScriptResponse::GetStartScript() const
{
    return m_startScript;
}

bool DescribeNotebookLifecycleScriptResponse::StartScriptHasBeenSet() const
{
    return m_startScriptHasBeenSet;
}

string DescribeNotebookLifecycleScriptResponse::GetCreationTime() const
{
    return m_creationTime;
}

bool DescribeNotebookLifecycleScriptResponse::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string DescribeNotebookLifecycleScriptResponse::GetLastModifiedTime() const
{
    return m_lastModifiedTime;
}

bool DescribeNotebookLifecycleScriptResponse::LastModifiedTimeHasBeenSet() const
{
    return m_lastModifiedTimeHasBeenSet;
}


