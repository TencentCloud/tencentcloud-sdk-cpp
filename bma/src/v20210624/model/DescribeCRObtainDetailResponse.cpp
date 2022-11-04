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

#include <tencentcloud/bma/v20210624/model/DescribeCRObtainDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

DescribeCRObtainDetailResponse::DescribeCRObtainDetailResponse() :
    m_workNameHasBeenSet(false),
    m_tortURLHasBeenSet(false),
    m_obtainTimeHasBeenSet(false),
    m_obtainTypeHasBeenSet(false),
    m_obtainNumHasBeenSet(false),
    m_depositFileHasBeenSet(false),
    m_depositCertHasBeenSet(false),
    m_workTypeHasBeenSet(false),
    m_workCategoryHasBeenSet(false),
    m_tortIdHasBeenSet(false),
    m_tortNumHasBeenSet(false),
    m_obtainStatusHasBeenSet(false),
    m_obtainNoteHasBeenSet(false),
    m_obtainDurationHasBeenSet(false),
    m_obtainNameHasBeenSet(false),
    m_depositPdfCertHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCRObtainDetailResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("WorkName") && !rsp["WorkName"].IsNull())
    {
        if (!rsp["WorkName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workName = string(rsp["WorkName"].GetString());
        m_workNameHasBeenSet = true;
    }

    if (rsp.HasMember("TortURL") && !rsp["TortURL"].IsNull())
    {
        if (!rsp["TortURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TortURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tortURL = string(rsp["TortURL"].GetString());
        m_tortURLHasBeenSet = true;
    }

    if (rsp.HasMember("ObtainTime") && !rsp["ObtainTime"].IsNull())
    {
        if (!rsp["ObtainTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ObtainTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_obtainTime = string(rsp["ObtainTime"].GetString());
        m_obtainTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ObtainType") && !rsp["ObtainType"].IsNull())
    {
        if (!rsp["ObtainType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ObtainType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_obtainType = string(rsp["ObtainType"].GetString());
        m_obtainTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ObtainNum") && !rsp["ObtainNum"].IsNull())
    {
        if (!rsp["ObtainNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ObtainNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_obtainNum = string(rsp["ObtainNum"].GetString());
        m_obtainNumHasBeenSet = true;
    }

    if (rsp.HasMember("DepositFile") && !rsp["DepositFile"].IsNull())
    {
        if (!rsp["DepositFile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DepositFile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_depositFile = string(rsp["DepositFile"].GetString());
        m_depositFileHasBeenSet = true;
    }

    if (rsp.HasMember("DepositCert") && !rsp["DepositCert"].IsNull())
    {
        if (!rsp["DepositCert"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DepositCert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_depositCert = string(rsp["DepositCert"].GetString());
        m_depositCertHasBeenSet = true;
    }

    if (rsp.HasMember("WorkType") && !rsp["WorkType"].IsNull())
    {
        if (!rsp["WorkType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workType = string(rsp["WorkType"].GetString());
        m_workTypeHasBeenSet = true;
    }

    if (rsp.HasMember("WorkCategory") && !rsp["WorkCategory"].IsNull())
    {
        if (!rsp["WorkCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workCategory = string(rsp["WorkCategory"].GetString());
        m_workCategoryHasBeenSet = true;
    }

    if (rsp.HasMember("TortId") && !rsp["TortId"].IsNull())
    {
        if (!rsp["TortId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TortId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tortId = rsp["TortId"].GetInt64();
        m_tortIdHasBeenSet = true;
    }

    if (rsp.HasMember("TortNum") && !rsp["TortNum"].IsNull())
    {
        if (!rsp["TortNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TortNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tortNum = string(rsp["TortNum"].GetString());
        m_tortNumHasBeenSet = true;
    }

    if (rsp.HasMember("ObtainStatus") && !rsp["ObtainStatus"].IsNull())
    {
        if (!rsp["ObtainStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ObtainStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_obtainStatus = rsp["ObtainStatus"].GetInt64();
        m_obtainStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ObtainNote") && !rsp["ObtainNote"].IsNull())
    {
        if (!rsp["ObtainNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ObtainNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_obtainNote = string(rsp["ObtainNote"].GetString());
        m_obtainNoteHasBeenSet = true;
    }

    if (rsp.HasMember("ObtainDuration") && !rsp["ObtainDuration"].IsNull())
    {
        if (!rsp["ObtainDuration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ObtainDuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_obtainDuration = string(rsp["ObtainDuration"].GetString());
        m_obtainDurationHasBeenSet = true;
    }

    if (rsp.HasMember("ObtainName") && !rsp["ObtainName"].IsNull())
    {
        if (!rsp["ObtainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ObtainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_obtainName = string(rsp["ObtainName"].GetString());
        m_obtainNameHasBeenSet = true;
    }

    if (rsp.HasMember("DepositPdfCert") && !rsp["DepositPdfCert"].IsNull())
    {
        if (!rsp["DepositPdfCert"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DepositPdfCert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_depositPdfCert = string(rsp["DepositPdfCert"].GetString());
        m_depositPdfCertHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCRObtainDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_workNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workName.c_str(), allocator).Move(), allocator);
    }

    if (m_tortURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tortURL.c_str(), allocator).Move(), allocator);
    }

    if (m_obtainTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObtainTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_obtainTime.c_str(), allocator).Move(), allocator);
    }

    if (m_obtainTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObtainType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_obtainType.c_str(), allocator).Move(), allocator);
    }

    if (m_obtainNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObtainNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_obtainNum.c_str(), allocator).Move(), allocator);
    }

    if (m_depositFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepositFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_depositFile.c_str(), allocator).Move(), allocator);
    }

    if (m_depositCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepositCert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_depositCert.c_str(), allocator).Move(), allocator);
    }

    if (m_workTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workType.c_str(), allocator).Move(), allocator);
    }

    if (m_workCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_tortIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tortId, allocator);
    }

    if (m_tortNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tortNum.c_str(), allocator).Move(), allocator);
    }

    if (m_obtainStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObtainStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_obtainStatus, allocator);
    }

    if (m_obtainNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObtainNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_obtainNote.c_str(), allocator).Move(), allocator);
    }

    if (m_obtainDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObtainDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_obtainDuration.c_str(), allocator).Move(), allocator);
    }

    if (m_obtainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObtainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_obtainName.c_str(), allocator).Move(), allocator);
    }

    if (m_depositPdfCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepositPdfCert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_depositPdfCert.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeCRObtainDetailResponse::GetWorkName() const
{
    return m_workName;
}

bool DescribeCRObtainDetailResponse::WorkNameHasBeenSet() const
{
    return m_workNameHasBeenSet;
}

string DescribeCRObtainDetailResponse::GetTortURL() const
{
    return m_tortURL;
}

bool DescribeCRObtainDetailResponse::TortURLHasBeenSet() const
{
    return m_tortURLHasBeenSet;
}

string DescribeCRObtainDetailResponse::GetObtainTime() const
{
    return m_obtainTime;
}

bool DescribeCRObtainDetailResponse::ObtainTimeHasBeenSet() const
{
    return m_obtainTimeHasBeenSet;
}

string DescribeCRObtainDetailResponse::GetObtainType() const
{
    return m_obtainType;
}

bool DescribeCRObtainDetailResponse::ObtainTypeHasBeenSet() const
{
    return m_obtainTypeHasBeenSet;
}

string DescribeCRObtainDetailResponse::GetObtainNum() const
{
    return m_obtainNum;
}

bool DescribeCRObtainDetailResponse::ObtainNumHasBeenSet() const
{
    return m_obtainNumHasBeenSet;
}

string DescribeCRObtainDetailResponse::GetDepositFile() const
{
    return m_depositFile;
}

bool DescribeCRObtainDetailResponse::DepositFileHasBeenSet() const
{
    return m_depositFileHasBeenSet;
}

string DescribeCRObtainDetailResponse::GetDepositCert() const
{
    return m_depositCert;
}

bool DescribeCRObtainDetailResponse::DepositCertHasBeenSet() const
{
    return m_depositCertHasBeenSet;
}

string DescribeCRObtainDetailResponse::GetWorkType() const
{
    return m_workType;
}

bool DescribeCRObtainDetailResponse::WorkTypeHasBeenSet() const
{
    return m_workTypeHasBeenSet;
}

string DescribeCRObtainDetailResponse::GetWorkCategory() const
{
    return m_workCategory;
}

bool DescribeCRObtainDetailResponse::WorkCategoryHasBeenSet() const
{
    return m_workCategoryHasBeenSet;
}

int64_t DescribeCRObtainDetailResponse::GetTortId() const
{
    return m_tortId;
}

bool DescribeCRObtainDetailResponse::TortIdHasBeenSet() const
{
    return m_tortIdHasBeenSet;
}

string DescribeCRObtainDetailResponse::GetTortNum() const
{
    return m_tortNum;
}

bool DescribeCRObtainDetailResponse::TortNumHasBeenSet() const
{
    return m_tortNumHasBeenSet;
}

int64_t DescribeCRObtainDetailResponse::GetObtainStatus() const
{
    return m_obtainStatus;
}

bool DescribeCRObtainDetailResponse::ObtainStatusHasBeenSet() const
{
    return m_obtainStatusHasBeenSet;
}

string DescribeCRObtainDetailResponse::GetObtainNote() const
{
    return m_obtainNote;
}

bool DescribeCRObtainDetailResponse::ObtainNoteHasBeenSet() const
{
    return m_obtainNoteHasBeenSet;
}

string DescribeCRObtainDetailResponse::GetObtainDuration() const
{
    return m_obtainDuration;
}

bool DescribeCRObtainDetailResponse::ObtainDurationHasBeenSet() const
{
    return m_obtainDurationHasBeenSet;
}

string DescribeCRObtainDetailResponse::GetObtainName() const
{
    return m_obtainName;
}

bool DescribeCRObtainDetailResponse::ObtainNameHasBeenSet() const
{
    return m_obtainNameHasBeenSet;
}

string DescribeCRObtainDetailResponse::GetDepositPdfCert() const
{
    return m_depositPdfCert;
}

bool DescribeCRObtainDetailResponse::DepositPdfCertHasBeenSet() const
{
    return m_depositPdfCertHasBeenSet;
}


