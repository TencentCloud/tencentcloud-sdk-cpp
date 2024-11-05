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

#include <tencentcloud/teo/v20220901/model/AccelerationDomainCertificate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

AccelerationDomainCertificate::AccelerationDomainCertificate() :
    m_modeHasBeenSet(false),
    m_listHasBeenSet(false),
    m_clientCertInfoHasBeenSet(false),
    m_upstreamCertInfoHasBeenSet(false)
{
}

CoreInternalOutcome AccelerationDomainCertificate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerationDomainCertificate.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("List") && !value["List"].IsNull())
    {
        if (!value["List"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccelerationDomainCertificate.List` is not array type"));

        const rapidjson::Value &tmpValue = value["List"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CertificateInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_list.push_back(item);
        }
        m_listHasBeenSet = true;
    }

    if (value.HasMember("ClientCertInfo") && !value["ClientCertInfo"].IsNull())
    {
        if (!value["ClientCertInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerationDomainCertificate.ClientCertInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clientCertInfo.Deserialize(value["ClientCertInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clientCertInfoHasBeenSet = true;
    }

    if (value.HasMember("UpstreamCertInfo") && !value["UpstreamCertInfo"].IsNull())
    {
        if (!value["UpstreamCertInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerationDomainCertificate.UpstreamCertInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_upstreamCertInfo.Deserialize(value["UpstreamCertInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_upstreamCertInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccelerationDomainCertificate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_listHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "List";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_list.begin(); itr != m_list.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_clientCertInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientCertInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clientCertInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_upstreamCertInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamCertInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_upstreamCertInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AccelerationDomainCertificate::GetMode() const
{
    return m_mode;
}

void AccelerationDomainCertificate::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool AccelerationDomainCertificate::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

vector<CertificateInfo> AccelerationDomainCertificate::GetList() const
{
    return m_list;
}

void AccelerationDomainCertificate::SetList(const vector<CertificateInfo>& _list)
{
    m_list = _list;
    m_listHasBeenSet = true;
}

bool AccelerationDomainCertificate::ListHasBeenSet() const
{
    return m_listHasBeenSet;
}

MutualTLS AccelerationDomainCertificate::GetClientCertInfo() const
{
    return m_clientCertInfo;
}

void AccelerationDomainCertificate::SetClientCertInfo(const MutualTLS& _clientCertInfo)
{
    m_clientCertInfo = _clientCertInfo;
    m_clientCertInfoHasBeenSet = true;
}

bool AccelerationDomainCertificate::ClientCertInfoHasBeenSet() const
{
    return m_clientCertInfoHasBeenSet;
}

UpstreamCertInfo AccelerationDomainCertificate::GetUpstreamCertInfo() const
{
    return m_upstreamCertInfo;
}

void AccelerationDomainCertificate::SetUpstreamCertInfo(const UpstreamCertInfo& _upstreamCertInfo)
{
    m_upstreamCertInfo = _upstreamCertInfo;
    m_upstreamCertInfoHasBeenSet = true;
}

bool AccelerationDomainCertificate::UpstreamCertInfoHasBeenSet() const
{
    return m_upstreamCertInfoHasBeenSet;
}

