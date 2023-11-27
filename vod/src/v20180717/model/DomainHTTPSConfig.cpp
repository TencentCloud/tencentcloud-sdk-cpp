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

#include <tencentcloud/vod/v20180717/model/DomainHTTPSConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

DomainHTTPSConfig::DomainHTTPSConfig() :
    m_certExpireTimeHasBeenSet(false),
    m_cloudCertIdHasBeenSet(false)
{
}

CoreInternalOutcome DomainHTTPSConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CertExpireTime") && !value["CertExpireTime"].IsNull())
    {
        if (!value["CertExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainHTTPSConfig.CertExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certExpireTime = string(value["CertExpireTime"].GetString());
        m_certExpireTimeHasBeenSet = true;
    }

    if (value.HasMember("CloudCertId") && !value["CloudCertId"].IsNull())
    {
        if (!value["CloudCertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainHTTPSConfig.CloudCertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudCertId = string(value["CloudCertId"].GetString());
        m_cloudCertIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainHTTPSConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_certExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certExpireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudCertIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudCertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudCertId.c_str(), allocator).Move(), allocator);
    }

}


string DomainHTTPSConfig::GetCertExpireTime() const
{
    return m_certExpireTime;
}

void DomainHTTPSConfig::SetCertExpireTime(const string& _certExpireTime)
{
    m_certExpireTime = _certExpireTime;
    m_certExpireTimeHasBeenSet = true;
}

bool DomainHTTPSConfig::CertExpireTimeHasBeenSet() const
{
    return m_certExpireTimeHasBeenSet;
}

string DomainHTTPSConfig::GetCloudCertId() const
{
    return m_cloudCertId;
}

void DomainHTTPSConfig::SetCloudCertId(const string& _cloudCertId)
{
    m_cloudCertId = _cloudCertId;
    m_cloudCertIdHasBeenSet = true;
}

bool DomainHTTPSConfig::CloudCertIdHasBeenSet() const
{
    return m_cloudCertIdHasBeenSet;
}

