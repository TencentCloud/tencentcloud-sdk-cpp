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

#include <tencentcloud/wav/v20210129/model/VehiclePurpose.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

VehiclePurpose::VehiclePurpose() :
    m_vehiclePurposeCodeHasBeenSet(false),
    m_vehiclePurposeNameHasBeenSet(false)
{
}

CoreInternalOutcome VehiclePurpose::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VehiclePurposeCode") && !value["VehiclePurposeCode"].IsNull())
    {
        if (!value["VehiclePurposeCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VehiclePurpose.VehiclePurposeCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vehiclePurposeCode = string(value["VehiclePurposeCode"].GetString());
        m_vehiclePurposeCodeHasBeenSet = true;
    }

    if (value.HasMember("VehiclePurposeName") && !value["VehiclePurposeName"].IsNull())
    {
        if (!value["VehiclePurposeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VehiclePurpose.VehiclePurposeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vehiclePurposeName = string(value["VehiclePurposeName"].GetString());
        m_vehiclePurposeNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VehiclePurpose::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vehiclePurposeCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VehiclePurposeCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vehiclePurposeCode.c_str(), allocator).Move(), allocator);
    }

    if (m_vehiclePurposeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VehiclePurposeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vehiclePurposeName.c_str(), allocator).Move(), allocator);
    }

}


string VehiclePurpose::GetVehiclePurposeCode() const
{
    return m_vehiclePurposeCode;
}

void VehiclePurpose::SetVehiclePurposeCode(const string& _vehiclePurposeCode)
{
    m_vehiclePurposeCode = _vehiclePurposeCode;
    m_vehiclePurposeCodeHasBeenSet = true;
}

bool VehiclePurpose::VehiclePurposeCodeHasBeenSet() const
{
    return m_vehiclePurposeCodeHasBeenSet;
}

string VehiclePurpose::GetVehiclePurposeName() const
{
    return m_vehiclePurposeName;
}

void VehiclePurpose::SetVehiclePurposeName(const string& _vehiclePurposeName)
{
    m_vehiclePurposeName = _vehiclePurposeName;
    m_vehiclePurposeNameHasBeenSet = true;
}

bool VehiclePurpose::VehiclePurposeNameHasBeenSet() const
{
    return m_vehiclePurposeNameHasBeenSet;
}

