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

#include <tencentcloud/bma/v20221115/model/TrademarkData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bma::V20221115::Model;
using namespace std;

TrademarkData::TrademarkData() :
    m_trademarkHasBeenSet(false),
    m_trademarkStatusHasBeenSet(false),
    m_trademarkNoteHasBeenSet(false),
    m_trademarkIdHasBeenSet(false),
    m_transferHasBeenSet(false),
    m_transferStatusHasBeenSet(false),
    m_transferNoteHasBeenSet(false),
    m_trademarkNameHasBeenSet(false)
{
}

CoreInternalOutcome TrademarkData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Trademark") && !value["Trademark"].IsNull())
    {
        if (!value["Trademark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrademarkData.Trademark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trademark = string(value["Trademark"].GetString());
        m_trademarkHasBeenSet = true;
    }

    if (value.HasMember("TrademarkStatus") && !value["TrademarkStatus"].IsNull())
    {
        if (!value["TrademarkStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrademarkData.TrademarkStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_trademarkStatus = value["TrademarkStatus"].GetInt64();
        m_trademarkStatusHasBeenSet = true;
    }

    if (value.HasMember("TrademarkNote") && !value["TrademarkNote"].IsNull())
    {
        if (!value["TrademarkNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrademarkData.TrademarkNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trademarkNote = string(value["TrademarkNote"].GetString());
        m_trademarkNoteHasBeenSet = true;
    }

    if (value.HasMember("TrademarkId") && !value["TrademarkId"].IsNull())
    {
        if (!value["TrademarkId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrademarkData.TrademarkId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_trademarkId = value["TrademarkId"].GetInt64();
        m_trademarkIdHasBeenSet = true;
    }

    if (value.HasMember("Transfer") && !value["Transfer"].IsNull())
    {
        if (!value["Transfer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrademarkData.Transfer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transfer = string(value["Transfer"].GetString());
        m_transferHasBeenSet = true;
    }

    if (value.HasMember("TransferStatus") && !value["TransferStatus"].IsNull())
    {
        if (!value["TransferStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrademarkData.TransferStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transferStatus = value["TransferStatus"].GetInt64();
        m_transferStatusHasBeenSet = true;
    }

    if (value.HasMember("TransferNote") && !value["TransferNote"].IsNull())
    {
        if (!value["TransferNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrademarkData.TransferNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferNote = string(value["TransferNote"].GetString());
        m_transferNoteHasBeenSet = true;
    }

    if (value.HasMember("TrademarkName") && !value["TrademarkName"].IsNull())
    {
        if (!value["TrademarkName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrademarkData.TrademarkName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trademarkName = string(value["TrademarkName"].GetString());
        m_trademarkNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrademarkData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_trademarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trademark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trademark.c_str(), allocator).Move(), allocator);
    }

    if (m_trademarkStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrademarkStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trademarkStatus, allocator);
    }

    if (m_trademarkNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrademarkNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trademarkNote.c_str(), allocator).Move(), allocator);
    }

    if (m_trademarkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrademarkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trademarkId, allocator);
    }

    if (m_transferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transfer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transfer.c_str(), allocator).Move(), allocator);
    }

    if (m_transferStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transferStatus, allocator);
    }

    if (m_transferNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transferNote.c_str(), allocator).Move(), allocator);
    }

    if (m_trademarkNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrademarkName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trademarkName.c_str(), allocator).Move(), allocator);
    }

}


string TrademarkData::GetTrademark() const
{
    return m_trademark;
}

void TrademarkData::SetTrademark(const string& _trademark)
{
    m_trademark = _trademark;
    m_trademarkHasBeenSet = true;
}

bool TrademarkData::TrademarkHasBeenSet() const
{
    return m_trademarkHasBeenSet;
}

int64_t TrademarkData::GetTrademarkStatus() const
{
    return m_trademarkStatus;
}

void TrademarkData::SetTrademarkStatus(const int64_t& _trademarkStatus)
{
    m_trademarkStatus = _trademarkStatus;
    m_trademarkStatusHasBeenSet = true;
}

bool TrademarkData::TrademarkStatusHasBeenSet() const
{
    return m_trademarkStatusHasBeenSet;
}

string TrademarkData::GetTrademarkNote() const
{
    return m_trademarkNote;
}

void TrademarkData::SetTrademarkNote(const string& _trademarkNote)
{
    m_trademarkNote = _trademarkNote;
    m_trademarkNoteHasBeenSet = true;
}

bool TrademarkData::TrademarkNoteHasBeenSet() const
{
    return m_trademarkNoteHasBeenSet;
}

int64_t TrademarkData::GetTrademarkId() const
{
    return m_trademarkId;
}

void TrademarkData::SetTrademarkId(const int64_t& _trademarkId)
{
    m_trademarkId = _trademarkId;
    m_trademarkIdHasBeenSet = true;
}

bool TrademarkData::TrademarkIdHasBeenSet() const
{
    return m_trademarkIdHasBeenSet;
}

string TrademarkData::GetTransfer() const
{
    return m_transfer;
}

void TrademarkData::SetTransfer(const string& _transfer)
{
    m_transfer = _transfer;
    m_transferHasBeenSet = true;
}

bool TrademarkData::TransferHasBeenSet() const
{
    return m_transferHasBeenSet;
}

int64_t TrademarkData::GetTransferStatus() const
{
    return m_transferStatus;
}

void TrademarkData::SetTransferStatus(const int64_t& _transferStatus)
{
    m_transferStatus = _transferStatus;
    m_transferStatusHasBeenSet = true;
}

bool TrademarkData::TransferStatusHasBeenSet() const
{
    return m_transferStatusHasBeenSet;
}

string TrademarkData::GetTransferNote() const
{
    return m_transferNote;
}

void TrademarkData::SetTransferNote(const string& _transferNote)
{
    m_transferNote = _transferNote;
    m_transferNoteHasBeenSet = true;
}

bool TrademarkData::TransferNoteHasBeenSet() const
{
    return m_transferNoteHasBeenSet;
}

string TrademarkData::GetTrademarkName() const
{
    return m_trademarkName;
}

void TrademarkData::SetTrademarkName(const string& _trademarkName)
{
    m_trademarkName = _trademarkName;
    m_trademarkNameHasBeenSet = true;
}

bool TrademarkData::TrademarkNameHasBeenSet() const
{
    return m_trademarkNameHasBeenSet;
}

