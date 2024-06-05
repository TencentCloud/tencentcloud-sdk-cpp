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

#include <tencentcloud/iotexplorer/v20190423/model/WXIoTDeviceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

WXIoTDeviceInfo::WXIoTDeviceInfo() :
    m_sNHasBeenSet(false),
    m_sNTicketHasBeenSet(false),
    m_modelIdHasBeenSet(false)
{
}

CoreInternalOutcome WXIoTDeviceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SN") && !value["SN"].IsNull())
    {
        if (!value["SN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WXIoTDeviceInfo.SN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sN = string(value["SN"].GetString());
        m_sNHasBeenSet = true;
    }

    if (value.HasMember("SNTicket") && !value["SNTicket"].IsNull())
    {
        if (!value["SNTicket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WXIoTDeviceInfo.SNTicket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sNTicket = string(value["SNTicket"].GetString());
        m_sNTicketHasBeenSet = true;
    }

    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WXIoTDeviceInfo.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WXIoTDeviceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sN.c_str(), allocator).Move(), allocator);
    }

    if (m_sNTicketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SNTicket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sNTicket.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

}


string WXIoTDeviceInfo::GetSN() const
{
    return m_sN;
}

void WXIoTDeviceInfo::SetSN(const string& _sN)
{
    m_sN = _sN;
    m_sNHasBeenSet = true;
}

bool WXIoTDeviceInfo::SNHasBeenSet() const
{
    return m_sNHasBeenSet;
}

string WXIoTDeviceInfo::GetSNTicket() const
{
    return m_sNTicket;
}

void WXIoTDeviceInfo::SetSNTicket(const string& _sNTicket)
{
    m_sNTicket = _sNTicket;
    m_sNTicketHasBeenSet = true;
}

bool WXIoTDeviceInfo::SNTicketHasBeenSet() const
{
    return m_sNTicketHasBeenSet;
}

string WXIoTDeviceInfo::GetModelId() const
{
    return m_modelId;
}

void WXIoTDeviceInfo::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool WXIoTDeviceInfo::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

