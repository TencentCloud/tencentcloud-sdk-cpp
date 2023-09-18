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

#include <tencentcloud/dlc/v20210125/model/KerberosInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

KerberosInfo::KerberosInfo() :
    m_krb5ConfHasBeenSet(false),
    m_keyTabHasBeenSet(false),
    m_servicePrincipalHasBeenSet(false)
{
}

CoreInternalOutcome KerberosInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Krb5Conf") && !value["Krb5Conf"].IsNull())
    {
        if (!value["Krb5Conf"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KerberosInfo.Krb5Conf` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_krb5Conf = string(value["Krb5Conf"].GetString());
        m_krb5ConfHasBeenSet = true;
    }

    if (value.HasMember("KeyTab") && !value["KeyTab"].IsNull())
    {
        if (!value["KeyTab"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KerberosInfo.KeyTab` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyTab = string(value["KeyTab"].GetString());
        m_keyTabHasBeenSet = true;
    }

    if (value.HasMember("ServicePrincipal") && !value["ServicePrincipal"].IsNull())
    {
        if (!value["ServicePrincipal"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KerberosInfo.ServicePrincipal` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_servicePrincipal = string(value["ServicePrincipal"].GetString());
        m_servicePrincipalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KerberosInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_krb5ConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Krb5Conf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_krb5Conf.c_str(), allocator).Move(), allocator);
    }

    if (m_keyTabHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyTab";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyTab.c_str(), allocator).Move(), allocator);
    }

    if (m_servicePrincipalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServicePrincipal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_servicePrincipal.c_str(), allocator).Move(), allocator);
    }

}


string KerberosInfo::GetKrb5Conf() const
{
    return m_krb5Conf;
}

void KerberosInfo::SetKrb5Conf(const string& _krb5Conf)
{
    m_krb5Conf = _krb5Conf;
    m_krb5ConfHasBeenSet = true;
}

bool KerberosInfo::Krb5ConfHasBeenSet() const
{
    return m_krb5ConfHasBeenSet;
}

string KerberosInfo::GetKeyTab() const
{
    return m_keyTab;
}

void KerberosInfo::SetKeyTab(const string& _keyTab)
{
    m_keyTab = _keyTab;
    m_keyTabHasBeenSet = true;
}

bool KerberosInfo::KeyTabHasBeenSet() const
{
    return m_keyTabHasBeenSet;
}

string KerberosInfo::GetServicePrincipal() const
{
    return m_servicePrincipal;
}

void KerberosInfo::SetServicePrincipal(const string& _servicePrincipal)
{
    m_servicePrincipal = _servicePrincipal;
    m_servicePrincipalHasBeenSet = true;
}

bool KerberosInfo::ServicePrincipalHasBeenSet() const
{
    return m_servicePrincipalHasBeenSet;
}

