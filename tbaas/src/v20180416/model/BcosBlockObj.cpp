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

#include <tencentcloud/tbaas/v20180416/model/BcosBlockObj.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

BcosBlockObj::BcosBlockObj() :
    m_blockHashHasBeenSet(false),
    m_blockNumberHasBeenSet(false),
    m_blockTimestampHasBeenSet(false),
    m_sealerHasBeenSet(false),
    m_sealerIndexHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_transCountHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome BcosBlockObj::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BlockHash") && !value["BlockHash"].IsNull())
    {
        if (!value["BlockHash"].IsString())
        {
            return CoreInternalOutcome(Error("response `BcosBlockObj.BlockHash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockHash = string(value["BlockHash"].GetString());
        m_blockHashHasBeenSet = true;
    }

    if (value.HasMember("BlockNumber") && !value["BlockNumber"].IsNull())
    {
        if (!value["BlockNumber"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `BcosBlockObj.BlockNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockNumber = value["BlockNumber"].GetInt64();
        m_blockNumberHasBeenSet = true;
    }

    if (value.HasMember("BlockTimestamp") && !value["BlockTimestamp"].IsNull())
    {
        if (!value["BlockTimestamp"].IsString())
        {
            return CoreInternalOutcome(Error("response `BcosBlockObj.BlockTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockTimestamp = string(value["BlockTimestamp"].GetString());
        m_blockTimestampHasBeenSet = true;
    }

    if (value.HasMember("Sealer") && !value["Sealer"].IsNull())
    {
        if (!value["Sealer"].IsString())
        {
            return CoreInternalOutcome(Error("response `BcosBlockObj.Sealer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sealer = string(value["Sealer"].GetString());
        m_sealerHasBeenSet = true;
    }

    if (value.HasMember("SealerIndex") && !value["SealerIndex"].IsNull())
    {
        if (!value["SealerIndex"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `BcosBlockObj.SealerIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sealerIndex = value["SealerIndex"].GetInt64();
        m_sealerIndexHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `BcosBlockObj.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("TransCount") && !value["TransCount"].IsNull())
    {
        if (!value["TransCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `BcosBlockObj.TransCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transCount = value["TransCount"].GetInt64();
        m_transCountHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `BcosBlockObj.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BcosBlockObj::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_blockHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockHash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockHash.c_str(), allocator).Move(), allocator);
    }

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

    if (m_sealerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sealer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sealer.c_str(), allocator).Move(), allocator);
    }

    if (m_sealerIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealerIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sealerIndex, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_transCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transCount, allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

}


string BcosBlockObj::GetBlockHash() const
{
    return m_blockHash;
}

void BcosBlockObj::SetBlockHash(const string& _blockHash)
{
    m_blockHash = _blockHash;
    m_blockHashHasBeenSet = true;
}

bool BcosBlockObj::BlockHashHasBeenSet() const
{
    return m_blockHashHasBeenSet;
}

int64_t BcosBlockObj::GetBlockNumber() const
{
    return m_blockNumber;
}

void BcosBlockObj::SetBlockNumber(const int64_t& _blockNumber)
{
    m_blockNumber = _blockNumber;
    m_blockNumberHasBeenSet = true;
}

bool BcosBlockObj::BlockNumberHasBeenSet() const
{
    return m_blockNumberHasBeenSet;
}

string BcosBlockObj::GetBlockTimestamp() const
{
    return m_blockTimestamp;
}

void BcosBlockObj::SetBlockTimestamp(const string& _blockTimestamp)
{
    m_blockTimestamp = _blockTimestamp;
    m_blockTimestampHasBeenSet = true;
}

bool BcosBlockObj::BlockTimestampHasBeenSet() const
{
    return m_blockTimestampHasBeenSet;
}

string BcosBlockObj::GetSealer() const
{
    return m_sealer;
}

void BcosBlockObj::SetSealer(const string& _sealer)
{
    m_sealer = _sealer;
    m_sealerHasBeenSet = true;
}

bool BcosBlockObj::SealerHasBeenSet() const
{
    return m_sealerHasBeenSet;
}

int64_t BcosBlockObj::GetSealerIndex() const
{
    return m_sealerIndex;
}

void BcosBlockObj::SetSealerIndex(const int64_t& _sealerIndex)
{
    m_sealerIndex = _sealerIndex;
    m_sealerIndexHasBeenSet = true;
}

bool BcosBlockObj::SealerIndexHasBeenSet() const
{
    return m_sealerIndexHasBeenSet;
}

string BcosBlockObj::GetCreateTime() const
{
    return m_createTime;
}

void BcosBlockObj::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BcosBlockObj::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t BcosBlockObj::GetTransCount() const
{
    return m_transCount;
}

void BcosBlockObj::SetTransCount(const int64_t& _transCount)
{
    m_transCount = _transCount;
    m_transCountHasBeenSet = true;
}

bool BcosBlockObj::TransCountHasBeenSet() const
{
    return m_transCountHasBeenSet;
}

string BcosBlockObj::GetModifyTime() const
{
    return m_modifyTime;
}

void BcosBlockObj::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool BcosBlockObj::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

