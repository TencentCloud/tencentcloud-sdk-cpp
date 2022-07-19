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

#include <tencentcloud/iotvideo/v20211125/model/DataForward.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

DataForward::DataForward() :
    m_productIdHasBeenSet(false),
    m_forwardAddrHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_dataChoseHasBeenSet(false)
{
}

CoreInternalOutcome DataForward::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataForward.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("ForwardAddr") && !value["ForwardAddr"].IsNull())
    {
        if (!value["ForwardAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataForward.ForwardAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardAddr = string(value["ForwardAddr"].GetString());
        m_forwardAddrHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataForward.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataForward.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataForward.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("DataChose") && !value["DataChose"].IsNull())
    {
        if (!value["DataChose"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataForward.DataChose` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataChose = value["DataChose"].GetInt64();
        m_dataChoseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataForward::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forwardAddr.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_dataChoseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataChose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataChose, allocator);
    }

}


string DataForward::GetProductId() const
{
    return m_productId;
}

void DataForward::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DataForward::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DataForward::GetForwardAddr() const
{
    return m_forwardAddr;
}

void DataForward::SetForwardAddr(const string& _forwardAddr)
{
    m_forwardAddr = _forwardAddr;
    m_forwardAddrHasBeenSet = true;
}

bool DataForward::ForwardAddrHasBeenSet() const
{
    return m_forwardAddrHasBeenSet;
}

int64_t DataForward::GetStatus() const
{
    return m_status;
}

void DataForward::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DataForward::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DataForward::GetCreateTime() const
{
    return m_createTime;
}

void DataForward::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DataForward::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DataForward::GetUpdateTime() const
{
    return m_updateTime;
}

void DataForward::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DataForward::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t DataForward::GetDataChose() const
{
    return m_dataChose;
}

void DataForward::SetDataChose(const int64_t& _dataChose)
{
    m_dataChose = _dataChose;
    m_dataChoseHasBeenSet = true;
}

bool DataForward::DataChoseHasBeenSet() const
{
    return m_dataChoseHasBeenSet;
}

