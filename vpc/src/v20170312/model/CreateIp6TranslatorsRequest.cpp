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

#include <tencentcloud/vpc/v20170312/model/CreateIp6TranslatorsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateIp6TranslatorsRequest::CreateIp6TranslatorsRequest() :
    m_ip6TranslatorNameHasBeenSet(false),
    m_ip6TranslatorCountHasBeenSet(false),
    m_ip6InternetServiceProviderHasBeenSet(false)
{
}

string CreateIp6TranslatorsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ip6TranslatorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip6TranslatorName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip6TranslatorName.c_str(), allocator).Move(), allocator);
    }

    if (m_ip6TranslatorCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip6TranslatorCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ip6TranslatorCount, allocator);
    }

    if (m_ip6InternetServiceProviderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip6InternetServiceProvider";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip6InternetServiceProvider.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateIp6TranslatorsRequest::GetIp6TranslatorName() const
{
    return m_ip6TranslatorName;
}

void CreateIp6TranslatorsRequest::SetIp6TranslatorName(const string& _ip6TranslatorName)
{
    m_ip6TranslatorName = _ip6TranslatorName;
    m_ip6TranslatorNameHasBeenSet = true;
}

bool CreateIp6TranslatorsRequest::Ip6TranslatorNameHasBeenSet() const
{
    return m_ip6TranslatorNameHasBeenSet;
}

int64_t CreateIp6TranslatorsRequest::GetIp6TranslatorCount() const
{
    return m_ip6TranslatorCount;
}

void CreateIp6TranslatorsRequest::SetIp6TranslatorCount(const int64_t& _ip6TranslatorCount)
{
    m_ip6TranslatorCount = _ip6TranslatorCount;
    m_ip6TranslatorCountHasBeenSet = true;
}

bool CreateIp6TranslatorsRequest::Ip6TranslatorCountHasBeenSet() const
{
    return m_ip6TranslatorCountHasBeenSet;
}

string CreateIp6TranslatorsRequest::GetIp6InternetServiceProvider() const
{
    return m_ip6InternetServiceProvider;
}

void CreateIp6TranslatorsRequest::SetIp6InternetServiceProvider(const string& _ip6InternetServiceProvider)
{
    m_ip6InternetServiceProvider = _ip6InternetServiceProvider;
    m_ip6InternetServiceProviderHasBeenSet = true;
}

bool CreateIp6TranslatorsRequest::Ip6InternetServiceProviderHasBeenSet() const
{
    return m_ip6InternetServiceProviderHasBeenSet;
}


