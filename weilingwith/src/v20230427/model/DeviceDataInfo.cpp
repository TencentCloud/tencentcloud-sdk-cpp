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

#include <tencentcloud/weilingwith/v20230427/model/DeviceDataInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DeviceDataInfo::DeviceDataInfo() :
    m_wIDHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_deviceTypeCodeHasBeenSet(false),
    m_deviceTypeNameHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_productAbilityHasBeenSet(false),
    m_spaceInfoSetHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_deviceTagSetHasBeenSet(false),
    m_isActiveHasBeenSet(false),
    m_activeTimeHasBeenSet(false),
    m_isLiveHasBeenSet(false),
    m_parentWIDHasBeenSet(false),
    m_parentWIDNameHasBeenSet(false),
    m_sNHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_fieldListHasBeenSet(false),
    m_groupInfoHasBeenSet(false),
    m_deviceStatusHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome DeviceDataInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WID") && !value["WID"].IsNull())
    {
        if (!value["WID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDataInfo.WID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wID = string(value["WID"].GetString());
        m_wIDHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDataInfo.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("DeviceTypeCode") && !value["DeviceTypeCode"].IsNull())
    {
        if (!value["DeviceTypeCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDataInfo.DeviceTypeCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceTypeCode = string(value["DeviceTypeCode"].GetString());
        m_deviceTypeCodeHasBeenSet = true;
    }

    if (value.HasMember("DeviceTypeName") && !value["DeviceTypeName"].IsNull())
    {
        if (!value["DeviceTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDataInfo.DeviceTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceTypeName = string(value["DeviceTypeName"].GetString());
        m_deviceTypeNameHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDataInfo.ProductId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_productId = value["ProductId"].GetInt64();
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDataInfo.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("ProductAbility") && !value["ProductAbility"].IsNull())
    {
        if (!value["ProductAbility"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDataInfo.ProductAbility` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_productAbility = value["ProductAbility"].GetInt64();
        m_productAbilityHasBeenSet = true;
    }

    if (value.HasMember("SpaceInfoSet") && !value["SpaceInfoSet"].IsNull())
    {
        if (!value["SpaceInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceDataInfo.SpaceInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SpaceInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceSpaceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_spaceInfoSet.push_back(item);
        }
        m_spaceInfoSetHasBeenSet = true;
    }

    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDataInfo.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDataInfo.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("DeviceTagSet") && !value["DeviceTagSet"].IsNull())
    {
        if (!value["DeviceTagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceDataInfo.DeviceTagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["DeviceTagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_deviceTagSet.push_back((*itr).GetString());
        }
        m_deviceTagSetHasBeenSet = true;
    }

    if (value.HasMember("IsActive") && !value["IsActive"].IsNull())
    {
        if (!value["IsActive"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDataInfo.IsActive` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isActive = value["IsActive"].GetInt64();
        m_isActiveHasBeenSet = true;
    }

    if (value.HasMember("ActiveTime") && !value["ActiveTime"].IsNull())
    {
        if (!value["ActiveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDataInfo.ActiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activeTime = string(value["ActiveTime"].GetString());
        m_activeTimeHasBeenSet = true;
    }

    if (value.HasMember("IsLive") && !value["IsLive"].IsNull())
    {
        if (!value["IsLive"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDataInfo.IsLive` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLive = value["IsLive"].GetBool();
        m_isLiveHasBeenSet = true;
    }

    if (value.HasMember("ParentWID") && !value["ParentWID"].IsNull())
    {
        if (!value["ParentWID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDataInfo.ParentWID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentWID = string(value["ParentWID"].GetString());
        m_parentWIDHasBeenSet = true;
    }

    if (value.HasMember("ParentWIDName") && !value["ParentWIDName"].IsNull())
    {
        if (!value["ParentWIDName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDataInfo.ParentWIDName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentWIDName = string(value["ParentWIDName"].GetString());
        m_parentWIDNameHasBeenSet = true;
    }

    if (value.HasMember("SN") && !value["SN"].IsNull())
    {
        if (!value["SN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDataInfo.SN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sN = string(value["SN"].GetString());
        m_sNHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDataInfo.Location` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_location.Deserialize(value["Location"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_locationHasBeenSet = true;
    }

    if (value.HasMember("FieldList") && !value["FieldList"].IsNull())
    {
        if (!value["FieldList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceDataInfo.FieldList` is not array type"));

        const rapidjson::Value &tmpValue = value["FieldList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CustomFieldInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fieldList.push_back(item);
        }
        m_fieldListHasBeenSet = true;
    }

    if (value.HasMember("GroupInfo") && !value["GroupInfo"].IsNull())
    {
        if (!value["GroupInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDataInfo.GroupInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupInfo = string(value["GroupInfo"].GetString());
        m_groupInfoHasBeenSet = true;
    }

    if (value.HasMember("DeviceStatus") && !value["DeviceStatus"].IsNull())
    {
        if (!value["DeviceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDataInfo.DeviceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceStatus = string(value["DeviceStatus"].GetString());
        m_deviceStatusHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDataInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceDataInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wID.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceTypeCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceTypeCode.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_productId, allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_productAbilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductAbility";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_productAbility, allocator);
    }

    if (m_spaceInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_spaceInfoSet.begin(); itr != m_spaceInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceTagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deviceTagSet.begin(); itr != m_deviceTagSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isActiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsActive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isActive, allocator);
    }

    if (m_activeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isLiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLive, allocator);
    }

    if (m_parentWIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentWID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentWID.c_str(), allocator).Move(), allocator);
    }

    if (m_parentWIDNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentWIDName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentWIDName.c_str(), allocator).Move(), allocator);
    }

    if (m_sNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sN.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_location.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fieldListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fieldList.begin(); itr != m_fieldList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_groupInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string DeviceDataInfo::GetWID() const
{
    return m_wID;
}

void DeviceDataInfo::SetWID(const string& _wID)
{
    m_wID = _wID;
    m_wIDHasBeenSet = true;
}

bool DeviceDataInfo::WIDHasBeenSet() const
{
    return m_wIDHasBeenSet;
}

string DeviceDataInfo::GetDeviceName() const
{
    return m_deviceName;
}

void DeviceDataInfo::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DeviceDataInfo::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string DeviceDataInfo::GetDeviceTypeCode() const
{
    return m_deviceTypeCode;
}

void DeviceDataInfo::SetDeviceTypeCode(const string& _deviceTypeCode)
{
    m_deviceTypeCode = _deviceTypeCode;
    m_deviceTypeCodeHasBeenSet = true;
}

bool DeviceDataInfo::DeviceTypeCodeHasBeenSet() const
{
    return m_deviceTypeCodeHasBeenSet;
}

string DeviceDataInfo::GetDeviceTypeName() const
{
    return m_deviceTypeName;
}

void DeviceDataInfo::SetDeviceTypeName(const string& _deviceTypeName)
{
    m_deviceTypeName = _deviceTypeName;
    m_deviceTypeNameHasBeenSet = true;
}

bool DeviceDataInfo::DeviceTypeNameHasBeenSet() const
{
    return m_deviceTypeNameHasBeenSet;
}

int64_t DeviceDataInfo::GetProductId() const
{
    return m_productId;
}

void DeviceDataInfo::SetProductId(const int64_t& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DeviceDataInfo::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DeviceDataInfo::GetProductName() const
{
    return m_productName;
}

void DeviceDataInfo::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool DeviceDataInfo::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

int64_t DeviceDataInfo::GetProductAbility() const
{
    return m_productAbility;
}

void DeviceDataInfo::SetProductAbility(const int64_t& _productAbility)
{
    m_productAbility = _productAbility;
    m_productAbilityHasBeenSet = true;
}

bool DeviceDataInfo::ProductAbilityHasBeenSet() const
{
    return m_productAbilityHasBeenSet;
}

vector<DeviceSpaceInfo> DeviceDataInfo::GetSpaceInfoSet() const
{
    return m_spaceInfoSet;
}

void DeviceDataInfo::SetSpaceInfoSet(const vector<DeviceSpaceInfo>& _spaceInfoSet)
{
    m_spaceInfoSet = _spaceInfoSet;
    m_spaceInfoSetHasBeenSet = true;
}

bool DeviceDataInfo::SpaceInfoSetHasBeenSet() const
{
    return m_spaceInfoSetHasBeenSet;
}

string DeviceDataInfo::GetModelId() const
{
    return m_modelId;
}

void DeviceDataInfo::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool DeviceDataInfo::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string DeviceDataInfo::GetModelName() const
{
    return m_modelName;
}

void DeviceDataInfo::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool DeviceDataInfo::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

vector<string> DeviceDataInfo::GetDeviceTagSet() const
{
    return m_deviceTagSet;
}

void DeviceDataInfo::SetDeviceTagSet(const vector<string>& _deviceTagSet)
{
    m_deviceTagSet = _deviceTagSet;
    m_deviceTagSetHasBeenSet = true;
}

bool DeviceDataInfo::DeviceTagSetHasBeenSet() const
{
    return m_deviceTagSetHasBeenSet;
}

int64_t DeviceDataInfo::GetIsActive() const
{
    return m_isActive;
}

void DeviceDataInfo::SetIsActive(const int64_t& _isActive)
{
    m_isActive = _isActive;
    m_isActiveHasBeenSet = true;
}

bool DeviceDataInfo::IsActiveHasBeenSet() const
{
    return m_isActiveHasBeenSet;
}

string DeviceDataInfo::GetActiveTime() const
{
    return m_activeTime;
}

void DeviceDataInfo::SetActiveTime(const string& _activeTime)
{
    m_activeTime = _activeTime;
    m_activeTimeHasBeenSet = true;
}

bool DeviceDataInfo::ActiveTimeHasBeenSet() const
{
    return m_activeTimeHasBeenSet;
}

bool DeviceDataInfo::GetIsLive() const
{
    return m_isLive;
}

void DeviceDataInfo::SetIsLive(const bool& _isLive)
{
    m_isLive = _isLive;
    m_isLiveHasBeenSet = true;
}

bool DeviceDataInfo::IsLiveHasBeenSet() const
{
    return m_isLiveHasBeenSet;
}

string DeviceDataInfo::GetParentWID() const
{
    return m_parentWID;
}

void DeviceDataInfo::SetParentWID(const string& _parentWID)
{
    m_parentWID = _parentWID;
    m_parentWIDHasBeenSet = true;
}

bool DeviceDataInfo::ParentWIDHasBeenSet() const
{
    return m_parentWIDHasBeenSet;
}

string DeviceDataInfo::GetParentWIDName() const
{
    return m_parentWIDName;
}

void DeviceDataInfo::SetParentWIDName(const string& _parentWIDName)
{
    m_parentWIDName = _parentWIDName;
    m_parentWIDNameHasBeenSet = true;
}

bool DeviceDataInfo::ParentWIDNameHasBeenSet() const
{
    return m_parentWIDNameHasBeenSet;
}

string DeviceDataInfo::GetSN() const
{
    return m_sN;
}

void DeviceDataInfo::SetSN(const string& _sN)
{
    m_sN = _sN;
    m_sNHasBeenSet = true;
}

bool DeviceDataInfo::SNHasBeenSet() const
{
    return m_sNHasBeenSet;
}

DeviceLocation DeviceDataInfo::GetLocation() const
{
    return m_location;
}

void DeviceDataInfo::SetLocation(const DeviceLocation& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool DeviceDataInfo::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

vector<CustomFieldInfo> DeviceDataInfo::GetFieldList() const
{
    return m_fieldList;
}

void DeviceDataInfo::SetFieldList(const vector<CustomFieldInfo>& _fieldList)
{
    m_fieldList = _fieldList;
    m_fieldListHasBeenSet = true;
}

bool DeviceDataInfo::FieldListHasBeenSet() const
{
    return m_fieldListHasBeenSet;
}

string DeviceDataInfo::GetGroupInfo() const
{
    return m_groupInfo;
}

void DeviceDataInfo::SetGroupInfo(const string& _groupInfo)
{
    m_groupInfo = _groupInfo;
    m_groupInfoHasBeenSet = true;
}

bool DeviceDataInfo::GroupInfoHasBeenSet() const
{
    return m_groupInfoHasBeenSet;
}

string DeviceDataInfo::GetDeviceStatus() const
{
    return m_deviceStatus;
}

void DeviceDataInfo::SetDeviceStatus(const string& _deviceStatus)
{
    m_deviceStatus = _deviceStatus;
    m_deviceStatusHasBeenSet = true;
}

bool DeviceDataInfo::DeviceStatusHasBeenSet() const
{
    return m_deviceStatusHasBeenSet;
}

string DeviceDataInfo::GetStatus() const
{
    return m_status;
}

void DeviceDataInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DeviceDataInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

