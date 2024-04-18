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

#include <tencentcloud/cfw/v20190904/model/VpcFwInstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

VpcFwInstanceInfo::VpcFwInstanceInfo() :
    m_fwInsNameHasBeenSet(false),
    m_fwInsIdHasBeenSet(false),
    m_fwModeHasBeenSet(false),
    m_joinInsNumHasBeenSet(false),
    m_fwSwitchNumHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_ccnIdHasBeenSet(false),
    m_ccnNameHasBeenSet(false),
    m_peerConnectionIdHasBeenSet(false),
    m_peerConnectionNameHasBeenSet(false),
    m_fwCvmLstHasBeenSet(false),
    m_joinInsLstHasBeenSet(false),
    m_fwGatewayHasBeenSet(false),
    m_fwGroupIdHasBeenSet(false),
    m_ruleUsedHasBeenSet(false),
    m_ruleMaxHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_userVpcWidthHasBeenSet(false),
    m_joinInsIdLstHasBeenSet(false),
    m_flowMaxHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_updateEnableHasBeenSet(false),
    m_trafficModeHasBeenSet(false),
    m_reserveTimeHasBeenSet(false),
    m_reserveVersionHasBeenSet(false),
    m_reserveVersionStateHasBeenSet(false),
    m_elasticSwitchHasBeenSet(false),
    m_elasticBandwidthHasBeenSet(false),
    m_isFirstAfterPayHasBeenSet(false)
{
}

CoreInternalOutcome VpcFwInstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FwInsName") && !value["FwInsName"].IsNull())
    {
        if (!value["FwInsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.FwInsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwInsName = string(value["FwInsName"].GetString());
        m_fwInsNameHasBeenSet = true;
    }

    if (value.HasMember("FwInsId") && !value["FwInsId"].IsNull())
    {
        if (!value["FwInsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.FwInsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwInsId = string(value["FwInsId"].GetString());
        m_fwInsIdHasBeenSet = true;
    }

    if (value.HasMember("FwMode") && !value["FwMode"].IsNull())
    {
        if (!value["FwMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.FwMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fwMode = value["FwMode"].GetInt64();
        m_fwModeHasBeenSet = true;
    }

    if (value.HasMember("JoinInsNum") && !value["JoinInsNum"].IsNull())
    {
        if (!value["JoinInsNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.JoinInsNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_joinInsNum = value["JoinInsNum"].GetInt64();
        m_joinInsNumHasBeenSet = true;
    }

    if (value.HasMember("FwSwitchNum") && !value["FwSwitchNum"].IsNull())
    {
        if (!value["FwSwitchNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.FwSwitchNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fwSwitchNum = value["FwSwitchNum"].GetInt64();
        m_fwSwitchNumHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("CcnId") && !value["CcnId"].IsNull())
    {
        if (!value["CcnId"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.CcnId` is not array type"));

        const rapidjson::Value &tmpValue = value["CcnId"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ccnId.push_back((*itr).GetString());
        }
        m_ccnIdHasBeenSet = true;
    }

    if (value.HasMember("CcnName") && !value["CcnName"].IsNull())
    {
        if (!value["CcnName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.CcnName` is not array type"));

        const rapidjson::Value &tmpValue = value["CcnName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ccnName.push_back((*itr).GetString());
        }
        m_ccnNameHasBeenSet = true;
    }

    if (value.HasMember("PeerConnectionId") && !value["PeerConnectionId"].IsNull())
    {
        if (!value["PeerConnectionId"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.PeerConnectionId` is not array type"));

        const rapidjson::Value &tmpValue = value["PeerConnectionId"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_peerConnectionId.push_back((*itr).GetString());
        }
        m_peerConnectionIdHasBeenSet = true;
    }

    if (value.HasMember("PeerConnectionName") && !value["PeerConnectionName"].IsNull())
    {
        if (!value["PeerConnectionName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.PeerConnectionName` is not array type"));

        const rapidjson::Value &tmpValue = value["PeerConnectionName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_peerConnectionName.push_back((*itr).GetString());
        }
        m_peerConnectionNameHasBeenSet = true;
    }

    if (value.HasMember("FwCvmLst") && !value["FwCvmLst"].IsNull())
    {
        if (!value["FwCvmLst"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.FwCvmLst` is not array type"));

        const rapidjson::Value &tmpValue = value["FwCvmLst"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VpcFwCvmInsInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fwCvmLst.push_back(item);
        }
        m_fwCvmLstHasBeenSet = true;
    }

    if (value.HasMember("JoinInsLst") && !value["JoinInsLst"].IsNull())
    {
        if (!value["JoinInsLst"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.JoinInsLst` is not array type"));

        const rapidjson::Value &tmpValue = value["JoinInsLst"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VpcFwJoinInstanceType item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_joinInsLst.push_back(item);
        }
        m_joinInsLstHasBeenSet = true;
    }

    if (value.HasMember("FwGateway") && !value["FwGateway"].IsNull())
    {
        if (!value["FwGateway"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.FwGateway` is not array type"));

        const rapidjson::Value &tmpValue = value["FwGateway"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FwGateway item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fwGateway.push_back(item);
        }
        m_fwGatewayHasBeenSet = true;
    }

    if (value.HasMember("FwGroupId") && !value["FwGroupId"].IsNull())
    {
        if (!value["FwGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.FwGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwGroupId = string(value["FwGroupId"].GetString());
        m_fwGroupIdHasBeenSet = true;
    }

    if (value.HasMember("RuleUsed") && !value["RuleUsed"].IsNull())
    {
        if (!value["RuleUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.RuleUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleUsed = value["RuleUsed"].GetInt64();
        m_ruleUsedHasBeenSet = true;
    }

    if (value.HasMember("RuleMax") && !value["RuleMax"].IsNull())
    {
        if (!value["RuleMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.RuleMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleMax = value["RuleMax"].GetInt64();
        m_ruleMaxHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("UserVpcWidth") && !value["UserVpcWidth"].IsNull())
    {
        if (!value["UserVpcWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.UserVpcWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userVpcWidth = value["UserVpcWidth"].GetInt64();
        m_userVpcWidthHasBeenSet = true;
    }

    if (value.HasMember("JoinInsIdLst") && !value["JoinInsIdLst"].IsNull())
    {
        if (!value["JoinInsIdLst"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.JoinInsIdLst` is not array type"));

        const rapidjson::Value &tmpValue = value["JoinInsIdLst"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_joinInsIdLst.push_back((*itr).GetString());
        }
        m_joinInsIdLstHasBeenSet = true;
    }

    if (value.HasMember("FlowMax") && !value["FlowMax"].IsNull())
    {
        if (!value["FlowMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.FlowMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowMax = value["FlowMax"].GetInt64();
        m_flowMaxHasBeenSet = true;
    }

    if (value.HasMember("EngineVersion") && !value["EngineVersion"].IsNull())
    {
        if (!value["EngineVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.EngineVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineVersion = string(value["EngineVersion"].GetString());
        m_engineVersionHasBeenSet = true;
    }

    if (value.HasMember("UpdateEnable") && !value["UpdateEnable"].IsNull())
    {
        if (!value["UpdateEnable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.UpdateEnable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateEnable = value["UpdateEnable"].GetInt64();
        m_updateEnableHasBeenSet = true;
    }

    if (value.HasMember("TrafficMode") && !value["TrafficMode"].IsNull())
    {
        if (!value["TrafficMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.TrafficMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trafficMode = string(value["TrafficMode"].GetString());
        m_trafficModeHasBeenSet = true;
    }

    if (value.HasMember("ReserveTime") && !value["ReserveTime"].IsNull())
    {
        if (!value["ReserveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.ReserveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reserveTime = string(value["ReserveTime"].GetString());
        m_reserveTimeHasBeenSet = true;
    }

    if (value.HasMember("ReserveVersion") && !value["ReserveVersion"].IsNull())
    {
        if (!value["ReserveVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.ReserveVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reserveVersion = string(value["ReserveVersion"].GetString());
        m_reserveVersionHasBeenSet = true;
    }

    if (value.HasMember("ReserveVersionState") && !value["ReserveVersionState"].IsNull())
    {
        if (!value["ReserveVersionState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.ReserveVersionState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reserveVersionState = string(value["ReserveVersionState"].GetString());
        m_reserveVersionStateHasBeenSet = true;
    }

    if (value.HasMember("ElasticSwitch") && !value["ElasticSwitch"].IsNull())
    {
        if (!value["ElasticSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.ElasticSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_elasticSwitch = value["ElasticSwitch"].GetInt64();
        m_elasticSwitchHasBeenSet = true;
    }

    if (value.HasMember("ElasticBandwidth") && !value["ElasticBandwidth"].IsNull())
    {
        if (!value["ElasticBandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.ElasticBandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_elasticBandwidth = value["ElasticBandwidth"].GetInt64();
        m_elasticBandwidthHasBeenSet = true;
    }

    if (value.HasMember("IsFirstAfterPay") && !value["IsFirstAfterPay"].IsNull())
    {
        if (!value["IsFirstAfterPay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstanceInfo.IsFirstAfterPay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isFirstAfterPay = value["IsFirstAfterPay"].GetInt64();
        m_isFirstAfterPayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcFwInstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fwInsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwInsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwInsName.c_str(), allocator).Move(), allocator);
    }

    if (m_fwInsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwInsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwInsId.c_str(), allocator).Move(), allocator);
    }

    if (m_fwModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fwMode, allocator);
    }

    if (m_joinInsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JoinInsNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_joinInsNum, allocator);
    }

    if (m_fwSwitchNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwSwitchNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fwSwitchNum, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ccnId.begin(); itr != m_ccnId.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ccnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ccnName.begin(); itr != m_ccnName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_peerConnectionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerConnectionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_peerConnectionId.begin(); itr != m_peerConnectionId.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_peerConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerConnectionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_peerConnectionName.begin(); itr != m_peerConnectionName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fwCvmLstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwCvmLst";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fwCvmLst.begin(); itr != m_fwCvmLst.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_joinInsLstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JoinInsLst";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_joinInsLst.begin(); itr != m_joinInsLst.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_fwGatewayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwGateway";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fwGateway.begin(); itr != m_fwGateway.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_fwGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleUsed, allocator);
    }

    if (m_ruleMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleMax, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_userVpcWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserVpcWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userVpcWidth, allocator);
    }

    if (m_joinInsIdLstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JoinInsIdLst";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_joinInsIdLst.begin(); itr != m_joinInsIdLst.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_flowMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowMax, allocator);
    }

    if (m_engineVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_updateEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateEnable, allocator);
    }

    if (m_trafficModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trafficMode.c_str(), allocator).Move(), allocator);
    }

    if (m_reserveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReserveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reserveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_reserveVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReserveVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reserveVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_reserveVersionStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReserveVersionState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reserveVersionState.c_str(), allocator).Move(), allocator);
    }

    if (m_elasticSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elasticSwitch, allocator);
    }

    if (m_elasticBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elasticBandwidth, allocator);
    }

    if (m_isFirstAfterPayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFirstAfterPay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFirstAfterPay, allocator);
    }

}


string VpcFwInstanceInfo::GetFwInsName() const
{
    return m_fwInsName;
}

void VpcFwInstanceInfo::SetFwInsName(const string& _fwInsName)
{
    m_fwInsName = _fwInsName;
    m_fwInsNameHasBeenSet = true;
}

bool VpcFwInstanceInfo::FwInsNameHasBeenSet() const
{
    return m_fwInsNameHasBeenSet;
}

string VpcFwInstanceInfo::GetFwInsId() const
{
    return m_fwInsId;
}

void VpcFwInstanceInfo::SetFwInsId(const string& _fwInsId)
{
    m_fwInsId = _fwInsId;
    m_fwInsIdHasBeenSet = true;
}

bool VpcFwInstanceInfo::FwInsIdHasBeenSet() const
{
    return m_fwInsIdHasBeenSet;
}

int64_t VpcFwInstanceInfo::GetFwMode() const
{
    return m_fwMode;
}

void VpcFwInstanceInfo::SetFwMode(const int64_t& _fwMode)
{
    m_fwMode = _fwMode;
    m_fwModeHasBeenSet = true;
}

bool VpcFwInstanceInfo::FwModeHasBeenSet() const
{
    return m_fwModeHasBeenSet;
}

int64_t VpcFwInstanceInfo::GetJoinInsNum() const
{
    return m_joinInsNum;
}

void VpcFwInstanceInfo::SetJoinInsNum(const int64_t& _joinInsNum)
{
    m_joinInsNum = _joinInsNum;
    m_joinInsNumHasBeenSet = true;
}

bool VpcFwInstanceInfo::JoinInsNumHasBeenSet() const
{
    return m_joinInsNumHasBeenSet;
}

int64_t VpcFwInstanceInfo::GetFwSwitchNum() const
{
    return m_fwSwitchNum;
}

void VpcFwInstanceInfo::SetFwSwitchNum(const int64_t& _fwSwitchNum)
{
    m_fwSwitchNum = _fwSwitchNum;
    m_fwSwitchNumHasBeenSet = true;
}

bool VpcFwInstanceInfo::FwSwitchNumHasBeenSet() const
{
    return m_fwSwitchNumHasBeenSet;
}

int64_t VpcFwInstanceInfo::GetStatus() const
{
    return m_status;
}

void VpcFwInstanceInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VpcFwInstanceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string VpcFwInstanceInfo::GetTime() const
{
    return m_time;
}

void VpcFwInstanceInfo::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool VpcFwInstanceInfo::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

vector<string> VpcFwInstanceInfo::GetCcnId() const
{
    return m_ccnId;
}

void VpcFwInstanceInfo::SetCcnId(const vector<string>& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool VpcFwInstanceInfo::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

vector<string> VpcFwInstanceInfo::GetCcnName() const
{
    return m_ccnName;
}

void VpcFwInstanceInfo::SetCcnName(const vector<string>& _ccnName)
{
    m_ccnName = _ccnName;
    m_ccnNameHasBeenSet = true;
}

bool VpcFwInstanceInfo::CcnNameHasBeenSet() const
{
    return m_ccnNameHasBeenSet;
}

vector<string> VpcFwInstanceInfo::GetPeerConnectionId() const
{
    return m_peerConnectionId;
}

void VpcFwInstanceInfo::SetPeerConnectionId(const vector<string>& _peerConnectionId)
{
    m_peerConnectionId = _peerConnectionId;
    m_peerConnectionIdHasBeenSet = true;
}

bool VpcFwInstanceInfo::PeerConnectionIdHasBeenSet() const
{
    return m_peerConnectionIdHasBeenSet;
}

vector<string> VpcFwInstanceInfo::GetPeerConnectionName() const
{
    return m_peerConnectionName;
}

void VpcFwInstanceInfo::SetPeerConnectionName(const vector<string>& _peerConnectionName)
{
    m_peerConnectionName = _peerConnectionName;
    m_peerConnectionNameHasBeenSet = true;
}

bool VpcFwInstanceInfo::PeerConnectionNameHasBeenSet() const
{
    return m_peerConnectionNameHasBeenSet;
}

vector<VpcFwCvmInsInfo> VpcFwInstanceInfo::GetFwCvmLst() const
{
    return m_fwCvmLst;
}

void VpcFwInstanceInfo::SetFwCvmLst(const vector<VpcFwCvmInsInfo>& _fwCvmLst)
{
    m_fwCvmLst = _fwCvmLst;
    m_fwCvmLstHasBeenSet = true;
}

bool VpcFwInstanceInfo::FwCvmLstHasBeenSet() const
{
    return m_fwCvmLstHasBeenSet;
}

vector<VpcFwJoinInstanceType> VpcFwInstanceInfo::GetJoinInsLst() const
{
    return m_joinInsLst;
}

void VpcFwInstanceInfo::SetJoinInsLst(const vector<VpcFwJoinInstanceType>& _joinInsLst)
{
    m_joinInsLst = _joinInsLst;
    m_joinInsLstHasBeenSet = true;
}

bool VpcFwInstanceInfo::JoinInsLstHasBeenSet() const
{
    return m_joinInsLstHasBeenSet;
}

vector<FwGateway> VpcFwInstanceInfo::GetFwGateway() const
{
    return m_fwGateway;
}

void VpcFwInstanceInfo::SetFwGateway(const vector<FwGateway>& _fwGateway)
{
    m_fwGateway = _fwGateway;
    m_fwGatewayHasBeenSet = true;
}

bool VpcFwInstanceInfo::FwGatewayHasBeenSet() const
{
    return m_fwGatewayHasBeenSet;
}

string VpcFwInstanceInfo::GetFwGroupId() const
{
    return m_fwGroupId;
}

void VpcFwInstanceInfo::SetFwGroupId(const string& _fwGroupId)
{
    m_fwGroupId = _fwGroupId;
    m_fwGroupIdHasBeenSet = true;
}

bool VpcFwInstanceInfo::FwGroupIdHasBeenSet() const
{
    return m_fwGroupIdHasBeenSet;
}

int64_t VpcFwInstanceInfo::GetRuleUsed() const
{
    return m_ruleUsed;
}

void VpcFwInstanceInfo::SetRuleUsed(const int64_t& _ruleUsed)
{
    m_ruleUsed = _ruleUsed;
    m_ruleUsedHasBeenSet = true;
}

bool VpcFwInstanceInfo::RuleUsedHasBeenSet() const
{
    return m_ruleUsedHasBeenSet;
}

int64_t VpcFwInstanceInfo::GetRuleMax() const
{
    return m_ruleMax;
}

void VpcFwInstanceInfo::SetRuleMax(const int64_t& _ruleMax)
{
    m_ruleMax = _ruleMax;
    m_ruleMaxHasBeenSet = true;
}

bool VpcFwInstanceInfo::RuleMaxHasBeenSet() const
{
    return m_ruleMaxHasBeenSet;
}

int64_t VpcFwInstanceInfo::GetWidth() const
{
    return m_width;
}

void VpcFwInstanceInfo::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool VpcFwInstanceInfo::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t VpcFwInstanceInfo::GetUserVpcWidth() const
{
    return m_userVpcWidth;
}

void VpcFwInstanceInfo::SetUserVpcWidth(const int64_t& _userVpcWidth)
{
    m_userVpcWidth = _userVpcWidth;
    m_userVpcWidthHasBeenSet = true;
}

bool VpcFwInstanceInfo::UserVpcWidthHasBeenSet() const
{
    return m_userVpcWidthHasBeenSet;
}

vector<string> VpcFwInstanceInfo::GetJoinInsIdLst() const
{
    return m_joinInsIdLst;
}

void VpcFwInstanceInfo::SetJoinInsIdLst(const vector<string>& _joinInsIdLst)
{
    m_joinInsIdLst = _joinInsIdLst;
    m_joinInsIdLstHasBeenSet = true;
}

bool VpcFwInstanceInfo::JoinInsIdLstHasBeenSet() const
{
    return m_joinInsIdLstHasBeenSet;
}

int64_t VpcFwInstanceInfo::GetFlowMax() const
{
    return m_flowMax;
}

void VpcFwInstanceInfo::SetFlowMax(const int64_t& _flowMax)
{
    m_flowMax = _flowMax;
    m_flowMaxHasBeenSet = true;
}

bool VpcFwInstanceInfo::FlowMaxHasBeenSet() const
{
    return m_flowMaxHasBeenSet;
}

string VpcFwInstanceInfo::GetEngineVersion() const
{
    return m_engineVersion;
}

void VpcFwInstanceInfo::SetEngineVersion(const string& _engineVersion)
{
    m_engineVersion = _engineVersion;
    m_engineVersionHasBeenSet = true;
}

bool VpcFwInstanceInfo::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

int64_t VpcFwInstanceInfo::GetUpdateEnable() const
{
    return m_updateEnable;
}

void VpcFwInstanceInfo::SetUpdateEnable(const int64_t& _updateEnable)
{
    m_updateEnable = _updateEnable;
    m_updateEnableHasBeenSet = true;
}

bool VpcFwInstanceInfo::UpdateEnableHasBeenSet() const
{
    return m_updateEnableHasBeenSet;
}

string VpcFwInstanceInfo::GetTrafficMode() const
{
    return m_trafficMode;
}

void VpcFwInstanceInfo::SetTrafficMode(const string& _trafficMode)
{
    m_trafficMode = _trafficMode;
    m_trafficModeHasBeenSet = true;
}

bool VpcFwInstanceInfo::TrafficModeHasBeenSet() const
{
    return m_trafficModeHasBeenSet;
}

string VpcFwInstanceInfo::GetReserveTime() const
{
    return m_reserveTime;
}

void VpcFwInstanceInfo::SetReserveTime(const string& _reserveTime)
{
    m_reserveTime = _reserveTime;
    m_reserveTimeHasBeenSet = true;
}

bool VpcFwInstanceInfo::ReserveTimeHasBeenSet() const
{
    return m_reserveTimeHasBeenSet;
}

string VpcFwInstanceInfo::GetReserveVersion() const
{
    return m_reserveVersion;
}

void VpcFwInstanceInfo::SetReserveVersion(const string& _reserveVersion)
{
    m_reserveVersion = _reserveVersion;
    m_reserveVersionHasBeenSet = true;
}

bool VpcFwInstanceInfo::ReserveVersionHasBeenSet() const
{
    return m_reserveVersionHasBeenSet;
}

string VpcFwInstanceInfo::GetReserveVersionState() const
{
    return m_reserveVersionState;
}

void VpcFwInstanceInfo::SetReserveVersionState(const string& _reserveVersionState)
{
    m_reserveVersionState = _reserveVersionState;
    m_reserveVersionStateHasBeenSet = true;
}

bool VpcFwInstanceInfo::ReserveVersionStateHasBeenSet() const
{
    return m_reserveVersionStateHasBeenSet;
}

int64_t VpcFwInstanceInfo::GetElasticSwitch() const
{
    return m_elasticSwitch;
}

void VpcFwInstanceInfo::SetElasticSwitch(const int64_t& _elasticSwitch)
{
    m_elasticSwitch = _elasticSwitch;
    m_elasticSwitchHasBeenSet = true;
}

bool VpcFwInstanceInfo::ElasticSwitchHasBeenSet() const
{
    return m_elasticSwitchHasBeenSet;
}

int64_t VpcFwInstanceInfo::GetElasticBandwidth() const
{
    return m_elasticBandwidth;
}

void VpcFwInstanceInfo::SetElasticBandwidth(const int64_t& _elasticBandwidth)
{
    m_elasticBandwidth = _elasticBandwidth;
    m_elasticBandwidthHasBeenSet = true;
}

bool VpcFwInstanceInfo::ElasticBandwidthHasBeenSet() const
{
    return m_elasticBandwidthHasBeenSet;
}

int64_t VpcFwInstanceInfo::GetIsFirstAfterPay() const
{
    return m_isFirstAfterPay;
}

void VpcFwInstanceInfo::SetIsFirstAfterPay(const int64_t& _isFirstAfterPay)
{
    m_isFirstAfterPay = _isFirstAfterPay;
    m_isFirstAfterPayHasBeenSet = true;
}

bool VpcFwInstanceInfo::IsFirstAfterPayHasBeenSet() const
{
    return m_isFirstAfterPayHasBeenSet;
}

