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

#include <tencentcloud/dc/v20180410/model/DirectConnect.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dc::V20180410::Model;
using namespace std;

DirectConnect::DirectConnect() :
    m_directConnectIdHasBeenSet(false),
    m_directConnectNameHasBeenSet(false),
    m_accessPointIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_enabledTimeHasBeenSet(false),
    m_lineOperatorHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_portTypeHasBeenSet(false),
    m_circuitCodeHasBeenSet(false),
    m_redundantDirectConnectIdHasBeenSet(false),
    m_vlanHasBeenSet(false),
    m_tencentAddressHasBeenSet(false),
    m_customerAddressHasBeenSet(false),
    m_customerNameHasBeenSet(false),
    m_customerContactMailHasBeenSet(false),
    m_customerContactNumberHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_faultReportContactPersonHasBeenSet(false),
    m_faultReportContactNumberHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_accessPointTypeHasBeenSet(false),
    m_idcCityHasBeenSet(false),
    m_chargeStateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_signLawHasBeenSet(false),
    m_localZoneHasBeenSet(false),
    m_vlanZeroDirectConnectTunnelCountHasBeenSet(false),
    m_otherVlanDirectConnectTunnelCountHasBeenSet(false),
    m_minBandwidthHasBeenSet(false),
    m_constructHasBeenSet(false),
    m_accessPointNameHasBeenSet(false),
    m_isThreeArchHasBeenSet(false),
    m_isMacSecHasBeenSet(false),
    m_portSpecificationHasBeenSet(false)
{
}

CoreInternalOutcome DirectConnect::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DirectConnectId") && !value["DirectConnectId"].IsNull())
    {
        if (!value["DirectConnectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.DirectConnectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectId = string(value["DirectConnectId"].GetString());
        m_directConnectIdHasBeenSet = true;
    }

    if (value.HasMember("DirectConnectName") && !value["DirectConnectName"].IsNull())
    {
        if (!value["DirectConnectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.DirectConnectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectName = string(value["DirectConnectName"].GetString());
        m_directConnectNameHasBeenSet = true;
    }

    if (value.HasMember("AccessPointId") && !value["AccessPointId"].IsNull())
    {
        if (!value["AccessPointId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.AccessPointId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessPointId = string(value["AccessPointId"].GetString());
        m_accessPointIdHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("EnabledTime") && !value["EnabledTime"].IsNull())
    {
        if (!value["EnabledTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.EnabledTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enabledTime = string(value["EnabledTime"].GetString());
        m_enabledTimeHasBeenSet = true;
    }

    if (value.HasMember("LineOperator") && !value["LineOperator"].IsNull())
    {
        if (!value["LineOperator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.LineOperator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineOperator = string(value["LineOperator"].GetString());
        m_lineOperatorHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.Bandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetInt64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("PortType") && !value["PortType"].IsNull())
    {
        if (!value["PortType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.PortType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_portType = string(value["PortType"].GetString());
        m_portTypeHasBeenSet = true;
    }

    if (value.HasMember("CircuitCode") && !value["CircuitCode"].IsNull())
    {
        if (!value["CircuitCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.CircuitCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_circuitCode = string(value["CircuitCode"].GetString());
        m_circuitCodeHasBeenSet = true;
    }

    if (value.HasMember("RedundantDirectConnectId") && !value["RedundantDirectConnectId"].IsNull())
    {
        if (!value["RedundantDirectConnectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.RedundantDirectConnectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redundantDirectConnectId = string(value["RedundantDirectConnectId"].GetString());
        m_redundantDirectConnectIdHasBeenSet = true;
    }

    if (value.HasMember("Vlan") && !value["Vlan"].IsNull())
    {
        if (!value["Vlan"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.Vlan` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vlan = value["Vlan"].GetInt64();
        m_vlanHasBeenSet = true;
    }

    if (value.HasMember("TencentAddress") && !value["TencentAddress"].IsNull())
    {
        if (!value["TencentAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.TencentAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tencentAddress = string(value["TencentAddress"].GetString());
        m_tencentAddressHasBeenSet = true;
    }

    if (value.HasMember("CustomerAddress") && !value["CustomerAddress"].IsNull())
    {
        if (!value["CustomerAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.CustomerAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerAddress = string(value["CustomerAddress"].GetString());
        m_customerAddressHasBeenSet = true;
    }

    if (value.HasMember("CustomerName") && !value["CustomerName"].IsNull())
    {
        if (!value["CustomerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.CustomerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerName = string(value["CustomerName"].GetString());
        m_customerNameHasBeenSet = true;
    }

    if (value.HasMember("CustomerContactMail") && !value["CustomerContactMail"].IsNull())
    {
        if (!value["CustomerContactMail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.CustomerContactMail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerContactMail = string(value["CustomerContactMail"].GetString());
        m_customerContactMailHasBeenSet = true;
    }

    if (value.HasMember("CustomerContactNumber") && !value["CustomerContactNumber"].IsNull())
    {
        if (!value["CustomerContactNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.CustomerContactNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerContactNumber = string(value["CustomerContactNumber"].GetString());
        m_customerContactNumberHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("FaultReportContactPerson") && !value["FaultReportContactPerson"].IsNull())
    {
        if (!value["FaultReportContactPerson"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.FaultReportContactPerson` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_faultReportContactPerson = string(value["FaultReportContactPerson"].GetString());
        m_faultReportContactPersonHasBeenSet = true;
    }

    if (value.HasMember("FaultReportContactNumber") && !value["FaultReportContactNumber"].IsNull())
    {
        if (!value["FaultReportContactNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.FaultReportContactNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_faultReportContactNumber = string(value["FaultReportContactNumber"].GetString());
        m_faultReportContactNumberHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DirectConnect.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSet.push_back(item);
        }
        m_tagSetHasBeenSet = true;
    }

    if (value.HasMember("AccessPointType") && !value["AccessPointType"].IsNull())
    {
        if (!value["AccessPointType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.AccessPointType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessPointType = string(value["AccessPointType"].GetString());
        m_accessPointTypeHasBeenSet = true;
    }

    if (value.HasMember("IdcCity") && !value["IdcCity"].IsNull())
    {
        if (!value["IdcCity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.IdcCity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idcCity = string(value["IdcCity"].GetString());
        m_idcCityHasBeenSet = true;
    }

    if (value.HasMember("ChargeState") && !value["ChargeState"].IsNull())
    {
        if (!value["ChargeState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.ChargeState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeState = string(value["ChargeState"].GetString());
        m_chargeStateHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("SignLaw") && !value["SignLaw"].IsNull())
    {
        if (!value["SignLaw"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.SignLaw` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_signLaw = value["SignLaw"].GetBool();
        m_signLawHasBeenSet = true;
    }

    if (value.HasMember("LocalZone") && !value["LocalZone"].IsNull())
    {
        if (!value["LocalZone"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.LocalZone` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_localZone = value["LocalZone"].GetBool();
        m_localZoneHasBeenSet = true;
    }

    if (value.HasMember("VlanZeroDirectConnectTunnelCount") && !value["VlanZeroDirectConnectTunnelCount"].IsNull())
    {
        if (!value["VlanZeroDirectConnectTunnelCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.VlanZeroDirectConnectTunnelCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vlanZeroDirectConnectTunnelCount = value["VlanZeroDirectConnectTunnelCount"].GetUint64();
        m_vlanZeroDirectConnectTunnelCountHasBeenSet = true;
    }

    if (value.HasMember("OtherVlanDirectConnectTunnelCount") && !value["OtherVlanDirectConnectTunnelCount"].IsNull())
    {
        if (!value["OtherVlanDirectConnectTunnelCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.OtherVlanDirectConnectTunnelCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_otherVlanDirectConnectTunnelCount = value["OtherVlanDirectConnectTunnelCount"].GetUint64();
        m_otherVlanDirectConnectTunnelCountHasBeenSet = true;
    }

    if (value.HasMember("MinBandwidth") && !value["MinBandwidth"].IsNull())
    {
        if (!value["MinBandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.MinBandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minBandwidth = value["MinBandwidth"].GetUint64();
        m_minBandwidthHasBeenSet = true;
    }

    if (value.HasMember("Construct") && !value["Construct"].IsNull())
    {
        if (!value["Construct"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.Construct` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_construct = value["Construct"].GetUint64();
        m_constructHasBeenSet = true;
    }

    if (value.HasMember("AccessPointName") && !value["AccessPointName"].IsNull())
    {
        if (!value["AccessPointName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.AccessPointName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessPointName = string(value["AccessPointName"].GetString());
        m_accessPointNameHasBeenSet = true;
    }

    if (value.HasMember("IsThreeArch") && !value["IsThreeArch"].IsNull())
    {
        if (!value["IsThreeArch"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.IsThreeArch` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isThreeArch = value["IsThreeArch"].GetBool();
        m_isThreeArchHasBeenSet = true;
    }

    if (value.HasMember("IsMacSec") && !value["IsMacSec"].IsNull())
    {
        if (!value["IsMacSec"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.IsMacSec` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isMacSec = value["IsMacSec"].GetBool();
        m_isMacSecHasBeenSet = true;
    }

    if (value.HasMember("PortSpecification") && !value["PortSpecification"].IsNull())
    {
        if (!value["PortSpecification"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnect.PortSpecification` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_portSpecification = value["PortSpecification"].GetUint64();
        m_portSpecificationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DirectConnect::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_directConnectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConnectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_directConnectId.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConnectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_directConnectName.c_str(), allocator).Move(), allocator);
    }

    if (m_accessPointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessPointId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessPointId.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnabledTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enabledTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lineOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineOperator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lineOperator.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_portTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_portType.c_str(), allocator).Move(), allocator);
    }

    if (m_circuitCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CircuitCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_circuitCode.c_str(), allocator).Move(), allocator);
    }

    if (m_redundantDirectConnectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedundantDirectConnectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_redundantDirectConnectId.c_str(), allocator).Move(), allocator);
    }

    if (m_vlanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vlan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vlan, allocator);
    }

    if (m_tencentAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TencentAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tencentAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_customerAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_customerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerName.c_str(), allocator).Move(), allocator);
    }

    if (m_customerContactMailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerContactMail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerContactMail.c_str(), allocator).Move(), allocator);
    }

    if (m_customerContactNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerContactNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerContactNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_faultReportContactPersonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaultReportContactPerson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_faultReportContactPerson.c_str(), allocator).Move(), allocator);
    }

    if (m_faultReportContactNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaultReportContactNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_faultReportContactNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_accessPointTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessPointType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessPointType.c_str(), allocator).Move(), allocator);
    }

    if (m_idcCityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcCity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idcCity.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeState.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_signLawHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignLaw";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_signLaw, allocator);
    }

    if (m_localZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_localZone, allocator);
    }

    if (m_vlanZeroDirectConnectTunnelCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VlanZeroDirectConnectTunnelCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vlanZeroDirectConnectTunnelCount, allocator);
    }

    if (m_otherVlanDirectConnectTunnelCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherVlanDirectConnectTunnelCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_otherVlanDirectConnectTunnelCount, allocator);
    }

    if (m_minBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minBandwidth, allocator);
    }

    if (m_constructHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Construct";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_construct, allocator);
    }

    if (m_accessPointNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessPointName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessPointName.c_str(), allocator).Move(), allocator);
    }

    if (m_isThreeArchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsThreeArch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isThreeArch, allocator);
    }

    if (m_isMacSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMacSec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isMacSec, allocator);
    }

    if (m_portSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortSpecification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_portSpecification, allocator);
    }

}


string DirectConnect::GetDirectConnectId() const
{
    return m_directConnectId;
}

void DirectConnect::SetDirectConnectId(const string& _directConnectId)
{
    m_directConnectId = _directConnectId;
    m_directConnectIdHasBeenSet = true;
}

bool DirectConnect::DirectConnectIdHasBeenSet() const
{
    return m_directConnectIdHasBeenSet;
}

string DirectConnect::GetDirectConnectName() const
{
    return m_directConnectName;
}

void DirectConnect::SetDirectConnectName(const string& _directConnectName)
{
    m_directConnectName = _directConnectName;
    m_directConnectNameHasBeenSet = true;
}

bool DirectConnect::DirectConnectNameHasBeenSet() const
{
    return m_directConnectNameHasBeenSet;
}

string DirectConnect::GetAccessPointId() const
{
    return m_accessPointId;
}

void DirectConnect::SetAccessPointId(const string& _accessPointId)
{
    m_accessPointId = _accessPointId;
    m_accessPointIdHasBeenSet = true;
}

bool DirectConnect::AccessPointIdHasBeenSet() const
{
    return m_accessPointIdHasBeenSet;
}

string DirectConnect::GetState() const
{
    return m_state;
}

void DirectConnect::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool DirectConnect::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string DirectConnect::GetCreatedTime() const
{
    return m_createdTime;
}

void DirectConnect::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool DirectConnect::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string DirectConnect::GetEnabledTime() const
{
    return m_enabledTime;
}

void DirectConnect::SetEnabledTime(const string& _enabledTime)
{
    m_enabledTime = _enabledTime;
    m_enabledTimeHasBeenSet = true;
}

bool DirectConnect::EnabledTimeHasBeenSet() const
{
    return m_enabledTimeHasBeenSet;
}

string DirectConnect::GetLineOperator() const
{
    return m_lineOperator;
}

void DirectConnect::SetLineOperator(const string& _lineOperator)
{
    m_lineOperator = _lineOperator;
    m_lineOperatorHasBeenSet = true;
}

bool DirectConnect::LineOperatorHasBeenSet() const
{
    return m_lineOperatorHasBeenSet;
}

string DirectConnect::GetLocation() const
{
    return m_location;
}

void DirectConnect::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool DirectConnect::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

int64_t DirectConnect::GetBandwidth() const
{
    return m_bandwidth;
}

void DirectConnect::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool DirectConnect::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

string DirectConnect::GetPortType() const
{
    return m_portType;
}

void DirectConnect::SetPortType(const string& _portType)
{
    m_portType = _portType;
    m_portTypeHasBeenSet = true;
}

bool DirectConnect::PortTypeHasBeenSet() const
{
    return m_portTypeHasBeenSet;
}

string DirectConnect::GetCircuitCode() const
{
    return m_circuitCode;
}

void DirectConnect::SetCircuitCode(const string& _circuitCode)
{
    m_circuitCode = _circuitCode;
    m_circuitCodeHasBeenSet = true;
}

bool DirectConnect::CircuitCodeHasBeenSet() const
{
    return m_circuitCodeHasBeenSet;
}

string DirectConnect::GetRedundantDirectConnectId() const
{
    return m_redundantDirectConnectId;
}

void DirectConnect::SetRedundantDirectConnectId(const string& _redundantDirectConnectId)
{
    m_redundantDirectConnectId = _redundantDirectConnectId;
    m_redundantDirectConnectIdHasBeenSet = true;
}

bool DirectConnect::RedundantDirectConnectIdHasBeenSet() const
{
    return m_redundantDirectConnectIdHasBeenSet;
}

int64_t DirectConnect::GetVlan() const
{
    return m_vlan;
}

void DirectConnect::SetVlan(const int64_t& _vlan)
{
    m_vlan = _vlan;
    m_vlanHasBeenSet = true;
}

bool DirectConnect::VlanHasBeenSet() const
{
    return m_vlanHasBeenSet;
}

string DirectConnect::GetTencentAddress() const
{
    return m_tencentAddress;
}

void DirectConnect::SetTencentAddress(const string& _tencentAddress)
{
    m_tencentAddress = _tencentAddress;
    m_tencentAddressHasBeenSet = true;
}

bool DirectConnect::TencentAddressHasBeenSet() const
{
    return m_tencentAddressHasBeenSet;
}

string DirectConnect::GetCustomerAddress() const
{
    return m_customerAddress;
}

void DirectConnect::SetCustomerAddress(const string& _customerAddress)
{
    m_customerAddress = _customerAddress;
    m_customerAddressHasBeenSet = true;
}

bool DirectConnect::CustomerAddressHasBeenSet() const
{
    return m_customerAddressHasBeenSet;
}

string DirectConnect::GetCustomerName() const
{
    return m_customerName;
}

void DirectConnect::SetCustomerName(const string& _customerName)
{
    m_customerName = _customerName;
    m_customerNameHasBeenSet = true;
}

bool DirectConnect::CustomerNameHasBeenSet() const
{
    return m_customerNameHasBeenSet;
}

string DirectConnect::GetCustomerContactMail() const
{
    return m_customerContactMail;
}

void DirectConnect::SetCustomerContactMail(const string& _customerContactMail)
{
    m_customerContactMail = _customerContactMail;
    m_customerContactMailHasBeenSet = true;
}

bool DirectConnect::CustomerContactMailHasBeenSet() const
{
    return m_customerContactMailHasBeenSet;
}

string DirectConnect::GetCustomerContactNumber() const
{
    return m_customerContactNumber;
}

void DirectConnect::SetCustomerContactNumber(const string& _customerContactNumber)
{
    m_customerContactNumber = _customerContactNumber;
    m_customerContactNumberHasBeenSet = true;
}

bool DirectConnect::CustomerContactNumberHasBeenSet() const
{
    return m_customerContactNumberHasBeenSet;
}

string DirectConnect::GetExpiredTime() const
{
    return m_expiredTime;
}

void DirectConnect::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool DirectConnect::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

string DirectConnect::GetChargeType() const
{
    return m_chargeType;
}

void DirectConnect::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool DirectConnect::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string DirectConnect::GetFaultReportContactPerson() const
{
    return m_faultReportContactPerson;
}

void DirectConnect::SetFaultReportContactPerson(const string& _faultReportContactPerson)
{
    m_faultReportContactPerson = _faultReportContactPerson;
    m_faultReportContactPersonHasBeenSet = true;
}

bool DirectConnect::FaultReportContactPersonHasBeenSet() const
{
    return m_faultReportContactPersonHasBeenSet;
}

string DirectConnect::GetFaultReportContactNumber() const
{
    return m_faultReportContactNumber;
}

void DirectConnect::SetFaultReportContactNumber(const string& _faultReportContactNumber)
{
    m_faultReportContactNumber = _faultReportContactNumber;
    m_faultReportContactNumberHasBeenSet = true;
}

bool DirectConnect::FaultReportContactNumberHasBeenSet() const
{
    return m_faultReportContactNumberHasBeenSet;
}

vector<Tag> DirectConnect::GetTagSet() const
{
    return m_tagSet;
}

void DirectConnect::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool DirectConnect::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

string DirectConnect::GetAccessPointType() const
{
    return m_accessPointType;
}

void DirectConnect::SetAccessPointType(const string& _accessPointType)
{
    m_accessPointType = _accessPointType;
    m_accessPointTypeHasBeenSet = true;
}

bool DirectConnect::AccessPointTypeHasBeenSet() const
{
    return m_accessPointTypeHasBeenSet;
}

string DirectConnect::GetIdcCity() const
{
    return m_idcCity;
}

void DirectConnect::SetIdcCity(const string& _idcCity)
{
    m_idcCity = _idcCity;
    m_idcCityHasBeenSet = true;
}

bool DirectConnect::IdcCityHasBeenSet() const
{
    return m_idcCityHasBeenSet;
}

string DirectConnect::GetChargeState() const
{
    return m_chargeState;
}

void DirectConnect::SetChargeState(const string& _chargeState)
{
    m_chargeState = _chargeState;
    m_chargeStateHasBeenSet = true;
}

bool DirectConnect::ChargeStateHasBeenSet() const
{
    return m_chargeStateHasBeenSet;
}

string DirectConnect::GetStartTime() const
{
    return m_startTime;
}

void DirectConnect::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DirectConnect::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

bool DirectConnect::GetSignLaw() const
{
    return m_signLaw;
}

void DirectConnect::SetSignLaw(const bool& _signLaw)
{
    m_signLaw = _signLaw;
    m_signLawHasBeenSet = true;
}

bool DirectConnect::SignLawHasBeenSet() const
{
    return m_signLawHasBeenSet;
}

bool DirectConnect::GetLocalZone() const
{
    return m_localZone;
}

void DirectConnect::SetLocalZone(const bool& _localZone)
{
    m_localZone = _localZone;
    m_localZoneHasBeenSet = true;
}

bool DirectConnect::LocalZoneHasBeenSet() const
{
    return m_localZoneHasBeenSet;
}

uint64_t DirectConnect::GetVlanZeroDirectConnectTunnelCount() const
{
    return m_vlanZeroDirectConnectTunnelCount;
}

void DirectConnect::SetVlanZeroDirectConnectTunnelCount(const uint64_t& _vlanZeroDirectConnectTunnelCount)
{
    m_vlanZeroDirectConnectTunnelCount = _vlanZeroDirectConnectTunnelCount;
    m_vlanZeroDirectConnectTunnelCountHasBeenSet = true;
}

bool DirectConnect::VlanZeroDirectConnectTunnelCountHasBeenSet() const
{
    return m_vlanZeroDirectConnectTunnelCountHasBeenSet;
}

uint64_t DirectConnect::GetOtherVlanDirectConnectTunnelCount() const
{
    return m_otherVlanDirectConnectTunnelCount;
}

void DirectConnect::SetOtherVlanDirectConnectTunnelCount(const uint64_t& _otherVlanDirectConnectTunnelCount)
{
    m_otherVlanDirectConnectTunnelCount = _otherVlanDirectConnectTunnelCount;
    m_otherVlanDirectConnectTunnelCountHasBeenSet = true;
}

bool DirectConnect::OtherVlanDirectConnectTunnelCountHasBeenSet() const
{
    return m_otherVlanDirectConnectTunnelCountHasBeenSet;
}

uint64_t DirectConnect::GetMinBandwidth() const
{
    return m_minBandwidth;
}

void DirectConnect::SetMinBandwidth(const uint64_t& _minBandwidth)
{
    m_minBandwidth = _minBandwidth;
    m_minBandwidthHasBeenSet = true;
}

bool DirectConnect::MinBandwidthHasBeenSet() const
{
    return m_minBandwidthHasBeenSet;
}

uint64_t DirectConnect::GetConstruct() const
{
    return m_construct;
}

void DirectConnect::SetConstruct(const uint64_t& _construct)
{
    m_construct = _construct;
    m_constructHasBeenSet = true;
}

bool DirectConnect::ConstructHasBeenSet() const
{
    return m_constructHasBeenSet;
}

string DirectConnect::GetAccessPointName() const
{
    return m_accessPointName;
}

void DirectConnect::SetAccessPointName(const string& _accessPointName)
{
    m_accessPointName = _accessPointName;
    m_accessPointNameHasBeenSet = true;
}

bool DirectConnect::AccessPointNameHasBeenSet() const
{
    return m_accessPointNameHasBeenSet;
}

bool DirectConnect::GetIsThreeArch() const
{
    return m_isThreeArch;
}

void DirectConnect::SetIsThreeArch(const bool& _isThreeArch)
{
    m_isThreeArch = _isThreeArch;
    m_isThreeArchHasBeenSet = true;
}

bool DirectConnect::IsThreeArchHasBeenSet() const
{
    return m_isThreeArchHasBeenSet;
}

bool DirectConnect::GetIsMacSec() const
{
    return m_isMacSec;
}

void DirectConnect::SetIsMacSec(const bool& _isMacSec)
{
    m_isMacSec = _isMacSec;
    m_isMacSecHasBeenSet = true;
}

bool DirectConnect::IsMacSecHasBeenSet() const
{
    return m_isMacSecHasBeenSet;
}

uint64_t DirectConnect::GetPortSpecification() const
{
    return m_portSpecification;
}

void DirectConnect::SetPortSpecification(const uint64_t& _portSpecification)
{
    m_portSpecification = _portSpecification;
    m_portSpecificationHasBeenSet = true;
}

bool DirectConnect::PortSpecificationHasBeenSet() const
{
    return m_portSpecificationHasBeenSet;
}

