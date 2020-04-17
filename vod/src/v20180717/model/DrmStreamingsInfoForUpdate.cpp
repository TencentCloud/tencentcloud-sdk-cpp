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

#include <tencentcloud/vod/v20180717/model/DrmStreamingsInfoForUpdate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

DrmStreamingsInfoForUpdate::DrmStreamingsInfoForUpdate() :
    m_simpleAesDefinitionHasBeenSet(false)
{
}

CoreInternalOutcome DrmStreamingsInfoForUpdate::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SimpleAesDefinition") && !value["SimpleAesDefinition"].IsNull())
    {
        if (!value["SimpleAesDefinition"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DrmStreamingsInfoForUpdate.SimpleAesDefinition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_simpleAesDefinition = value["SimpleAesDefinition"].GetUint64();
        m_simpleAesDefinitionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DrmStreamingsInfoForUpdate::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_simpleAesDefinitionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SimpleAesDefinition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_simpleAesDefinition, allocator);
    }

}


uint64_t DrmStreamingsInfoForUpdate::GetSimpleAesDefinition() const
{
    return m_simpleAesDefinition;
}

void DrmStreamingsInfoForUpdate::SetSimpleAesDefinition(const uint64_t& _simpleAesDefinition)
{
    m_simpleAesDefinition = _simpleAesDefinition;
    m_simpleAesDefinitionHasBeenSet = true;
}

bool DrmStreamingsInfoForUpdate::SimpleAesDefinitionHasBeenSet() const
{
    return m_simpleAesDefinitionHasBeenSet;
}

