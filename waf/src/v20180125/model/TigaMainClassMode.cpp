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

#include <tencentcloud/waf/v20180125/model/TigaMainClassMode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

TigaMainClassMode::TigaMainClassMode() :
    m_typeIDHasBeenSet(false),
    m_modeHasBeenSet(false)
{
}

CoreInternalOutcome TigaMainClassMode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TypeID") && !value["TypeID"].IsNull())
    {
        if (!value["TypeID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TigaMainClassMode.TypeID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeID = string(value["TypeID"].GetString());
        m_typeIDHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TigaMainClassMode.Mode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mode = value["Mode"].GetInt64();
        m_modeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TigaMainClassMode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeID.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mode, allocator);
    }

}


string TigaMainClassMode::GetTypeID() const
{
    return m_typeID;
}

void TigaMainClassMode::SetTypeID(const string& _typeID)
{
    m_typeID = _typeID;
    m_typeIDHasBeenSet = true;
}

bool TigaMainClassMode::TypeIDHasBeenSet() const
{
    return m_typeIDHasBeenSet;
}

int64_t TigaMainClassMode::GetMode() const
{
    return m_mode;
}

void TigaMainClassMode::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool TigaMainClassMode::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

