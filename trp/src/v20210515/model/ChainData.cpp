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

#include <tencentcloud/trp/v20210515/model/ChainData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

ChainData::ChainData() :
    m_blockHashHasBeenSet(false),
    m_blockHeightHasBeenSet(false),
    m_blockTimeHasBeenSet(false)
{
}

CoreInternalOutcome ChainData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BlockHash") && !value["BlockHash"].IsNull())
    {
        if (!value["BlockHash"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChainData.BlockHash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockHash = string(value["BlockHash"].GetString());
        m_blockHashHasBeenSet = true;
    }

    if (value.HasMember("BlockHeight") && !value["BlockHeight"].IsNull())
    {
        if (!value["BlockHeight"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChainData.BlockHeight` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockHeight = string(value["BlockHeight"].GetString());
        m_blockHeightHasBeenSet = true;
    }

    if (value.HasMember("BlockTime") && !value["BlockTime"].IsNull())
    {
        if (!value["BlockTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChainData.BlockTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockTime = string(value["BlockTime"].GetString());
        m_blockTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChainData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_blockHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockHash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockHash.c_str(), allocator).Move(), allocator);
    }

    if (m_blockHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockHeight.c_str(), allocator).Move(), allocator);
    }

    if (m_blockTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockTime.c_str(), allocator).Move(), allocator);
    }

}


string ChainData::GetBlockHash() const
{
    return m_blockHash;
}

void ChainData::SetBlockHash(const string& _blockHash)
{
    m_blockHash = _blockHash;
    m_blockHashHasBeenSet = true;
}

bool ChainData::BlockHashHasBeenSet() const
{
    return m_blockHashHasBeenSet;
}

string ChainData::GetBlockHeight() const
{
    return m_blockHeight;
}

void ChainData::SetBlockHeight(const string& _blockHeight)
{
    m_blockHeight = _blockHeight;
    m_blockHeightHasBeenSet = true;
}

bool ChainData::BlockHeightHasBeenSet() const
{
    return m_blockHeightHasBeenSet;
}

string ChainData::GetBlockTime() const
{
    return m_blockTime;
}

void ChainData::SetBlockTime(const string& _blockTime)
{
    m_blockTime = _blockTime;
    m_blockTimeHasBeenSet = true;
}

bool ChainData::BlockTimeHasBeenSet() const
{
    return m_blockTimeHasBeenSet;
}

