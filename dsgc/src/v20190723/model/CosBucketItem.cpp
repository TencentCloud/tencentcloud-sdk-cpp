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

#include <tencentcloud/dsgc/v20190723/model/CosBucketItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

CosBucketItem::CosBucketItem() :
    m_regionHasBeenSet(false),
    m_bucketsHasBeenSet(false)
{
}

CoreInternalOutcome CosBucketItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosBucketItem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Buckets") && !value["Buckets"].IsNull())
    {
        if (!value["Buckets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosBucketItem.Buckets` is not array type"));

        const rapidjson::Value &tmpValue = value["Buckets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_buckets.push_back((*itr).GetString());
        }
        m_bucketsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosBucketItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Buckets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_buckets.begin(); itr != m_buckets.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string CosBucketItem::GetRegion() const
{
    return m_region;
}

void CosBucketItem::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CosBucketItem::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<string> CosBucketItem::GetBuckets() const
{
    return m_buckets;
}

void CosBucketItem::SetBuckets(const vector<string>& _buckets)
{
    m_buckets = _buckets;
    m_bucketsHasBeenSet = true;
}

bool CosBucketItem::BucketsHasBeenSet() const
{
    return m_bucketsHasBeenSet;
}

