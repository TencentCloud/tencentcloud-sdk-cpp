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

#include <tencentcloud/adp/v20260520/model/Model.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

Model::Model() :
    m_badgeListHasBeenSet(false),
    m_limitInfoHasBeenSet(false),
    m_modelBasicHasBeenSet(false),
    m_parameterListHasBeenSet(false),
    m_propertyListHasBeenSet(false),
    m_providerInfoHasBeenSet(false),
    m_statusInfoHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_developerInfoHasBeenSet(false)
{
}

CoreInternalOutcome Model::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BadgeList") && !value["BadgeList"].IsNull())
    {
        if (!value["BadgeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Model.BadgeList` is not array type"));

        const rapidjson::Value &tmpValue = value["BadgeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ModelBadge item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_badgeList.push_back(item);
        }
        m_badgeListHasBeenSet = true;
    }

    if (value.HasMember("LimitInfo") && !value["LimitInfo"].IsNull())
    {
        if (!value["LimitInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Model.LimitInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_limitInfo.Deserialize(value["LimitInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_limitInfoHasBeenSet = true;
    }

    if (value.HasMember("ModelBasic") && !value["ModelBasic"].IsNull())
    {
        if (!value["ModelBasic"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Model.ModelBasic` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modelBasic.Deserialize(value["ModelBasic"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelBasicHasBeenSet = true;
    }

    if (value.HasMember("ParameterList") && !value["ParameterList"].IsNull())
    {
        if (!value["ParameterList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Model.ParameterList` is not array type"));

        const rapidjson::Value &tmpValue = value["ParameterList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ModelParameter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_parameterList.push_back(item);
        }
        m_parameterListHasBeenSet = true;
    }

    if (value.HasMember("PropertyList") && !value["PropertyList"].IsNull())
    {
        if (!value["PropertyList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Model.PropertyList` is not array type"));

        const rapidjson::Value &tmpValue = value["PropertyList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ModelProperty item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_propertyList.push_back(item);
        }
        m_propertyListHasBeenSet = true;
    }

    if (value.HasMember("ProviderInfo") && !value["ProviderInfo"].IsNull())
    {
        if (!value["ProviderInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Model.ProviderInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_providerInfo.Deserialize(value["ProviderInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_providerInfoHasBeenSet = true;
    }

    if (value.HasMember("StatusInfo") && !value["StatusInfo"].IsNull())
    {
        if (!value["StatusInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Model.StatusInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_statusInfo.Deserialize(value["StatusInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statusInfoHasBeenSet = true;
    }

    if (value.HasMember("TagList") && !value["TagList"].IsNull())
    {
        if (!value["TagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Model.TagList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagList.push_back((*itr).GetString());
        }
        m_tagListHasBeenSet = true;
    }

    if (value.HasMember("DeveloperInfo") && !value["DeveloperInfo"].IsNull())
    {
        if (!value["DeveloperInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Model.DeveloperInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_developerInfo.Deserialize(value["DeveloperInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_developerInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Model::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_badgeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BadgeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_badgeList.begin(); itr != m_badgeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_limitInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_limitInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modelBasicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelBasic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelBasic.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_parameterListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParameterList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_parameterList.begin(); itr != m_parameterList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_propertyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropertyList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_propertyList.begin(); itr != m_propertyList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_providerInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProviderInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_providerInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_statusInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_developerInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeveloperInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_developerInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<ModelBadge> Model::GetBadgeList() const
{
    return m_badgeList;
}

void Model::SetBadgeList(const vector<ModelBadge>& _badgeList)
{
    m_badgeList = _badgeList;
    m_badgeListHasBeenSet = true;
}

bool Model::BadgeListHasBeenSet() const
{
    return m_badgeListHasBeenSet;
}

ModelLimit Model::GetLimitInfo() const
{
    return m_limitInfo;
}

void Model::SetLimitInfo(const ModelLimit& _limitInfo)
{
    m_limitInfo = _limitInfo;
    m_limitInfoHasBeenSet = true;
}

bool Model::LimitInfoHasBeenSet() const
{
    return m_limitInfoHasBeenSet;
}

ModelBasic Model::GetModelBasic() const
{
    return m_modelBasic;
}

void Model::SetModelBasic(const ModelBasic& _modelBasic)
{
    m_modelBasic = _modelBasic;
    m_modelBasicHasBeenSet = true;
}

bool Model::ModelBasicHasBeenSet() const
{
    return m_modelBasicHasBeenSet;
}

vector<ModelParameter> Model::GetParameterList() const
{
    return m_parameterList;
}

void Model::SetParameterList(const vector<ModelParameter>& _parameterList)
{
    m_parameterList = _parameterList;
    m_parameterListHasBeenSet = true;
}

bool Model::ParameterListHasBeenSet() const
{
    return m_parameterListHasBeenSet;
}

vector<ModelProperty> Model::GetPropertyList() const
{
    return m_propertyList;
}

void Model::SetPropertyList(const vector<ModelProperty>& _propertyList)
{
    m_propertyList = _propertyList;
    m_propertyListHasBeenSet = true;
}

bool Model::PropertyListHasBeenSet() const
{
    return m_propertyListHasBeenSet;
}

ModelProviderBasic Model::GetProviderInfo() const
{
    return m_providerInfo;
}

void Model::SetProviderInfo(const ModelProviderBasic& _providerInfo)
{
    m_providerInfo = _providerInfo;
    m_providerInfoHasBeenSet = true;
}

bool Model::ProviderInfoHasBeenSet() const
{
    return m_providerInfoHasBeenSet;
}

ModelStatus Model::GetStatusInfo() const
{
    return m_statusInfo;
}

void Model::SetStatusInfo(const ModelStatus& _statusInfo)
{
    m_statusInfo = _statusInfo;
    m_statusInfoHasBeenSet = true;
}

bool Model::StatusInfoHasBeenSet() const
{
    return m_statusInfoHasBeenSet;
}

vector<string> Model::GetTagList() const
{
    return m_tagList;
}

void Model::SetTagList(const vector<string>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool Model::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

ModelDeveloperBasic Model::GetDeveloperInfo() const
{
    return m_developerInfo;
}

void Model::SetDeveloperInfo(const ModelDeveloperBasic& _developerInfo)
{
    m_developerInfo = _developerInfo;
    m_developerInfoHasBeenSet = true;
}

bool Model::DeveloperInfoHasBeenSet() const
{
    return m_developerInfoHasBeenSet;
}

