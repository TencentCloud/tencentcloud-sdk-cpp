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

#include <tencentcloud/clb/v20180317/model/RewriteTarget.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

RewriteTarget::RewriteTarget() :
    m_targetListenerIdHasBeenSet(false),
    m_targetLocationIdHasBeenSet(false)
{
}

CoreInternalOutcome RewriteTarget::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetListenerId") && !value["TargetListenerId"].IsNull())
    {
        if (!value["TargetListenerId"].IsString())
        {
            return CoreInternalOutcome(Error("response `RewriteTarget.TargetListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetListenerId = string(value["TargetListenerId"].GetString());
        m_targetListenerIdHasBeenSet = true;
    }

    if (value.HasMember("TargetLocationId") && !value["TargetLocationId"].IsNull())
    {
        if (!value["TargetLocationId"].IsString())
        {
            return CoreInternalOutcome(Error("response `RewriteTarget.TargetLocationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetLocationId = string(value["TargetLocationId"].GetString());
        m_targetLocationIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RewriteTarget::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_targetListenerIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TargetListenerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_targetListenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetLocationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TargetLocationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_targetLocationId.c_str(), allocator).Move(), allocator);
    }

}


string RewriteTarget::GetTargetListenerId() const
{
    return m_targetListenerId;
}

void RewriteTarget::SetTargetListenerId(const string& _targetListenerId)
{
    m_targetListenerId = _targetListenerId;
    m_targetListenerIdHasBeenSet = true;
}

bool RewriteTarget::TargetListenerIdHasBeenSet() const
{
    return m_targetListenerIdHasBeenSet;
}

string RewriteTarget::GetTargetLocationId() const
{
    return m_targetLocationId;
}

void RewriteTarget::SetTargetLocationId(const string& _targetLocationId)
{
    m_targetLocationId = _targetLocationId;
    m_targetLocationIdHasBeenSet = true;
}

bool RewriteTarget::TargetLocationIdHasBeenSet() const
{
    return m_targetLocationIdHasBeenSet;
}

