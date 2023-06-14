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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_IMAGEDATA_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_IMAGEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/ImageOcr.h>
#include <tencentcloud/ivld/v20210903/model/MultiLevelTag.h>
#include <tencentcloud/ivld/v20210903/model/MultiLevelPersonInfo.h>
#include <tencentcloud/ivld/v20210903/model/ImageLogo.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 图片文件标签结果
                */
                class ImageData : public AbstractModel
                {
                public:
                    ImageData();
                    ~ImageData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片中出现的可视文本识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OcrSet 图片中出现的可视文本识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ImageOcr> GetOcrSet() const;

                    /**
                     * 设置图片中出现的可视文本识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ocrSet 图片中出现的可视文本识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOcrSet(const std::vector<ImageOcr>& _ocrSet);

                    /**
                     * 判断参数 OcrSet 是否已赋值
                     * @return OcrSet 是否已赋值
                     * 
                     */
                    bool OcrSetHasBeenSet() const;

                    /**
                     * 获取图片中出现的帧标签识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrameTagSet 图片中出现的帧标签识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MultiLevelTag GetFrameTagSet() const;

                    /**
                     * 设置图片中出现的帧标签识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frameTagSet 图片中出现的帧标签识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrameTagSet(const MultiLevelTag& _frameTagSet);

                    /**
                     * 判断参数 FrameTagSet 是否已赋值
                     * @return FrameTagSet 是否已赋值
                     * 
                     */
                    bool FrameTagSetHasBeenSet() const;

                    /**
                     * 获取图片中出现的层级人物识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MultiLevelPersonInfoSet 图片中出现的层级人物识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MultiLevelPersonInfo> GetMultiLevelPersonInfoSet() const;

                    /**
                     * 设置图片中出现的层级人物识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _multiLevelPersonInfoSet 图片中出现的层级人物识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMultiLevelPersonInfoSet(const std::vector<MultiLevelPersonInfo>& _multiLevelPersonInfoSet);

                    /**
                     * 判断参数 MultiLevelPersonInfoSet 是否已赋值
                     * @return MultiLevelPersonInfoSet 是否已赋值
                     * 
                     */
                    bool MultiLevelPersonInfoSetHasBeenSet() const;

                    /**
                     * 获取图片中出现的台标识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TvLogo 图片中出现的台标识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageLogo GetTvLogo() const;

                    /**
                     * 设置图片中出现的台标识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tvLogo 图片中出现的台标识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTvLogo(const ImageLogo& _tvLogo);

                    /**
                     * 判断参数 TvLogo 是否已赋值
                     * @return TvLogo 是否已赋值
                     * 
                     */
                    bool TvLogoHasBeenSet() const;

                    /**
                     * 获取图片中出现的来源信息识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceLogo 图片中出现的来源信息识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageLogo GetSourceLogo() const;

                    /**
                     * 设置图片中出现的来源信息识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceLogo 图片中出现的来源信息识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceLogo(const ImageLogo& _sourceLogo);

                    /**
                     * 判断参数 SourceLogo 是否已赋值
                     * @return SourceLogo 是否已赋值
                     * 
                     */
                    bool SourceLogoHasBeenSet() const;

                private:

                    /**
                     * 图片中出现的可视文本识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ImageOcr> m_ocrSet;
                    bool m_ocrSetHasBeenSet;

                    /**
                     * 图片中出现的帧标签识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MultiLevelTag m_frameTagSet;
                    bool m_frameTagSetHasBeenSet;

                    /**
                     * 图片中出现的层级人物识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MultiLevelPersonInfo> m_multiLevelPersonInfoSet;
                    bool m_multiLevelPersonInfoSetHasBeenSet;

                    /**
                     * 图片中出现的台标识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageLogo m_tvLogo;
                    bool m_tvLogoHasBeenSet;

                    /**
                     * 图片中出现的来源信息识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageLogo m_sourceLogo;
                    bool m_sourceLogoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_IMAGEDATA_H_
