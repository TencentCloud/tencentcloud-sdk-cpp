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

#include <tencentcloud/teo/v20220106/model/HostCertSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

HostCertSetting::HostCertSetting() :
    m_hostHasBeenSet(false),
    m_certInfoHasBeenSet(false)
{
}

CoreInternalOutcome HostCertSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostCertSetting.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("CertInfo") && !value["CertInfo"].IsNull())
    {
        if (!value["CertInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HostCertSetting.CertInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["CertInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServerCertInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_certInfo.push_back(item);
        }
        m_certInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostCertSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_certInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_certInfo.begin(); itr != m_certInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string HostCertSetting::GetHost() const
{
    return m_host;
}

void HostCertSetting::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool HostCertSetting::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

vector<ServerCertInfo> HostCertSetting::GetCertInfo() const
{
    return m_certInfo;
}

void HostCertSetting::SetCertInfo(const vector<ServerCertInfo>& _certInfo)
{
    m_certInfo = _certInfo;
    m_certInfoHasBeenSet = true;
}

bool HostCertSetting::CertInfoHasBeenSet() const
{
    return m_certInfoHasBeenSet;
}

