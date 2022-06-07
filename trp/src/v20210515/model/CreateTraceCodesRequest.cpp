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

#include <tencentcloud/trp/v20210515/model/CreateTraceCodesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

CreateTraceCodesRequest::CreateTraceCodesRequest() :
    m_batchIdHasBeenSet(false),
    m_corpIdHasBeenSet(false),
    m_codesHasBeenSet(false)
{
}

string CreateTraceCodesRequest::ToJsonString() const
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

    if (m_codesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Codes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_codes.begin(); itr != m_codes.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTraceCodesRequest::GetBatchId() const
{
    return m_batchId;
}

void CreateTraceCodesRequest::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool CreateTraceCodesRequest::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

uint64_t CreateTraceCodesRequest::GetCorpId() const
{
    return m_corpId;
}

void CreateTraceCodesRequest::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool CreateTraceCodesRequest::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

vector<CodeItem> CreateTraceCodesRequest::GetCodes() const
{
    return m_codes;
}

void CreateTraceCodesRequest::SetCodes(const vector<CodeItem>& _codes)
{
    m_codes = _codes;
    m_codesHasBeenSet = true;
}

bool CreateTraceCodesRequest::CodesHasBeenSet() const
{
    return m_codesHasBeenSet;
}


