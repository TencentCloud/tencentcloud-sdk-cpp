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

#include <tencentcloud/iotexplorer/v20190423/model/FenceEventItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

FenceEventItem::FenceEventItem() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_fenceIdHasBeenSet(false),
    m_alertTypeHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

CoreInternalOutcome FenceEventItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FenceEventItem.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FenceEventItem.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("FenceId") && !value["FenceId"].IsNull())
    {
        if (!value["FenceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FenceEventItem.FenceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fenceId = value["FenceId"].GetInt64();
        m_fenceIdHasBeenSet = true;
    }

    if (value.HasMember("AlertType") && !value["AlertType"].IsNull())
    {
        if (!value["AlertType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FenceEventItem.AlertType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alertType = string(value["AlertType"].GetString());
        m_alertTypeHasBeenSet = true;
    }

    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FenceEventItem.Data` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_data.Deserialize(value["Data"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FenceEventItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_fenceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FenceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fenceId, allocator);
    }

    if (m_alertTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alertType.c_str(), allocator).Move(), allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_data.ToJsonObject(value[key.c_str()], allocator);
    }

}


string FenceEventItem::GetProductId() const
{
    return m_productId;
}

void FenceEventItem::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool FenceEventItem::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string FenceEventItem::GetDeviceName() const
{
    return m_deviceName;
}

void FenceEventItem::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool FenceEventItem::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

int64_t FenceEventItem::GetFenceId() const
{
    return m_fenceId;
}

void FenceEventItem::SetFenceId(const int64_t& _fenceId)
{
    m_fenceId = _fenceId;
    m_fenceIdHasBeenSet = true;
}

bool FenceEventItem::FenceIdHasBeenSet() const
{
    return m_fenceIdHasBeenSet;
}

string FenceEventItem::GetAlertType() const
{
    return m_alertType;
}

void FenceEventItem::SetAlertType(const string& _alertType)
{
    m_alertType = _alertType;
    m_alertTypeHasBeenSet = true;
}

bool FenceEventItem::AlertTypeHasBeenSet() const
{
    return m_alertTypeHasBeenSet;
}

FenceAlarmPoint FenceEventItem::GetData() const
{
    return m_data;
}

void FenceEventItem::SetData(const FenceAlarmPoint& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool FenceEventItem::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

