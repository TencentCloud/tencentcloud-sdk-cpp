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

#include <tencentcloud/postgres/v20170312/model/DescribeMem0ServiceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

DescribeMem0ServiceResponse::DescribeMem0ServiceResponse() :
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_innerAddressHasBeenSet(false),
    m_agenticBaseIdHasBeenSet(false),
    m_lLMModeHasBeenSet(false),
    m_lLMModelHasBeenSet(false),
    m_embeddingModelHasBeenSet(false),
    m_embeddingDimsHasBeenSet(false),
    m_pGDatabaseNameHasBeenSet(false),
    m_pGUserNameHasBeenSet(false),
    m_networkAccessListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMem0ServiceResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("InnerAddress") && !rsp["InnerAddress"].IsNull())
    {
        if (!rsp["InnerAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InnerAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_innerAddress = string(rsp["InnerAddress"].GetString());
        m_innerAddressHasBeenSet = true;
    }

    if (rsp.HasMember("AgenticBaseId") && !rsp["AgenticBaseId"].IsNull())
    {
        if (!rsp["AgenticBaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgenticBaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agenticBaseId = string(rsp["AgenticBaseId"].GetString());
        m_agenticBaseIdHasBeenSet = true;
    }

    if (rsp.HasMember("LLMMode") && !rsp["LLMMode"].IsNull())
    {
        if (!rsp["LLMMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lLMMode = string(rsp["LLMMode"].GetString());
        m_lLMModeHasBeenSet = true;
    }

    if (rsp.HasMember("LLMModel") && !rsp["LLMModel"].IsNull())
    {
        if (!rsp["LLMModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lLMModel = string(rsp["LLMModel"].GetString());
        m_lLMModelHasBeenSet = true;
    }

    if (rsp.HasMember("EmbeddingModel") && !rsp["EmbeddingModel"].IsNull())
    {
        if (!rsp["EmbeddingModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmbeddingModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_embeddingModel = string(rsp["EmbeddingModel"].GetString());
        m_embeddingModelHasBeenSet = true;
    }

    if (rsp.HasMember("EmbeddingDims") && !rsp["EmbeddingDims"].IsNull())
    {
        if (!rsp["EmbeddingDims"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EmbeddingDims` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_embeddingDims = rsp["EmbeddingDims"].GetInt64();
        m_embeddingDimsHasBeenSet = true;
    }

    if (rsp.HasMember("PGDatabaseName") && !rsp["PGDatabaseName"].IsNull())
    {
        if (!rsp["PGDatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PGDatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pGDatabaseName = string(rsp["PGDatabaseName"].GetString());
        m_pGDatabaseNameHasBeenSet = true;
    }

    if (rsp.HasMember("PGUserName") && !rsp["PGUserName"].IsNull())
    {
        if (!rsp["PGUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PGUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pGUserName = string(rsp["PGUserName"].GetString());
        m_pGUserNameHasBeenSet = true;
    }

    if (rsp.HasMember("NetworkAccessList") && !rsp["NetworkAccessList"].IsNull())
    {
        if (!rsp["NetworkAccessList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetworkAccessList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NetworkAccessList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DBInstanceNetInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_networkAccessList.push_back(item);
        }
        m_networkAccessListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeMem0ServiceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
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

    if (m_innerAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_innerAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_agenticBaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgenticBaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agenticBaseId.c_str(), allocator).Move(), allocator);
    }

    if (m_lLMModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LLMMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lLMMode.c_str(), allocator).Move(), allocator);
    }

    if (m_lLMModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LLMModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lLMModel.c_str(), allocator).Move(), allocator);
    }

    if (m_embeddingModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmbeddingModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_embeddingModel.c_str(), allocator).Move(), allocator);
    }

    if (m_embeddingDimsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmbeddingDims";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_embeddingDims, allocator);
    }

    if (m_pGDatabaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PGDatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pGDatabaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_pGUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PGUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pGUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_networkAccessListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkAccessList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_networkAccessList.begin(); itr != m_networkAccessList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeMem0ServiceResponse::GetStatus() const
{
    return m_status;
}

bool DescribeMem0ServiceResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeMem0ServiceResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeMem0ServiceResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeMem0ServiceResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeMem0ServiceResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DescribeMem0ServiceResponse::GetInnerAddress() const
{
    return m_innerAddress;
}

bool DescribeMem0ServiceResponse::InnerAddressHasBeenSet() const
{
    return m_innerAddressHasBeenSet;
}

string DescribeMem0ServiceResponse::GetAgenticBaseId() const
{
    return m_agenticBaseId;
}

bool DescribeMem0ServiceResponse::AgenticBaseIdHasBeenSet() const
{
    return m_agenticBaseIdHasBeenSet;
}

string DescribeMem0ServiceResponse::GetLLMMode() const
{
    return m_lLMMode;
}

bool DescribeMem0ServiceResponse::LLMModeHasBeenSet() const
{
    return m_lLMModeHasBeenSet;
}

string DescribeMem0ServiceResponse::GetLLMModel() const
{
    return m_lLMModel;
}

bool DescribeMem0ServiceResponse::LLMModelHasBeenSet() const
{
    return m_lLMModelHasBeenSet;
}

string DescribeMem0ServiceResponse::GetEmbeddingModel() const
{
    return m_embeddingModel;
}

bool DescribeMem0ServiceResponse::EmbeddingModelHasBeenSet() const
{
    return m_embeddingModelHasBeenSet;
}

int64_t DescribeMem0ServiceResponse::GetEmbeddingDims() const
{
    return m_embeddingDims;
}

bool DescribeMem0ServiceResponse::EmbeddingDimsHasBeenSet() const
{
    return m_embeddingDimsHasBeenSet;
}

string DescribeMem0ServiceResponse::GetPGDatabaseName() const
{
    return m_pGDatabaseName;
}

bool DescribeMem0ServiceResponse::PGDatabaseNameHasBeenSet() const
{
    return m_pGDatabaseNameHasBeenSet;
}

string DescribeMem0ServiceResponse::GetPGUserName() const
{
    return m_pGUserName;
}

bool DescribeMem0ServiceResponse::PGUserNameHasBeenSet() const
{
    return m_pGUserNameHasBeenSet;
}

vector<DBInstanceNetInfo> DescribeMem0ServiceResponse::GetNetworkAccessList() const
{
    return m_networkAccessList;
}

bool DescribeMem0ServiceResponse::NetworkAccessListHasBeenSet() const
{
    return m_networkAccessListHasBeenSet;
}


