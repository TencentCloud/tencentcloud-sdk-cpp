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

#include <tencentcloud/ame/v20190916/model/MusicStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

MusicStatus::MusicStatus() :
    m_musicIdHasBeenSet(false),
    m_saleStatusHasBeenSet(false)
{
}

CoreInternalOutcome MusicStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MusicId") && !value["MusicId"].IsNull())
    {
        if (!value["MusicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MusicStatus.MusicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_musicId = string(value["MusicId"].GetString());
        m_musicIdHasBeenSet = true;
    }

    if (value.HasMember("SaleStatus") && !value["SaleStatus"].IsNull())
    {
        if (!value["SaleStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MusicStatus.SaleStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_saleStatus = value["SaleStatus"].GetInt64();
        m_saleStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MusicStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_musicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MusicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_musicId.c_str(), allocator).Move(), allocator);
    }

    if (m_saleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_saleStatus, allocator);
    }

}


string MusicStatus::GetMusicId() const
{
    return m_musicId;
}

void MusicStatus::SetMusicId(const string& _musicId)
{
    m_musicId = _musicId;
    m_musicIdHasBeenSet = true;
}

bool MusicStatus::MusicIdHasBeenSet() const
{
    return m_musicIdHasBeenSet;
}

int64_t MusicStatus::GetSaleStatus() const
{
    return m_saleStatus;
}

void MusicStatus::SetSaleStatus(const int64_t& _saleStatus)
{
    m_saleStatus = _saleStatus;
    m_saleStatusHasBeenSet = true;
}

bool MusicStatus::SaleStatusHasBeenSet() const
{
    return m_saleStatusHasBeenSet;
}

