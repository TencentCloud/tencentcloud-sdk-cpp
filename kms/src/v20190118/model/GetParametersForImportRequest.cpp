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

#include <tencentcloud/kms/v20190118/model/GetParametersForImportRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

GetParametersForImportRequest::GetParametersForImportRequest() :
    m_keyIdHasBeenSet(false),
    m_wrappingAlgorithmHasBeenSet(false),
    m_wrappingKeySpecHasBeenSet(false)
{
}

string GetParametersForImportRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_wrappingAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WrappingAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wrappingAlgorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_wrappingKeySpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WrappingKeySpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wrappingKeySpec.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetParametersForImportRequest::GetKeyId() const
{
    return m_keyId;
}

void GetParametersForImportRequest::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool GetParametersForImportRequest::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string GetParametersForImportRequest::GetWrappingAlgorithm() const
{
    return m_wrappingAlgorithm;
}

void GetParametersForImportRequest::SetWrappingAlgorithm(const string& _wrappingAlgorithm)
{
    m_wrappingAlgorithm = _wrappingAlgorithm;
    m_wrappingAlgorithmHasBeenSet = true;
}

bool GetParametersForImportRequest::WrappingAlgorithmHasBeenSet() const
{
    return m_wrappingAlgorithmHasBeenSet;
}

string GetParametersForImportRequest::GetWrappingKeySpec() const
{
    return m_wrappingKeySpec;
}

void GetParametersForImportRequest::SetWrappingKeySpec(const string& _wrappingKeySpec)
{
    m_wrappingKeySpec = _wrappingKeySpec;
    m_wrappingKeySpecHasBeenSet = true;
}

bool GetParametersForImportRequest::WrappingKeySpecHasBeenSet() const
{
    return m_wrappingKeySpecHasBeenSet;
}


