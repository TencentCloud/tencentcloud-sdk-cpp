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

#include <tencentcloud/ame/v20190916/model/TakeMusicOffShelves.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

TakeMusicOffShelves::TakeMusicOffShelves() :
    m_musicIdsHasBeenSet(false),
    m_saleStatusHasBeenSet(false)
{
}

CoreInternalOutcome TakeMusicOffShelves::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MusicIds") && !value["MusicIds"].IsNull())
    {
        if (!value["MusicIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TakeMusicOffShelves.MusicIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_musicIds = string(value["MusicIds"].GetString());
        m_musicIdsHasBeenSet = true;
    }

    if (value.HasMember("SaleStatus") && !value["SaleStatus"].IsNull())
    {
        if (!value["SaleStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TakeMusicOffShelves.SaleStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_saleStatus = string(value["SaleStatus"].GetString());
        m_saleStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TakeMusicOffShelves::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_musicIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MusicIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_musicIds.c_str(), allocator).Move(), allocator);
    }

    if (m_saleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_saleStatus.c_str(), allocator).Move(), allocator);
    }

}


string TakeMusicOffShelves::GetMusicIds() const
{
    return m_musicIds;
}

void TakeMusicOffShelves::SetMusicIds(const string& _musicIds)
{
    m_musicIds = _musicIds;
    m_musicIdsHasBeenSet = true;
}

bool TakeMusicOffShelves::MusicIdsHasBeenSet() const
{
    return m_musicIdsHasBeenSet;
}

string TakeMusicOffShelves::GetSaleStatus() const
{
    return m_saleStatus;
}

void TakeMusicOffShelves::SetSaleStatus(const string& _saleStatus)
{
    m_saleStatus = _saleStatus;
    m_saleStatusHasBeenSet = true;
}

bool TakeMusicOffShelves::SaleStatusHasBeenSet() const
{
    return m_saleStatusHasBeenSet;
}

