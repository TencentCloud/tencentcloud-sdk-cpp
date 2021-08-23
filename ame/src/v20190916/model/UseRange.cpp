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

#include <tencentcloud/ame/v20190916/model/UseRange.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

UseRange::UseRange() :
    m_useRangeIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome UseRange::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UseRangeId") && !value["UseRangeId"].IsNull())
    {
        if (!value["UseRangeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UseRange.UseRangeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_useRangeId = value["UseRangeId"].GetInt64();
        m_useRangeIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UseRange.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UseRange::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_useRangeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseRangeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useRangeId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

}


int64_t UseRange::GetUseRangeId() const
{
    return m_useRangeId;
}

void UseRange::SetUseRangeId(const int64_t& _useRangeId)
{
    m_useRangeId = _useRangeId;
    m_useRangeIdHasBeenSet = true;
}

bool UseRange::UseRangeIdHasBeenSet() const
{
    return m_useRangeIdHasBeenSet;
}

string UseRange::GetName() const
{
    return m_name;
}

void UseRange::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UseRange::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

