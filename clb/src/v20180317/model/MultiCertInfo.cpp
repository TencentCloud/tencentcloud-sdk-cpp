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

#include <tencentcloud/clb/v20180317/model/MultiCertInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

MultiCertInfo::MultiCertInfo() :
    m_sSLModeHasBeenSet(false),
    m_certListHasBeenSet(false),
    m_sSLVerifyClientHasBeenSet(false)
{
}

CoreInternalOutcome MultiCertInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SSLMode") && !value["SSLMode"].IsNull())
    {
        if (!value["SSLMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiCertInfo.SSLMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSLMode = string(value["SSLMode"].GetString());
        m_sSLModeHasBeenSet = true;
    }

    if (value.HasMember("CertList") && !value["CertList"].IsNull())
    {
        if (!value["CertList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MultiCertInfo.CertList` is not array type"));

        const rapidjson::Value &tmpValue = value["CertList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CertInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_certList.push_back(item);
        }
        m_certListHasBeenSet = true;
    }

    if (value.HasMember("SSLVerifyClient") && !value["SSLVerifyClient"].IsNull())
    {
        if (!value["SSLVerifyClient"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiCertInfo.SSLVerifyClient` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSLVerifyClient = string(value["SSLVerifyClient"].GetString());
        m_sSLVerifyClientHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MultiCertInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sSLModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sSLMode.c_str(), allocator).Move(), allocator);
    }

    if (m_certListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_certList.begin(); itr != m_certList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sSLVerifyClientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLVerifyClient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sSLVerifyClient.c_str(), allocator).Move(), allocator);
    }

}


string MultiCertInfo::GetSSLMode() const
{
    return m_sSLMode;
}

void MultiCertInfo::SetSSLMode(const string& _sSLMode)
{
    m_sSLMode = _sSLMode;
    m_sSLModeHasBeenSet = true;
}

bool MultiCertInfo::SSLModeHasBeenSet() const
{
    return m_sSLModeHasBeenSet;
}

vector<CertInfo> MultiCertInfo::GetCertList() const
{
    return m_certList;
}

void MultiCertInfo::SetCertList(const vector<CertInfo>& _certList)
{
    m_certList = _certList;
    m_certListHasBeenSet = true;
}

bool MultiCertInfo::CertListHasBeenSet() const
{
    return m_certListHasBeenSet;
}

string MultiCertInfo::GetSSLVerifyClient() const
{
    return m_sSLVerifyClient;
}

void MultiCertInfo::SetSSLVerifyClient(const string& _sSLVerifyClient)
{
    m_sSLVerifyClient = _sSLVerifyClient;
    m_sSLVerifyClientHasBeenSet = true;
}

bool MultiCertInfo::SSLVerifyClientHasBeenSet() const
{
    return m_sSLVerifyClientHasBeenSet;
}

