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

#include <tencentcloud/apm/v20210622/model/TopologyNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

TopologyNode::TopologyNode() :
    m_errRateHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_qpsHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_isModuleHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_canDrillDownHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_nodeViewHasBeenSet(false),
    m_consumerDurationHasBeenSet(false),
    m_consumerErrRateHasBeenSet(false),
    m_consumerQpsHasBeenSet(false),
    m_serviceIdHasBeenSet(false)
{
}

CoreInternalOutcome TopologyNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ErrRate") && !value["ErrRate"].IsNull())
    {
        if (!value["ErrRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNode.ErrRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_errRate = value["ErrRate"].GetDouble();
        m_errRateHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNode.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNode.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNode.Weight` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetDouble();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("Color") && !value["Color"].IsNull())
    {
        if (!value["Color"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNode.Color` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_color = string(value["Color"].GetString());
        m_colorHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNode.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Qps") && !value["Qps"].IsNull())
    {
        if (!value["Qps"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNode.Qps` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_qps = value["Qps"].GetDouble();
        m_qpsHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNode.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNode.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNode.Size` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_size = string(value["Size"].GetString());
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("IsModule") && !value["IsModule"].IsNull())
    {
        if (!value["IsModule"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNode.IsModule` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isModule = value["IsModule"].GetBool();
        m_isModuleHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNode.Position` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_position.Deserialize(value["Position"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_positionHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopologyNode.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApmTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("CanDrillDown") && !value["CanDrillDown"].IsNull())
    {
        if (!value["CanDrillDown"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNode.CanDrillDown` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canDrillDown = value["CanDrillDown"].GetBool();
        m_canDrillDownHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNode.Resource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resource.Deserialize(value["Resource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("NodeView") && !value["NodeView"].IsNull())
    {
        if (!value["NodeView"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNode.NodeView` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeView = string(value["NodeView"].GetString());
        m_nodeViewHasBeenSet = true;
    }

    if (value.HasMember("ConsumerDuration") && !value["ConsumerDuration"].IsNull())
    {
        if (!value["ConsumerDuration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNode.ConsumerDuration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_consumerDuration = value["ConsumerDuration"].GetDouble();
        m_consumerDurationHasBeenSet = true;
    }

    if (value.HasMember("ConsumerErrRate") && !value["ConsumerErrRate"].IsNull())
    {
        if (!value["ConsumerErrRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNode.ConsumerErrRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_consumerErrRate = value["ConsumerErrRate"].GetDouble();
        m_consumerErrRateHasBeenSet = true;
    }

    if (value.HasMember("ConsumerQps") && !value["ConsumerQps"].IsNull())
    {
        if (!value["ConsumerQps"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNode.ConsumerQps` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_consumerQps = value["ConsumerQps"].GetDouble();
        m_consumerQpsHasBeenSet = true;
    }

    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyNode.ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(value["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopologyNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_errRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errRate, allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_colorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Color";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_color.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_qpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qps, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_size.c_str(), allocator).Move(), allocator);
    }

    if (m_isModuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsModule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isModule, allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_position.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_canDrillDownHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanDrillDown";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canDrillDown, allocator);
    }

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nodeViewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeView";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeView.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumerDuration, allocator);
    }

    if (m_consumerErrRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerErrRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumerErrRate, allocator);
    }

    if (m_consumerQpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerQps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumerQps, allocator);
    }

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

}


double TopologyNode::GetErrRate() const
{
    return m_errRate;
}

void TopologyNode::SetErrRate(const double& _errRate)
{
    m_errRate = _errRate;
    m_errRateHasBeenSet = true;
}

bool TopologyNode::ErrRateHasBeenSet() const
{
    return m_errRateHasBeenSet;
}

string TopologyNode::GetKind() const
{
    return m_kind;
}

void TopologyNode::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool TopologyNode::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string TopologyNode::GetName() const
{
    return m_name;
}

void TopologyNode::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TopologyNode::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

double TopologyNode::GetWeight() const
{
    return m_weight;
}

void TopologyNode::SetWeight(const double& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool TopologyNode::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

string TopologyNode::GetColor() const
{
    return m_color;
}

void TopologyNode::SetColor(const string& _color)
{
    m_color = _color;
    m_colorHasBeenSet = true;
}

bool TopologyNode::ColorHasBeenSet() const
{
    return m_colorHasBeenSet;
}

double TopologyNode::GetDuration() const
{
    return m_duration;
}

void TopologyNode::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool TopologyNode::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

double TopologyNode::GetQps() const
{
    return m_qps;
}

void TopologyNode::SetQps(const double& _qps)
{
    m_qps = _qps;
    m_qpsHasBeenSet = true;
}

bool TopologyNode::QpsHasBeenSet() const
{
    return m_qpsHasBeenSet;
}

string TopologyNode::GetType() const
{
    return m_type;
}

void TopologyNode::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TopologyNode::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string TopologyNode::GetId() const
{
    return m_id;
}

void TopologyNode::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool TopologyNode::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string TopologyNode::GetSize() const
{
    return m_size;
}

void TopologyNode::SetSize(const string& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool TopologyNode::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

bool TopologyNode::GetIsModule() const
{
    return m_isModule;
}

void TopologyNode::SetIsModule(const bool& _isModule)
{
    m_isModule = _isModule;
    m_isModuleHasBeenSet = true;
}

bool TopologyNode::IsModuleHasBeenSet() const
{
    return m_isModuleHasBeenSet;
}

Position TopologyNode::GetPosition() const
{
    return m_position;
}

void TopologyNode::SetPosition(const Position& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool TopologyNode::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

vector<ApmTag> TopologyNode::GetTags() const
{
    return m_tags;
}

void TopologyNode::SetTags(const vector<ApmTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool TopologyNode::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool TopologyNode::GetCanDrillDown() const
{
    return m_canDrillDown;
}

void TopologyNode::SetCanDrillDown(const bool& _canDrillDown)
{
    m_canDrillDown = _canDrillDown;
    m_canDrillDownHasBeenSet = true;
}

bool TopologyNode::CanDrillDownHasBeenSet() const
{
    return m_canDrillDownHasBeenSet;
}

Resource TopologyNode::GetResource() const
{
    return m_resource;
}

void TopologyNode::SetResource(const Resource& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool TopologyNode::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string TopologyNode::GetNodeView() const
{
    return m_nodeView;
}

void TopologyNode::SetNodeView(const string& _nodeView)
{
    m_nodeView = _nodeView;
    m_nodeViewHasBeenSet = true;
}

bool TopologyNode::NodeViewHasBeenSet() const
{
    return m_nodeViewHasBeenSet;
}

double TopologyNode::GetConsumerDuration() const
{
    return m_consumerDuration;
}

void TopologyNode::SetConsumerDuration(const double& _consumerDuration)
{
    m_consumerDuration = _consumerDuration;
    m_consumerDurationHasBeenSet = true;
}

bool TopologyNode::ConsumerDurationHasBeenSet() const
{
    return m_consumerDurationHasBeenSet;
}

double TopologyNode::GetConsumerErrRate() const
{
    return m_consumerErrRate;
}

void TopologyNode::SetConsumerErrRate(const double& _consumerErrRate)
{
    m_consumerErrRate = _consumerErrRate;
    m_consumerErrRateHasBeenSet = true;
}

bool TopologyNode::ConsumerErrRateHasBeenSet() const
{
    return m_consumerErrRateHasBeenSet;
}

double TopologyNode::GetConsumerQps() const
{
    return m_consumerQps;
}

void TopologyNode::SetConsumerQps(const double& _consumerQps)
{
    m_consumerQps = _consumerQps;
    m_consumerQpsHasBeenSet = true;
}

bool TopologyNode::ConsumerQpsHasBeenSet() const
{
    return m_consumerQpsHasBeenSet;
}

string TopologyNode::GetServiceId() const
{
    return m_serviceId;
}

void TopologyNode::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool TopologyNode::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

