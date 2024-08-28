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

#include <tencentcloud/ses/v20201002/model/ReceiverData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

ReceiverData::ReceiverData() :
    m_receiverIdHasBeenSet(false),
    m_receiversNameHasBeenSet(false),
    m_countHasBeenSet(false),
    m_descHasBeenSet(false),
    m_receiversStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_invalidCountHasBeenSet(false)
{
}

CoreInternalOutcome ReceiverData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReceiverId") && !value["ReceiverId"].IsNull())
    {
        if (!value["ReceiverId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverData.ReceiverId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_receiverId = value["ReceiverId"].GetUint64();
        m_receiverIdHasBeenSet = true;
    }

    if (value.HasMember("ReceiversName") && !value["ReceiversName"].IsNull())
    {
        if (!value["ReceiversName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverData.ReceiversName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiversName = string(value["ReceiversName"].GetString());
        m_receiversNameHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverData.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverData.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("ReceiversStatus") && !value["ReceiversStatus"].IsNull())
    {
        if (!value["ReceiversStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverData.ReceiversStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_receiversStatus = value["ReceiversStatus"].GetUint64();
        m_receiversStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverData.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("InvalidCount") && !value["InvalidCount"].IsNull())
    {
        if (!value["InvalidCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverData.InvalidCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_invalidCount = value["InvalidCount"].GetUint64();
        m_invalidCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReceiverData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_receiverIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_receiverId, allocator);
    }

    if (m_receiversNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiversName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiversName.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_receiversStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiversStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_receiversStatus, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_invalidCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvalidCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invalidCount, allocator);
    }

}


uint64_t ReceiverData::GetReceiverId() const
{
    return m_receiverId;
}

void ReceiverData::SetReceiverId(const uint64_t& _receiverId)
{
    m_receiverId = _receiverId;
    m_receiverIdHasBeenSet = true;
}

bool ReceiverData::ReceiverIdHasBeenSet() const
{
    return m_receiverIdHasBeenSet;
}

string ReceiverData::GetReceiversName() const
{
    return m_receiversName;
}

void ReceiverData::SetReceiversName(const string& _receiversName)
{
    m_receiversName = _receiversName;
    m_receiversNameHasBeenSet = true;
}

bool ReceiverData::ReceiversNameHasBeenSet() const
{
    return m_receiversNameHasBeenSet;
}

uint64_t ReceiverData::GetCount() const
{
    return m_count;
}

void ReceiverData::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool ReceiverData::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string ReceiverData::GetDesc() const
{
    return m_desc;
}

void ReceiverData::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool ReceiverData::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

uint64_t ReceiverData::GetReceiversStatus() const
{
    return m_receiversStatus;
}

void ReceiverData::SetReceiversStatus(const uint64_t& _receiversStatus)
{
    m_receiversStatus = _receiversStatus;
    m_receiversStatusHasBeenSet = true;
}

bool ReceiverData::ReceiversStatusHasBeenSet() const
{
    return m_receiversStatusHasBeenSet;
}

string ReceiverData::GetCreateTime() const
{
    return m_createTime;
}

void ReceiverData::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ReceiverData::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t ReceiverData::GetInvalidCount() const
{
    return m_invalidCount;
}

void ReceiverData::SetInvalidCount(const uint64_t& _invalidCount)
{
    m_invalidCount = _invalidCount;
    m_invalidCountHasBeenSet = true;
}

bool ReceiverData::InvalidCountHasBeenSet() const
{
    return m_invalidCountHasBeenSet;
}

