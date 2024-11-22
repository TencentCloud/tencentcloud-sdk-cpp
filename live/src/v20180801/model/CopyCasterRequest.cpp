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

#include <tencentcloud/live/v20180801/model/CopyCasterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CopyCasterRequest::CopyCasterRequest() :
    m_casterIdHasBeenSet(false),
    m_casterNameHasBeenSet(false),
    m_outputStreamIdHasBeenSet(false)
{
}

string CopyCasterRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_casterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CasterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_casterId, allocator);
    }

    if (m_casterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CasterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_casterName.c_str(), allocator).Move(), allocator);
    }

    if (m_outputStreamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStreamId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outputStreamId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CopyCasterRequest::GetCasterId() const
{
    return m_casterId;
}

void CopyCasterRequest::SetCasterId(const uint64_t& _casterId)
{
    m_casterId = _casterId;
    m_casterIdHasBeenSet = true;
}

bool CopyCasterRequest::CasterIdHasBeenSet() const
{
    return m_casterIdHasBeenSet;
}

string CopyCasterRequest::GetCasterName() const
{
    return m_casterName;
}

void CopyCasterRequest::SetCasterName(const string& _casterName)
{
    m_casterName = _casterName;
    m_casterNameHasBeenSet = true;
}

bool CopyCasterRequest::CasterNameHasBeenSet() const
{
    return m_casterNameHasBeenSet;
}

string CopyCasterRequest::GetOutputStreamId() const
{
    return m_outputStreamId;
}

void CopyCasterRequest::SetOutputStreamId(const string& _outputStreamId)
{
    m_outputStreamId = _outputStreamId;
    m_outputStreamIdHasBeenSet = true;
}

bool CopyCasterRequest::OutputStreamIdHasBeenSet() const
{
    return m_outputStreamIdHasBeenSet;
}


