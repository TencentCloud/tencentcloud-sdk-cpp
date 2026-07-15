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

#include <tencentcloud/iotexplorer/v20190423/model/TalkTTSConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TalkTTSConfig::TalkTTSConfig() :
    m_typeHasBeenSet(false),
    m_flowHasBeenSet(false)
{
}

CoreInternalOutcome TalkTTSConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkTTSConfig.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Flow") && !value["Flow"].IsNull())
    {
        if (!value["Flow"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TalkTTSConfig.Flow` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_flow.Deserialize(value["Flow"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_flowHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TalkTTSConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_flowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_flow.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TalkTTSConfig::GetType() const
{
    return m_type;
}

void TalkTTSConfig::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TalkTTSConfig::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

TalkTTSFlow TalkTTSConfig::GetFlow() const
{
    return m_flow;
}

void TalkTTSConfig::SetFlow(const TalkTTSFlow& _flow)
{
    m_flow = _flow;
    m_flowHasBeenSet = true;
}

bool TalkTTSConfig::FlowHasBeenSet() const
{
    return m_flowHasBeenSet;
}

