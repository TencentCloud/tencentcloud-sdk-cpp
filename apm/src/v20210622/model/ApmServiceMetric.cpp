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

#include <tencentcloud/apm/v20210622/model/ApmServiceMetric.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

ApmServiceMetric::ApmServiceMetric() :
    m_fieldsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_serviceDetailHasBeenSet(false)
{
}

CoreInternalOutcome ApmServiceMetric::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Fields") && !value["Fields"].IsNull())
    {
        if (!value["Fields"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApmServiceMetric.Fields` is not array type"));

        const rapidjson::Value &tmpValue = value["Fields"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApmField item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fields.push_back(item);
        }
        m_fieldsHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApmServiceMetric.Tags` is not array type"));

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

    if (value.HasMember("ServiceDetail") && !value["ServiceDetail"].IsNull())
    {
        if (!value["ServiceDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ApmServiceMetric.ServiceDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_serviceDetail.Deserialize(value["ServiceDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApmServiceMetric::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fields.begin(); itr != m_fields.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_serviceDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceDetail.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<ApmField> ApmServiceMetric::GetFields() const
{
    return m_fields;
}

void ApmServiceMetric::SetFields(const vector<ApmField>& _fields)
{
    m_fields = _fields;
    m_fieldsHasBeenSet = true;
}

bool ApmServiceMetric::FieldsHasBeenSet() const
{
    return m_fieldsHasBeenSet;
}

vector<ApmTag> ApmServiceMetric::GetTags() const
{
    return m_tags;
}

void ApmServiceMetric::SetTags(const vector<ApmTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ApmServiceMetric::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

ServiceDetail ApmServiceMetric::GetServiceDetail() const
{
    return m_serviceDetail;
}

void ApmServiceMetric::SetServiceDetail(const ServiceDetail& _serviceDetail)
{
    m_serviceDetail = _serviceDetail;
    m_serviceDetailHasBeenSet = true;
}

bool ApmServiceMetric::ServiceDetailHasBeenSet() const
{
    return m_serviceDetailHasBeenSet;
}

