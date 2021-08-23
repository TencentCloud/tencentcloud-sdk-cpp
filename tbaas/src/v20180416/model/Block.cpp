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

#include <tencentcloud/tbaas/v20180416/model/Block.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

Block::Block() :
    m_blockNumHasBeenSet(false),
    m_dataHashHasBeenSet(false),
    m_blockIdHasBeenSet(false),
    m_preHashHasBeenSet(false),
    m_txCountHasBeenSet(false)
{
}

CoreInternalOutcome Block::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BlockNum") && !value["BlockNum"].IsNull())
    {
        if (!value["BlockNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Block.BlockNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_blockNum = value["BlockNum"].GetUint64();
        m_blockNumHasBeenSet = true;
    }

    if (value.HasMember("DataHash") && !value["DataHash"].IsNull())
    {
        if (!value["DataHash"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Block.DataHash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataHash = string(value["DataHash"].GetString());
        m_dataHashHasBeenSet = true;
    }

    if (value.HasMember("BlockId") && !value["BlockId"].IsNull())
    {
        if (!value["BlockId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Block.BlockId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_blockId = value["BlockId"].GetUint64();
        m_blockIdHasBeenSet = true;
    }

    if (value.HasMember("PreHash") && !value["PreHash"].IsNull())
    {
        if (!value["PreHash"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Block.PreHash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_preHash = string(value["PreHash"].GetString());
        m_preHashHasBeenSet = true;
    }

    if (value.HasMember("TxCount") && !value["TxCount"].IsNull())
    {
        if (!value["TxCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Block.TxCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_txCount = value["TxCount"].GetUint64();
        m_txCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Block::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_blockNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockNum, allocator);
    }

    if (m_dataHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataHash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataHash.c_str(), allocator).Move(), allocator);
    }

    if (m_blockIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockId, allocator);
    }

    if (m_preHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreHash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_preHash.c_str(), allocator).Move(), allocator);
    }

    if (m_txCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TxCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_txCount, allocator);
    }

}


uint64_t Block::GetBlockNum() const
{
    return m_blockNum;
}

void Block::SetBlockNum(const uint64_t& _blockNum)
{
    m_blockNum = _blockNum;
    m_blockNumHasBeenSet = true;
}

bool Block::BlockNumHasBeenSet() const
{
    return m_blockNumHasBeenSet;
}

string Block::GetDataHash() const
{
    return m_dataHash;
}

void Block::SetDataHash(const string& _dataHash)
{
    m_dataHash = _dataHash;
    m_dataHashHasBeenSet = true;
}

bool Block::DataHashHasBeenSet() const
{
    return m_dataHashHasBeenSet;
}

uint64_t Block::GetBlockId() const
{
    return m_blockId;
}

void Block::SetBlockId(const uint64_t& _blockId)
{
    m_blockId = _blockId;
    m_blockIdHasBeenSet = true;
}

bool Block::BlockIdHasBeenSet() const
{
    return m_blockIdHasBeenSet;
}

string Block::GetPreHash() const
{
    return m_preHash;
}

void Block::SetPreHash(const string& _preHash)
{
    m_preHash = _preHash;
    m_preHashHasBeenSet = true;
}

bool Block::PreHashHasBeenSet() const
{
    return m_preHashHasBeenSet;
}

uint64_t Block::GetTxCount() const
{
    return m_txCount;
}

void Block::SetTxCount(const uint64_t& _txCount)
{
    m_txCount = _txCount;
    m_txCountHasBeenSet = true;
}

bool Block::TxCountHasBeenSet() const
{
    return m_txCountHasBeenSet;
}

