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

#include <tencentcloud/iot/v20180123/model/AppDeviceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iot::V20180123::Model;
using namespace std;

AppDeviceDetail::AppDeviceDetail() :
    m_deviceIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_aliasNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_deviceInfoHasBeenSet(false),
    m_dataTemplateHasBeenSet(false)
{
}

CoreInternalOutcome AppDeviceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppDeviceDetail.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppDeviceDetail.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppDeviceDetail.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("AliasName") && !value["AliasName"].IsNull())
    {
        if (!value["AliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppDeviceDetail.AliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasName = string(value["AliasName"].GetString());
        m_aliasNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppDeviceDetail.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppDeviceDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppDeviceDetail.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("DeviceInfo") && !value["DeviceInfo"].IsNull())
    {
        if (!value["DeviceInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppDeviceDetail.DeviceInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceInfo = string(value["DeviceInfo"].GetString());
        m_deviceInfoHasBeenSet = true;
    }

    if (value.HasMember("DataTemplate") && !value["DataTemplate"].IsNull())
    {
        if (!value["DataTemplate"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AppDeviceDetail.DataTemplate` is not array type"));

        const rapidjson::Value &tmpValue = value["DataTemplate"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataTemplate item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataTemplate.push_back(item);
        }
        m_dataTemplateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppDeviceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_aliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliasName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
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

    if (m_deviceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataTemplate.begin(); itr != m_dataTemplate.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AppDeviceDetail::GetDeviceId() const
{
    return m_deviceId;
}

void AppDeviceDetail::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool AppDeviceDetail::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string AppDeviceDetail::GetProductId() const
{
    return m_productId;
}

void AppDeviceDetail::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool AppDeviceDetail::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string AppDeviceDetail::GetDeviceName() const
{
    return m_deviceName;
}

void AppDeviceDetail::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool AppDeviceDetail::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string AppDeviceDetail::GetAliasName() const
{
    return m_aliasName;
}

void AppDeviceDetail::SetAliasName(const string& _aliasName)
{
    m_aliasName = _aliasName;
    m_aliasNameHasBeenSet = true;
}

bool AppDeviceDetail::AliasNameHasBeenSet() const
{
    return m_aliasNameHasBeenSet;
}

string AppDeviceDetail::GetRegion() const
{
    return m_region;
}

void AppDeviceDetail::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool AppDeviceDetail::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string AppDeviceDetail::GetCreateTime() const
{
    return m_createTime;
}

void AppDeviceDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AppDeviceDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AppDeviceDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void AppDeviceDetail::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AppDeviceDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AppDeviceDetail::GetDeviceInfo() const
{
    return m_deviceInfo;
}

void AppDeviceDetail::SetDeviceInfo(const string& _deviceInfo)
{
    m_deviceInfo = _deviceInfo;
    m_deviceInfoHasBeenSet = true;
}

bool AppDeviceDetail::DeviceInfoHasBeenSet() const
{
    return m_deviceInfoHasBeenSet;
}

vector<DataTemplate> AppDeviceDetail::GetDataTemplate() const
{
    return m_dataTemplate;
}

void AppDeviceDetail::SetDataTemplate(const vector<DataTemplate>& _dataTemplate)
{
    m_dataTemplate = _dataTemplate;
    m_dataTemplateHasBeenSet = true;
}

bool AppDeviceDetail::DataTemplateHasBeenSet() const
{
    return m_dataTemplateHasBeenSet;
}

