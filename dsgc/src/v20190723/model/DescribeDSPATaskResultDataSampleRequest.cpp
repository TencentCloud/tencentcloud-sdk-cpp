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

#include <tencentcloud/dsgc/v20190723/model/DescribeDSPATaskResultDataSampleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DescribeDSPATaskResultDataSampleRequest::DescribeDSPATaskResultDataSampleRequest() :
    m_dspaIdHasBeenSet(false),
    m_fieldResultIdHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_orderFieldHasBeenSet(false)
{
}

string DescribeDSPATaskResultDataSampleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldResultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldResultId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fieldResultId, allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_orderFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderField.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDSPATaskResultDataSampleRequest::GetDspaId() const
{
    return m_dspaId;
}

void DescribeDSPATaskResultDataSampleRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool DescribeDSPATaskResultDataSampleRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

int64_t DescribeDSPATaskResultDataSampleRequest::GetFieldResultId() const
{
    return m_fieldResultId;
}

void DescribeDSPATaskResultDataSampleRequest::SetFieldResultId(const int64_t& _fieldResultId)
{
    m_fieldResultId = _fieldResultId;
    m_fieldResultIdHasBeenSet = true;
}

bool DescribeDSPATaskResultDataSampleRequest::FieldResultIdHasBeenSet() const
{
    return m_fieldResultIdHasBeenSet;
}

string DescribeDSPATaskResultDataSampleRequest::GetOrder() const
{
    return m_order;
}

void DescribeDSPATaskResultDataSampleRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeDSPATaskResultDataSampleRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeDSPATaskResultDataSampleRequest::GetOrderField() const
{
    return m_orderField;
}

void DescribeDSPATaskResultDataSampleRequest::SetOrderField(const string& _orderField)
{
    m_orderField = _orderField;
    m_orderFieldHasBeenSet = true;
}

bool DescribeDSPATaskResultDataSampleRequest::OrderFieldHasBeenSet() const
{
    return m_orderFieldHasBeenSet;
}


