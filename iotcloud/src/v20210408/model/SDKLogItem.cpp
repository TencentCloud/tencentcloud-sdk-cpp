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

#include <tencentcloud/iotcloud/v20210408/model/SDKLogItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20210408::Model;
using namespace std;

SDKLogItem::SDKLogItem() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_dateTimeHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

CoreInternalOutcome SDKLogItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SDKLogItem.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SDKLogItem.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SDKLogItem.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("DateTime") && !value["DateTime"].IsNull())
    {
        if (!value["DateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SDKLogItem.DateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateTime = string(value["DateTime"].GetString());
        m_dateTimeHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SDKLogItem.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SDKLogItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_dateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

}


string SDKLogItem::GetProductId() const
{
    return m_productId;
}

void SDKLogItem::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool SDKLogItem::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string SDKLogItem::GetDeviceName() const
{
    return m_deviceName;
}

void SDKLogItem::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool SDKLogItem::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string SDKLogItem::GetLevel() const
{
    return m_level;
}

void SDKLogItem::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool SDKLogItem::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string SDKLogItem::GetDateTime() const
{
    return m_dateTime;
}

void SDKLogItem::SetDateTime(const string& _dateTime)
{
    m_dateTime = _dateTime;
    m_dateTimeHasBeenSet = true;
}

bool SDKLogItem::DateTimeHasBeenSet() const
{
    return m_dateTimeHasBeenSet;
}

string SDKLogItem::GetContent() const
{
    return m_content;
}

void SDKLogItem::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool SDKLogItem::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

