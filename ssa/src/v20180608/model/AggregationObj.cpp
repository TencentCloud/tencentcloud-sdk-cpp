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

#include <tencentcloud/ssa/v20180608/model/AggregationObj.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

AggregationObj::AggregationObj() :
    m_typeHasBeenSet(false),
    m_bucketHasBeenSet(false)
{
}

CoreInternalOutcome AggregationObj::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AggregationObj.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AggregationObj.Bucket` is not array type"));

        const rapidjson::Value &tmpValue = value["Bucket"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Bucket item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bucket.push_back(item);
        }
        m_bucketHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AggregationObj::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bucket.begin(); itr != m_bucket.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AggregationObj::GetType() const
{
    return m_type;
}

void AggregationObj::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AggregationObj::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<Bucket> AggregationObj::GetBucket() const
{
    return m_bucket;
}

void AggregationObj::SetBucket(const vector<Bucket>& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool AggregationObj::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

