/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
    m_modeHasBeenSet(false),
    m_hostCertInfoHasBeenSet(false),
    m_applyTypeHasBeenSet(false)
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

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostsCertificate.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("HostCertInfo") && !value["HostCertInfo"].IsNull())
    {
        if (!value["HostCertInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HostsCertificate.HostCertInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["HostCertInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HostCertInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_hostCertInfo.push_back(item);
        }
        m_hostCertInfoHasBeenSet = true;
    }

    if (value.HasMember("ApplyType") && !value["ApplyType"].IsNull())
    {
        if (!value["ApplyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostsCertificate.ApplyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyType = string(value["ApplyType"].GetString());
        m_applyTypeHasBeenSet = true;
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

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_hostCertInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCertInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hostCertInfo.begin(); itr != m_hostCertInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_applyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyType.c_str(), allocator).Move(), allocator);
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

string HostsCertificate::GetMode() const
{
    return m_mode;
}

void HostsCertificate::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool HostsCertificate::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

vector<HostCertInfo> HostsCertificate::GetHostCertInfo() const
{
    return m_hostCertInfo;
}

void HostsCertificate::SetHostCertInfo(const vector<HostCertInfo>& _hostCertInfo)
{
    m_hostCertInfo = _hostCertInfo;
    m_hostCertInfoHasBeenSet = true;
}

bool HostsCertificate::HostCertInfoHasBeenSet() const
{
    return m_hostCertInfoHasBeenSet;
}

string HostsCertificate::GetApplyType() const
{
    return m_applyType;
}

void HostsCertificate::SetApplyType(const string& _applyType)
{
    m_applyType = _applyType;
    m_applyTypeHasBeenSet = true;
}

bool HostsCertificate::ApplyTypeHasBeenSet() const
{
    return m_applyTypeHasBeenSet;
}

