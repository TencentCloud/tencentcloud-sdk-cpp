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

#include <tencentcloud/clb/v20180317/model/DeleteIntentRouterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

DeleteIntentRouterRequest::DeleteIntentRouterRequest() :
    m_modelRouterIdHasBeenSet(false),
    m_intentRouterIdHasBeenSet(false)
{
}

string DeleteIntentRouterRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelRouterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelRouterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelRouterId.c_str(), allocator).Move(), allocator);
    }

    if (m_intentRouterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentRouterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_intentRouterId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteIntentRouterRequest::GetModelRouterId() const
{
    return m_modelRouterId;
}

void DeleteIntentRouterRequest::SetModelRouterId(const string& _modelRouterId)
{
    m_modelRouterId = _modelRouterId;
    m_modelRouterIdHasBeenSet = true;
}

bool DeleteIntentRouterRequest::ModelRouterIdHasBeenSet() const
{
    return m_modelRouterIdHasBeenSet;
}

string DeleteIntentRouterRequest::GetIntentRouterId() const
{
    return m_intentRouterId;
}

void DeleteIntentRouterRequest::SetIntentRouterId(const string& _intentRouterId)
{
    m_intentRouterId = _intentRouterId;
    m_intentRouterIdHasBeenSet = true;
}

bool DeleteIntentRouterRequest::IntentRouterIdHasBeenSet() const
{
    return m_intentRouterIdHasBeenSet;
}


