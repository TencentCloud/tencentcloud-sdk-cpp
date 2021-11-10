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

#include <tencentcloud/iotexplorer/v20190423/model/BatchProductionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

BatchProductionInfo::BatchProductionInfo() :
    m_batchProductionIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_burnMethodHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_productNameHasBeenSet(false)
{
}

CoreInternalOutcome BatchProductionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BatchProductionId") && !value["BatchProductionId"].IsNull())
    {
        if (!value["BatchProductionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchProductionInfo.BatchProductionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchProductionId = string(value["BatchProductionId"].GetString());
        m_batchProductionIdHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchProductionInfo.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("BurnMethod") && !value["BurnMethod"].IsNull())
    {
        if (!value["BurnMethod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchProductionInfo.BurnMethod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_burnMethod = value["BurnMethod"].GetInt64();
        m_burnMethodHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchProductionInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchProductionInfo.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchProductionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_batchProductionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchProductionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchProductionId.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_burnMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BurnMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_burnMethod, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

}


string BatchProductionInfo::GetBatchProductionId() const
{
    return m_batchProductionId;
}

void BatchProductionInfo::SetBatchProductionId(const string& _batchProductionId)
{
    m_batchProductionId = _batchProductionId;
    m_batchProductionIdHasBeenSet = true;
}

bool BatchProductionInfo::BatchProductionIdHasBeenSet() const
{
    return m_batchProductionIdHasBeenSet;
}

string BatchProductionInfo::GetProductId() const
{
    return m_productId;
}

void BatchProductionInfo::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool BatchProductionInfo::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

int64_t BatchProductionInfo::GetBurnMethod() const
{
    return m_burnMethod;
}

void BatchProductionInfo::SetBurnMethod(const int64_t& _burnMethod)
{
    m_burnMethod = _burnMethod;
    m_burnMethodHasBeenSet = true;
}

bool BatchProductionInfo::BurnMethodHasBeenSet() const
{
    return m_burnMethodHasBeenSet;
}

int64_t BatchProductionInfo::GetCreateTime() const
{
    return m_createTime;
}

void BatchProductionInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BatchProductionInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BatchProductionInfo::GetProductName() const
{
    return m_productName;
}

void BatchProductionInfo::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool BatchProductionInfo::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

