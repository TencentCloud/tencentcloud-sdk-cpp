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

#include <tencentcloud/tione/v20211111/model/IntranetCallInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

IntranetCallInfo::IntranetCallInfo() :
    m_ingressPrivateLinkInfoHasBeenSet(false),
    m_serviceEIPInfoHasBeenSet(false),
    m_defaultInnerCallInfosHasBeenSet(false),
    m_privateLinkInfosHasBeenSet(false),
    m_privateLinkInfosV2HasBeenSet(false)
{
}

CoreInternalOutcome IntranetCallInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IngressPrivateLinkInfo") && !value["IngressPrivateLinkInfo"].IsNull())
    {
        if (!value["IngressPrivateLinkInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IntranetCallInfo.IngressPrivateLinkInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ingressPrivateLinkInfo.Deserialize(value["IngressPrivateLinkInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ingressPrivateLinkInfoHasBeenSet = true;
    }

    if (value.HasMember("ServiceEIPInfo") && !value["ServiceEIPInfo"].IsNull())
    {
        if (!value["ServiceEIPInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntranetCallInfo.ServiceEIPInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceEIPInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServiceEIPInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceEIPInfo.push_back(item);
        }
        m_serviceEIPInfoHasBeenSet = true;
    }

    if (value.HasMember("DefaultInnerCallInfos") && !value["DefaultInnerCallInfos"].IsNull())
    {
        if (!value["DefaultInnerCallInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntranetCallInfo.DefaultInnerCallInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["DefaultInnerCallInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DefaultInnerCallInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_defaultInnerCallInfos.push_back(item);
        }
        m_defaultInnerCallInfosHasBeenSet = true;
    }

    if (value.HasMember("PrivateLinkInfos") && !value["PrivateLinkInfos"].IsNull())
    {
        if (!value["PrivateLinkInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntranetCallInfo.PrivateLinkInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["PrivateLinkInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrivateLinkInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_privateLinkInfos.push_back(item);
        }
        m_privateLinkInfosHasBeenSet = true;
    }

    if (value.HasMember("PrivateLinkInfosV2") && !value["PrivateLinkInfosV2"].IsNull())
    {
        if (!value["PrivateLinkInfosV2"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntranetCallInfo.PrivateLinkInfosV2` is not array type"));

        const rapidjson::Value &tmpValue = value["PrivateLinkInfosV2"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrivateLinkInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_privateLinkInfosV2.push_back(item);
        }
        m_privateLinkInfosV2HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntranetCallInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ingressPrivateLinkInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IngressPrivateLinkInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ingressPrivateLinkInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_serviceEIPInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceEIPInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceEIPInfo.begin(); itr != m_serviceEIPInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_defaultInnerCallInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultInnerCallInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_defaultInnerCallInfos.begin(); itr != m_defaultInnerCallInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_privateLinkInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateLinkInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_privateLinkInfos.begin(); itr != m_privateLinkInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_privateLinkInfosV2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateLinkInfosV2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_privateLinkInfosV2.begin(); itr != m_privateLinkInfosV2.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


IngressPrivateLinkInfo IntranetCallInfo::GetIngressPrivateLinkInfo() const
{
    return m_ingressPrivateLinkInfo;
}

void IntranetCallInfo::SetIngressPrivateLinkInfo(const IngressPrivateLinkInfo& _ingressPrivateLinkInfo)
{
    m_ingressPrivateLinkInfo = _ingressPrivateLinkInfo;
    m_ingressPrivateLinkInfoHasBeenSet = true;
}

bool IntranetCallInfo::IngressPrivateLinkInfoHasBeenSet() const
{
    return m_ingressPrivateLinkInfoHasBeenSet;
}

vector<ServiceEIPInfo> IntranetCallInfo::GetServiceEIPInfo() const
{
    return m_serviceEIPInfo;
}

void IntranetCallInfo::SetServiceEIPInfo(const vector<ServiceEIPInfo>& _serviceEIPInfo)
{
    m_serviceEIPInfo = _serviceEIPInfo;
    m_serviceEIPInfoHasBeenSet = true;
}

bool IntranetCallInfo::ServiceEIPInfoHasBeenSet() const
{
    return m_serviceEIPInfoHasBeenSet;
}

vector<DefaultInnerCallInfo> IntranetCallInfo::GetDefaultInnerCallInfos() const
{
    return m_defaultInnerCallInfos;
}

void IntranetCallInfo::SetDefaultInnerCallInfos(const vector<DefaultInnerCallInfo>& _defaultInnerCallInfos)
{
    m_defaultInnerCallInfos = _defaultInnerCallInfos;
    m_defaultInnerCallInfosHasBeenSet = true;
}

bool IntranetCallInfo::DefaultInnerCallInfosHasBeenSet() const
{
    return m_defaultInnerCallInfosHasBeenSet;
}

vector<PrivateLinkInfo> IntranetCallInfo::GetPrivateLinkInfos() const
{
    return m_privateLinkInfos;
}

void IntranetCallInfo::SetPrivateLinkInfos(const vector<PrivateLinkInfo>& _privateLinkInfos)
{
    m_privateLinkInfos = _privateLinkInfos;
    m_privateLinkInfosHasBeenSet = true;
}

bool IntranetCallInfo::PrivateLinkInfosHasBeenSet() const
{
    return m_privateLinkInfosHasBeenSet;
}

vector<PrivateLinkInfo> IntranetCallInfo::GetPrivateLinkInfosV2() const
{
    return m_privateLinkInfosV2;
}

void IntranetCallInfo::SetPrivateLinkInfosV2(const vector<PrivateLinkInfo>& _privateLinkInfosV2)
{
    m_privateLinkInfosV2 = _privateLinkInfosV2;
    m_privateLinkInfosV2HasBeenSet = true;
}

bool IntranetCallInfo::PrivateLinkInfosV2HasBeenSet() const
{
    return m_privateLinkInfosV2HasBeenSet;
}

