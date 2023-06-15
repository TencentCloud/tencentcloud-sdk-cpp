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
                     * 获取转自适应码流模板 ID。
                     * @return Definition 转自适应码流模板 ID。
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置转自适应码流模板 ID。
                     * @param _definition 转自适应码流模板 ID。
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
                     * 获取水印列表，支持多张图片或文字水印，最大可支持 10 张。
                     * @return WatermarkSet 水印列表，支持多张图片或文字水印，最大可支持 10 张。
                     * 
                     */
                    std::vector<WatermarkInput> GetWatermarkSet() const;

                    /**
                     * 设置水印列表，支持多张图片或文字水印，最大可支持 10 张。
                     * @param _watermarkSet 水印列表，支持多张图片或文字水印，最大可支持 10 张。
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
                     * 获取溯源水印。
                     * @return TraceWatermark 溯源水印。
                     * 
                     */
                    TraceWatermarkInput GetTraceWatermark() const;

                    /**
                     * 设置溯源水印。
                     * @param _traceWatermark 溯源水印。
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
                     * 获取版权水印。
                     * @return CopyRightWatermark 版权水印。
                     * 
                     */
                    CopyRightWatermarkInput GetCopyRightWatermark() const;

                    /**
                     * 设置版权水印。
                     * @param _copyRightWatermark 版权水印。
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
                     * 获取字幕列表，元素为字幕 ID，支持多个字幕，最大可支持16个。
                     * @return SubtitleSet 字幕列表，元素为字幕 ID，支持多个字幕，最大可支持16个。
                     * 
                     */
                    std::vector<std::string> GetSubtitleSet() const;

                    /**
                     * 设置字幕列表，元素为字幕 ID，支持多个字幕，最大可支持16个。
                     * @param _subtitleSet 字幕列表，元素为字幕 ID，支持多个字幕，最大可支持16个。
                     * 
                     */
                    void SetSubtitleSet(const std::vector<std::string>& _subtitleSet);

                    /**
                     * 判断参数 SubtitleSet 是否已赋值
                     * @return SubtitleSet 是否已赋值
                     * 
                     */
                    bool SubtitleSetHasBeenSet() const;

                private:

                    /**
                     * 转自适应码流模板 ID。
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 水印列表，支持多张图片或文字水印，最大可支持 10 张。
                     */
                    std::vector<WatermarkInput> m_watermarkSet;
                    bool m_watermarkSetHasBeenSet;

                    /**
                     * 溯源水印。
                     */
                    TraceWatermarkInput m_traceWatermark;
                    bool m_traceWatermarkHasBeenSet;

                    /**
                     * 版权水印。
                     */
                    CopyRightWatermarkInput m_copyRightWatermark;
                    bool m_copyRightWatermarkHasBeenSet;

                    /**
                     * 字幕列表，元素为字幕 ID，支持多个字幕，最大可支持16个。
                     */
                    std::vector<std::string> m_subtitleSet;
                    bool m_subtitleSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVEDYNAMICSTREAMINGTASKINPUT_H_
