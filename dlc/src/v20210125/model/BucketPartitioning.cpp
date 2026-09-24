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

#include <tencentcloud/dlc/v20210125/model/BucketPartitioning.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

BucketPartitioning::BucketPartitioning() :
    m_fieldNamesHasBeenSet(false),
    m_numBucketsHasBeenSet(false)
{
}

CoreInternalOutcome BucketPartitioning::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FieldNames") && !value["FieldNames"].IsNull())
    {
        if (!value["FieldNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BucketPartitioning.FieldNames` is not array type"));

        const rapidjson::Value &tmpValue = value["FieldNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fieldNames.push_back((*itr).GetString());
        }
        m_fieldNamesHasBeenSet = true;
    }

    if (value.HasMember("NumBuckets") && !value["NumBuckets"].IsNull())
    {
        if (!value["NumBuckets"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BucketPartitioning.NumBuckets` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_numBuckets = value["NumBuckets"].GetUint64();
        m_numBucketsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BucketPartitioning::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fieldNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fieldNames.begin(); itr != m_fieldNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_numBucketsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumBuckets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numBuckets, allocator);
    }

}


vector<string> BucketPartitioning::GetFieldNames() const
{
    return m_fieldNames;
}

void BucketPartitioning::SetFieldNames(const vector<string>& _fieldNames)
{
    m_fieldNames = _fieldNames;
    m_fieldNamesHasBeenSet = true;
}

bool BucketPartitioning::FieldNamesHasBeenSet() const
{
    return m_fieldNamesHasBeenSet;
}

uint64_t BucketPartitioning::GetNumBuckets() const
{
    return m_numBuckets;
}

void BucketPartitioning::SetNumBuckets(const uint64_t& _numBuckets)
{
    m_numBuckets = _numBuckets;
    m_numBucketsHasBeenSet = true;
}

bool BucketPartitioning::NumBucketsHasBeenSet() const
{
    return m_numBucketsHasBeenSet;
}

