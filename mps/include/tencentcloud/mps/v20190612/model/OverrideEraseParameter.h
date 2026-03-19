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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_OVERRIDEERASEPARAMETER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_OVERRIDEERASEPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/UpdateSmartEraseSubtitleConfig.h>
#include <tencentcloud/mps/v20190612/model/UpdateSmartEraseWatermarkConfig.h>
#include <tencentcloud/mps/v20190612/model/UpdateSmartErasePrivacyConfig.h>


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
                class OverrideEraseParameter : public AbstractModel
                {
                public:
                    OverrideEraseParameter();
                    ~OverrideEraseParameter() = default;
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
                     * @return EraseSubtitleConfig <p>字幕擦除配置；<br>当EraseType值为：subtitle，此字段为必填参数</p>
                     * 
                     */
                    UpdateSmartEraseSubtitleConfig GetEraseSubtitleConfig() const;

                    /**
                     * 设置<p>字幕擦除配置；<br>当EraseType值为：subtitle，此字段为必填参数</p>
                     * @param _eraseSubtitleConfig <p>字幕擦除配置；<br>当EraseType值为：subtitle，此字段为必填参数</p>
                     * 
                     */
                    void SetEraseSubtitleConfig(const UpdateSmartEraseSubtitleConfig& _eraseSubtitleConfig);

                    /**
                     * 判断参数 EraseSubtitleConfig 是否已赋值
                     * @return EraseSubtitleConfig 是否已赋值
                     * 
                     */
                    bool EraseSubtitleConfigHasBeenSet() const;

                    /**
                     * 获取<p>水印擦除配置；<br>当EraseType值为：watermark，此字段为必填参数</p>
                     * @return EraseWatermarkConfig <p>水印擦除配置；<br>当EraseType值为：watermark，此字段为必填参数</p>
                     * 
                     */
                    UpdateSmartEraseWatermarkConfig GetEraseWatermarkConfig() const;

                    /**
                     * 设置<p>水印擦除配置；<br>当EraseType值为：watermark，此字段为必填参数</p>
                     * @param _eraseWatermarkConfig <p>水印擦除配置；<br>当EraseType值为：watermark，此字段为必填参数</p>
                     * 
                     */
                    void SetEraseWatermarkConfig(const UpdateSmartEraseWatermarkConfig& _eraseWatermarkConfig);

                    /**
                     * 判断参数 EraseWatermarkConfig 是否已赋值
                     * @return EraseWatermarkConfig 是否已赋值
                     * 
                     */
                    bool EraseWatermarkConfigHasBeenSet() const;

                    /**
                     * 获取<p>隐私保护配置；<br>当EraseType值为：privacy，此字段为必填参数</p>
                     * @return ErasePrivacyConfig <p>隐私保护配置；<br>当EraseType值为：privacy，此字段为必填参数</p>
                     * 
                     */
                    UpdateSmartErasePrivacyConfig GetErasePrivacyConfig() const;

                    /**
                     * 设置<p>隐私保护配置；<br>当EraseType值为：privacy，此字段为必填参数</p>
                     * @param _erasePrivacyConfig <p>隐私保护配置；<br>当EraseType值为：privacy，此字段为必填参数</p>
                     * 
                     */
                    void SetErasePrivacyConfig(const UpdateSmartErasePrivacyConfig& _erasePrivacyConfig);

                    /**
                     * 判断参数 ErasePrivacyConfig 是否已赋值
                     * @return ErasePrivacyConfig 是否已赋值
                     * 
                     */
                    bool ErasePrivacyConfigHasBeenSet() const;

                    /**
                     * 获取<p>擦除压制字幕模板id。</p>
                     * @return SubtitleEmbedId <p>擦除压制字幕模板id。</p>
                     * 
                     */
                    int64_t GetSubtitleEmbedId() const;

                    /**
                     * 设置<p>擦除压制字幕模板id。</p>
                     * @param _subtitleEmbedId <p>擦除压制字幕模板id。</p>
                     * 
                     */
                    void SetSubtitleEmbedId(const int64_t& _subtitleEmbedId);

                    /**
                     * 判断参数 SubtitleEmbedId 是否已赋值
                     * @return SubtitleEmbedId 是否已赋值
                     * 
                     */
                    bool SubtitleEmbedIdHasBeenSet() const;

                private:

                    /**
                     * <p>擦除类型</p><ul><li>subtitle 去字幕</li><li>watermark 去水印</li><li>privacy 隐私保护</li></ul>
                     */
                    std::string m_eraseType;
                    bool m_eraseTypeHasBeenSet;

                    /**
                     * <p>字幕擦除配置；<br>当EraseType值为：subtitle，此字段为必填参数</p>
                     */
                    UpdateSmartEraseSubtitleConfig m_eraseSubtitleConfig;
                    bool m_eraseSubtitleConfigHasBeenSet;

                    /**
                     * <p>水印擦除配置；<br>当EraseType值为：watermark，此字段为必填参数</p>
                     */
                    UpdateSmartEraseWatermarkConfig m_eraseWatermarkConfig;
                    bool m_eraseWatermarkConfigHasBeenSet;

                    /**
                     * <p>隐私保护配置；<br>当EraseType值为：privacy，此字段为必填参数</p>
                     */
                    UpdateSmartErasePrivacyConfig m_erasePrivacyConfig;
                    bool m_erasePrivacyConfigHasBeenSet;

                    /**
                     * <p>擦除压制字幕模板id。</p>
                     */
                    int64_t m_subtitleEmbedId;
                    bool m_subtitleEmbedIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_OVERRIDEERASEPARAMETER_H_
