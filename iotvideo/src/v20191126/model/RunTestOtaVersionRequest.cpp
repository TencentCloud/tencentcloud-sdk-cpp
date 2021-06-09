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

#include <tencentcloud/iotvideo/v20191126/model/RunTestOtaVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

RunTestOtaVersionRequest::RunTestOtaVersionRequest() :
    m_productIdHasBeenSet(false),
    m_otaVersionHasBeenSet(false),
    m_tidsHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string RunTestOtaVersionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_otaVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtaVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_otaVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_tidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tids.begin(); itr != m_tids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RunTestOtaVersionRequest::GetProductId() const
{
    return m_productId;
}

void RunTestOtaVersionRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool RunTestOtaVersionRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string RunTestOtaVersionRequest::GetOtaVersion() const
{
    return m_otaVersion;
}

void RunTestOtaVersionRequest::SetOtaVersion(const string& _otaVersion)
{
    m_otaVersion = _otaVersion;
    m_otaVersionHasBeenSet = true;
}

bool RunTestOtaVersionRequest::OtaVersionHasBeenSet() const
{
    return m_otaVersionHasBeenSet;
}

vector<string> RunTestOtaVersionRequest::GetTids() const
{
    return m_tids;
}

void RunTestOtaVersionRequest::SetTids(const vector<string>& _tids)
{
    m_tids = _tids;
    m_tidsHasBeenSet = true;
}

bool RunTestOtaVersionRequest::TidsHasBeenSet() const
{
    return m_tidsHasBeenSet;
}

string RunTestOtaVersionRequest::GetOperator() const
{
    return m_operator;
}

void RunTestOtaVersionRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool RunTestOtaVersionRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string RunTestOtaVersionRequest::GetRemark() const
{
    return m_remark;
}

void RunTestOtaVersionRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RunTestOtaVersionRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


