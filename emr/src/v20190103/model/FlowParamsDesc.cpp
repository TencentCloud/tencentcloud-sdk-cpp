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

#include <tencentcloud/emr/v20190103/model/FlowParamsDesc.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

FlowParamsDesc::FlowParamsDesc() :
    m_pKeyHasBeenSet(false),
    m_pValueHasBeenSet(false)
{
}

CoreInternalOutcome FlowParamsDesc::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PKey") && !value["PKey"].IsNull())
    {
        if (!value["PKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowParamsDesc.PKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pKey = string(value["PKey"].GetString());
        m_pKeyHasBeenSet = true;
    }

    if (value.HasMember("PValue") && !value["PValue"].IsNull())
    {
        if (!value["PValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowParamsDesc.PValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pValue = string(value["PValue"].GetString());
        m_pValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowParamsDesc::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pKey.c_str(), allocator).Move(), allocator);
    }

    if (m_pValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pValue.c_str(), allocator).Move(), allocator);
    }

}


string FlowParamsDesc::GetPKey() const
{
    return m_pKey;
}

void FlowParamsDesc::SetPKey(const string& _pKey)
{
    m_pKey = _pKey;
    m_pKeyHasBeenSet = true;
}

bool FlowParamsDesc::PKeyHasBeenSet() const
{
    return m_pKeyHasBeenSet;
}

string FlowParamsDesc::GetPValue() const
{
    return m_pValue;
}

void FlowParamsDesc::SetPValue(const string& _pValue)
{
    m_pValue = _pValue;
    m_pValueHasBeenSet = true;
}

bool FlowParamsDesc::PValueHasBeenSet() const
{
    return m_pValueHasBeenSet;
}

