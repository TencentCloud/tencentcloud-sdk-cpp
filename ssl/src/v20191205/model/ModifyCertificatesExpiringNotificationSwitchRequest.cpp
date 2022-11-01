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

#include <tencentcloud/ssl/v20191205/model/ModifyCertificatesExpiringNotificationSwitchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

ModifyCertificatesExpiringNotificationSwitchRequest::ModifyCertificatesExpiringNotificationSwitchRequest() :
    m_certificateIdsHasBeenSet(false),
    m_switchStatusHasBeenSet(false)
{
}

string ModifyCertificatesExpiringNotificationSwitchRequest::ToJsonString() const
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

    if (m_switchStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_switchStatus, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyCertificatesExpiringNotificationSwitchRequest::GetCertificateIds() const
{
    return m_certificateIds;
}

void ModifyCertificatesExpiringNotificationSwitchRequest::SetCertificateIds(const vector<string>& _certificateIds)
{
    m_certificateIds = _certificateIds;
    m_certificateIdsHasBeenSet = true;
}

bool ModifyCertificatesExpiringNotificationSwitchRequest::CertificateIdsHasBeenSet() const
{
    return m_certificateIdsHasBeenSet;
}

uint64_t ModifyCertificatesExpiringNotificationSwitchRequest::GetSwitchStatus() const
{
    return m_switchStatus;
}

void ModifyCertificatesExpiringNotificationSwitchRequest::SetSwitchStatus(const uint64_t& _switchStatus)
{
    m_switchStatus = _switchStatus;
    m_switchStatusHasBeenSet = true;
}

bool ModifyCertificatesExpiringNotificationSwitchRequest::SwitchStatusHasBeenSet() const
{
    return m_switchStatusHasBeenSet;
}


