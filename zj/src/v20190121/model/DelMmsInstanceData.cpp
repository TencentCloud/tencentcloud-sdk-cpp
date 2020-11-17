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

#include <tencentcloud/zj/v20190121/model/DelMmsInstanceData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Zj::V20190121::Model;
using namespace rapidjson;
using namespace std;

DelMmsInstanceData::DelMmsInstanceData() :
    m_instanceIdHasBeenSet(false)
{
}

CoreInternalOutcome DelMmsInstanceData::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DelMmsInstanceData.InstanceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = value["InstanceId"].GetUint64();
        m_instanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DelMmsInstanceData::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceId, allocator);
    }

}


uint64_t DelMmsInstanceData::GetInstanceId() const
{
    return m_instanceId;
}

void DelMmsInstanceData::SetInstanceId(const uint64_t& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DelMmsInstanceData::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

