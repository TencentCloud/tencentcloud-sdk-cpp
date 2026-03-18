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

#include <tencentcloud/tione/v20211111/model/DeviceMaterialInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DeviceMaterialInfo::DeviceMaterialInfo() :
    m_deviceTypeHasBeenSet(false),
    m_materialInfoHasBeenSet(false)
{
}

CoreInternalOutcome DeviceMaterialInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceMaterialInfo.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("MaterialInfo") && !value["MaterialInfo"].IsNull())
    {
        if (!value["MaterialInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceMaterialInfo.MaterialInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_materialInfo.Deserialize(value["MaterialInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_materialInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceMaterialInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_materialInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_materialInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DeviceMaterialInfo::GetDeviceType() const
{
    return m_deviceType;
}

void DeviceMaterialInfo::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool DeviceMaterialInfo::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

MaterialInfo DeviceMaterialInfo::GetMaterialInfo() const
{
    return m_materialInfo;
}

void DeviceMaterialInfo::SetMaterialInfo(const MaterialInfo& _materialInfo)
{
    m_materialInfo = _materialInfo;
    m_materialInfoHasBeenSet = true;
}

bool DeviceMaterialInfo::MaterialInfoHasBeenSet() const
{
    return m_materialInfoHasBeenSet;
}

