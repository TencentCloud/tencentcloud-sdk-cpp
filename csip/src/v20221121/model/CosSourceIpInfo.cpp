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

#include <tencentcloud/csip/v20221121/model/CosSourceIpInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosSourceIpInfo::CosSourceIpInfo() :
    m_uAHasBeenSet(false),
    m_vpcInfoHasBeenSet(false)
{
}

CoreInternalOutcome CosSourceIpInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UA") && !value["UA"].IsNull())
    {
        if (!value["UA"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosSourceIpInfo.UA` is not array type"));

        const rapidjson::Value &tmpValue = value["UA"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_uA.push_back((*itr).GetString());
        }
        m_uAHasBeenSet = true;
    }

    if (value.HasMember("VpcInfo") && !value["VpcInfo"].IsNull())
    {
        if (!value["VpcInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CosSourceIpInfo.VpcInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vpcInfo.Deserialize(value["VpcInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vpcInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosSourceIpInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uAHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UA";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uA.begin(); itr != m_uA.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vpcInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vpcInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<string> CosSourceIpInfo::GetUA() const
{
    return m_uA;
}

void CosSourceIpInfo::SetUA(const vector<string>& _uA)
{
    m_uA = _uA;
    m_uAHasBeenSet = true;
}

bool CosSourceIpInfo::UAHasBeenSet() const
{
    return m_uAHasBeenSet;
}

CosInvokeIpVpcInfo CosSourceIpInfo::GetVpcInfo() const
{
    return m_vpcInfo;
}

void CosSourceIpInfo::SetVpcInfo(const CosInvokeIpVpcInfo& _vpcInfo)
{
    m_vpcInfo = _vpcInfo;
    m_vpcInfoHasBeenSet = true;
}

bool CosSourceIpInfo::VpcInfoHasBeenSet() const
{
    return m_vpcInfoHasBeenSet;
}

