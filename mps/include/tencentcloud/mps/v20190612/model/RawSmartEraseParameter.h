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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_RAWSMARTERASEPARAMETER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_RAWSMARTERASEPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SmartEraseSubtitleConfig.h>
#include <tencentcloud/mps/v20190612/model/SmartEraseWatermarkConfig.h>
#include <tencentcloud/mps/v20190612/model/SmartErasePrivacyConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 智能擦除自定义参数
                */
                class RawSmartEraseParameter : public AbstractModel
                {
                public:
                    RawSmartEraseParameter();
                    ~RawSmartEraseParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取擦除类型
- subtitle 去字幕
- watermark 去水印
- privacy 隐私保护
                     * @return EraseType 擦除类型
- subtitle 去字幕
- watermark 去水印
- privacy 隐私保护
                     * 
                     */
                    std::string GetEraseType() const;

                    /**
                     * 设置擦除类型
- subtitle 去字幕
- watermark 去水印
- privacy 隐私保护
                     * @param _eraseType 擦除类型
- subtitle 去字幕
- watermark 去水印
- privacy 隐私保护
                     * 
                     */
                    void SetEraseType(const std::string& _eraseType);

                    /**
                     * 判断参数 EraseType 是否已赋值
                     * @return EraseType 是否已赋值
                     * 
                     */
                    bool EraseTypeHasBeenSet() const;

                    /**
                     * 获取字幕擦除配置；
当EraseType值为：subtitle，此字段为必填参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EraseSubtitleConfig 字幕擦除配置；
当EraseType值为：subtitle，此字段为必填参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartEraseSubtitleConfig GetEraseSubtitleConfig() const;

                    /**
                     * 设置字幕擦除配置；
当EraseType值为：subtitle，此字段为必填参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eraseSubtitleConfig 字幕擦除配置；
当EraseType值为：subtitle，此字段为必填参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEraseSubtitleConfig(const SmartEraseSubtitleConfig& _eraseSubtitleConfig);

                    /**
                     * 判断参数 EraseSubtitleConfig 是否已赋值
                     * @return EraseSubtitleConfig 是否已赋值
                     * 
                     */
                    bool EraseSubtitleConfigHasBeenSet() const;

                    /**
                     * 获取水印擦除配置；
当EraseType值为：watermark，此字段为必填参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EraseWatermarkConfig 水印擦除配置；
当EraseType值为：watermark，此字段为必填参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartEraseWatermarkConfig GetEraseWatermarkConfig() const;

                    /**
                     * 设置水印擦除配置；
当EraseType值为：watermark，此字段为必填参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eraseWatermarkConfig 水印擦除配置；
当EraseType值为：watermark，此字段为必填参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEraseWatermarkConfig(const SmartEraseWatermarkConfig& _eraseWatermarkConfig);

                    /**
                     * 判断参数 EraseWatermarkConfig 是否已赋值
                     * @return EraseWatermarkConfig 是否已赋值
                     * 
                     */
                    bool EraseWatermarkConfigHasBeenSet() const;

                    /**
                     * 获取隐私保护配置；
当EraseType值为：privacy，此字段为必填参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErasePrivacyConfig 隐私保护配置；
当EraseType值为：privacy，此字段为必填参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartErasePrivacyConfig GetErasePrivacyConfig() const;

                    /**
                     * 设置隐私保护配置；
当EraseType值为：privacy，此字段为必填参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _erasePrivacyConfig 隐私保护配置；
当EraseType值为：privacy，此字段为必填参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErasePrivacyConfig(const SmartErasePrivacyConfig& _erasePrivacyConfig);

                    /**
                     * 判断参数 ErasePrivacyConfig 是否已赋值
                     * @return ErasePrivacyConfig 是否已赋值
                     * 
                     */
                    bool ErasePrivacyConfigHasBeenSet() const;

                private:

                    /**
                     * 擦除类型
- subtitle 去字幕
- watermark 去水印
- privacy 隐私保护
                     */
                    std::string m_eraseType;
                    bool m_eraseTypeHasBeenSet;

                    /**
                     * 字幕擦除配置；
当EraseType值为：subtitle，此字段为必填参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartEraseSubtitleConfig m_eraseSubtitleConfig;
                    bool m_eraseSubtitleConfigHasBeenSet;

                    /**
                     * 水印擦除配置；
当EraseType值为：watermark，此字段为必填参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartEraseWatermarkConfig m_eraseWatermarkConfig;
                    bool m_eraseWatermarkConfigHasBeenSet;

                    /**
                     * 隐私保护配置；
当EraseType值为：privacy，此字段为必填参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartErasePrivacyConfig m_erasePrivacyConfig;
                    bool m_erasePrivacyConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RAWSMARTERASEPARAMETER_H_
