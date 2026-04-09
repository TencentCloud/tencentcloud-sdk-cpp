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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVEDYNAMICSTREAMINGTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVEDYNAMICSTREAMINGTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/WatermarkInput.h>
#include <tencentcloud/vod/v20180717/model/TraceWatermarkInput.h>
#include <tencentcloud/vod/v20180717/model/CopyRightWatermarkInput.h>
#include <tencentcloud/vod/v20180717/model/BlindWatermarkInput.h>
#include <tencentcloud/vod/v20180717/model/SubtitleInfoInput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 对视频转自适应码流的输入参数类型
                */
                class AdaptiveDynamicStreamingTaskInput : public AbstractModel
                {
                public:
                    AdaptiveDynamicStreamingTaskInput();
                    ~AdaptiveDynamicStreamingTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>转自适应码流模板 ID。</p>
                     * @return Definition <p>转自适应码流模板 ID。</p>
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置<p>转自适应码流模板 ID。</p>
                     * @param _definition <p>转自适应码流模板 ID。</p>
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
                     * 获取<p>水印列表，支持多张图片或文字水印，最大可支持 10 张。</p>
                     * @return WatermarkSet <p>水印列表，支持多张图片或文字水印，最大可支持 10 张。</p>
                     * 
                     */
                    std::vector<WatermarkInput> GetWatermarkSet() const;

                    /**
                     * 设置<p>水印列表，支持多张图片或文字水印，最大可支持 10 张。</p>
                     * @param _watermarkSet <p>水印列表，支持多张图片或文字水印，最大可支持 10 张。</p>
                     * 
                     */
                    void SetWatermarkSet(const std::vector<WatermarkInput>& _watermarkSet);

                    /**
                     * 判断参数 WatermarkSet 是否已赋值
                     * @return WatermarkSet 是否已赋值
                     * 
                     */
                    bool WatermarkSetHasBeenSet() const;

                    /**
                     * 获取<p>溯源水印。</p>
                     * @return TraceWatermark <p>溯源水印。</p>
                     * 
                     */
                    TraceWatermarkInput GetTraceWatermark() const;

                    /**
                     * 设置<p>溯源水印。</p>
                     * @param _traceWatermark <p>溯源水印。</p>
                     * 
                     */
                    void SetTraceWatermark(const TraceWatermarkInput& _traceWatermark);

                    /**
                     * 判断参数 TraceWatermark 是否已赋值
                     * @return TraceWatermark 是否已赋值
                     * 
                     */
                    bool TraceWatermarkHasBeenSet() const;

                    /**
                     * 获取<p>版权水印。</p>
                     * @return CopyRightWatermark <p>版权水印。</p>
                     * 
                     */
                    CopyRightWatermarkInput GetCopyRightWatermark() const;

                    /**
                     * 设置<p>版权水印。</p>
                     * @param _copyRightWatermark <p>版权水印。</p>
                     * 
                     */
                    void SetCopyRightWatermark(const CopyRightWatermarkInput& _copyRightWatermark);

                    /**
                     * 判断参数 CopyRightWatermark 是否已赋值
                     * @return CopyRightWatermark 是否已赋值
                     * 
                     */
                    bool CopyRightWatermarkHasBeenSet() const;

                    /**
                     * 获取<p>数字水印。</p>
                     * @return BlindWatermark <p>数字水印。</p>
                     * 
                     */
                    BlindWatermarkInput GetBlindWatermark() const;

                    /**
                     * 设置<p>数字水印。</p>
                     * @param _blindWatermark <p>数字水印。</p>
                     * 
                     */
                    void SetBlindWatermark(const BlindWatermarkInput& _blindWatermark);

                    /**
                     * 判断参数 BlindWatermark 是否已赋值
                     * @return BlindWatermark 是否已赋值
                     * 
                     */
                    bool BlindWatermarkHasBeenSet() const;

                    /**
                     * 获取<p>外挂字幕列表，元素为字幕 ID，支持多个字幕，最大可支持16个。</p>
                     * @return SubtitleSet <p>外挂字幕列表，元素为字幕 ID，支持多个字幕，最大可支持16个。</p>
                     * 
                     */
                    std::vector<std::string> GetSubtitleSet() const;

                    /**
                     * 设置<p>外挂字幕列表，元素为字幕 ID，支持多个字幕，最大可支持16个。</p>
                     * @param _subtitleSet <p>外挂字幕列表，元素为字幕 ID，支持多个字幕，最大可支持16个。</p>
                     * 
                     */
                    void SetSubtitleSet(const std::vector<std::string>& _subtitleSet);

                    /**
                     * 判断参数 SubtitleSet 是否已赋值
                     * @return SubtitleSet 是否已赋值
                     * 
                     */
                    bool SubtitleSetHasBeenSet() const;

                    /**
                     * 获取<p>字幕压制信息列表。最大可支持 2 个。</p>
                     * @return SubtitleInfoSet <p>字幕压制信息列表。最大可支持 2 个。</p>
                     * 
                     */
                    std::vector<SubtitleInfoInput> GetSubtitleInfoSet() const;

                    /**
                     * 设置<p>字幕压制信息列表。最大可支持 2 个。</p>
                     * @param _subtitleInfoSet <p>字幕压制信息列表。最大可支持 2 个。</p>
                     * 
                     */
                    void SetSubtitleInfoSet(const std::vector<SubtitleInfoInput>& _subtitleInfoSet);

                    /**
                     * 判断参数 SubtitleInfoSet 是否已赋值
                     * @return SubtitleInfoSet 是否已赋值
                     * 
                     */
                    bool SubtitleInfoSetHasBeenSet() const;

                private:

                    /**
                     * <p>转自适应码流模板 ID。</p>
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>水印列表，支持多张图片或文字水印，最大可支持 10 张。</p>
                     */
                    std::vector<WatermarkInput> m_watermarkSet;
                    bool m_watermarkSetHasBeenSet;

                    /**
                     * <p>溯源水印。</p>
                     */
                    TraceWatermarkInput m_traceWatermark;
                    bool m_traceWatermarkHasBeenSet;

                    /**
                     * <p>版权水印。</p>
                     */
                    CopyRightWatermarkInput m_copyRightWatermark;
                    bool m_copyRightWatermarkHasBeenSet;

                    /**
                     * <p>数字水印。</p>
                     */
                    BlindWatermarkInput m_blindWatermark;
                    bool m_blindWatermarkHasBeenSet;

                    /**
                     * <p>外挂字幕列表，元素为字幕 ID，支持多个字幕，最大可支持16个。</p>
                     */
                    std::vector<std::string> m_subtitleSet;
                    bool m_subtitleSetHasBeenSet;

                    /**
                     * <p>字幕压制信息列表。最大可支持 2 个。</p>
                     */
                    std::vector<SubtitleInfoInput> m_subtitleInfoSet;
                    bool m_subtitleInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVEDYNAMICSTREAMINGTASKINPUT_H_
