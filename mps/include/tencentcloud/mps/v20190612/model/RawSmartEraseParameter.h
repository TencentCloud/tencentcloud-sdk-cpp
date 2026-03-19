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
                     * 获取<p>擦除类型</p><ul><li>subtitle 去字幕</li><li>watermark 去水印</li><li>privacy 隐私保护</li></ul>
                     * @return EraseType <p>擦除类型</p><ul><li>subtitle 去字幕</li><li>watermark 去水印</li><li>privacy 隐私保护</li></ul>
                     * 
                     */
                    std::string GetEraseType() const;

                    /**
                     * 设置<p>擦除类型</p><ul><li>subtitle 去字幕</li><li>watermark 去水印</li><li>privacy 隐私保护</li></ul>
                     * @param _eraseType <p>擦除类型</p><ul><li>subtitle 去字幕</li><li>watermark 去水印</li><li>privacy 隐私保护</li></ul>
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
                     * 获取<p>字幕擦除配置；<br>当EraseType值为：subtitle，此字段为必填参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EraseSubtitleConfig <p>字幕擦除配置；<br>当EraseType值为：subtitle，此字段为必填参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartEraseSubtitleConfig GetEraseSubtitleConfig() const;

                    /**
                     * 设置<p>字幕擦除配置；<br>当EraseType值为：subtitle，此字段为必填参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eraseSubtitleConfig <p>字幕擦除配置；<br>当EraseType值为：subtitle，此字段为必填参数</p>
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
                     * 获取<p>水印擦除配置；<br>当EraseType值为：watermark，此字段为必填参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EraseWatermarkConfig <p>水印擦除配置；<br>当EraseType值为：watermark，此字段为必填参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartEraseWatermarkConfig GetEraseWatermarkConfig() const;

                    /**
                     * 设置<p>水印擦除配置；<br>当EraseType值为：watermark，此字段为必填参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eraseWatermarkConfig <p>水印擦除配置；<br>当EraseType值为：watermark，此字段为必填参数</p>
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
                     * 获取<p>隐私保护配置；<br>当EraseType值为：privacy，此字段为必填参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErasePrivacyConfig <p>隐私保护配置；<br>当EraseType值为：privacy，此字段为必填参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartErasePrivacyConfig GetErasePrivacyConfig() const;

                    /**
                     * 设置<p>隐私保护配置；<br>当EraseType值为：privacy，此字段为必填参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _erasePrivacyConfig <p>隐私保护配置；<br>当EraseType值为：privacy，此字段为必填参数</p>
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

                    /**
                     * 获取<p>擦除字幕压制模板id。</p>
                     * @return SubtitleEmbedId <p>擦除字幕压制模板id。</p>
                     * 
                     */
                    int64_t GetSubtitleEmbedId() const;

                    /**
                     * 设置<p>擦除字幕压制模板id。</p>
                     * @param _subtitleEmbedId <p>擦除字幕压制模板id。</p>
                     * 
                     */
                    void SetSubtitleEmbedId(const int64_t& _subtitleEmbedId);

                    /**
                     * 判断参数 SubtitleEmbedId 是否已赋值
                     * @return SubtitleEmbedId 是否已赋值
                     * 
                     */
                    bool SubtitleEmbedIdHasBeenSet() const;

                    /**
                     * 获取<p>压制配置，默认开启1, 把字幕压制回原字幕位置。</p>
                     * @return UseOriginalPos <p>压制配置，默认开启1, 把字幕压制回原字幕位置。</p>
                     * 
                     */
                    int64_t GetUseOriginalPos() const;

                    /**
                     * 设置<p>压制配置，默认开启1, 把字幕压制回原字幕位置。</p>
                     * @param _useOriginalPos <p>压制配置，默认开启1, 把字幕压制回原字幕位置。</p>
                     * 
                     */
                    void SetUseOriginalPos(const int64_t& _useOriginalPos);

                    /**
                     * 判断参数 UseOriginalPos 是否已赋值
                     * @return UseOriginalPos 是否已赋值
                     * 
                     */
                    bool UseOriginalPosHasBeenSet() const;

                    /**
                     * 获取<p>压制配置，默认开启1, 开启后使用原字幕字号。</p>
                     * @return UseOriginalSize <p>压制配置，默认开启1, 开启后使用原字幕字号。</p>
                     * 
                     */
                    int64_t GetUseOriginalSize() const;

                    /**
                     * 设置<p>压制配置，默认开启1, 开启后使用原字幕字号。</p>
                     * @param _useOriginalSize <p>压制配置，默认开启1, 开启后使用原字幕字号。</p>
                     * 
                     */
                    void SetUseOriginalSize(const int64_t& _useOriginalSize);

                    /**
                     * 判断参数 UseOriginalSize 是否已赋值
                     * @return UseOriginalSize 是否已赋值
                     * 
                     */
                    bool UseOriginalSizeHasBeenSet() const;

                private:

                    /**
                     * <p>擦除类型</p><ul><li>subtitle 去字幕</li><li>watermark 去水印</li><li>privacy 隐私保护</li></ul>
                     */
                    std::string m_eraseType;
                    bool m_eraseTypeHasBeenSet;

                    /**
                     * <p>字幕擦除配置；<br>当EraseType值为：subtitle，此字段为必填参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartEraseSubtitleConfig m_eraseSubtitleConfig;
                    bool m_eraseSubtitleConfigHasBeenSet;

                    /**
                     * <p>水印擦除配置；<br>当EraseType值为：watermark，此字段为必填参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartEraseWatermarkConfig m_eraseWatermarkConfig;
                    bool m_eraseWatermarkConfigHasBeenSet;

                    /**
                     * <p>隐私保护配置；<br>当EraseType值为：privacy，此字段为必填参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartErasePrivacyConfig m_erasePrivacyConfig;
                    bool m_erasePrivacyConfigHasBeenSet;

                    /**
                     * <p>擦除字幕压制模板id。</p>
                     */
                    int64_t m_subtitleEmbedId;
                    bool m_subtitleEmbedIdHasBeenSet;

                    /**
                     * <p>压制配置，默认开启1, 把字幕压制回原字幕位置。</p>
                     */
                    int64_t m_useOriginalPos;
                    bool m_useOriginalPosHasBeenSet;

                    /**
                     * <p>压制配置，默认开启1, 开启后使用原字幕字号。</p>
                     */
                    int64_t m_useOriginalSize;
                    bool m_useOriginalSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RAWSMARTERASEPARAMETER_H_
