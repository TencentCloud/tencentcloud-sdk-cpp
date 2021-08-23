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

#include <tencentcloud/ecm/v20190719/model/Area.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

Area::Area() :
    m_areaIdHasBeenSet(false),
    m_areaNameHasBeenSet(false)
{
}

CoreInternalOutcome Area::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AreaId") && !value["AreaId"].IsNull())
    {
        if (!value["AreaId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Area.AreaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_areaId = string(value["AreaId"].GetString());
        m_areaIdHasBeenSet = true;
    }

    if (value.HasMember("AreaName") && !value["AreaName"].IsNull())
    {
        if (!value["AreaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Area.AreaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_areaName = string(value["AreaName"].GetString());
        m_areaNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Area::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_areaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_areaId.c_str(), allocator).Move(), allocator);
    }

    if (m_areaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_areaName.c_str(), allocator).Move(), allocator);
    }

}


string Area::GetAreaId() const
{
    return m_areaId;
}

void Area::SetAreaId(const string& _areaId)
{
    m_areaId = _areaId;
    m_areaIdHasBeenSet = true;
}

bool Area::AreaIdHasBeenSet() const
{
    return m_areaIdHasBeenSet;
}

string Area::GetAreaName() const
{
    return m_areaName;
}

void Area::SetAreaName(const string& _areaName)
{
    m_areaName = _areaName;
    m_areaNameHasBeenSet = true;
}

bool Area::AreaNameHasBeenSet() const
{
    return m_areaNameHasBeenSet;
}

