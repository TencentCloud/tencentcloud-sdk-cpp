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

#include <tencentcloud/dlc/v20210125/model/OptimizerEngineInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

OptimizerEngineInfo::OptimizerEngineInfo() :
    m_houseNameHasBeenSet(false),
    m_houseIdHasBeenSet(false),
    m_houseSizeHasBeenSet(false)
{
}

CoreInternalOutcome OptimizerEngineInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HouseName") && !value["HouseName"].IsNull())
    {
        if (!value["HouseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OptimizerEngineInfo.HouseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_houseName = string(value["HouseName"].GetString());
        m_houseNameHasBeenSet = true;
    }

    if (value.HasMember("HouseId") && !value["HouseId"].IsNull())
    {
        if (!value["HouseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OptimizerEngineInfo.HouseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_houseId = string(value["HouseId"].GetString());
        m_houseIdHasBeenSet = true;
    }

    if (value.HasMember("HouseSize") && !value["HouseSize"].IsNull())
    {
        if (!value["HouseSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OptimizerEngineInfo.HouseSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_houseSize = value["HouseSize"].GetInt64();
        m_houseSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OptimizerEngineInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_houseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HouseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_houseName.c_str(), allocator).Move(), allocator);
    }

    if (m_houseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HouseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_houseId.c_str(), allocator).Move(), allocator);
    }

    if (m_houseSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HouseSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_houseSize, allocator);
    }

}


string OptimizerEngineInfo::GetHouseName() const
{
    return m_houseName;
}

void OptimizerEngineInfo::SetHouseName(const string& _houseName)
{
    m_houseName = _houseName;
    m_houseNameHasBeenSet = true;
}

bool OptimizerEngineInfo::HouseNameHasBeenSet() const
{
    return m_houseNameHasBeenSet;
}

string OptimizerEngineInfo::GetHouseId() const
{
    return m_houseId;
}

void OptimizerEngineInfo::SetHouseId(const string& _houseId)
{
    m_houseId = _houseId;
    m_houseIdHasBeenSet = true;
}

bool OptimizerEngineInfo::HouseIdHasBeenSet() const
{
    return m_houseIdHasBeenSet;
}

int64_t OptimizerEngineInfo::GetHouseSize() const
{
    return m_houseSize;
}

void OptimizerEngineInfo::SetHouseSize(const int64_t& _houseSize)
{
    m_houseSize = _houseSize;
    m_houseSizeHasBeenSet = true;
}

bool OptimizerEngineInfo::HouseSizeHasBeenSet() const
{
    return m_houseSizeHasBeenSet;
}

