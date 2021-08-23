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

#include <tencentcloud/ump/v20200918/model/ServiceRegisterInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ump::V20200918::Model;
using namespace std;

ServiceRegisterInfo::ServiceRegisterInfo() :
    m_cgiUrlHasBeenSet(false),
    m_serviceTypeHasBeenSet(false)
{
}

CoreInternalOutcome ServiceRegisterInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CgiUrl") && !value["CgiUrl"].IsNull())
    {
        if (!value["CgiUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceRegisterInfo.CgiUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cgiUrl = string(value["CgiUrl"].GetString());
        m_cgiUrlHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceRegisterInfo.ServiceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = value["ServiceType"].GetUint64();
        m_serviceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceRegisterInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cgiUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CgiUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cgiUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceType, allocator);
    }

}


string ServiceRegisterInfo::GetCgiUrl() const
{
    return m_cgiUrl;
}

void ServiceRegisterInfo::SetCgiUrl(const string& _cgiUrl)
{
    m_cgiUrl = _cgiUrl;
    m_cgiUrlHasBeenSet = true;
}

bool ServiceRegisterInfo::CgiUrlHasBeenSet() const
{
    return m_cgiUrlHasBeenSet;
}

uint64_t ServiceRegisterInfo::GetServiceType() const
{
    return m_serviceType;
}

void ServiceRegisterInfo::SetServiceType(const uint64_t& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool ServiceRegisterInfo::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

