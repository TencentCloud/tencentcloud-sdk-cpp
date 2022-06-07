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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_FILTERLABELINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_FILTERLABELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/DetectionLabelInfo.h>
#include <tencentcloud/tione/v20211111/model/SegmentationInfo.h>
#include <tencentcloud/tione/v20211111/model/OcrLabelInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 图片列表查询结果详情
                */
                class FilterLabelInfo : public AbstractModel
                {
                public:
                    FilterLabelInfo();
                    ~FilterLabelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据集id
                     * @return DatasetId 数据集id
                     */
                    std::string GetDatasetId() const;

                    /**
                     * 设置数据集id
                     * @param DatasetId 数据集id
                     */
                    void SetDatasetId(const std::string& _datasetId);

                    /**
                     * 判断参数 DatasetId 是否已赋值
                     * @return DatasetId 是否已赋值
                     */
                    bool DatasetIdHasBeenSet() const;

                    /**
                     * 获取文件ID
                     * @return FileId 文件ID
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置文件ID
                     * @param FileId 文件ID
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取文件路径
                     * @return FileName 文件路径
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件路径
                     * @param FileName 文件路径
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取分类标签结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassificationLabels 分类标签结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetClassificationLabels() const;

                    /**
                     * 设置分类标签结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClassificationLabels 分类标签结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClassificationLabels(const std::vector<std::string>& _classificationLabels);

                    /**
                     * 判断参数 ClassificationLabels 是否已赋值
                     * @return ClassificationLabels 是否已赋值
                     */
                    bool ClassificationLabelsHasBeenSet() const;

                    /**
                     * 获取检测标签结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetectionLabels 检测标签结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DetectionLabelInfo> GetDetectionLabels() const;

                    /**
                     * 设置检测标签结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DetectionLabels 检测标签结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDetectionLabels(const std::vector<DetectionLabelInfo>& _detectionLabels);

                    /**
                     * 判断参数 DetectionLabels 是否已赋值
                     * @return DetectionLabels 是否已赋值
                     */
                    bool DetectionLabelsHasBeenSet() const;

                    /**
                     * 获取分割标签结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SegmentationLabels 分割标签结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SegmentationInfo> GetSegmentationLabels() const;

                    /**
                     * 设置分割标签结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SegmentationLabels 分割标签结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSegmentationLabels(const std::vector<SegmentationInfo>& _segmentationLabels);

                    /**
                     * 判断参数 SegmentationLabels 是否已赋值
                     * @return SegmentationLabels 是否已赋值
                     */
                    bool SegmentationLabelsHasBeenSet() const;

                    /**
                     * 获取RGB 图片路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RGBPath RGB 图片路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRGBPath() const;

                    /**
                     * 设置RGB 图片路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RGBPath RGB 图片路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRGBPath(const std::string& _rGBPath);

                    /**
                     * 判断参数 RGBPath 是否已赋值
                     * @return RGBPath 是否已赋值
                     */
                    bool RGBPathHasBeenSet() const;

                    /**
                     * 获取标签模板类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelTemplateType 标签模板类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLabelTemplateType() const;

                    /**
                     * 设置标签模板类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LabelTemplateType 标签模板类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLabelTemplateType(const std::string& _labelTemplateType);

                    /**
                     * 判断参数 LabelTemplateType 是否已赋值
                     * @return LabelTemplateType 是否已赋值
                     */
                    bool LabelTemplateTypeHasBeenSet() const;

                    /**
                     * 获取下载url链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownloadUrl 下载url链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 设置下载url链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DownloadUrl 下载url链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDownloadUrl(const std::string& _downloadUrl);

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取缩略图下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownloadThumbnailUrl 缩略图下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDownloadThumbnailUrl() const;

                    /**
                     * 设置缩略图下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DownloadThumbnailUrl 缩略图下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDownloadThumbnailUrl(const std::string& _downloadThumbnailUrl);

                    /**
                     * 判断参数 DownloadThumbnailUrl 是否已赋值
                     * @return DownloadThumbnailUrl 是否已赋值
                     */
                    bool DownloadThumbnailUrlHasBeenSet() const;

                    /**
                     * 获取分割结果图片下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownloadRGBUrl 分割结果图片下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDownloadRGBUrl() const;

                    /**
                     * 设置分割结果图片下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DownloadRGBUrl 分割结果图片下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDownloadRGBUrl(const std::string& _downloadRGBUrl);

                    /**
                     * 判断参数 DownloadRGBUrl 是否已赋值
                     * @return DownloadRGBUrl 是否已赋值
                     */
                    bool DownloadRGBUrlHasBeenSet() const;

                    /**
                     * 获取OCR场景
IDENTITY：识别
STRUCTURE：智能结构化
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OcrScene OCR场景
IDENTITY：识别
STRUCTURE：智能结构化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOcrScene() const;

                    /**
                     * 设置OCR场景
IDENTITY：识别
STRUCTURE：智能结构化
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OcrScene OCR场景
IDENTITY：识别
STRUCTURE：智能结构化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOcrScene(const std::string& _ocrScene);

                    /**
                     * 判断参数 OcrScene 是否已赋值
                     * @return OcrScene 是否已赋值
                     */
                    bool OcrSceneHasBeenSet() const;

                    /**
                     * 获取OCR场景标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OcrLabels OCR场景标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OcrLabelInfo> GetOcrLabels() const;

                    /**
                     * 设置OCR场景标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OcrLabels OCR场景标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOcrLabels(const std::vector<OcrLabelInfo>& _ocrLabels);

                    /**
                     * 判断参数 OcrLabels 是否已赋值
                     * @return OcrLabels 是否已赋值
                     */
                    bool OcrLabelsHasBeenSet() const;

                private:

                    /**
                     * 数据集id
                     */
                    std::string m_datasetId;
                    bool m_datasetIdHasBeenSet;

                    /**
                     * 文件ID
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 文件路径
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 分类标签结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_classificationLabels;
                    bool m_classificationLabelsHasBeenSet;

                    /**
                     * 检测标签结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DetectionLabelInfo> m_detectionLabels;
                    bool m_detectionLabelsHasBeenSet;

                    /**
                     * 分割标签结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SegmentationInfo> m_segmentationLabels;
                    bool m_segmentationLabelsHasBeenSet;

                    /**
                     * RGB 图片路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rGBPath;
                    bool m_rGBPathHasBeenSet;

                    /**
                     * 标签模板类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_labelTemplateType;
                    bool m_labelTemplateTypeHasBeenSet;

                    /**
                     * 下载url链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * 缩略图下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_downloadThumbnailUrl;
                    bool m_downloadThumbnailUrlHasBeenSet;

                    /**
                     * 分割结果图片下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_downloadRGBUrl;
                    bool m_downloadRGBUrlHasBeenSet;

                    /**
                     * OCR场景
IDENTITY：识别
STRUCTURE：智能结构化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ocrScene;
                    bool m_ocrSceneHasBeenSet;

                    /**
                     * OCR场景标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OcrLabelInfo> m_ocrLabels;
                    bool m_ocrLabelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_FILTERLABELINFO_H_
