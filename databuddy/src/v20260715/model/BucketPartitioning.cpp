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

#include <tencentcloud/databuddy/v20260715/model/BucketPartitioning.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

BucketPartitioning::BucketPartitioning() :
    m_filedNamesHasBeenSet(false),
    m_numBucketsHasBeenSet(false)
{
}

CoreInternalOutcome BucketPartitioning::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FiledNames") && !value["FiledNames"].IsNull())
    {
        if (!value["FiledNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BucketPartitioning.FiledNames` is not array type"));

        const rapidjson::Value &tmpValue = value["FiledNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_filedNames.push_back((*itr).GetString());
        }
        m_filedNamesHasBeenSet = true;
    }

    if (value.HasMember("NumBuckets") && !value["NumBuckets"].IsNull())
    {
        if (!value["NumBuckets"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BucketPartitioning.NumBuckets` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_numBuckets = string(value["NumBuckets"].GetString());
        m_numBucketsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BucketPartitioning::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_filedNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FiledNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filedNames.begin(); itr != m_filedNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_numBucketsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumBuckets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_numBuckets.c_str(), allocator).Move(), allocator);
    }

}


vector<string> BucketPartitioning::GetFiledNames() const
{
    return m_filedNames;
}

void BucketPartitioning::SetFiledNames(const vector<string>& _filedNames)
{
    m_filedNames = _filedNames;
    m_filedNamesHasBeenSet = true;
}

bool BucketPartitioning::FiledNamesHasBeenSet() const
{
    return m_filedNamesHasBeenSet;
}

string BucketPartitioning::GetNumBuckets() const
{
    return m_numBuckets;
}

void BucketPartitioning::SetNumBuckets(const string& _numBuckets)
{
    m_numBuckets = _numBuckets;
    m_numBucketsHasBeenSet = true;
}

bool BucketPartitioning::NumBucketsHasBeenSet() const
{
    return m_numBucketsHasBeenSet;
}

