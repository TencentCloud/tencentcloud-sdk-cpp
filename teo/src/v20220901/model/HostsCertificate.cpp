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

#include <tencentcloud/teo/v20220901/model/HostsCertificate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

HostsCertificate::HostsCertificate() :
    m_hostHasBeenSet(false),
    m_hostCertInfoHasBeenSet(false)
{
}

CoreInternalOutcome HostsCertificate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostsCertificate.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("HostCertInfo") && !value["HostCertInfo"].IsNull())
    {
        if (!value["HostCertInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HostsCertificate.HostCertInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hostCertInfo.Deserialize(value["HostCertInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hostCertInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostsCertificate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_hostCertInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCertInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hostCertInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string HostsCertificate::GetHost() const
{
    return m_host;
}

void HostsCertificate::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool HostsCertificate::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

HostCertInfo HostsCertificate::GetHostCertInfo() const
{
    return m_hostCertInfo;
}

void HostsCertificate::SetHostCertInfo(const HostCertInfo& _hostCertInfo)
{
    m_hostCertInfo = _hostCertInfo;
    m_hostCertInfoHasBeenSet = true;
}

bool HostsCertificate::HostCertInfoHasBeenSet() const
{
    return m_hostCertInfoHasBeenSet;
}

