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

#include <tencentcloud/vpc/v20170312/model/TrafficMirrorTarget.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

TrafficMirrorTarget::TrafficMirrorTarget() :
    m_targetIpsHasBeenSet(false),
    m_algHashHasBeenSet(false),
    m_targetEndPointsHasBeenSet(false),
    m_targetTypeHasBeenSet(false)
{
}

CoreInternalOutcome TrafficMirrorTarget::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetIps") && !value["TargetIps"].IsNull())
    {
        if (!value["TargetIps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorTarget.TargetIps` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetIps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_targetIps.push_back((*itr).GetString());
        }
        m_targetIpsHasBeenSet = true;
    }

    if (value.HasMember("AlgHash") && !value["AlgHash"].IsNull())
    {
        if (!value["AlgHash"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorTarget.AlgHash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_algHash = string(value["AlgHash"].GetString());
        m_algHashHasBeenSet = true;
    }

    if (value.HasMember("TargetEndPoints") && !value["TargetEndPoints"].IsNull())
    {
        if (!value["TargetEndPoints"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorTarget.TargetEndPoints` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetEndPoints"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_targetEndPoints.push_back((*itr).GetString());
        }
        m_targetEndPointsHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorTarget.TargetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = string(value["TargetType"].GetString());
        m_targetTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficMirrorTarget::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetIpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetIps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetIps.begin(); itr != m_targetIps.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_algHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlgHash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_algHash.c_str(), allocator).Move(), allocator);
    }

    if (m_targetEndPointsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetEndPoints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetEndPoints.begin(); itr != m_targetEndPoints.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetType.c_str(), allocator).Move(), allocator);
    }

}


vector<string> TrafficMirrorTarget::GetTargetIps() const
{
    return m_targetIps;
}

void TrafficMirrorTarget::SetTargetIps(const vector<string>& _targetIps)
{
    m_targetIps = _targetIps;
    m_targetIpsHasBeenSet = true;
}

bool TrafficMirrorTarget::TargetIpsHasBeenSet() const
{
    return m_targetIpsHasBeenSet;
}

string TrafficMirrorTarget::GetAlgHash() const
{
    return m_algHash;
}

void TrafficMirrorTarget::SetAlgHash(const string& _algHash)
{
    m_algHash = _algHash;
    m_algHashHasBeenSet = true;
}

bool TrafficMirrorTarget::AlgHashHasBeenSet() const
{
    return m_algHashHasBeenSet;
}

vector<string> TrafficMirrorTarget::GetTargetEndPoints() const
{
    return m_targetEndPoints;
}

void TrafficMirrorTarget::SetTargetEndPoints(const vector<string>& _targetEndPoints)
{
    m_targetEndPoints = _targetEndPoints;
    m_targetEndPointsHasBeenSet = true;
}

bool TrafficMirrorTarget::TargetEndPointsHasBeenSet() const
{
    return m_targetEndPointsHasBeenSet;
}

string TrafficMirrorTarget::GetTargetType() const
{
    return m_targetType;
}

void TrafficMirrorTarget::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool TrafficMirrorTarget::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

