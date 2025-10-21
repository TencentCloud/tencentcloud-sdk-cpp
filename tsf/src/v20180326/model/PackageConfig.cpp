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

#include <tencentcloud/tsf/v20180326/model/PackageConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

PackageConfig::PackageConfig() :
    m_spaceSizeHasBeenSet(false)
{
}

CoreInternalOutcome PackageConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpaceSize") && !value["SpaceSize"].IsNull())
    {
        if (!value["SpaceSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageConfig.SpaceSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_spaceSize = value["SpaceSize"].GetUint64();
        m_spaceSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PackageConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_spaceSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_spaceSize, allocator);
    }

}


uint64_t PackageConfig::GetSpaceSize() const
{
    return m_spaceSize;
}

void PackageConfig::SetSpaceSize(const uint64_t& _spaceSize)
{
    m_spaceSize = _spaceSize;
    m_spaceSizeHasBeenSet = true;
}

bool PackageConfig::SpaceSizeHasBeenSet() const
{
    return m_spaceSizeHasBeenSet;
}

