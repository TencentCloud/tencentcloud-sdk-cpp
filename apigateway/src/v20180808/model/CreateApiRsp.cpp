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

#include <tencentcloud/apigateway/v20180808/model/CreateApiRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace rapidjson;
using namespace std;

CreateApiRsp::CreateApiRsp() :
    m_apiIdHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

CoreInternalOutcome CreateApiRsp::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ApiId") && !value["ApiId"].IsNull())
    {
        if (!value["ApiId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreateApiRsp.ApiId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiId = string(value["ApiId"].GetString());
        m_apiIdHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreateApiRsp.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreateApiRsp.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreateApiRsp.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateApiRsp::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_apiIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApiId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_apiId.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

}


string CreateApiRsp::GetApiId() const
{
    return m_apiId;
}

void CreateApiRsp::SetApiId(const string& _apiId)
{
    m_apiId = _apiId;
    m_apiIdHasBeenSet = true;
}

bool CreateApiRsp::ApiIdHasBeenSet() const
{
    return m_apiIdHasBeenSet;
}

string CreateApiRsp::GetPath() const
{
    return m_path;
}

void CreateApiRsp::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool CreateApiRsp::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string CreateApiRsp::GetMethod() const
{
    return m_method;
}

void CreateApiRsp::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool CreateApiRsp::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string CreateApiRsp::GetCreatedTime() const
{
    return m_createdTime;
}

void CreateApiRsp::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool CreateApiRsp::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

