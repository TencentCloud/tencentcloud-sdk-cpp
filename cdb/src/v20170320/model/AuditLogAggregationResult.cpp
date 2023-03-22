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

#include <tencentcloud/cdb/v20170320/model/AuditLogAggregationResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

AuditLogAggregationResult::AuditLogAggregationResult() :
    m_aggregationFieldHasBeenSet(false),
    m_bucketsHasBeenSet(false)
{
}

CoreInternalOutcome AuditLogAggregationResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AggregationField") && !value["AggregationField"].IsNull())
    {
        if (!value["AggregationField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogAggregationResult.AggregationField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aggregationField = string(value["AggregationField"].GetString());
        m_aggregationFieldHasBeenSet = true;
    }

    if (value.HasMember("Buckets") && !value["Buckets"].IsNull())
    {
        if (!value["Buckets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogAggregationResult.Buckets` is not array type"));

        const rapidjson::Value &tmpValue = value["Buckets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Bucket item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_buckets.push_back(item);
        }
        m_bucketsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuditLogAggregationResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aggregationFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AggregationField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aggregationField.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Buckets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_buckets.begin(); itr != m_buckets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AuditLogAggregationResult::GetAggregationField() const
{
    return m_aggregationField;
}

void AuditLogAggregationResult::SetAggregationField(const string& _aggregationField)
{
    m_aggregationField = _aggregationField;
    m_aggregationFieldHasBeenSet = true;
}

bool AuditLogAggregationResult::AggregationFieldHasBeenSet() const
{
    return m_aggregationFieldHasBeenSet;
}

vector<Bucket> AuditLogAggregationResult::GetBuckets() const
{
    return m_buckets;
}

void AuditLogAggregationResult::SetBuckets(const vector<Bucket>& _buckets)
{
    m_buckets = _buckets;
    m_bucketsHasBeenSet = true;
}

bool AuditLogAggregationResult::BucketsHasBeenSet() const
{
    return m_bucketsHasBeenSet;
}

