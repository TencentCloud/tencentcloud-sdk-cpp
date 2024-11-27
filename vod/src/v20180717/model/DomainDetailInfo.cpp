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

#include <tencentcloud/vod/v20180717/model/DomainDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

DomainDetailInfo::DomainDetailInfo() :
    m_domainHasBeenSet(false),
    m_accelerateAreaInfosHasBeenSet(false),
    m_deployStatusHasBeenSet(false),
    m_hTTPSConfigHasBeenSet(false),
    m_urlSignatureAuthPolicyHasBeenSet(false),
    m_refererAuthPolicyHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_qUICConfigHasBeenSet(false),
    m_iPFilterPolicyHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome DomainDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainDetailInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("AccelerateAreaInfos") && !value["AccelerateAreaInfos"].IsNull())
    {
        if (!value["AccelerateAreaInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainDetailInfo.AccelerateAreaInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["AccelerateAreaInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccelerateAreaInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_accelerateAreaInfos.push_back(item);
        }
        m_accelerateAreaInfosHasBeenSet = true;
    }

    if (value.HasMember("DeployStatus") && !value["DeployStatus"].IsNull())
    {
        if (!value["DeployStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainDetailInfo.DeployStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployStatus = string(value["DeployStatus"].GetString());
        m_deployStatusHasBeenSet = true;
    }

    if (value.HasMember("HTTPSConfig") && !value["HTTPSConfig"].IsNull())
    {
        if (!value["HTTPSConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DomainDetailInfo.HTTPSConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hTTPSConfig.Deserialize(value["HTTPSConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hTTPSConfigHasBeenSet = true;
    }

    if (value.HasMember("UrlSignatureAuthPolicy") && !value["UrlSignatureAuthPolicy"].IsNull())
    {
        if (!value["UrlSignatureAuthPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DomainDetailInfo.UrlSignatureAuthPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_urlSignatureAuthPolicy.Deserialize(value["UrlSignatureAuthPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_urlSignatureAuthPolicyHasBeenSet = true;
    }

    if (value.HasMember("RefererAuthPolicy") && !value["RefererAuthPolicy"].IsNull())
    {
        if (!value["RefererAuthPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DomainDetailInfo.RefererAuthPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_refererAuthPolicy.Deserialize(value["RefererAuthPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_refererAuthPolicyHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainDetailInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("QUICConfig") && !value["QUICConfig"].IsNull())
    {
        if (!value["QUICConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DomainDetailInfo.QUICConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_qUICConfig.Deserialize(value["QUICConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_qUICConfigHasBeenSet = true;
    }

    if (value.HasMember("IPFilterPolicy") && !value["IPFilterPolicy"].IsNull())
    {
        if (!value["IPFilterPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DomainDetailInfo.IPFilterPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_iPFilterPolicy.Deserialize(value["IPFilterPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_iPFilterPolicyHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainDetailInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_accelerateAreaInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccelerateAreaInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accelerateAreaInfos.begin(); itr != m_accelerateAreaInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deployStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_hTTPSConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HTTPSConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hTTPSConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_urlSignatureAuthPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlSignatureAuthPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_urlSignatureAuthPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_refererAuthPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefererAuthPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_refererAuthPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_qUICConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QUICConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_qUICConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_iPFilterPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPFilterPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iPFilterPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


string DomainDetailInfo::GetDomain() const
{
    return m_domain;
}

void DomainDetailInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DomainDetailInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<AccelerateAreaInfo> DomainDetailInfo::GetAccelerateAreaInfos() const
{
    return m_accelerateAreaInfos;
}

void DomainDetailInfo::SetAccelerateAreaInfos(const vector<AccelerateAreaInfo>& _accelerateAreaInfos)
{
    m_accelerateAreaInfos = _accelerateAreaInfos;
    m_accelerateAreaInfosHasBeenSet = true;
}

bool DomainDetailInfo::AccelerateAreaInfosHasBeenSet() const
{
    return m_accelerateAreaInfosHasBeenSet;
}

string DomainDetailInfo::GetDeployStatus() const
{
    return m_deployStatus;
}

void DomainDetailInfo::SetDeployStatus(const string& _deployStatus)
{
    m_deployStatus = _deployStatus;
    m_deployStatusHasBeenSet = true;
}

bool DomainDetailInfo::DeployStatusHasBeenSet() const
{
    return m_deployStatusHasBeenSet;
}

DomainHTTPSConfig DomainDetailInfo::GetHTTPSConfig() const
{
    return m_hTTPSConfig;
}

void DomainDetailInfo::SetHTTPSConfig(const DomainHTTPSConfig& _hTTPSConfig)
{
    m_hTTPSConfig = _hTTPSConfig;
    m_hTTPSConfigHasBeenSet = true;
}

bool DomainDetailInfo::HTTPSConfigHasBeenSet() const
{
    return m_hTTPSConfigHasBeenSet;
}

UrlSignatureAuthPolicy DomainDetailInfo::GetUrlSignatureAuthPolicy() const
{
    return m_urlSignatureAuthPolicy;
}

void DomainDetailInfo::SetUrlSignatureAuthPolicy(const UrlSignatureAuthPolicy& _urlSignatureAuthPolicy)
{
    m_urlSignatureAuthPolicy = _urlSignatureAuthPolicy;
    m_urlSignatureAuthPolicyHasBeenSet = true;
}

bool DomainDetailInfo::UrlSignatureAuthPolicyHasBeenSet() const
{
    return m_urlSignatureAuthPolicyHasBeenSet;
}

RefererAuthPolicy DomainDetailInfo::GetRefererAuthPolicy() const
{
    return m_refererAuthPolicy;
}

void DomainDetailInfo::SetRefererAuthPolicy(const RefererAuthPolicy& _refererAuthPolicy)
{
    m_refererAuthPolicy = _refererAuthPolicy;
    m_refererAuthPolicyHasBeenSet = true;
}

bool DomainDetailInfo::RefererAuthPolicyHasBeenSet() const
{
    return m_refererAuthPolicyHasBeenSet;
}

string DomainDetailInfo::GetCreateTime() const
{
    return m_createTime;
}

void DomainDetailInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DomainDetailInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

DomainQUICConfig DomainDetailInfo::GetQUICConfig() const
{
    return m_qUICConfig;
}

void DomainDetailInfo::SetQUICConfig(const DomainQUICConfig& _qUICConfig)
{
    m_qUICConfig = _qUICConfig;
    m_qUICConfigHasBeenSet = true;
}

bool DomainDetailInfo::QUICConfigHasBeenSet() const
{
    return m_qUICConfigHasBeenSet;
}

IPFilterPolicy DomainDetailInfo::GetIPFilterPolicy() const
{
    return m_iPFilterPolicy;
}

void DomainDetailInfo::SetIPFilterPolicy(const IPFilterPolicy& _iPFilterPolicy)
{
    m_iPFilterPolicy = _iPFilterPolicy;
    m_iPFilterPolicyHasBeenSet = true;
}

bool DomainDetailInfo::IPFilterPolicyHasBeenSet() const
{
    return m_iPFilterPolicyHasBeenSet;
}

string DomainDetailInfo::GetType() const
{
    return m_type;
}

void DomainDetailInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DomainDetailInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

