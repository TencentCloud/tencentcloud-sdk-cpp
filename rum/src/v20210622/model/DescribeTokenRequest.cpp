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

#include <tencentcloud/rum/v20210622/model/DescribeTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeTokenRequest::DescribeTokenRequest() :
    m_formListStringHasBeenSet(false),
    m_formListAStringHasBeenSet(false),
    m_formListBStringHasBeenSet(false),
    m_requestHeaderHasBeenSet(false),
    m_extraDataHasBeenSet(false)
{
}

string DescribeTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_formListStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormListString";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_formListString.c_str(), allocator).Move(), allocator);
    }

    if (m_formListAStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormListAString";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_formListAString.c_str(), allocator).Move(), allocator);
    }

    if (m_formListBStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormListBString";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_formListBString.c_str(), allocator).Move(), allocator);
    }

    if (m_requestHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestHeader";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requestHeader.c_str(), allocator).Move(), allocator);
    }

    if (m_extraDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extraData.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTokenRequest::GetFormListString() const
{
    return m_formListString;
}

void DescribeTokenRequest::SetFormListString(const string& _formListString)
{
    m_formListString = _formListString;
    m_formListStringHasBeenSet = true;
}

bool DescribeTokenRequest::FormListStringHasBeenSet() const
{
    return m_formListStringHasBeenSet;
}

string DescribeTokenRequest::GetFormListAString() const
{
    return m_formListAString;
}

void DescribeTokenRequest::SetFormListAString(const string& _formListAString)
{
    m_formListAString = _formListAString;
    m_formListAStringHasBeenSet = true;
}

bool DescribeTokenRequest::FormListAStringHasBeenSet() const
{
    return m_formListAStringHasBeenSet;
}

string DescribeTokenRequest::GetFormListBString() const
{
    return m_formListBString;
}

void DescribeTokenRequest::SetFormListBString(const string& _formListBString)
{
    m_formListBString = _formListBString;
    m_formListBStringHasBeenSet = true;
}

bool DescribeTokenRequest::FormListBStringHasBeenSet() const
{
    return m_formListBStringHasBeenSet;
}

string DescribeTokenRequest::GetRequestHeader() const
{
    return m_requestHeader;
}

void DescribeTokenRequest::SetRequestHeader(const string& _requestHeader)
{
    m_requestHeader = _requestHeader;
    m_requestHeaderHasBeenSet = true;
}

bool DescribeTokenRequest::RequestHeaderHasBeenSet() const
{
    return m_requestHeaderHasBeenSet;
}

string DescribeTokenRequest::GetExtraData() const
{
    return m_extraData;
}

void DescribeTokenRequest::SetExtraData(const string& _extraData)
{
    m_extraData = _extraData;
    m_extraDataHasBeenSet = true;
}

bool DescribeTokenRequest::ExtraDataHasBeenSet() const
{
    return m_extraDataHasBeenSet;
}


