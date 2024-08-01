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

#include <tencentcloud/cdwdoris/v20211228/model/ModifyMetricFileStruct.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

ModifyMetricFileStruct::ModifyMetricFileStruct() :
    m_idHasBeenSet(false),
    m_ifAttentionHasBeenSet(false)
{
}

CoreInternalOutcome ModifyMetricFileStruct::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyMetricFileStruct.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("IfAttention") && !value["IfAttention"].IsNull())
    {
        if (!value["IfAttention"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyMetricFileStruct.IfAttention` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ifAttention = string(value["IfAttention"].GetString());
        m_ifAttentionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyMetricFileStruct::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_ifAttentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IfAttention";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ifAttention.c_str(), allocator).Move(), allocator);
    }

}


int64_t ModifyMetricFileStruct::GetId() const
{
    return m_id;
}

void ModifyMetricFileStruct::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyMetricFileStruct::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyMetricFileStruct::GetIfAttention() const
{
    return m_ifAttention;
}

void ModifyMetricFileStruct::SetIfAttention(const string& _ifAttention)
{
    m_ifAttention = _ifAttention;
    m_ifAttentionHasBeenSet = true;
}

bool ModifyMetricFileStruct::IfAttentionHasBeenSet() const
{
    return m_ifAttentionHasBeenSet;
}

