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

#include <tencentcloud/as/v20180419/model/PaiInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace rapidjson;
using namespace std;

PaiInstance::PaiInstance() :
    m_instanceIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_paiMateUrlHasBeenSet(false)
{
}

CoreInternalOutcome PaiInstance::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `PaiInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Error("response `PaiInstance.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("PaiMateUrl") && !value["PaiMateUrl"].IsNull())
    {
        if (!value["PaiMateUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `PaiInstance.PaiMateUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paiMateUrl = string(value["PaiMateUrl"].GetString());
        m_paiMateUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PaiInstance::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_paiMateUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PaiMateUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_paiMateUrl.c_str(), allocator).Move(), allocator);
    }

}


string PaiInstance::GetInstanceId() const
{
    return m_instanceId;
}

void PaiInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool PaiInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string PaiInstance::GetDomainName() const
{
    return m_domainName;
}

void PaiInstance::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool PaiInstance::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string PaiInstance::GetPaiMateUrl() const
{
    return m_paiMateUrl;
}

void PaiInstance::SetPaiMateUrl(const string& _paiMateUrl)
{
    m_paiMateUrl = _paiMateUrl;
    m_paiMateUrlHasBeenSet = true;
}

bool PaiInstance::PaiMateUrlHasBeenSet() const
{
    return m_paiMateUrlHasBeenSet;
}

