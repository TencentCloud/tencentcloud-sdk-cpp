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

#include <tencentcloud/ssl/v20191205/model/DeployCertificateRecordRetryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

DeployCertificateRecordRetryRequest::DeployCertificateRecordRetryRequest() :
    m_deployRecordIdHasBeenSet(false),
    m_deployRecordDetailIdHasBeenSet(false)
{
}

string DeployCertificateRecordRetryRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deployRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployRecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deployRecordId, allocator);
    }

    if (m_deployRecordDetailIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployRecordDetailId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deployRecordDetailId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DeployCertificateRecordRetryRequest::GetDeployRecordId() const
{
    return m_deployRecordId;
}

void DeployCertificateRecordRetryRequest::SetDeployRecordId(const int64_t& _deployRecordId)
{
    m_deployRecordId = _deployRecordId;
    m_deployRecordIdHasBeenSet = true;
}

bool DeployCertificateRecordRetryRequest::DeployRecordIdHasBeenSet() const
{
    return m_deployRecordIdHasBeenSet;
}

int64_t DeployCertificateRecordRetryRequest::GetDeployRecordDetailId() const
{
    return m_deployRecordDetailId;
}

void DeployCertificateRecordRetryRequest::SetDeployRecordDetailId(const int64_t& _deployRecordDetailId)
{
    m_deployRecordDetailId = _deployRecordDetailId;
    m_deployRecordDetailIdHasBeenSet = true;
}

bool DeployCertificateRecordRetryRequest::DeployRecordDetailIdHasBeenSet() const
{
    return m_deployRecordDetailIdHasBeenSet;
}


