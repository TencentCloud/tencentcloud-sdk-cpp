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

#include <tencentcloud/ssl/v20191205/model/DeleteCertificatesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

DeleteCertificatesRequest::DeleteCertificatesRequest() :
    m_certificateIdsHasBeenSet(false),
    m_isSyncHasBeenSet(false)
{
}

string DeleteCertificatesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_certificateIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_certificateIds.begin(); itr != m_certificateIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isSyncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSync";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isSync, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DeleteCertificatesRequest::GetCertificateIds() const
{
    return m_certificateIds;
}

void DeleteCertificatesRequest::SetCertificateIds(const vector<string>& _certificateIds)
{
    m_certificateIds = _certificateIds;
    m_certificateIdsHasBeenSet = true;
}

bool DeleteCertificatesRequest::CertificateIdsHasBeenSet() const
{
    return m_certificateIdsHasBeenSet;
}

bool DeleteCertificatesRequest::GetIsSync() const
{
    return m_isSync;
}

void DeleteCertificatesRequest::SetIsSync(const bool& _isSync)
{
    m_isSync = _isSync;
    m_isSyncHasBeenSet = true;
}

bool DeleteCertificatesRequest::IsSyncHasBeenSet() const
{
    return m_isSyncHasBeenSet;
}


