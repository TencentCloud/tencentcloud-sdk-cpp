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

#include <tencentcloud/cfs/v20190719/model/AvailableProtoStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

AvailableProtoStatus::AvailableProtoStatus() :
    m_saleStatusHasBeenSet(false),
    m_protocolHasBeenSet(false)
{
}

CoreInternalOutcome AvailableProtoStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SaleStatus") && !value["SaleStatus"].IsNull())
    {
        if (!value["SaleStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableProtoStatus.SaleStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_saleStatus = string(value["SaleStatus"].GetString());
        m_saleStatusHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableProtoStatus.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AvailableProtoStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_saleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_saleStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

}


string AvailableProtoStatus::GetSaleStatus() const
{
    return m_saleStatus;
}

void AvailableProtoStatus::SetSaleStatus(const string& _saleStatus)
{
    m_saleStatus = _saleStatus;
    m_saleStatusHasBeenSet = true;
}

bool AvailableProtoStatus::SaleStatusHasBeenSet() const
{
    return m_saleStatusHasBeenSet;
}

string AvailableProtoStatus::GetProtocol() const
{
    return m_protocol;
}

void AvailableProtoStatus::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool AvailableProtoStatus::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

