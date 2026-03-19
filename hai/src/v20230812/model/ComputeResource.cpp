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

#include <tencentcloud/hai/v20230812/model/ComputeResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

ComputeResource::ComputeResource() :
    m_bundleTypeHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome ComputeResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BundleType") && !value["BundleType"].IsNull())
    {
        if (!value["BundleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeResource.BundleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleType = string(value["BundleType"].GetString());
        m_bundleTypeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeResource.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComputeResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bundleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleType.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string ComputeResource::GetBundleType() const
{
    return m_bundleType;
}

void ComputeResource::SetBundleType(const string& _bundleType)
{
    m_bundleType = _bundleType;
    m_bundleTypeHasBeenSet = true;
}

bool ComputeResource::BundleTypeHasBeenSet() const
{
    return m_bundleTypeHasBeenSet;
}

uint64_t ComputeResource::GetCount() const
{
    return m_count;
}

void ComputeResource::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool ComputeResource::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

