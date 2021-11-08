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

#include <tencentcloud/scf/v20180416/model/WSParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

WSParams::WSParams() :
    m_idleTimeOutHasBeenSet(false)
{
}

CoreInternalOutcome WSParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IdleTimeOut") && !value["IdleTimeOut"].IsNull())
    {
        if (!value["IdleTimeOut"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WSParams.IdleTimeOut` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_idleTimeOut = value["IdleTimeOut"].GetUint64();
        m_idleTimeOutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WSParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idleTimeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdleTimeOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idleTimeOut, allocator);
    }

}


uint64_t WSParams::GetIdleTimeOut() const
{
    return m_idleTimeOut;
}

void WSParams::SetIdleTimeOut(const uint64_t& _idleTimeOut)
{
    m_idleTimeOut = _idleTimeOut;
    m_idleTimeOutHasBeenSet = true;
}

bool WSParams::IdleTimeOutHasBeenSet() const
{
    return m_idleTimeOutHasBeenSet;
}

