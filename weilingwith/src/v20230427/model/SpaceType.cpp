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

#include <tencentcloud/weilingwith/v20230427/model/SpaceType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

SpaceType::SpaceType() :
    m_spaceTypeCodeHasBeenSet(false),
    m_spaceTypeNameHasBeenSet(false)
{
}

CoreInternalOutcome SpaceType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpaceTypeCode") && !value["SpaceTypeCode"].IsNull())
    {
        if (!value["SpaceTypeCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceType.SpaceTypeCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceTypeCode = string(value["SpaceTypeCode"].GetString());
        m_spaceTypeCodeHasBeenSet = true;
    }

    if (value.HasMember("SpaceTypeName") && !value["SpaceTypeName"].IsNull())
    {
        if (!value["SpaceTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceType.SpaceTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceTypeName = string(value["SpaceTypeName"].GetString());
        m_spaceTypeNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpaceType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_spaceTypeCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceTypeCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceTypeCode.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceTypeName.c_str(), allocator).Move(), allocator);
    }

}


string SpaceType::GetSpaceTypeCode() const
{
    return m_spaceTypeCode;
}

void SpaceType::SetSpaceTypeCode(const string& _spaceTypeCode)
{
    m_spaceTypeCode = _spaceTypeCode;
    m_spaceTypeCodeHasBeenSet = true;
}

bool SpaceType::SpaceTypeCodeHasBeenSet() const
{
    return m_spaceTypeCodeHasBeenSet;
}

string SpaceType::GetSpaceTypeName() const
{
    return m_spaceTypeName;
}

void SpaceType::SetSpaceTypeName(const string& _spaceTypeName)
{
    m_spaceTypeName = _spaceTypeName;
    m_spaceTypeNameHasBeenSet = true;
}

bool SpaceType::SpaceTypeNameHasBeenSet() const
{
    return m_spaceTypeNameHasBeenSet;
}

