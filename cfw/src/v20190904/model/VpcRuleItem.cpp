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

#include <tencentcloud/cfw/v20190904/model/VpcRuleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

VpcRuleItem::VpcRuleItem() :
    m_sourceContentHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_destContentHasBeenSet(false),
    m_destTypeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_portHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_orderIndexHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_edgeIdHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_detectedTimesHasBeenSet(false),
    m_edgeNameHasBeenSet(false),
    m_internalUuidHasBeenSet(false),
    m_deletedHasBeenSet(false),
    m_fwGroupIdHasBeenSet(false),
    m_fwGroupNameHasBeenSet(false),
    m_betaListHasBeenSet(false),
    m_paramTemplateIdHasBeenSet(false),
    m_paramTemplateNameHasBeenSet(false),
    m_targetNameHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_ipVersionHasBeenSet(false),
    m_invalidHasBeenSet(false)
{
}

CoreInternalOutcome VpcRuleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceContent") && !value["SourceContent"].IsNull())
    {
        if (!value["SourceContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcRuleItem.SourceContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceContent = string(value["SourceContent"].GetString());
        m_sourceContentHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcRuleItem.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("DestContent") && !value["DestContent"].IsNull())
    {
        if (!value["DestContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcRuleItem.DestContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destContent = string(value["DestContent"].GetString());
        m_destContentHasBeenSet = true;
    }

    if (value.HasMember("DestType") && !value["DestType"].IsNull())
    {
        if (!value["DestType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcRuleItem.DestType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destType = string(value["DestType"].GetString());
        m_destTypeHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcRuleItem.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("RuleAction") && !value["RuleAction"].IsNull())
    {
        if (!value["RuleAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcRuleItem.RuleAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleAction = string(value["RuleAction"].GetString());
        m_ruleActionHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcRuleItem.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcRuleItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("OrderIndex") && !value["OrderIndex"].IsNull())
    {
        if (!value["OrderIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcRuleItem.OrderIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderIndex = value["OrderIndex"].GetInt64();
        m_orderIndexHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcRuleItem.Enable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enable = string(value["Enable"].GetString());
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("EdgeId") && !value["EdgeId"].IsNull())
    {
        if (!value["EdgeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcRuleItem.EdgeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edgeId = string(value["EdgeId"].GetString());
        m_edgeIdHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcRuleItem.Uuid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = value["Uuid"].GetInt64();
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("DetectedTimes") && !value["DetectedTimes"].IsNull())
    {
        if (!value["DetectedTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcRuleItem.DetectedTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_detectedTimes = value["DetectedTimes"].GetInt64();
        m_detectedTimesHasBeenSet = true;
    }

    if (value.HasMember("EdgeName") && !value["EdgeName"].IsNull())
    {
        if (!value["EdgeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcRuleItem.EdgeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edgeName = string(value["EdgeName"].GetString());
        m_edgeNameHasBeenSet = true;
    }

    if (value.HasMember("InternalUuid") && !value["InternalUuid"].IsNull())
    {
        if (!value["InternalUuid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcRuleItem.InternalUuid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_internalUuid = value["InternalUuid"].GetInt64();
        m_internalUuidHasBeenSet = true;
    }

    if (value.HasMember("Deleted") && !value["Deleted"].IsNull())
    {
        if (!value["Deleted"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcRuleItem.Deleted` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deleted = value["Deleted"].GetInt64();
        m_deletedHasBeenSet = true;
    }

    if (value.HasMember("FwGroupId") && !value["FwGroupId"].IsNull())
    {
        if (!value["FwGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcRuleItem.FwGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwGroupId = string(value["FwGroupId"].GetString());
        m_fwGroupIdHasBeenSet = true;
    }

    if (value.HasMember("FwGroupName") && !value["FwGroupName"].IsNull())
    {
        if (!value["FwGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcRuleItem.FwGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwGroupName = string(value["FwGroupName"].GetString());
        m_fwGroupNameHasBeenSet = true;
    }

    if (value.HasMember("BetaList") && !value["BetaList"].IsNull())
    {
        if (!value["BetaList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VpcRuleItem.BetaList` is not array type"));

        const rapidjson::Value &tmpValue = value["BetaList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BetaInfoByACL item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_betaList.push_back(item);
        }
        m_betaListHasBeenSet = true;
    }

    if (value.HasMember("ParamTemplateId") && !value["ParamTemplateId"].IsNull())
    {
        if (!value["ParamTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcRuleItem.ParamTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramTemplateId = string(value["ParamTemplateId"].GetString());
        m_paramTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("ParamTemplateName") && !value["ParamTemplateName"].IsNull())
    {
        if (!value["ParamTemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcRuleItem.ParamTemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramTemplateName = string(value["ParamTemplateName"].GetString());
        m_paramTemplateNameHasBeenSet = true;
    }

    if (value.HasMember("TargetName") && !value["TargetName"].IsNull())
    {
        if (!value["TargetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcRuleItem.TargetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetName = string(value["TargetName"].GetString());
        m_targetNameHasBeenSet = true;
    }

    if (value.HasMember("SourceName") && !value["SourceName"].IsNull())
    {
        if (!value["SourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcRuleItem.SourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceName = string(value["SourceName"].GetString());
        m_sourceNameHasBeenSet = true;
    }

    if (value.HasMember("IpVersion") && !value["IpVersion"].IsNull())
    {
        if (!value["IpVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcRuleItem.IpVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipVersion = value["IpVersion"].GetInt64();
        m_ipVersionHasBeenSet = true;
    }

    if (value.HasMember("Invalid") && !value["Invalid"].IsNull())
    {
        if (!value["Invalid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcRuleItem.Invalid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_invalid = value["Invalid"].GetInt64();
        m_invalidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcRuleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceContent.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_destContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destContent.c_str(), allocator).Move(), allocator);
    }

    if (m_destTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destType.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleAction.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderIndex, allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enable.c_str(), allocator).Move(), allocator);
    }

    if (m_edgeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_edgeId.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uuid, allocator);
    }

    if (m_detectedTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectedTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detectedTimes, allocator);
    }

    if (m_edgeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_edgeName.c_str(), allocator).Move(), allocator);
    }

    if (m_internalUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalUuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internalUuid, allocator);
    }

    if (m_deletedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleted, allocator);
    }

    if (m_fwGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_fwGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_betaListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BetaList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_betaList.begin(); itr != m_betaList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_paramTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_paramTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamTemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_ipVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipVersion, allocator);
    }

    if (m_invalidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Invalid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invalid, allocator);
    }

}


string VpcRuleItem::GetSourceContent() const
{
    return m_sourceContent;
}

void VpcRuleItem::SetSourceContent(const string& _sourceContent)
{
    m_sourceContent = _sourceContent;
    m_sourceContentHasBeenSet = true;
}

bool VpcRuleItem::SourceContentHasBeenSet() const
{
    return m_sourceContentHasBeenSet;
}

string VpcRuleItem::GetSourceType() const
{
    return m_sourceType;
}

void VpcRuleItem::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool VpcRuleItem::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string VpcRuleItem::GetDestContent() const
{
    return m_destContent;
}

void VpcRuleItem::SetDestContent(const string& _destContent)
{
    m_destContent = _destContent;
    m_destContentHasBeenSet = true;
}

bool VpcRuleItem::DestContentHasBeenSet() const
{
    return m_destContentHasBeenSet;
}

string VpcRuleItem::GetDestType() const
{
    return m_destType;
}

void VpcRuleItem::SetDestType(const string& _destType)
{
    m_destType = _destType;
    m_destTypeHasBeenSet = true;
}

bool VpcRuleItem::DestTypeHasBeenSet() const
{
    return m_destTypeHasBeenSet;
}

string VpcRuleItem::GetProtocol() const
{
    return m_protocol;
}

void VpcRuleItem::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool VpcRuleItem::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string VpcRuleItem::GetRuleAction() const
{
    return m_ruleAction;
}

void VpcRuleItem::SetRuleAction(const string& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool VpcRuleItem::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}

string VpcRuleItem::GetPort() const
{
    return m_port;
}

void VpcRuleItem::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool VpcRuleItem::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string VpcRuleItem::GetDescription() const
{
    return m_description;
}

void VpcRuleItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool VpcRuleItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t VpcRuleItem::GetOrderIndex() const
{
    return m_orderIndex;
}

void VpcRuleItem::SetOrderIndex(const int64_t& _orderIndex)
{
    m_orderIndex = _orderIndex;
    m_orderIndexHasBeenSet = true;
}

bool VpcRuleItem::OrderIndexHasBeenSet() const
{
    return m_orderIndexHasBeenSet;
}

string VpcRuleItem::GetEnable() const
{
    return m_enable;
}

void VpcRuleItem::SetEnable(const string& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool VpcRuleItem::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string VpcRuleItem::GetEdgeId() const
{
    return m_edgeId;
}

void VpcRuleItem::SetEdgeId(const string& _edgeId)
{
    m_edgeId = _edgeId;
    m_edgeIdHasBeenSet = true;
}

bool VpcRuleItem::EdgeIdHasBeenSet() const
{
    return m_edgeIdHasBeenSet;
}

int64_t VpcRuleItem::GetUuid() const
{
    return m_uuid;
}

void VpcRuleItem::SetUuid(const int64_t& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool VpcRuleItem::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

int64_t VpcRuleItem::GetDetectedTimes() const
{
    return m_detectedTimes;
}

void VpcRuleItem::SetDetectedTimes(const int64_t& _detectedTimes)
{
    m_detectedTimes = _detectedTimes;
    m_detectedTimesHasBeenSet = true;
}

bool VpcRuleItem::DetectedTimesHasBeenSet() const
{
    return m_detectedTimesHasBeenSet;
}

string VpcRuleItem::GetEdgeName() const
{
    return m_edgeName;
}

void VpcRuleItem::SetEdgeName(const string& _edgeName)
{
    m_edgeName = _edgeName;
    m_edgeNameHasBeenSet = true;
}

bool VpcRuleItem::EdgeNameHasBeenSet() const
{
    return m_edgeNameHasBeenSet;
}

int64_t VpcRuleItem::GetInternalUuid() const
{
    return m_internalUuid;
}

void VpcRuleItem::SetInternalUuid(const int64_t& _internalUuid)
{
    m_internalUuid = _internalUuid;
    m_internalUuidHasBeenSet = true;
}

bool VpcRuleItem::InternalUuidHasBeenSet() const
{
    return m_internalUuidHasBeenSet;
}

int64_t VpcRuleItem::GetDeleted() const
{
    return m_deleted;
}

void VpcRuleItem::SetDeleted(const int64_t& _deleted)
{
    m_deleted = _deleted;
    m_deletedHasBeenSet = true;
}

bool VpcRuleItem::DeletedHasBeenSet() const
{
    return m_deletedHasBeenSet;
}

string VpcRuleItem::GetFwGroupId() const
{
    return m_fwGroupId;
}

void VpcRuleItem::SetFwGroupId(const string& _fwGroupId)
{
    m_fwGroupId = _fwGroupId;
    m_fwGroupIdHasBeenSet = true;
}

bool VpcRuleItem::FwGroupIdHasBeenSet() const
{
    return m_fwGroupIdHasBeenSet;
}

string VpcRuleItem::GetFwGroupName() const
{
    return m_fwGroupName;
}

void VpcRuleItem::SetFwGroupName(const string& _fwGroupName)
{
    m_fwGroupName = _fwGroupName;
    m_fwGroupNameHasBeenSet = true;
}

bool VpcRuleItem::FwGroupNameHasBeenSet() const
{
    return m_fwGroupNameHasBeenSet;
}

vector<BetaInfoByACL> VpcRuleItem::GetBetaList() const
{
    return m_betaList;
}

void VpcRuleItem::SetBetaList(const vector<BetaInfoByACL>& _betaList)
{
    m_betaList = _betaList;
    m_betaListHasBeenSet = true;
}

bool VpcRuleItem::BetaListHasBeenSet() const
{
    return m_betaListHasBeenSet;
}

string VpcRuleItem::GetParamTemplateId() const
{
    return m_paramTemplateId;
}

void VpcRuleItem::SetParamTemplateId(const string& _paramTemplateId)
{
    m_paramTemplateId = _paramTemplateId;
    m_paramTemplateIdHasBeenSet = true;
}

bool VpcRuleItem::ParamTemplateIdHasBeenSet() const
{
    return m_paramTemplateIdHasBeenSet;
}

string VpcRuleItem::GetParamTemplateName() const
{
    return m_paramTemplateName;
}

void VpcRuleItem::SetParamTemplateName(const string& _paramTemplateName)
{
    m_paramTemplateName = _paramTemplateName;
    m_paramTemplateNameHasBeenSet = true;
}

bool VpcRuleItem::ParamTemplateNameHasBeenSet() const
{
    return m_paramTemplateNameHasBeenSet;
}

string VpcRuleItem::GetTargetName() const
{
    return m_targetName;
}

void VpcRuleItem::SetTargetName(const string& _targetName)
{
    m_targetName = _targetName;
    m_targetNameHasBeenSet = true;
}

bool VpcRuleItem::TargetNameHasBeenSet() const
{
    return m_targetNameHasBeenSet;
}

string VpcRuleItem::GetSourceName() const
{
    return m_sourceName;
}

void VpcRuleItem::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool VpcRuleItem::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

int64_t VpcRuleItem::GetIpVersion() const
{
    return m_ipVersion;
}

void VpcRuleItem::SetIpVersion(const int64_t& _ipVersion)
{
    m_ipVersion = _ipVersion;
    m_ipVersionHasBeenSet = true;
}

bool VpcRuleItem::IpVersionHasBeenSet() const
{
    return m_ipVersionHasBeenSet;
}

int64_t VpcRuleItem::GetInvalid() const
{
    return m_invalid;
}

void VpcRuleItem::SetInvalid(const int64_t& _invalid)
{
    m_invalid = _invalid;
    m_invalidHasBeenSet = true;
}

bool VpcRuleItem::InvalidHasBeenSet() const
{
    return m_invalidHasBeenSet;
}

