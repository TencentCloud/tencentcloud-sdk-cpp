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

#include <tencentcloud/emr/v20190103/model/PodSpecInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

PodSpecInfo::PodSpecInfo() :
    m_podSpecHasBeenSet(false),
    m_podParameterHasBeenSet(false)
{
}

CoreInternalOutcome PodSpecInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PodSpec") && !value["PodSpec"].IsNull())
    {
        if (!value["PodSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PodSpecInfo.PodSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_podSpec.Deserialize(value["PodSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_podSpecHasBeenSet = true;
    }

    if (value.HasMember("PodParameter") && !value["PodParameter"].IsNull())
    {
        if (!value["PodParameter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PodSpecInfo.PodParameter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_podParameter.Deserialize(value["PodParameter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_podParameterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PodSpecInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_podSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_podSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_podParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodParameter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_podParameter.ToJsonObject(value[key.c_str()], allocator);
    }

}


PodNewSpec PodSpecInfo::GetPodSpec() const
{
    return m_podSpec;
}

void PodSpecInfo::SetPodSpec(const PodNewSpec& _podSpec)
{
    m_podSpec = _podSpec;
    m_podSpecHasBeenSet = true;
}

bool PodSpecInfo::PodSpecHasBeenSet() const
{
    return m_podSpecHasBeenSet;
}

PodNewParameter PodSpecInfo::GetPodParameter() const
{
    return m_podParameter;
}

void PodSpecInfo::SetPodParameter(const PodNewParameter& _podParameter)
{
    m_podParameter = _podParameter;
    m_podParameterHasBeenSet = true;
}

bool PodSpecInfo::PodParameterHasBeenSet() const
{
    return m_podParameterHasBeenSet;
}

