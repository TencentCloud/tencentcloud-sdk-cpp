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

#include <tencentcloud/organization/v20210331/model/ShareArea.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

ShareArea::ShareArea() :
    m_nameHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_areaIdHasBeenSet(false)
{
}

CoreInternalOutcome ShareArea::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareArea.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareArea.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("AreaId") && !value["AreaId"].IsNull())
    {
        if (!value["AreaId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ShareArea.AreaId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_areaId = value["AreaId"].GetInt64();
        m_areaIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShareArea::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_areaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_areaId, allocator);
    }

}


string ShareArea::GetName() const
{
    return m_name;
}

void ShareArea::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ShareArea::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ShareArea::GetArea() const
{
    return m_area;
}

void ShareArea::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool ShareArea::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

int64_t ShareArea::GetAreaId() const
{
    return m_areaId;
}

void ShareArea::SetAreaId(const int64_t& _areaId)
{
    m_areaId = _areaId;
    m_areaIdHasBeenSet = true;
}

bool ShareArea::AreaIdHasBeenSet() const
{
    return m_areaIdHasBeenSet;
}

