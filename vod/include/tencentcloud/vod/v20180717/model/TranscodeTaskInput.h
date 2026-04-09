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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODETASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODETASKINPUT_H_

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
#include <tencentcloud/vod/v20180717/model/MosaicInput.h>
#include <tencentcloud/vod/v20180717/model/HeadTailTaskInput.h>
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
                * 转码任务输入参数类型
                */
                class TranscodeTaskInput : public AbstractModel
                {
                public:
                    TranscodeTaskInput();
                    ~TranscodeTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>视频转码模板 ID。</p>
                     * @return Definition <p>视频转码模板 ID。</p>
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置<p>视频转码模板 ID。</p>
                     * @param _definition <p>视频转码模板 ID。</p>
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
                     * 获取<p>马赛克列表，最大可支持 10 张。</p>
                     * @return MosaicSet <p>马赛克列表，最大可支持 10 张。</p>
                     * 
                     */
                    std::vector<MosaicInput> GetMosaicSet() const;

                    /**
                     * 设置<p>马赛克列表，最大可支持 10 张。</p>
                     * @param _mosaicSet <p>马赛克列表，最大可支持 10 张。</p>
                     * 
                     */
                    void SetMosaicSet(const std::vector<MosaicInput>& _mosaicSet);

                    /**
                     * 判断参数 MosaicSet 是否已赋值
                     * @return MosaicSet 是否已赋值
                     * 
                     */
                    bool MosaicSetHasBeenSet() const;

                    /**
                     * 获取<p>片头片尾列表，支持多片头片尾，最大可支持 10 个。</p>
                     * @return HeadTailSet <p>片头片尾列表，支持多片头片尾，最大可支持 10 个。</p>
                     * 
                     */
                    std::vector<HeadTailTaskInput> GetHeadTailSet() const;

                    /**
                     * 设置<p>片头片尾列表，支持多片头片尾，最大可支持 10 个。</p>
                     * @param _headTailSet <p>片头片尾列表，支持多片头片尾，最大可支持 10 个。</p>
                     * 
                     */
                    void SetHeadTailSet(const std::vector<HeadTailTaskInput>& _headTailSet);

                    /**
                     * 判断参数 HeadTailSet 是否已赋值
                     * @return HeadTailSet 是否已赋值
                     * 
                     */
                    bool HeadTailSetHasBeenSet() const;

                    /**
                     * 获取<p>转码后的视频的起始时间偏移，单位：秒。</p><li>不填或填0，表示转码后的视频从原始视频的起始位置开始；</li><li>当数值大于0时（假设为 n），表示转码后的视频从原始视频的第 n 秒位置开始；</li><li>当数值小于0时（假设为 -n），表示转码后的视频从原始视频结束 n 秒前的位置开始。</li>
                     * @return StartTimeOffset <p>转码后的视频的起始时间偏移，单位：秒。</p><li>不填或填0，表示转码后的视频从原始视频的起始位置开始；</li><li>当数值大于0时（假设为 n），表示转码后的视频从原始视频的第 n 秒位置开始；</li><li>当数值小于0时（假设为 -n），表示转码后的视频从原始视频结束 n 秒前的位置开始。</li>
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置<p>转码后的视频的起始时间偏移，单位：秒。</p><li>不填或填0，表示转码后的视频从原始视频的起始位置开始；</li><li>当数值大于0时（假设为 n），表示转码后的视频从原始视频的第 n 秒位置开始；</li><li>当数值小于0时（假设为 -n），表示转码后的视频从原始视频结束 n 秒前的位置开始。</li>
                     * @param _startTimeOffset <p>转码后的视频的起始时间偏移，单位：秒。</p><li>不填或填0，表示转码后的视频从原始视频的起始位置开始；</li><li>当数值大于0时（假设为 n），表示转码后的视频从原始视频的第 n 秒位置开始；</li><li>当数值小于0时（假设为 -n），表示转码后的视频从原始视频结束 n 秒前的位置开始。</li>
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取<p>转码后视频的终止时间偏移，单位：秒。</p><li>不填或填0，表示转码后的视频持续到原始视频的末尾终止；</li><li>当数值大于0时（假设为 n），表示转码后的视频持续到原始视频第 n 秒时终止；</li><li>当数值小于0时（假设为 -n），表示转码后的视频持续到原始视频结束 n 秒前终止。</li>
                     * @return EndTimeOffset <p>转码后视频的终止时间偏移，单位：秒。</p><li>不填或填0，表示转码后的视频持续到原始视频的末尾终止；</li><li>当数值大于0时（假设为 n），表示转码后的视频持续到原始视频第 n 秒时终止；</li><li>当数值小于0时（假设为 -n），表示转码后的视频持续到原始视频结束 n 秒前终止。</li>
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置<p>转码后视频的终止时间偏移，单位：秒。</p><li>不填或填0，表示转码后的视频持续到原始视频的末尾终止；</li><li>当数值大于0时（假设为 n），表示转码后的视频持续到原始视频第 n 秒时终止；</li><li>当数值小于0时（假设为 -n），表示转码后的视频持续到原始视频结束 n 秒前终止。</li>
                     * @param _endTimeOffset <p>转码后视频的终止时间偏移，单位：秒。</p><li>不填或填0，表示转码后的视频持续到原始视频的末尾终止；</li><li>当数值大于0时（假设为 n），表示转码后的视频持续到原始视频第 n 秒时终止；</li><li>当数值小于0时（假设为 -n），表示转码后的视频持续到原始视频结束 n 秒前终止。</li>
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

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
                     * <p>视频转码模板 ID。</p>
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
                     * <p>马赛克列表，最大可支持 10 张。</p>
                     */
                    std::vector<MosaicInput> m_mosaicSet;
                    bool m_mosaicSetHasBeenSet;

                    /**
                     * <p>片头片尾列表，支持多片头片尾，最大可支持 10 个。</p>
                     */
                    std::vector<HeadTailTaskInput> m_headTailSet;
                    bool m_headTailSetHasBeenSet;

                    /**
                     * <p>转码后的视频的起始时间偏移，单位：秒。</p><li>不填或填0，表示转码后的视频从原始视频的起始位置开始；</li><li>当数值大于0时（假设为 n），表示转码后的视频从原始视频的第 n 秒位置开始；</li><li>当数值小于0时（假设为 -n），表示转码后的视频从原始视频结束 n 秒前的位置开始。</li>
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * <p>转码后视频的终止时间偏移，单位：秒。</p><li>不填或填0，表示转码后的视频持续到原始视频的末尾终止；</li><li>当数值大于0时（假设为 n），表示转码后的视频持续到原始视频第 n 秒时终止；</li><li>当数值小于0时（假设为 -n），表示转码后的视频持续到原始视频结束 n 秒前终止。</li>
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

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

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODETASKINPUT_H_
