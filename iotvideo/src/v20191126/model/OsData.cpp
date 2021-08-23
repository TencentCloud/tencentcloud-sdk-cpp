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

#include <tencentcloud/iotvideo/v20191126/model/OsData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

OsData::OsData() :
    m_chipIdHasBeenSet(false),
    m_chipManufactureHasBeenSet(false)
{
}

CoreInternalOutcome OsData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChipId") && !value["ChipId"].IsNull())
    {
        if (!value["ChipId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OsData.ChipId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chipId = string(value["ChipId"].GetString());
        m_chipIdHasBeenSet = true;
    }

    if (value.HasMember("ChipManufacture") && !value["ChipManufacture"].IsNull())
    {
        if (!value["ChipManufacture"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OsData.ChipManufacture` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chipManufacture = string(value["ChipManufacture"].GetString());
        m_chipManufactureHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OsData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_chipIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChipId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chipId.c_str(), allocator).Move(), allocator);
    }

    if (m_chipManufactureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChipManufacture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chipManufacture.c_str(), allocator).Move(), allocator);
    }

}


string OsData::GetChipId() const
{
    return m_chipId;
}

void OsData::SetChipId(const string& _chipId)
{
    m_chipId = _chipId;
    m_chipIdHasBeenSet = true;
}

bool OsData::ChipIdHasBeenSet() const
{
    return m_chipIdHasBeenSet;
}

string OsData::GetChipManufacture() const
{
    return m_chipManufacture;
}

void OsData::SetChipManufacture(const string& _chipManufacture)
{
    m_chipManufacture = _chipManufacture;
    m_chipManufactureHasBeenSet = true;
}

bool OsData::ChipManufactureHasBeenSet() const
{
    return m_chipManufactureHasBeenSet;
}

