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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPSTREAMINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPSTREAMINFO_H_

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
                * 直播即时剪辑流信息
                */
                class LiveRealTimeClipStreamInfo : public AbstractModel
                {
                public:
                    LiveRealTimeClipStreamInfo();
                    ~LiveRealTimeClipStreamInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取直播流类型，可选值：
<li>Original（原始流，<b>默认值</b>）。</li>
<li>Transcoding（转码流）。</li>
                     * @return Type 直播流类型，可选值：
<li>Original（原始流，<b>默认值</b>）。</li>
<li>Transcoding（转码流）。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置直播流类型，可选值：
<li>Original（原始流，<b>默认值</b>）。</li>
<li>Transcoding（转码流）。</li>
                     * @param _type 直播流类型，可选值：
<li>Original（原始流，<b>默认值</b>）。</li>
<li>Transcoding（转码流）。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取直播转码模板ID。
<b>当Type值为"Transcoding"时，必须填写。</b>
                     * @return TemplateId 直播转码模板ID。
<b>当Type值为"Transcoding"时，必须填写。</b>
                     * 
                     */
                    uint64_t GetTemplateId() const;

                    /**
                     * 设置直播转码模板ID。
<b>当Type值为"Transcoding"时，必须填写。</b>
                     * @param _templateId 直播转码模板ID。
<b>当Type值为"Transcoding"时，必须填写。</b>
                     * 
                     */
                    void SetTemplateId(const uint64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * 直播流类型，可选值：
<li>Original（原始流，<b>默认值</b>）。</li>
<li>Transcoding（转码流）。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 直播转码模板ID。
<b>当Type值为"Transcoding"时，必须填写。</b>
                     */
                    uint64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPSTREAMINFO_H_
