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

#include <tencentcloud/ccc/v20200210/model/TransferToAgentItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

TransferToAgentItem::TransferToAgentItem() :
    m_transferToAgentNameHasBeenSet(false),
    m_transferToAgentDescHasBeenSet(false),
    m_transferToAgentIdHasBeenSet(false)
{
}

CoreInternalOutcome TransferToAgentItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TransferToAgentName") && !value["TransferToAgentName"].IsNull())
    {
        if (!value["TransferToAgentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransferToAgentItem.TransferToAgentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferToAgentName = string(value["TransferToAgentName"].GetString());
        m_transferToAgentNameHasBeenSet = true;
    }

    if (value.HasMember("TransferToAgentDesc") && !value["TransferToAgentDesc"].IsNull())
    {
        if (!value["TransferToAgentDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransferToAgentItem.TransferToAgentDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferToAgentDesc = string(value["TransferToAgentDesc"].GetString());
        m_transferToAgentDescHasBeenSet = true;
    }

    if (value.HasMember("TransferToAgentId") && !value["TransferToAgentId"].IsNull())
    {
        if (!value["TransferToAgentId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TransferToAgentItem.TransferToAgentId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_transferToAgentId = value["TransferToAgentId"].GetUint64();
        m_transferToAgentIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TransferToAgentItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_transferToAgentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferToAgentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transferToAgentName.c_str(), allocator).Move(), allocator);
    }

    if (m_transferToAgentDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferToAgentDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transferToAgentDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_transferToAgentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferToAgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transferToAgentId, allocator);
    }

}


string TransferToAgentItem::GetTransferToAgentName() const
{
    return m_transferToAgentName;
}

void TransferToAgentItem::SetTransferToAgentName(const string& _transferToAgentName)
{
    m_transferToAgentName = _transferToAgentName;
    m_transferToAgentNameHasBeenSet = true;
}

bool TransferToAgentItem::TransferToAgentNameHasBeenSet() const
{
    return m_transferToAgentNameHasBeenSet;
}

string TransferToAgentItem::GetTransferToAgentDesc() const
{
    return m_transferToAgentDesc;
}

void TransferToAgentItem::SetTransferToAgentDesc(const string& _transferToAgentDesc)
{
    m_transferToAgentDesc = _transferToAgentDesc;
    m_transferToAgentDescHasBeenSet = true;
}

bool TransferToAgentItem::TransferToAgentDescHasBeenSet() const
{
    return m_transferToAgentDescHasBeenSet;
}

uint64_t TransferToAgentItem::GetTransferToAgentId() const
{
    return m_transferToAgentId;
}

void TransferToAgentItem::SetTransferToAgentId(const uint64_t& _transferToAgentId)
{
    m_transferToAgentId = _transferToAgentId;
    m_transferToAgentIdHasBeenSet = true;
}

bool TransferToAgentItem::TransferToAgentIdHasBeenSet() const
{
    return m_transferToAgentIdHasBeenSet;
}

