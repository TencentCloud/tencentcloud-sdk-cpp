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

#include <tencentcloud/iotexplorer/v20190423/model/CreateBatchProductionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

CreateBatchProductionResponse::CreateBatchProductionResponse() :
    m_projectIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_batchProductionIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateBatchProductionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ProjectId") && !rsp["ProjectId"].IsNull())
    {
        if (!rsp["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(rsp["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (rsp.HasMember("ProductId") && !rsp["ProductId"].IsNull())
    {
        if (!rsp["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(rsp["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (rsp.HasMember("BatchProductionId") && !rsp["BatchProductionId"].IsNull())
    {
        if (!rsp["BatchProductionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchProductionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchProductionId = string(rsp["BatchProductionId"].GetString());
        m_batchProductionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateBatchProductionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_batchProductionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchProductionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchProductionId.c_str(), allocator).Move(), allocator);
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


string CreateBatchProductionResponse::GetProjectId() const
{
    return m_projectId;
}

bool CreateBatchProductionResponse::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateBatchProductionResponse::GetProductId() const
{
    return m_productId;
}

bool CreateBatchProductionResponse::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string CreateBatchProductionResponse::GetBatchProductionId() const
{
    return m_batchProductionId;
}

bool CreateBatchProductionResponse::BatchProductionIdHasBeenSet() const
{
    return m_batchProductionIdHasBeenSet;
}


