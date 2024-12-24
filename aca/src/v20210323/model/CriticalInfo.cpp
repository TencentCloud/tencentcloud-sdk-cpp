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

#include <tencentcloud/aca/v20210323/model/CriticalInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

CriticalInfo::CriticalInfo() :
    m_typeHasBeenSet(false),
    m_tipsHasBeenSet(false)
{
}

CoreInternalOutcome CriticalInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CriticalInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Tips") && !value["Tips"].IsNull())
    {
        if (!value["Tips"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CriticalInfo.Tips` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tips = string(value["Tips"].GetString());
        m_tipsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CriticalInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_tipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tips.c_str(), allocator).Move(), allocator);
    }

}


int64_t CriticalInfo::GetType() const
{
    return m_type;
}

void CriticalInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CriticalInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CriticalInfo::GetTips() const
{
    return m_tips;
}

void CriticalInfo::SetTips(const string& _tips)
{
    m_tips = _tips;
    m_tipsHasBeenSet = true;
}

bool CriticalInfo::TipsHasBeenSet() const
{
    return m_tipsHasBeenSet;
}

