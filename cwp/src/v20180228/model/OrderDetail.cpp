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

#include <tencentcloud/cwp/v20180228/model/OrderDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

OrderDetail::OrderDetail() :
    m_resourceIDHasBeenSet(false),
    m_inquireKeyHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome OrderDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceID") && !value["ResourceID"].IsNull())
    {
        if (!value["ResourceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderDetail.ResourceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceID = string(value["ResourceID"].GetString());
        m_resourceIDHasBeenSet = true;
    }

    if (value.HasMember("InquireKey") && !value["InquireKey"].IsNull())
    {
        if (!value["InquireKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderDetail.InquireKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inquireKey = string(value["InquireKey"].GetString());
        m_inquireKeyHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OrderDetail.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrderDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceID.c_str(), allocator).Move(), allocator);
    }

    if (m_inquireKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InquireKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inquireKey.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string OrderDetail::GetResourceID() const
{
    return m_resourceID;
}

void OrderDetail::SetResourceID(const string& _resourceID)
{
    m_resourceID = _resourceID;
    m_resourceIDHasBeenSet = true;
}

bool OrderDetail::ResourceIDHasBeenSet() const
{
    return m_resourceIDHasBeenSet;
}

string OrderDetail::GetInquireKey() const
{
    return m_inquireKey;
}

void OrderDetail::SetInquireKey(const string& _inquireKey)
{
    m_inquireKey = _inquireKey;
    m_inquireKeyHasBeenSet = true;
}

bool OrderDetail::InquireKeyHasBeenSet() const
{
    return m_inquireKeyHasBeenSet;
}

uint64_t OrderDetail::GetStatus() const
{
    return m_status;
}

void OrderDetail::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool OrderDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

