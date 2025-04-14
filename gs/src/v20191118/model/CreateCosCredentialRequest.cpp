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

#include <tencentcloud/gs/v20191118/model/CreateCosCredentialRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

CreateCosCredentialRequest::CreateCosCredentialRequest() :
    m_cosTypeHasBeenSet(false),
    m_androidAppCosInfoHasBeenSet(false)
{
}

string CreateCosCredentialRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cosTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosType.c_str(), allocator).Move(), allocator);
    }

    if (m_androidAppCosInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidAppCosInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_androidAppCosInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCosCredentialRequest::GetCosType() const
{
    return m_cosType;
}

void CreateCosCredentialRequest::SetCosType(const string& _cosType)
{
    m_cosType = _cosType;
    m_cosTypeHasBeenSet = true;
}

bool CreateCosCredentialRequest::CosTypeHasBeenSet() const
{
    return m_cosTypeHasBeenSet;
}

AndroidAppCosInfo CreateCosCredentialRequest::GetAndroidAppCosInfo() const
{
    return m_androidAppCosInfo;
}

void CreateCosCredentialRequest::SetAndroidAppCosInfo(const AndroidAppCosInfo& _androidAppCosInfo)
{
    m_androidAppCosInfo = _androidAppCosInfo;
    m_androidAppCosInfoHasBeenSet = true;
}

bool CreateCosCredentialRequest::AndroidAppCosInfoHasBeenSet() const
{
    return m_androidAppCosInfoHasBeenSet;
}


