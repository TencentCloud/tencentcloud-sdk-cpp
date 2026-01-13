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

#include <tencentcloud/ess/v20201111/model/DescribeContractReviewChecklistsWebUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

DescribeContractReviewChecklistsWebUrlRequest::DescribeContractReviewChecklistsWebUrlRequest() :
    m_operatorHasBeenSet(false),
    m_optionHasBeenSet(false)
{
}

string DescribeContractReviewChecklistsWebUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_optionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Option";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_option.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo DescribeContractReviewChecklistsWebUrlRequest::GetOperator() const
{
    return m_operator;
}

void DescribeContractReviewChecklistsWebUrlRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DescribeContractReviewChecklistsWebUrlRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

ContractReviewChecklistWebUrlOption DescribeContractReviewChecklistsWebUrlRequest::GetOption() const
{
    return m_option;
}

void DescribeContractReviewChecklistsWebUrlRequest::SetOption(const ContractReviewChecklistWebUrlOption& _option)
{
    m_option = _option;
    m_optionHasBeenSet = true;
}

bool DescribeContractReviewChecklistsWebUrlRequest::OptionHasBeenSet() const
{
    return m_optionHasBeenSet;
}


