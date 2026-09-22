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

#include <tencentcloud/workbuddyenterprise/v20260709/model/BuiltinModel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

BuiltinModel::BuiltinModel() :
    m_modelIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_vendorHasBeenSet(false),
    m_maxOutputTokensHasBeenSet(false),
    m_maxInputTokensHasBeenSet(false),
    m_supportsToolCallHasBeenSet(false),
    m_supportsImagesHasBeenSet(false),
    m_descriptionZhHasBeenSet(false),
    m_descriptionEnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientsHasBeenSet(false),
    m_serviceEndpointHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_agentCountHasBeenSet(false)
{
}

CoreInternalOutcome BuiltinModel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuiltinModel.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuiltinModel.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Vendor") && !value["Vendor"].IsNull())
    {
        if (!value["Vendor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuiltinModel.Vendor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vendor = string(value["Vendor"].GetString());
        m_vendorHasBeenSet = true;
    }

    if (value.HasMember("MaxOutputTokens") && !value["MaxOutputTokens"].IsNull())
    {
        if (!value["MaxOutputTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BuiltinModel.MaxOutputTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxOutputTokens = value["MaxOutputTokens"].GetInt64();
        m_maxOutputTokensHasBeenSet = true;
    }

    if (value.HasMember("MaxInputTokens") && !value["MaxInputTokens"].IsNull())
    {
        if (!value["MaxInputTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BuiltinModel.MaxInputTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxInputTokens = value["MaxInputTokens"].GetInt64();
        m_maxInputTokensHasBeenSet = true;
    }

    if (value.HasMember("SupportsToolCall") && !value["SupportsToolCall"].IsNull())
    {
        if (!value["SupportsToolCall"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BuiltinModel.SupportsToolCall` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportsToolCall = value["SupportsToolCall"].GetBool();
        m_supportsToolCallHasBeenSet = true;
    }

    if (value.HasMember("SupportsImages") && !value["SupportsImages"].IsNull())
    {
        if (!value["SupportsImages"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BuiltinModel.SupportsImages` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportsImages = value["SupportsImages"].GetBool();
        m_supportsImagesHasBeenSet = true;
    }

    if (value.HasMember("DescriptionZh") && !value["DescriptionZh"].IsNull())
    {
        if (!value["DescriptionZh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuiltinModel.DescriptionZh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_descriptionZh = string(value["DescriptionZh"].GetString());
        m_descriptionZhHasBeenSet = true;
    }

    if (value.HasMember("DescriptionEn") && !value["DescriptionEn"].IsNull())
    {
        if (!value["DescriptionEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuiltinModel.DescriptionEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_descriptionEn = string(value["DescriptionEn"].GetString());
        m_descriptionEnHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BuiltinModel.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Clients") && !value["Clients"].IsNull())
    {
        if (!value["Clients"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BuiltinModel.Clients` is not array type"));

        const rapidjson::Value &tmpValue = value["Clients"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_clients.push_back((*itr).GetString());
        }
        m_clientsHasBeenSet = true;
    }

    if (value.HasMember("ServiceEndpoint") && !value["ServiceEndpoint"].IsNull())
    {
        if (!value["ServiceEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuiltinModel.ServiceEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceEndpoint = string(value["ServiceEndpoint"].GetString());
        m_serviceEndpointHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuiltinModel.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AgentCount") && !value["AgentCount"].IsNull())
    {
        if (!value["AgentCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BuiltinModel.AgentCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_agentCount = value["AgentCount"].GetInt64();
        m_agentCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BuiltinModel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_vendorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vendor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vendor.c_str(), allocator).Move(), allocator);
    }

    if (m_maxOutputTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxOutputTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxOutputTokens, allocator);
    }

    if (m_maxInputTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxInputTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxInputTokens, allocator);
    }

    if (m_supportsToolCallHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportsToolCall";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportsToolCall, allocator);
    }

    if (m_supportsImagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportsImages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportsImages, allocator);
    }

    if (m_descriptionZhHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescriptionZh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_descriptionZh.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescriptionEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_descriptionEn.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clientsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Clients";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clients.begin(); itr != m_clients.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_serviceEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_agentCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentCount, allocator);
    }

}


string BuiltinModel::GetModelId() const
{
    return m_modelId;
}

void BuiltinModel::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool BuiltinModel::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string BuiltinModel::GetName() const
{
    return m_name;
}

void BuiltinModel::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BuiltinModel::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string BuiltinModel::GetVendor() const
{
    return m_vendor;
}

void BuiltinModel::SetVendor(const string& _vendor)
{
    m_vendor = _vendor;
    m_vendorHasBeenSet = true;
}

bool BuiltinModel::VendorHasBeenSet() const
{
    return m_vendorHasBeenSet;
}

int64_t BuiltinModel::GetMaxOutputTokens() const
{
    return m_maxOutputTokens;
}

void BuiltinModel::SetMaxOutputTokens(const int64_t& _maxOutputTokens)
{
    m_maxOutputTokens = _maxOutputTokens;
    m_maxOutputTokensHasBeenSet = true;
}

bool BuiltinModel::MaxOutputTokensHasBeenSet() const
{
    return m_maxOutputTokensHasBeenSet;
}

int64_t BuiltinModel::GetMaxInputTokens() const
{
    return m_maxInputTokens;
}

void BuiltinModel::SetMaxInputTokens(const int64_t& _maxInputTokens)
{
    m_maxInputTokens = _maxInputTokens;
    m_maxInputTokensHasBeenSet = true;
}

bool BuiltinModel::MaxInputTokensHasBeenSet() const
{
    return m_maxInputTokensHasBeenSet;
}

bool BuiltinModel::GetSupportsToolCall() const
{
    return m_supportsToolCall;
}

void BuiltinModel::SetSupportsToolCall(const bool& _supportsToolCall)
{
    m_supportsToolCall = _supportsToolCall;
    m_supportsToolCallHasBeenSet = true;
}

bool BuiltinModel::SupportsToolCallHasBeenSet() const
{
    return m_supportsToolCallHasBeenSet;
}

bool BuiltinModel::GetSupportsImages() const
{
    return m_supportsImages;
}

void BuiltinModel::SetSupportsImages(const bool& _supportsImages)
{
    m_supportsImages = _supportsImages;
    m_supportsImagesHasBeenSet = true;
}

bool BuiltinModel::SupportsImagesHasBeenSet() const
{
    return m_supportsImagesHasBeenSet;
}

string BuiltinModel::GetDescriptionZh() const
{
    return m_descriptionZh;
}

void BuiltinModel::SetDescriptionZh(const string& _descriptionZh)
{
    m_descriptionZh = _descriptionZh;
    m_descriptionZhHasBeenSet = true;
}

bool BuiltinModel::DescriptionZhHasBeenSet() const
{
    return m_descriptionZhHasBeenSet;
}

string BuiltinModel::GetDescriptionEn() const
{
    return m_descriptionEn;
}

void BuiltinModel::SetDescriptionEn(const string& _descriptionEn)
{
    m_descriptionEn = _descriptionEn;
    m_descriptionEnHasBeenSet = true;
}

bool BuiltinModel::DescriptionEnHasBeenSet() const
{
    return m_descriptionEnHasBeenSet;
}

vector<string> BuiltinModel::GetTags() const
{
    return m_tags;
}

void BuiltinModel::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool BuiltinModel::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<string> BuiltinModel::GetClients() const
{
    return m_clients;
}

void BuiltinModel::SetClients(const vector<string>& _clients)
{
    m_clients = _clients;
    m_clientsHasBeenSet = true;
}

bool BuiltinModel::ClientsHasBeenSet() const
{
    return m_clientsHasBeenSet;
}

string BuiltinModel::GetServiceEndpoint() const
{
    return m_serviceEndpoint;
}

void BuiltinModel::SetServiceEndpoint(const string& _serviceEndpoint)
{
    m_serviceEndpoint = _serviceEndpoint;
    m_serviceEndpointHasBeenSet = true;
}

bool BuiltinModel::ServiceEndpointHasBeenSet() const
{
    return m_serviceEndpointHasBeenSet;
}

string BuiltinModel::GetStatus() const
{
    return m_status;
}

void BuiltinModel::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BuiltinModel::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t BuiltinModel::GetAgentCount() const
{
    return m_agentCount;
}

void BuiltinModel::SetAgentCount(const int64_t& _agentCount)
{
    m_agentCount = _agentCount;
    m_agentCountHasBeenSet = true;
}

bool BuiltinModel::AgentCountHasBeenSet() const
{
    return m_agentCountHasBeenSet;
}

