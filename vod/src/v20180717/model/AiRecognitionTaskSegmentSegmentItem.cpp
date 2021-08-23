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

#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskSegmentSegmentItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AiRecognitionTaskSegmentSegmentItem::AiRecognitionTaskSegmentSegmentItem() :
    m_fileIdHasBeenSet(false),
    m_segmentUrlHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_startTimeOffsetHasBeenSet(false),
    m_endTimeOffsetHasBeenSet(false),
    m_covImgUrlHasBeenSet(false),
    m_specialInfoHasBeenSet(false)
{
}

CoreInternalOutcome AiRecognitionTaskSegmentSegmentItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskSegmentSegmentItem.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("SegmentUrl") && !value["SegmentUrl"].IsNull())
    {
        if (!value["SegmentUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskSegmentSegmentItem.SegmentUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_segmentUrl = string(value["SegmentUrl"].GetString());
        m_segmentUrlHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskSegmentSegmentItem.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("StartTimeOffset") && !value["StartTimeOffset"].IsNull())
    {
        if (!value["StartTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskSegmentSegmentItem.StartTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeOffset = value["StartTimeOffset"].GetDouble();
        m_startTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("EndTimeOffset") && !value["EndTimeOffset"].IsNull())
    {
        if (!value["EndTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskSegmentSegmentItem.EndTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endTimeOffset = value["EndTimeOffset"].GetDouble();
        m_endTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("CovImgUrl") && !value["CovImgUrl"].IsNull())
    {
        if (!value["CovImgUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskSegmentSegmentItem.CovImgUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_covImgUrl = string(value["CovImgUrl"].GetString());
        m_covImgUrlHasBeenSet = true;
    }

    if (value.HasMember("SpecialInfo") && !value["SpecialInfo"].IsNull())
    {
        if (!value["SpecialInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskSegmentSegmentItem.SpecialInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specialInfo = string(value["SpecialInfo"].GetString());
        m_specialInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiRecognitionTaskSegmentSegmentItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_segmentUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_startTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimeOffset, allocator);
    }

    if (m_endTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTimeOffset, allocator);
    }

    if (m_covImgUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CovImgUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_covImgUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_specialInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecialInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specialInfo.c_str(), allocator).Move(), allocator);
    }

}


string AiRecognitionTaskSegmentSegmentItem::GetFileId() const
{
    return m_fileId;
}

void AiRecognitionTaskSegmentSegmentItem::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool AiRecognitionTaskSegmentSegmentItem::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string AiRecognitionTaskSegmentSegmentItem::GetSegmentUrl() const
{
    return m_segmentUrl;
}

void AiRecognitionTaskSegmentSegmentItem::SetSegmentUrl(const string& _segmentUrl)
{
    m_segmentUrl = _segmentUrl;
    m_segmentUrlHasBeenSet = true;
}

bool AiRecognitionTaskSegmentSegmentItem::SegmentUrlHasBeenSet() const
{
    return m_segmentUrlHasBeenSet;
}

double AiRecognitionTaskSegmentSegmentItem::GetConfidence() const
{
    return m_confidence;
}

void AiRecognitionTaskSegmentSegmentItem::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool AiRecognitionTaskSegmentSegmentItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

double AiRecognitionTaskSegmentSegmentItem::GetStartTimeOffset() const
{
    return m_startTimeOffset;
}

void AiRecognitionTaskSegmentSegmentItem::SetStartTimeOffset(const double& _startTimeOffset)
{
    m_startTimeOffset = _startTimeOffset;
    m_startTimeOffsetHasBeenSet = true;
}

bool AiRecognitionTaskSegmentSegmentItem::StartTimeOffsetHasBeenSet() const
{
    return m_startTimeOffsetHasBeenSet;
}

double AiRecognitionTaskSegmentSegmentItem::GetEndTimeOffset() const
{
    return m_endTimeOffset;
}

void AiRecognitionTaskSegmentSegmentItem::SetEndTimeOffset(const double& _endTimeOffset)
{
    m_endTimeOffset = _endTimeOffset;
    m_endTimeOffsetHasBeenSet = true;
}

bool AiRecognitionTaskSegmentSegmentItem::EndTimeOffsetHasBeenSet() const
{
    return m_endTimeOffsetHasBeenSet;
}

string AiRecognitionTaskSegmentSegmentItem::GetCovImgUrl() const
{
    return m_covImgUrl;
}

void AiRecognitionTaskSegmentSegmentItem::SetCovImgUrl(const string& _covImgUrl)
{
    m_covImgUrl = _covImgUrl;
    m_covImgUrlHasBeenSet = true;
}

bool AiRecognitionTaskSegmentSegmentItem::CovImgUrlHasBeenSet() const
{
    return m_covImgUrlHasBeenSet;
}

string AiRecognitionTaskSegmentSegmentItem::GetSpecialInfo() const
{
    return m_specialInfo;
}

void AiRecognitionTaskSegmentSegmentItem::SetSpecialInfo(const string& _specialInfo)
{
    m_specialInfo = _specialInfo;
    m_specialInfoHasBeenSet = true;
}

bool AiRecognitionTaskSegmentSegmentItem::SpecialInfoHasBeenSet() const
{
    return m_specialInfoHasBeenSet;
}

