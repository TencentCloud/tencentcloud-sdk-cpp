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

#include <tencentcloud/tione/v20211111/model/FilterLabelInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

FilterLabelInfo::FilterLabelInfo() :
    m_datasetIdHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_classificationLabelsHasBeenSet(false),
    m_detectionLabelsHasBeenSet(false),
    m_segmentationLabelsHasBeenSet(false),
    m_rGBPathHasBeenSet(false),
    m_labelTemplateTypeHasBeenSet(false),
    m_downloadUrlHasBeenSet(false),
    m_downloadThumbnailUrlHasBeenSet(false),
    m_downloadRGBUrlHasBeenSet(false),
    m_ocrSceneHasBeenSet(false),
    m_ocrLabelsHasBeenSet(false)
{
}

CoreInternalOutcome FilterLabelInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatasetId") && !value["DatasetId"].IsNull())
    {
        if (!value["DatasetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilterLabelInfo.DatasetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasetId = string(value["DatasetId"].GetString());
        m_datasetIdHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilterLabelInfo.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilterLabelInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("ClassificationLabels") && !value["ClassificationLabels"].IsNull())
    {
        if (!value["ClassificationLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FilterLabelInfo.ClassificationLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["ClassificationLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_classificationLabels.push_back((*itr).GetString());
        }
        m_classificationLabelsHasBeenSet = true;
    }

    if (value.HasMember("DetectionLabels") && !value["DetectionLabels"].IsNull())
    {
        if (!value["DetectionLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FilterLabelInfo.DetectionLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["DetectionLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DetectionLabelInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detectionLabels.push_back(item);
        }
        m_detectionLabelsHasBeenSet = true;
    }

    if (value.HasMember("SegmentationLabels") && !value["SegmentationLabels"].IsNull())
    {
        if (!value["SegmentationLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FilterLabelInfo.SegmentationLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["SegmentationLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SegmentationInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_segmentationLabels.push_back(item);
        }
        m_segmentationLabelsHasBeenSet = true;
    }

    if (value.HasMember("RGBPath") && !value["RGBPath"].IsNull())
    {
        if (!value["RGBPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilterLabelInfo.RGBPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rGBPath = string(value["RGBPath"].GetString());
        m_rGBPathHasBeenSet = true;
    }

    if (value.HasMember("LabelTemplateType") && !value["LabelTemplateType"].IsNull())
    {
        if (!value["LabelTemplateType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilterLabelInfo.LabelTemplateType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelTemplateType = string(value["LabelTemplateType"].GetString());
        m_labelTemplateTypeHasBeenSet = true;
    }

    if (value.HasMember("DownloadUrl") && !value["DownloadUrl"].IsNull())
    {
        if (!value["DownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilterLabelInfo.DownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadUrl = string(value["DownloadUrl"].GetString());
        m_downloadUrlHasBeenSet = true;
    }

    if (value.HasMember("DownloadThumbnailUrl") && !value["DownloadThumbnailUrl"].IsNull())
    {
        if (!value["DownloadThumbnailUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilterLabelInfo.DownloadThumbnailUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadThumbnailUrl = string(value["DownloadThumbnailUrl"].GetString());
        m_downloadThumbnailUrlHasBeenSet = true;
    }

    if (value.HasMember("DownloadRGBUrl") && !value["DownloadRGBUrl"].IsNull())
    {
        if (!value["DownloadRGBUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilterLabelInfo.DownloadRGBUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadRGBUrl = string(value["DownloadRGBUrl"].GetString());
        m_downloadRGBUrlHasBeenSet = true;
    }

    if (value.HasMember("OcrScene") && !value["OcrScene"].IsNull())
    {
        if (!value["OcrScene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilterLabelInfo.OcrScene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocrScene = string(value["OcrScene"].GetString());
        m_ocrSceneHasBeenSet = true;
    }

    if (value.HasMember("OcrLabels") && !value["OcrLabels"].IsNull())
    {
        if (!value["OcrLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FilterLabelInfo.OcrLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["OcrLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OcrLabelInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ocrLabels.push_back(item);
        }
        m_ocrLabelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FilterLabelInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_datasetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasetId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_classificationLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassificationLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_classificationLabels.begin(); itr != m_classificationLabels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_detectionLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectionLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detectionLabels.begin(); itr != m_detectionLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_segmentationLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentationLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_segmentationLabels.begin(); itr != m_segmentationLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rGBPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RGBPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rGBPath.c_str(), allocator).Move(), allocator);
    }

    if (m_labelTemplateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelTemplateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelTemplateType.c_str(), allocator).Move(), allocator);
    }

    if (m_downloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_downloadThumbnailUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadThumbnailUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadThumbnailUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_downloadRGBUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadRGBUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadRGBUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_ocrSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrScene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ocrScene.c_str(), allocator).Move(), allocator);
    }

    if (m_ocrLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ocrLabels.begin(); itr != m_ocrLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string FilterLabelInfo::GetDatasetId() const
{
    return m_datasetId;
}

void FilterLabelInfo::SetDatasetId(const string& _datasetId)
{
    m_datasetId = _datasetId;
    m_datasetIdHasBeenSet = true;
}

bool FilterLabelInfo::DatasetIdHasBeenSet() const
{
    return m_datasetIdHasBeenSet;
}

string FilterLabelInfo::GetFileId() const
{
    return m_fileId;
}

void FilterLabelInfo::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool FilterLabelInfo::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string FilterLabelInfo::GetFileName() const
{
    return m_fileName;
}

void FilterLabelInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool FilterLabelInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

vector<string> FilterLabelInfo::GetClassificationLabels() const
{
    return m_classificationLabels;
}

void FilterLabelInfo::SetClassificationLabels(const vector<string>& _classificationLabels)
{
    m_classificationLabels = _classificationLabels;
    m_classificationLabelsHasBeenSet = true;
}

bool FilterLabelInfo::ClassificationLabelsHasBeenSet() const
{
    return m_classificationLabelsHasBeenSet;
}

vector<DetectionLabelInfo> FilterLabelInfo::GetDetectionLabels() const
{
    return m_detectionLabels;
}

void FilterLabelInfo::SetDetectionLabels(const vector<DetectionLabelInfo>& _detectionLabels)
{
    m_detectionLabels = _detectionLabels;
    m_detectionLabelsHasBeenSet = true;
}

bool FilterLabelInfo::DetectionLabelsHasBeenSet() const
{
    return m_detectionLabelsHasBeenSet;
}

vector<SegmentationInfo> FilterLabelInfo::GetSegmentationLabels() const
{
    return m_segmentationLabels;
}

void FilterLabelInfo::SetSegmentationLabels(const vector<SegmentationInfo>& _segmentationLabels)
{
    m_segmentationLabels = _segmentationLabels;
    m_segmentationLabelsHasBeenSet = true;
}

bool FilterLabelInfo::SegmentationLabelsHasBeenSet() const
{
    return m_segmentationLabelsHasBeenSet;
}

string FilterLabelInfo::GetRGBPath() const
{
    return m_rGBPath;
}

void FilterLabelInfo::SetRGBPath(const string& _rGBPath)
{
    m_rGBPath = _rGBPath;
    m_rGBPathHasBeenSet = true;
}

bool FilterLabelInfo::RGBPathHasBeenSet() const
{
    return m_rGBPathHasBeenSet;
}

string FilterLabelInfo::GetLabelTemplateType() const
{
    return m_labelTemplateType;
}

void FilterLabelInfo::SetLabelTemplateType(const string& _labelTemplateType)
{
    m_labelTemplateType = _labelTemplateType;
    m_labelTemplateTypeHasBeenSet = true;
}

bool FilterLabelInfo::LabelTemplateTypeHasBeenSet() const
{
    return m_labelTemplateTypeHasBeenSet;
}

string FilterLabelInfo::GetDownloadUrl() const
{
    return m_downloadUrl;
}

void FilterLabelInfo::SetDownloadUrl(const string& _downloadUrl)
{
    m_downloadUrl = _downloadUrl;
    m_downloadUrlHasBeenSet = true;
}

bool FilterLabelInfo::DownloadUrlHasBeenSet() const
{
    return m_downloadUrlHasBeenSet;
}

string FilterLabelInfo::GetDownloadThumbnailUrl() const
{
    return m_downloadThumbnailUrl;
}

void FilterLabelInfo::SetDownloadThumbnailUrl(const string& _downloadThumbnailUrl)
{
    m_downloadThumbnailUrl = _downloadThumbnailUrl;
    m_downloadThumbnailUrlHasBeenSet = true;
}

bool FilterLabelInfo::DownloadThumbnailUrlHasBeenSet() const
{
    return m_downloadThumbnailUrlHasBeenSet;
}

string FilterLabelInfo::GetDownloadRGBUrl() const
{
    return m_downloadRGBUrl;
}

void FilterLabelInfo::SetDownloadRGBUrl(const string& _downloadRGBUrl)
{
    m_downloadRGBUrl = _downloadRGBUrl;
    m_downloadRGBUrlHasBeenSet = true;
}

bool FilterLabelInfo::DownloadRGBUrlHasBeenSet() const
{
    return m_downloadRGBUrlHasBeenSet;
}

string FilterLabelInfo::GetOcrScene() const
{
    return m_ocrScene;
}

void FilterLabelInfo::SetOcrScene(const string& _ocrScene)
{
    m_ocrScene = _ocrScene;
    m_ocrSceneHasBeenSet = true;
}

bool FilterLabelInfo::OcrSceneHasBeenSet() const
{
    return m_ocrSceneHasBeenSet;
}

vector<OcrLabelInfo> FilterLabelInfo::GetOcrLabels() const
{
    return m_ocrLabels;
}

void FilterLabelInfo::SetOcrLabels(const vector<OcrLabelInfo>& _ocrLabels)
{
    m_ocrLabels = _ocrLabels;
    m_ocrLabelsHasBeenSet = true;
}

bool FilterLabelInfo::OcrLabelsHasBeenSet() const
{
    return m_ocrLabelsHasBeenSet;
}

