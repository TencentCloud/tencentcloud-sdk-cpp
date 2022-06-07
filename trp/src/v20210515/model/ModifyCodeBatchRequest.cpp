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

#include <tencentcloud/trp/v20210515/model/ModifyCodeBatchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

ModifyCodeBatchRequest::ModifyCodeBatchRequest() :
    m_batchIdHasBeenSet(false),
    m_corpIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_mpTplHasBeenSet(false)
{
}

string ModifyCodeBatchRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_corpId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_mpTplHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MpTpl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mpTpl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCodeBatchRequest::GetBatchId() const
{
    return m_batchId;
}

void ModifyCodeBatchRequest::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool ModifyCodeBatchRequest::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

uint64_t ModifyCodeBatchRequest::GetCorpId() const
{
    return m_corpId;
}

void ModifyCodeBatchRequest::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool ModifyCodeBatchRequest::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

int64_t ModifyCodeBatchRequest::GetStatus() const
{
    return m_status;
}

void ModifyCodeBatchRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyCodeBatchRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyCodeBatchRequest::GetMpTpl() const
{
    return m_mpTpl;
}

void ModifyCodeBatchRequest::SetMpTpl(const string& _mpTpl)
{
    m_mpTpl = _mpTpl;
    m_mpTplHasBeenSet = true;
}

bool ModifyCodeBatchRequest::MpTplHasBeenSet() const
{
    return m_mpTplHasBeenSet;
}


