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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 自适应码流任务的输出结果。
                */
                class ComplexAdaptiveDynamicStreamingTaskOutput : public AbstractModel
                {
                public:
                    ComplexAdaptiveDynamicStreamingTaskOutput();
                    ~ComplexAdaptiveDynamicStreamingTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自适应码流模板 ID。
                     * @return Definition 自适应码流模板 ID。
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置自适应码流模板 ID。
                     * @param _definition 自适应码流模板 ID。
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取自适应码流打包格式。可选值：
<li>HLS；</li>
<li>MPEG-DASH。</li>
                     * @return Format 自适应码流打包格式。可选值：
<li>HLS；</li>
<li>MPEG-DASH。</li>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置自适应码流打包格式。可选值：
<li>HLS；</li>
<li>MPEG-DASH。</li>
                     * @param _format 自适应码流打包格式。可选值：
<li>HLS；</li>
<li>MPEG-DASH。</li>
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取DRM 方案类型。可选值：
<li>空字符串：无加密；</li>
<li>SimpleAES；</li>
<li>Widevine；</li>
<li>FairPlay。</li>
                     * @return DrmType DRM 方案类型。可选值：
<li>空字符串：无加密；</li>
<li>SimpleAES；</li>
<li>Widevine；</li>
<li>FairPlay。</li>
                     * 
                     */
                    std::string GetDrmType() const;

                    /**
                     * 设置DRM 方案类型。可选值：
<li>空字符串：无加密；</li>
<li>SimpleAES；</li>
<li>Widevine；</li>
<li>FairPlay。</li>
                     * @param _drmType DRM 方案类型。可选值：
<li>空字符串：无加密；</li>
<li>SimpleAES；</li>
<li>Widevine；</li>
<li>FairPlay。</li>
                     * 
                     */
                    void SetDrmType(const std::string& _drmType);

                    /**
                     * 判断参数 DrmType 是否已赋值
                     * @return DrmType 是否已赋值
                     * 
                     */
                    bool DrmTypeHasBeenSet() const;

                    /**
                     * 获取自适应码流的播放地址。
                     * @return Url 自适应码流的播放地址。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置自适应码流的播放地址。
                     * @param _url 自适应码流的播放地址。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 自适应码流模板 ID。
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 自适应码流打包格式。可选值：
<li>HLS；</li>
<li>MPEG-DASH。</li>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * DRM 方案类型。可选值：
<li>空字符串：无加密；</li>
<li>SimpleAES；</li>
<li>Widevine；</li>
<li>FairPlay。</li>
                     */
                    std::string m_drmType;
                    bool m_drmTypeHasBeenSet;

                    /**
                     * 自适应码流的播放地址。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKOUTPUT_H_
