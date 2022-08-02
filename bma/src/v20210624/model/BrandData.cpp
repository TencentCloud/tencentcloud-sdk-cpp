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

#include <tencentcloud/bma/v20210624/model/BrandData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

BrandData::BrandData() :
    m_brandNameHasBeenSet(false),
    m_brandCertificateNameHasBeenSet(false),
    m_brandStatusHasBeenSet(false),
    m_brandNoteHasBeenSet(false),
    m_transferNameHasBeenSet(false),
    m_transferStatusHasBeenSet(false),
    m_transferNoteHasBeenSet(false)
{
}

CoreInternalOutcome BrandData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BrandName") && !value["BrandName"].IsNull())
    {
        if (!value["BrandName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrandData.BrandName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brandName = string(value["BrandName"].GetString());
        m_brandNameHasBeenSet = true;
    }

    if (value.HasMember("BrandCertificateName") && !value["BrandCertificateName"].IsNull())
    {
        if (!value["BrandCertificateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrandData.BrandCertificateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brandCertificateName = string(value["BrandCertificateName"].GetString());
        m_brandCertificateNameHasBeenSet = true;
    }

    if (value.HasMember("BrandStatus") && !value["BrandStatus"].IsNull())
    {
        if (!value["BrandStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BrandData.BrandStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_brandStatus = value["BrandStatus"].GetInt64();
        m_brandStatusHasBeenSet = true;
    }

    if (value.HasMember("BrandNote") && !value["BrandNote"].IsNull())
    {
        if (!value["BrandNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrandData.BrandNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brandNote = string(value["BrandNote"].GetString());
        m_brandNoteHasBeenSet = true;
    }

    if (value.HasMember("TransferName") && !value["TransferName"].IsNull())
    {
        if (!value["TransferName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrandData.TransferName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferName = string(value["TransferName"].GetString());
        m_transferNameHasBeenSet = true;
    }

    if (value.HasMember("TransferStatus") && !value["TransferStatus"].IsNull())
    {
        if (!value["TransferStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BrandData.TransferStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transferStatus = value["TransferStatus"].GetInt64();
        m_transferStatusHasBeenSet = true;
    }

    if (value.HasMember("TransferNote") && !value["TransferNote"].IsNull())
    {
        if (!value["TransferNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrandData.TransferNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferNote = string(value["TransferNote"].GetString());
        m_transferNoteHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BrandData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_brandNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrandName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brandName.c_str(), allocator).Move(), allocator);
    }

    if (m_brandCertificateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrandCertificateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brandCertificateName.c_str(), allocator).Move(), allocator);
    }

    if (m_brandStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrandStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_brandStatus, allocator);
    }

    if (m_brandNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrandNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brandNote.c_str(), allocator).Move(), allocator);
    }

    if (m_transferNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transferName.c_str(), allocator).Move(), allocator);
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

}


string BrandData::GetBrandName() const
{
    return m_brandName;
}

void BrandData::SetBrandName(const string& _brandName)
{
    m_brandName = _brandName;
    m_brandNameHasBeenSet = true;
}

bool BrandData::BrandNameHasBeenSet() const
{
    return m_brandNameHasBeenSet;
}

string BrandData::GetBrandCertificateName() const
{
    return m_brandCertificateName;
}

void BrandData::SetBrandCertificateName(const string& _brandCertificateName)
{
    m_brandCertificateName = _brandCertificateName;
    m_brandCertificateNameHasBeenSet = true;
}

bool BrandData::BrandCertificateNameHasBeenSet() const
{
    return m_brandCertificateNameHasBeenSet;
}

int64_t BrandData::GetBrandStatus() const
{
    return m_brandStatus;
}

void BrandData::SetBrandStatus(const int64_t& _brandStatus)
{
    m_brandStatus = _brandStatus;
    m_brandStatusHasBeenSet = true;
}

bool BrandData::BrandStatusHasBeenSet() const
{
    return m_brandStatusHasBeenSet;
}

string BrandData::GetBrandNote() const
{
    return m_brandNote;
}

void BrandData::SetBrandNote(const string& _brandNote)
{
    m_brandNote = _brandNote;
    m_brandNoteHasBeenSet = true;
}

bool BrandData::BrandNoteHasBeenSet() const
{
    return m_brandNoteHasBeenSet;
}

string BrandData::GetTransferName() const
{
    return m_transferName;
}

void BrandData::SetTransferName(const string& _transferName)
{
    m_transferName = _transferName;
    m_transferNameHasBeenSet = true;
}

bool BrandData::TransferNameHasBeenSet() const
{
    return m_transferNameHasBeenSet;
}

int64_t BrandData::GetTransferStatus() const
{
    return m_transferStatus;
}

void BrandData::SetTransferStatus(const int64_t& _transferStatus)
{
    m_transferStatus = _transferStatus;
    m_transferStatusHasBeenSet = true;
}

bool BrandData::TransferStatusHasBeenSet() const
{
    return m_transferStatusHasBeenSet;
}

string BrandData::GetTransferNote() const
{
    return m_transferNote;
}

void BrandData::SetTransferNote(const string& _transferNote)
{
    m_transferNote = _transferNote;
    m_transferNoteHasBeenSet = true;
}

bool BrandData::TransferNoteHasBeenSet() const
{
    return m_transferNoteHasBeenSet;
}

