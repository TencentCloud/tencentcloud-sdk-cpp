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

#include <tencentcloud/teo/v20220901/model/MutualTLS.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

MutualTLS::MutualTLS() :
    m_switchHasBeenSet(false),
    m_certInfosHasBeenSet(false)
{
}

CoreInternalOutcome MutualTLS::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MutualTLS.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("CertInfos") && !value["CertInfos"].IsNull())
    {
        if (!value["CertInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MutualTLS.CertInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["CertInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CertificateInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_certInfos.push_back(item);
        }
        m_certInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MutualTLS::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_certInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_certInfos.begin(); itr != m_certInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MutualTLS::GetSwitch() const
{
    return m_switch;
}

void MutualTLS::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool MutualTLS::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<CertificateInfo> MutualTLS::GetCertInfos() const
{
    return m_certInfos;
}

void MutualTLS::SetCertInfos(const vector<CertificateInfo>& _certInfos)
{
    m_certInfos = _certInfos;
    m_certInfosHasBeenSet = true;
}

bool MutualTLS::CertInfosHasBeenSet() const
{
    return m_certInfosHasBeenSet;
}

