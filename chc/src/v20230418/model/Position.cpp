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

#include <tencentcloud/chc/v20230418/model/Position.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

Position::Position() :
    m_positionIdHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_positionCodeHasBeenSet(false),
    m_positionStatusHasBeenSet(false),
    m_planDeviceTypeHasBeenSet(false),
    m_idcUnitIdHasBeenSet(false),
    m_rackIdHasBeenSet(false),
    m_rackNameHasBeenSet(false),
    m_idcUnitNameHasBeenSet(false),
    m_idcNameHasBeenSet(false),
    m_idcIdHasBeenSet(false),
    m_snHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_modelVersionHasBeenSet(false)
{
}

CoreInternalOutcome Position::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PositionId") && !value["PositionId"].IsNull())
    {
        if (!value["PositionId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Position.PositionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_positionId = value["PositionId"].GetUint64();
        m_positionIdHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Position.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("PositionCode") && !value["PositionCode"].IsNull())
    {
        if (!value["PositionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Position.PositionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_positionCode = string(value["PositionCode"].GetString());
        m_positionCodeHasBeenSet = true;
    }

    if (value.HasMember("PositionStatus") && !value["PositionStatus"].IsNull())
    {
        if (!value["PositionStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Position.PositionStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_positionStatus = value["PositionStatus"].GetUint64();
        m_positionStatusHasBeenSet = true;
    }

    if (value.HasMember("PlanDeviceType") && !value["PlanDeviceType"].IsNull())
    {
        if (!value["PlanDeviceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Position.PlanDeviceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_planDeviceType = value["PlanDeviceType"].GetInt64();
        m_planDeviceTypeHasBeenSet = true;
    }

    if (value.HasMember("IdcUnitId") && !value["IdcUnitId"].IsNull())
    {
        if (!value["IdcUnitId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Position.IdcUnitId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_idcUnitId = value["IdcUnitId"].GetUint64();
        m_idcUnitIdHasBeenSet = true;
    }

    if (value.HasMember("RackId") && !value["RackId"].IsNull())
    {
        if (!value["RackId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Position.RackId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rackId = value["RackId"].GetUint64();
        m_rackIdHasBeenSet = true;
    }

    if (value.HasMember("RackName") && !value["RackName"].IsNull())
    {
        if (!value["RackName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Position.RackName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rackName = string(value["RackName"].GetString());
        m_rackNameHasBeenSet = true;
    }

    if (value.HasMember("IdcUnitName") && !value["IdcUnitName"].IsNull())
    {
        if (!value["IdcUnitName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Position.IdcUnitName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idcUnitName = string(value["IdcUnitName"].GetString());
        m_idcUnitNameHasBeenSet = true;
    }

    if (value.HasMember("IdcName") && !value["IdcName"].IsNull())
    {
        if (!value["IdcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Position.IdcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idcName = string(value["IdcName"].GetString());
        m_idcNameHasBeenSet = true;
    }

    if (value.HasMember("IdcId") && !value["IdcId"].IsNull())
    {
        if (!value["IdcId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Position.IdcId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_idcId = value["IdcId"].GetUint64();
        m_idcIdHasBeenSet = true;
    }

    if (value.HasMember("Sn") && !value["Sn"].IsNull())
    {
        if (!value["Sn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Position.Sn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sn = string(value["Sn"].GetString());
        m_snHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Position.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("ModelVersion") && !value["ModelVersion"].IsNull())
    {
        if (!value["ModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Position.ModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelVersion = string(value["ModelVersion"].GetString());
        m_modelVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Position::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_positionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PositionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_positionId, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_positionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PositionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_positionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_positionStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PositionStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_positionStatus, allocator);
    }

    if (m_planDeviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanDeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_planDeviceType, allocator);
    }

    if (m_idcUnitIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcUnitId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idcUnitId, allocator);
    }

    if (m_rackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RackId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rackId, allocator);
    }

    if (m_rackNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RackName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rackName.c_str(), allocator).Move(), allocator);
    }

    if (m_idcUnitNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcUnitName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idcUnitName.c_str(), allocator).Move(), allocator);
    }

    if (m_idcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idcName.c_str(), allocator).Move(), allocator);
    }

    if (m_idcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idcId, allocator);
    }

    if (m_snHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sn.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelVersion.c_str(), allocator).Move(), allocator);
    }

}


uint64_t Position::GetPositionId() const
{
    return m_positionId;
}

void Position::SetPositionId(const uint64_t& _positionId)
{
    m_positionId = _positionId;
    m_positionIdHasBeenSet = true;
}

bool Position::PositionIdHasBeenSet() const
{
    return m_positionIdHasBeenSet;
}

uint64_t Position::GetHeight() const
{
    return m_height;
}

void Position::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool Position::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string Position::GetPositionCode() const
{
    return m_positionCode;
}

void Position::SetPositionCode(const string& _positionCode)
{
    m_positionCode = _positionCode;
    m_positionCodeHasBeenSet = true;
}

bool Position::PositionCodeHasBeenSet() const
{
    return m_positionCodeHasBeenSet;
}

uint64_t Position::GetPositionStatus() const
{
    return m_positionStatus;
}

void Position::SetPositionStatus(const uint64_t& _positionStatus)
{
    m_positionStatus = _positionStatus;
    m_positionStatusHasBeenSet = true;
}

bool Position::PositionStatusHasBeenSet() const
{
    return m_positionStatusHasBeenSet;
}

int64_t Position::GetPlanDeviceType() const
{
    return m_planDeviceType;
}

void Position::SetPlanDeviceType(const int64_t& _planDeviceType)
{
    m_planDeviceType = _planDeviceType;
    m_planDeviceTypeHasBeenSet = true;
}

bool Position::PlanDeviceTypeHasBeenSet() const
{
    return m_planDeviceTypeHasBeenSet;
}

uint64_t Position::GetIdcUnitId() const
{
    return m_idcUnitId;
}

void Position::SetIdcUnitId(const uint64_t& _idcUnitId)
{
    m_idcUnitId = _idcUnitId;
    m_idcUnitIdHasBeenSet = true;
}

bool Position::IdcUnitIdHasBeenSet() const
{
    return m_idcUnitIdHasBeenSet;
}

uint64_t Position::GetRackId() const
{
    return m_rackId;
}

void Position::SetRackId(const uint64_t& _rackId)
{
    m_rackId = _rackId;
    m_rackIdHasBeenSet = true;
}

bool Position::RackIdHasBeenSet() const
{
    return m_rackIdHasBeenSet;
}

string Position::GetRackName() const
{
    return m_rackName;
}

void Position::SetRackName(const string& _rackName)
{
    m_rackName = _rackName;
    m_rackNameHasBeenSet = true;
}

bool Position::RackNameHasBeenSet() const
{
    return m_rackNameHasBeenSet;
}

string Position::GetIdcUnitName() const
{
    return m_idcUnitName;
}

void Position::SetIdcUnitName(const string& _idcUnitName)
{
    m_idcUnitName = _idcUnitName;
    m_idcUnitNameHasBeenSet = true;
}

bool Position::IdcUnitNameHasBeenSet() const
{
    return m_idcUnitNameHasBeenSet;
}

string Position::GetIdcName() const
{
    return m_idcName;
}

void Position::SetIdcName(const string& _idcName)
{
    m_idcName = _idcName;
    m_idcNameHasBeenSet = true;
}

bool Position::IdcNameHasBeenSet() const
{
    return m_idcNameHasBeenSet;
}

uint64_t Position::GetIdcId() const
{
    return m_idcId;
}

void Position::SetIdcId(const uint64_t& _idcId)
{
    m_idcId = _idcId;
    m_idcIdHasBeenSet = true;
}

bool Position::IdcIdHasBeenSet() const
{
    return m_idcIdHasBeenSet;
}

string Position::GetSn() const
{
    return m_sn;
}

void Position::SetSn(const string& _sn)
{
    m_sn = _sn;
    m_snHasBeenSet = true;
}

bool Position::SnHasBeenSet() const
{
    return m_snHasBeenSet;
}

string Position::GetAssetId() const
{
    return m_assetId;
}

void Position::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool Position::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string Position::GetModelVersion() const
{
    return m_modelVersion;
}

void Position::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool Position::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

