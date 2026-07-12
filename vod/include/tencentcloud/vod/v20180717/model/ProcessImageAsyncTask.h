/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCTASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ImageEncodeConfig.h>
#include <tencentcloud/vod/v20180717/model/ImageEnhanceConfig.h>
#include <tencentcloud/vod/v20180717/model/ImageBeautyConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 图片异步处理配置。
                */
                class ProcessImageAsyncTask : public AbstractModel
                {
                public:
                    ProcessImageAsyncTask();
                    ~ProcessImageAsyncTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>图片转码输出配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EncodeConfig <p>图片转码输出配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageEncodeConfig GetEncodeConfig() const;

                    /**
                     * 设置<p>图片转码输出配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _encodeConfig <p>图片转码输出配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEncodeConfig(const ImageEncodeConfig& _encodeConfig);

                    /**
                     * 判断参数 EncodeConfig 是否已赋值
                     * @return EncodeConfig 是否已赋值
                     * 
                     */
                    bool EncodeConfigHasBeenSet() const;

                    /**
                     * 获取<p>图片增强配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnhanceConfig <p>图片增强配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageEnhanceConfig GetEnhanceConfig() const;

                    /**
                     * 设置<p>图片增强配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enhanceConfig <p>图片增强配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnhanceConfig(const ImageEnhanceConfig& _enhanceConfig);

                    /**
                     * 判断参数 EnhanceConfig 是否已赋值
                     * @return EnhanceConfig 是否已赋值
                     * 
                     */
                    bool EnhanceConfigHasBeenSet() const;

                    /**
                     * 获取<p>图片美颜配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BeautyConfig <p>图片美颜配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageBeautyConfig GetBeautyConfig() const;

                    /**
                     * 设置<p>图片美颜配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _beautyConfig <p>图片美颜配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBeautyConfig(const ImageBeautyConfig& _beautyConfig);

                    /**
                     * 判断参数 BeautyConfig 是否已赋值
                     * @return BeautyConfig 是否已赋值
                     * 
                     */
                    bool BeautyConfigHasBeenSet() const;

                private:

                    /**
                     * <p>图片转码输出配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageEncodeConfig m_encodeConfig;
                    bool m_encodeConfigHasBeenSet;

                    /**
                     * <p>图片增强配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageEnhanceConfig m_enhanceConfig;
                    bool m_enhanceConfigHasBeenSet;

                    /**
                     * <p>图片美颜配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageBeautyConfig m_beautyConfig;
                    bool m_beautyConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCTASK_H_
