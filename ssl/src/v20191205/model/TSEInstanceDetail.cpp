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

#include <tencentcloud/ssl/v20191205/model/TSEInstanceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

TSEInstanceDetail::TSEInstanceDetail() :
    m_gatewayIdHasBeenSet(false),
    m_gatewayNameHasBeenSet(false),
    m_certificateListHasBeenSet(false)
{
}

CoreInternalOutcome TSEInstanceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GatewayId") && !value["GatewayId"].IsNull())
    {
        if (!value["GatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TSEInstanceDetail.GatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayId = string(value["GatewayId"].GetString());
        m_gatewayIdHasBeenSet = true;
    }

    if (value.HasMember("GatewayName") && !value["GatewayName"].IsNull())
    {
        if (!value["GatewayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TSEInstanceDetail.GatewayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayName = string(value["GatewayName"].GetString());
        m_gatewayNameHasBeenSet = true;
    }

    if (value.HasMember("CertificateList") && !value["CertificateList"].IsNull())
    {
        if (!value["CertificateList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TSEInstanceDetail.CertificateList` is not array type"));

        const rapidjson::Value &tmpValue = value["CertificateList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GatewayCertificate item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_certificateList.push_back(item);
        }
        m_certificateListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TSEInstanceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_certificateList.begin(); itr != m_certificateList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TSEInstanceDetail::GetGatewayId() const
{
    return m_gatewayId;
}

void TSEInstanceDetail::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool TSEInstanceDetail::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string TSEInstanceDetail::GetGatewayName() const
{
    return m_gatewayName;
}

void TSEInstanceDetail::SetGatewayName(const string& _gatewayName)
{
    m_gatewayName = _gatewayName;
    m_gatewayNameHasBeenSet = true;
}

bool TSEInstanceDetail::GatewayNameHasBeenSet() const
{
    return m_gatewayNameHasBeenSet;
}

vector<GatewayCertificate> TSEInstanceDetail::GetCertificateList() const
{
    return m_certificateList;
}

void TSEInstanceDetail::SetCertificateList(const vector<GatewayCertificate>& _certificateList)
{
    m_certificateList = _certificateList;
    m_certificateListHasBeenSet = true;
}

bool TSEInstanceDetail::CertificateListHasBeenSet() const
{
    return m_certificateListHasBeenSet;
}

