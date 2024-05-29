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

#include <tencentcloud/trp/v20210515/model/TraceCode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

TraceCode::TraceCode() :
    m_codeHasBeenSet(false),
    m_corpIdHasBeenSet(false),
    m_packIdHasBeenSet(false),
    m_batchIdHasBeenSet(false),
    m_merchantIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_merchantNameHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_packSpecHasBeenSet(false),
    m_sceneCodeHasBeenSet(false),
    m_serialCodeHasBeenSet(false)
{
}

CoreInternalOutcome TraceCode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceCode.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("CorpId") && !value["CorpId"].IsNull())
    {
        if (!value["CorpId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TraceCode.CorpId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_corpId = value["CorpId"].GetUint64();
        m_corpIdHasBeenSet = true;
    }

    if (value.HasMember("PackId") && !value["PackId"].IsNull())
    {
        if (!value["PackId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceCode.PackId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packId = string(value["PackId"].GetString());
        m_packIdHasBeenSet = true;
    }

    if (value.HasMember("BatchId") && !value["BatchId"].IsNull())
    {
        if (!value["BatchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceCode.BatchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchId = string(value["BatchId"].GetString());
        m_batchIdHasBeenSet = true;
    }

    if (value.HasMember("MerchantId") && !value["MerchantId"].IsNull())
    {
        if (!value["MerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceCode.MerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantId = string(value["MerchantId"].GetString());
        m_merchantIdHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceCode.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TraceCode.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceCode.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceCode.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("MerchantName") && !value["MerchantName"].IsNull())
    {
        if (!value["MerchantName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceCode.MerchantName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantName = string(value["MerchantName"].GetString());
        m_merchantNameHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceCode.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TraceCode.AgentId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = value["AgentId"].GetUint64();
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TraceCode.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("PackSpec") && !value["PackSpec"].IsNull())
    {
        if (!value["PackSpec"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TraceCode.PackSpec` is not array type"));

        const rapidjson::Value &tmpValue = value["PackSpec"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PackSpec item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_packSpec.push_back(item);
        }
        m_packSpecHasBeenSet = true;
    }

    if (value.HasMember("SceneCode") && !value["SceneCode"].IsNull())
    {
        if (!value["SceneCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TraceCode.SceneCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sceneCode = value["SceneCode"].GetUint64();
        m_sceneCodeHasBeenSet = true;
    }

    if (value.HasMember("SerialCode") && !value["SerialCode"].IsNull())
    {
        if (!value["SerialCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TraceCode.SerialCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serialCode = value["SerialCode"].GetUint64();
        m_serialCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TraceCode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_corpId, allocator);
    }

    if (m_packIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packId.c_str(), allocator).Move(), allocator);
    }

    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantName.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentId, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_packSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_packSpec.begin(); itr != m_packSpec.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sceneCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sceneCode, allocator);
    }

    if (m_serialCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serialCode, allocator);
    }

}


string TraceCode::GetCode() const
{
    return m_code;
}

void TraceCode::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool TraceCode::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

uint64_t TraceCode::GetCorpId() const
{
    return m_corpId;
}

void TraceCode::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool TraceCode::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

string TraceCode::GetPackId() const
{
    return m_packId;
}

void TraceCode::SetPackId(const string& _packId)
{
    m_packId = _packId;
    m_packIdHasBeenSet = true;
}

bool TraceCode::PackIdHasBeenSet() const
{
    return m_packIdHasBeenSet;
}

string TraceCode::GetBatchId() const
{
    return m_batchId;
}

void TraceCode::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool TraceCode::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

string TraceCode::GetMerchantId() const
{
    return m_merchantId;
}

void TraceCode::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool TraceCode::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string TraceCode::GetProductId() const
{
    return m_productId;
}

void TraceCode::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool TraceCode::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

uint64_t TraceCode::GetStatus() const
{
    return m_status;
}

void TraceCode::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TraceCode::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TraceCode::GetCreateTime() const
{
    return m_createTime;
}

void TraceCode::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TraceCode::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TraceCode::GetUpdateTime() const
{
    return m_updateTime;
}

void TraceCode::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TraceCode::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string TraceCode::GetMerchantName() const
{
    return m_merchantName;
}

void TraceCode::SetMerchantName(const string& _merchantName)
{
    m_merchantName = _merchantName;
    m_merchantNameHasBeenSet = true;
}

bool TraceCode::MerchantNameHasBeenSet() const
{
    return m_merchantNameHasBeenSet;
}

string TraceCode::GetProductName() const
{
    return m_productName;
}

void TraceCode::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool TraceCode::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

uint64_t TraceCode::GetAgentId() const
{
    return m_agentId;
}

void TraceCode::SetAgentId(const uint64_t& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool TraceCode::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

uint64_t TraceCode::GetLevel() const
{
    return m_level;
}

void TraceCode::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool TraceCode::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

vector<PackSpec> TraceCode::GetPackSpec() const
{
    return m_packSpec;
}

void TraceCode::SetPackSpec(const vector<PackSpec>& _packSpec)
{
    m_packSpec = _packSpec;
    m_packSpecHasBeenSet = true;
}

bool TraceCode::PackSpecHasBeenSet() const
{
    return m_packSpecHasBeenSet;
}

uint64_t TraceCode::GetSceneCode() const
{
    return m_sceneCode;
}

void TraceCode::SetSceneCode(const uint64_t& _sceneCode)
{
    m_sceneCode = _sceneCode;
    m_sceneCodeHasBeenSet = true;
}

bool TraceCode::SceneCodeHasBeenSet() const
{
    return m_sceneCodeHasBeenSet;
}

uint64_t TraceCode::GetSerialCode() const
{
    return m_serialCode;
}

void TraceCode::SetSerialCode(const uint64_t& _serialCode)
{
    m_serialCode = _serialCode;
    m_serialCodeHasBeenSet = true;
}

bool TraceCode::SerialCodeHasBeenSet() const
{
    return m_serialCodeHasBeenSet;
}

