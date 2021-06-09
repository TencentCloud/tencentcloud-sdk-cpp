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

#include <tencentcloud/tcb/v20180608/model/CreateStaticStoreRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CreateStaticStoreRequest::CreateStaticStoreRequest() :
    m_envIdHasBeenSet(false),
    m_enableUnionHasBeenSet(false)
{
}

string CreateStaticStoreRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableUnionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableUnion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableUnion, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateStaticStoreRequest::GetEnvId() const
{
    return m_envId;
}

void CreateStaticStoreRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool CreateStaticStoreRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

bool CreateStaticStoreRequest::GetEnableUnion() const
{
    return m_enableUnion;
}

void CreateStaticStoreRequest::SetEnableUnion(const bool& _enableUnion)
{
    m_enableUnion = _enableUnion;
    m_enableUnionHasBeenSet = true;
}

bool CreateStaticStoreRequest::EnableUnionHasBeenSet() const
{
    return m_enableUnionHasBeenSet;
}


