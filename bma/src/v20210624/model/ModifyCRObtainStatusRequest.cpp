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

#include <tencentcloud/bma/v20210624/model/ModifyCRObtainStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

ModifyCRObtainStatusRequest::ModifyCRObtainStatusRequest() :
    m_tortIdHasBeenSet(false),
    m_obtainTypeHasBeenSet(false),
    m_obtainDurationHasBeenSet(false),
    m_obtainUrlHasBeenSet(false)
{
}

string ModifyCRObtainStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tortIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tortId, allocator);
    }

    if (m_obtainTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObtainType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_obtainType, allocator);
    }

    if (m_obtainDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObtainDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_obtainDuration, allocator);
    }

    if (m_obtainUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObtainUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_obtainUrl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyCRObtainStatusRequest::GetTortId() const
{
    return m_tortId;
}

void ModifyCRObtainStatusRequest::SetTortId(const int64_t& _tortId)
{
    m_tortId = _tortId;
    m_tortIdHasBeenSet = true;
}

bool ModifyCRObtainStatusRequest::TortIdHasBeenSet() const
{
    return m_tortIdHasBeenSet;
}

int64_t ModifyCRObtainStatusRequest::GetObtainType() const
{
    return m_obtainType;
}

void ModifyCRObtainStatusRequest::SetObtainType(const int64_t& _obtainType)
{
    m_obtainType = _obtainType;
    m_obtainTypeHasBeenSet = true;
}

bool ModifyCRObtainStatusRequest::ObtainTypeHasBeenSet() const
{
    return m_obtainTypeHasBeenSet;
}

int64_t ModifyCRObtainStatusRequest::GetObtainDuration() const
{
    return m_obtainDuration;
}

void ModifyCRObtainStatusRequest::SetObtainDuration(const int64_t& _obtainDuration)
{
    m_obtainDuration = _obtainDuration;
    m_obtainDurationHasBeenSet = true;
}

bool ModifyCRObtainStatusRequest::ObtainDurationHasBeenSet() const
{
    return m_obtainDurationHasBeenSet;
}

string ModifyCRObtainStatusRequest::GetObtainUrl() const
{
    return m_obtainUrl;
}

void ModifyCRObtainStatusRequest::SetObtainUrl(const string& _obtainUrl)
{
    m_obtainUrl = _obtainUrl;
    m_obtainUrlHasBeenSet = true;
}

bool ModifyCRObtainStatusRequest::ObtainUrlHasBeenSet() const
{
    return m_obtainUrlHasBeenSet;
}


