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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeDorisMetricFilesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeDorisMetricFilesRequest::DescribeDorisMetricFilesRequest() :
    m_apiTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_describeMetricsFileReqHasBeenSet(false),
    m_modifyMetricFileReqHasBeenSet(false),
    m_modifyAttentionMetricFileReqHasBeenSet(false)
{
}

string DescribeDorisMetricFilesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_apiTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_describeMetricsFileReqHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescribeMetricsFileReq";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_describeMetricsFileReq.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_modifyMetricFileReqHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyMetricFileReq";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modifyMetricFileReq.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_modifyAttentionMetricFileReqHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyAttentionMetricFileReq";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modifyAttentionMetricFileReq.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDorisMetricFilesRequest::GetApiType() const
{
    return m_apiType;
}

void DescribeDorisMetricFilesRequest::SetApiType(const string& _apiType)
{
    m_apiType = _apiType;
    m_apiTypeHasBeenSet = true;
}

bool DescribeDorisMetricFilesRequest::ApiTypeHasBeenSet() const
{
    return m_apiTypeHasBeenSet;
}

string DescribeDorisMetricFilesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeDorisMetricFilesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeDorisMetricFilesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

DescribeMetricsFileReq DescribeDorisMetricFilesRequest::GetDescribeMetricsFileReq() const
{
    return m_describeMetricsFileReq;
}

void DescribeDorisMetricFilesRequest::SetDescribeMetricsFileReq(const DescribeMetricsFileReq& _describeMetricsFileReq)
{
    m_describeMetricsFileReq = _describeMetricsFileReq;
    m_describeMetricsFileReqHasBeenSet = true;
}

bool DescribeDorisMetricFilesRequest::DescribeMetricsFileReqHasBeenSet() const
{
    return m_describeMetricsFileReqHasBeenSet;
}

ModifyMetricFileStruct DescribeDorisMetricFilesRequest::GetModifyMetricFileReq() const
{
    return m_modifyMetricFileReq;
}

void DescribeDorisMetricFilesRequest::SetModifyMetricFileReq(const ModifyMetricFileStruct& _modifyMetricFileReq)
{
    m_modifyMetricFileReq = _modifyMetricFileReq;
    m_modifyMetricFileReqHasBeenSet = true;
}

bool DescribeDorisMetricFilesRequest::ModifyMetricFileReqHasBeenSet() const
{
    return m_modifyMetricFileReqHasBeenSet;
}

ModifyMetricFileStructNew DescribeDorisMetricFilesRequest::GetModifyAttentionMetricFileReq() const
{
    return m_modifyAttentionMetricFileReq;
}

void DescribeDorisMetricFilesRequest::SetModifyAttentionMetricFileReq(const ModifyMetricFileStructNew& _modifyAttentionMetricFileReq)
{
    m_modifyAttentionMetricFileReq = _modifyAttentionMetricFileReq;
    m_modifyAttentionMetricFileReqHasBeenSet = true;
}

bool DescribeDorisMetricFilesRequest::ModifyAttentionMetricFileReqHasBeenSet() const
{
    return m_modifyAttentionMetricFileReqHasBeenSet;
}


