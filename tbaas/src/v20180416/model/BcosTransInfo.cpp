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

#include <tencentcloud/tbaas/v20180416/model/BcosTransInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

BcosTransInfo::BcosTransInfo() :
    m_blockNumberHasBeenSet(false),
    m_blockTimestampHasBeenSet(false),
    m_transHashHasBeenSet(false),
    m_transFromHasBeenSet(false),
    m_transToHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome BcosTransInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BlockNumber") && !value["BlockNumber"].IsNull())
    {
        if (!value["BlockNumber"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `BcosTransInfo.BlockNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockNumber = value["BlockNumber"].GetInt64();
        m_blockNumberHasBeenSet = true;
    }

    if (value.HasMember("BlockTimestamp") && !value["BlockTimestamp"].IsNull())
    {
        if (!value["BlockTimestamp"].IsString())
        {
            return CoreInternalOutcome(Error("response `BcosTransInfo.BlockTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockTimestamp = string(value["BlockTimestamp"].GetString());
        m_blockTimestampHasBeenSet = true;
    }

    if (value.HasMember("TransHash") && !value["TransHash"].IsNull())
    {
        if (!value["TransHash"].IsString())
        {
            return CoreInternalOutcome(Error("response `BcosTransInfo.TransHash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transHash = string(value["TransHash"].GetString());
        m_transHashHasBeenSet = true;
    }

    if (value.HasMember("TransFrom") && !value["TransFrom"].IsNull())
    {
        if (!value["TransFrom"].IsString())
        {
            return CoreInternalOutcome(Error("response `BcosTransInfo.TransFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transFrom = string(value["TransFrom"].GetString());
        m_transFromHasBeenSet = true;
    }

    if (value.HasMember("TransTo") && !value["TransTo"].IsNull())
    {
        if (!value["TransTo"].IsString())
        {
            return CoreInternalOutcome(Error("response `BcosTransInfo.TransTo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transTo = string(value["TransTo"].GetString());
        m_transToHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `BcosTransInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `BcosTransInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BcosTransInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_blockNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockNumber, allocator);
    }

    if (m_blockTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_transHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransHash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transHash.c_str(), allocator).Move(), allocator);
    }

    if (m_transFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_transToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transTo.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t BcosTransInfo::GetBlockNumber() const
{
    return m_blockNumber;
}

void BcosTransInfo::SetBlockNumber(const int64_t& _blockNumber)
{
    m_blockNumber = _blockNumber;
    m_blockNumberHasBeenSet = true;
}

bool BcosTransInfo::BlockNumberHasBeenSet() const
{
    return m_blockNumberHasBeenSet;
}

string BcosTransInfo::GetBlockTimestamp() const
{
    return m_blockTimestamp;
}

void BcosTransInfo::SetBlockTimestamp(const string& _blockTimestamp)
{
    m_blockTimestamp = _blockTimestamp;
    m_blockTimestampHasBeenSet = true;
}

bool BcosTransInfo::BlockTimestampHasBeenSet() const
{
    return m_blockTimestampHasBeenSet;
}

string BcosTransInfo::GetTransHash() const
{
    return m_transHash;
}

void BcosTransInfo::SetTransHash(const string& _transHash)
{
    m_transHash = _transHash;
    m_transHashHasBeenSet = true;
}

bool BcosTransInfo::TransHashHasBeenSet() const
{
    return m_transHashHasBeenSet;
}

string BcosTransInfo::GetTransFrom() const
{
    return m_transFrom;
}

void BcosTransInfo::SetTransFrom(const string& _transFrom)
{
    m_transFrom = _transFrom;
    m_transFromHasBeenSet = true;
}

bool BcosTransInfo::TransFromHasBeenSet() const
{
    return m_transFromHasBeenSet;
}

string BcosTransInfo::GetTransTo() const
{
    return m_transTo;
}

void BcosTransInfo::SetTransTo(const string& _transTo)
{
    m_transTo = _transTo;
    m_transToHasBeenSet = true;
}

bool BcosTransInfo::TransToHasBeenSet() const
{
    return m_transToHasBeenSet;
}

string BcosTransInfo::GetCreateTime() const
{
    return m_createTime;
}

void BcosTransInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BcosTransInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BcosTransInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void BcosTransInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool BcosTransInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

