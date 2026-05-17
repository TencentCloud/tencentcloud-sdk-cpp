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

#include <tencentcloud/csip/v20221121/model/CosBucketId.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosBucketId::CosBucketId() :
    m_appIdHasBeenSet(false),
    m_bucketIdSetHasBeenSet(false)
{
}

CoreInternalOutcome CosBucketId::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosBucketId.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("BucketIdSet") && !value["BucketIdSet"].IsNull())
    {
        if (!value["BucketIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosBucketId.BucketIdSet` is not array type"));

        const rapidjson::Value &tmpValue = value["BucketIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bucketIdSet.push_back((*itr).GetString());
        }
        m_bucketIdSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosBucketId::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bucketIdSet.begin(); itr != m_bucketIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string CosBucketId::GetAppId() const
{
    return m_appId;
}

void CosBucketId::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CosBucketId::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

vector<string> CosBucketId::GetBucketIdSet() const
{
    return m_bucketIdSet;
}

void CosBucketId::SetBucketIdSet(const vector<string>& _bucketIdSet)
{
    m_bucketIdSet = _bucketIdSet;
    m_bucketIdSetHasBeenSet = true;
}

bool CosBucketId::BucketIdSetHasBeenSet() const
{
    return m_bucketIdSetHasBeenSet;
}

