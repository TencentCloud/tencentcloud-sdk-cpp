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

#include <tencentcloud/iotvideo/v20191126/model/RunOtaVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace rapidjson;
using namespace std;

RunOtaVersionRequest::RunOtaVersionRequest() :
    m_productIdHasBeenSet(false),
    m_otaVersionHasBeenSet(false),
    m_grayValueHasBeenSet(false),
    m_oldVersionsHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string RunOtaVersionRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_otaVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OtaVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_otaVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_grayValueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GrayValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_grayValue, allocator);
    }

    if (m_oldVersionsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OldVersions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_oldVersions.begin(); itr != m_oldVersions.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_operatorHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_operator.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RunOtaVersionRequest::GetProductId() const
{
    return m_productId;
}

void RunOtaVersionRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool RunOtaVersionRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string RunOtaVersionRequest::GetOtaVersion() const
{
    return m_otaVersion;
}

void RunOtaVersionRequest::SetOtaVersion(const string& _otaVersion)
{
    m_otaVersion = _otaVersion;
    m_otaVersionHasBeenSet = true;
}

bool RunOtaVersionRequest::OtaVersionHasBeenSet() const
{
    return m_otaVersionHasBeenSet;
}

uint64_t RunOtaVersionRequest::GetGrayValue() const
{
    return m_grayValue;
}

void RunOtaVersionRequest::SetGrayValue(const uint64_t& _grayValue)
{
    m_grayValue = _grayValue;
    m_grayValueHasBeenSet = true;
}

bool RunOtaVersionRequest::GrayValueHasBeenSet() const
{
    return m_grayValueHasBeenSet;
}

vector<string> RunOtaVersionRequest::GetOldVersions() const
{
    return m_oldVersions;
}

void RunOtaVersionRequest::SetOldVersions(const vector<string>& _oldVersions)
{
    m_oldVersions = _oldVersions;
    m_oldVersionsHasBeenSet = true;
}

bool RunOtaVersionRequest::OldVersionsHasBeenSet() const
{
    return m_oldVersionsHasBeenSet;
}

string RunOtaVersionRequest::GetOperator() const
{
    return m_operator;
}

void RunOtaVersionRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool RunOtaVersionRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


