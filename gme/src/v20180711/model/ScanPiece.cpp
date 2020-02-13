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

#include <tencentcloud/gme/v20180711/model/ScanPiece.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace rapidjson;
using namespace std;

ScanPiece::ScanPiece() :
    m_dumpUrlHasBeenSet(false),
    m_hitFlagHasBeenSet(false),
    m_mainTypeHasBeenSet(false),
    m_scanDetailHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_infoHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_pieceStartTimeHasBeenSet(false)
{
}

CoreInternalOutcome ScanPiece::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("DumpUrl") && !value["DumpUrl"].IsNull())
    {
        if (!value["DumpUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScanPiece.DumpUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dumpUrl = string(value["DumpUrl"].GetString());
        m_dumpUrlHasBeenSet = true;
    }

    if (value.HasMember("HitFlag") && !value["HitFlag"].IsNull())
    {
        if (!value["HitFlag"].IsBool())
        {
            return CoreInternalOutcome(Error("response `ScanPiece.HitFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hitFlag = value["HitFlag"].GetBool();
        m_hitFlagHasBeenSet = true;
    }

    if (value.HasMember("MainType") && !value["MainType"].IsNull())
    {
        if (!value["MainType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScanPiece.MainType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainType = string(value["MainType"].GetString());
        m_mainTypeHasBeenSet = true;
    }

    if (value.HasMember("ScanDetail") && !value["ScanDetail"].IsNull())
    {
        if (!value["ScanDetail"].IsArray())
            return CoreInternalOutcome(Error("response `ScanPiece.ScanDetail` is not array type"));

        const Value &tmpValue = value["ScanDetail"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScanDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_scanDetail.push_back(item);
        }
        m_scanDetailHasBeenSet = true;
    }

    if (value.HasMember("RoomId") && !value["RoomId"].IsNull())
    {
        if (!value["RoomId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScanPiece.RoomId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = string(value["RoomId"].GetString());
        m_roomIdHasBeenSet = true;
    }

    if (value.HasMember("OpenId") && !value["OpenId"].IsNull())
    {
        if (!value["OpenId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScanPiece.OpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openId = string(value["OpenId"].GetString());
        m_openIdHasBeenSet = true;
    }

    if (value.HasMember("Info") && !value["Info"].IsNull())
    {
        if (!value["Info"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScanPiece.Info` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_info = string(value["Info"].GetString());
        m_infoHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ScanPiece.Offset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetUint64();
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ScanPiece.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("PieceStartTime") && !value["PieceStartTime"].IsNull())
    {
        if (!value["PieceStartTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ScanPiece.PieceStartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pieceStartTime = value["PieceStartTime"].GetUint64();
        m_pieceStartTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScanPiece::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_dumpUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DumpUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dumpUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_hitFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HitFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hitFlag, allocator);
    }

    if (m_mainTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MainType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_mainType.c_str(), allocator).Move(), allocator);
    }

    if (m_scanDetailHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ScanDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_scanDetail.begin(); itr != m_scanDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_roomIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

    if (m_openIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_infoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Info";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_info.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

    if (m_durationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_pieceStartTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PieceStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pieceStartTime, allocator);
    }

}


string ScanPiece::GetDumpUrl() const
{
    return m_dumpUrl;
}

void ScanPiece::SetDumpUrl(const string& _dumpUrl)
{
    m_dumpUrl = _dumpUrl;
    m_dumpUrlHasBeenSet = true;
}

bool ScanPiece::DumpUrlHasBeenSet() const
{
    return m_dumpUrlHasBeenSet;
}

bool ScanPiece::GetHitFlag() const
{
    return m_hitFlag;
}

void ScanPiece::SetHitFlag(const bool& _hitFlag)
{
    m_hitFlag = _hitFlag;
    m_hitFlagHasBeenSet = true;
}

bool ScanPiece::HitFlagHasBeenSet() const
{
    return m_hitFlagHasBeenSet;
}

string ScanPiece::GetMainType() const
{
    return m_mainType;
}

void ScanPiece::SetMainType(const string& _mainType)
{
    m_mainType = _mainType;
    m_mainTypeHasBeenSet = true;
}

bool ScanPiece::MainTypeHasBeenSet() const
{
    return m_mainTypeHasBeenSet;
}

vector<ScanDetail> ScanPiece::GetScanDetail() const
{
    return m_scanDetail;
}

void ScanPiece::SetScanDetail(const vector<ScanDetail>& _scanDetail)
{
    m_scanDetail = _scanDetail;
    m_scanDetailHasBeenSet = true;
}

bool ScanPiece::ScanDetailHasBeenSet() const
{
    return m_scanDetailHasBeenSet;
}

string ScanPiece::GetRoomId() const
{
    return m_roomId;
}

void ScanPiece::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool ScanPiece::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string ScanPiece::GetOpenId() const
{
    return m_openId;
}

void ScanPiece::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool ScanPiece::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string ScanPiece::GetInfo() const
{
    return m_info;
}

void ScanPiece::SetInfo(const string& _info)
{
    m_info = _info;
    m_infoHasBeenSet = true;
}

bool ScanPiece::InfoHasBeenSet() const
{
    return m_infoHasBeenSet;
}

uint64_t ScanPiece::GetOffset() const
{
    return m_offset;
}

void ScanPiece::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ScanPiece::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t ScanPiece::GetDuration() const
{
    return m_duration;
}

void ScanPiece::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool ScanPiece::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

uint64_t ScanPiece::GetPieceStartTime() const
{
    return m_pieceStartTime;
}

void ScanPiece::SetPieceStartTime(const uint64_t& _pieceStartTime)
{
    m_pieceStartTime = _pieceStartTime;
    m_pieceStartTimeHasBeenSet = true;
}

bool ScanPiece::PieceStartTimeHasBeenSet() const
{
    return m_pieceStartTimeHasBeenSet;
}

