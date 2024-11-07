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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATECOMPLEXADAPTIVEDYNAMICSTREAMINGTASKREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATECOMPLEXADAPTIVEDYNAMICSTREAMINGTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ComplexAdaptiveDynamicStreamingTaskStreamPara.h>
#include <tencentcloud/vod/v20180717/model/HeadTailTaskInput.h>
#include <tencentcloud/vod/v20180717/model/ComplexAdaptiveDynamicStreamingTaskAudioInput.h>
#include <tencentcloud/vod/v20180717/model/ComplexAdaptiveDynamicStreamingTaskSubtitleInput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateComplexAdaptiveDynamicStreamingTask请求参数结构体
                */
                class CreateComplexAdaptiveDynamicStreamingTaskRequest : public AbstractModel
                {
                public:
                    CreateComplexAdaptiveDynamicStreamingTaskRequest();
                    ~CreateComplexAdaptiveDynamicStreamingTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<b>点播[应用](/document/product/266/14574) ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取主媒体文件的媒体 ID。
                     * @return FileId 主媒体文件的媒体 ID。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置主媒体文件的媒体 ID。
                     * @param _fileId 主媒体文件的媒体 ID。
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取自适应码流参数，最大支持8个。
                     * @return StreamParaSet 自适应码流参数，最大支持8个。
                     * 
                     */
                    std::vector<ComplexAdaptiveDynamicStreamingTaskStreamPara> GetStreamParaSet() const;

                    /**
                     * 设置自适应码流参数，最大支持8个。
                     * @param _streamParaSet 自适应码流参数，最大支持8个。
                     * 
                     */
                    void SetStreamParaSet(const std::vector<ComplexAdaptiveDynamicStreamingTaskStreamPara>& _streamParaSet);

                    /**
                     * 判断参数 StreamParaSet 是否已赋值
                     * @return StreamParaSet 是否已赋值
                     * 
                     */
                    bool StreamParaSetHasBeenSet() const;

                    /**
                     * 获取片头片尾列表，支持多片头片尾，最大可支持 4 个。如果填写了该字段，AudioSet 和 SubtitleSet 中指定的媒体的起始时间将会自动调整，和主媒体保持同步。
                     * @return HeadTailSet 片头片尾列表，支持多片头片尾，最大可支持 4 个。如果填写了该字段，AudioSet 和 SubtitleSet 中指定的媒体的起始时间将会自动调整，和主媒体保持同步。
                     * 
                     */
                    std::vector<HeadTailTaskInput> GetHeadTailSet() const;

                    /**
                     * 设置片头片尾列表，支持多片头片尾，最大可支持 4 个。如果填写了该字段，AudioSet 和 SubtitleSet 中指定的媒体的起始时间将会自动调整，和主媒体保持同步。
                     * @param _headTailSet 片头片尾列表，支持多片头片尾，最大可支持 4 个。如果填写了该字段，AudioSet 和 SubtitleSet 中指定的媒体的起始时间将会自动调整，和主媒体保持同步。
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
                     * 获取多语言音频流参数，最大支持16个。每个数组元素对应自适应码流中的一条音频流。如果要将主媒体文件中的音频流添加到输出的自适应码流中，那么也需要在此处指定。数组中元素的顺序将决定自适应码流中的音频流顺序。如果输入的媒体文件同时带有视频流和音频流，那么视频流将被忽略。
                     * @return AudioSet 多语言音频流参数，最大支持16个。每个数组元素对应自适应码流中的一条音频流。如果要将主媒体文件中的音频流添加到输出的自适应码流中，那么也需要在此处指定。数组中元素的顺序将决定自适应码流中的音频流顺序。如果输入的媒体文件同时带有视频流和音频流，那么视频流将被忽略。
                     * 
                     */
                    std::vector<ComplexAdaptiveDynamicStreamingTaskAudioInput> GetAudioSet() const;

                    /**
                     * 设置多语言音频流参数，最大支持16个。每个数组元素对应自适应码流中的一条音频流。如果要将主媒体文件中的音频流添加到输出的自适应码流中，那么也需要在此处指定。数组中元素的顺序将决定自适应码流中的音频流顺序。如果输入的媒体文件同时带有视频流和音频流，那么视频流将被忽略。
                     * @param _audioSet 多语言音频流参数，最大支持16个。每个数组元素对应自适应码流中的一条音频流。如果要将主媒体文件中的音频流添加到输出的自适应码流中，那么也需要在此处指定。数组中元素的顺序将决定自适应码流中的音频流顺序。如果输入的媒体文件同时带有视频流和音频流，那么视频流将被忽略。
                     * 
                     */
                    void SetAudioSet(const std::vector<ComplexAdaptiveDynamicStreamingTaskAudioInput>& _audioSet);

                    /**
                     * 判断参数 AudioSet 是否已赋值
                     * @return AudioSet 是否已赋值
                     * 
                     */
                    bool AudioSetHasBeenSet() const;

                    /**
                     * 获取多语言字幕参数，最大可支持16个。每个数组元素对应自适应码流中的一条字幕流。数组中元素的顺序将决定自适应码流中的字幕流顺序。
                     * @return SubtitleSet 多语言字幕参数，最大可支持16个。每个数组元素对应自适应码流中的一条字幕流。数组中元素的顺序将决定自适应码流中的字幕流顺序。
                     * 
                     */
                    std::vector<ComplexAdaptiveDynamicStreamingTaskSubtitleInput> GetSubtitleSet() const;

                    /**
                     * 设置多语言字幕参数，最大可支持16个。每个数组元素对应自适应码流中的一条字幕流。数组中元素的顺序将决定自适应码流中的字幕流顺序。
                     * @param _subtitleSet 多语言字幕参数，最大可支持16个。每个数组元素对应自适应码流中的一条字幕流。数组中元素的顺序将决定自适应码流中的字幕流顺序。
                     * 
                     */
                    void SetSubtitleSet(const std::vector<ComplexAdaptiveDynamicStreamingTaskSubtitleInput>& _subtitleSet);

                    /**
                     * 判断参数 SubtitleSet 是否已赋值
                     * @return SubtitleSet 是否已赋值
                     * 
                     */
                    bool SubtitleSetHasBeenSet() const;

                private:

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 主媒体文件的媒体 ID。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 自适应码流参数，最大支持8个。
                     */
                    std::vector<ComplexAdaptiveDynamicStreamingTaskStreamPara> m_streamParaSet;
                    bool m_streamParaSetHasBeenSet;

                    /**
                     * 片头片尾列表，支持多片头片尾，最大可支持 4 个。如果填写了该字段，AudioSet 和 SubtitleSet 中指定的媒体的起始时间将会自动调整，和主媒体保持同步。
                     */
                    std::vector<HeadTailTaskInput> m_headTailSet;
                    bool m_headTailSetHasBeenSet;

                    /**
                     * 多语言音频流参数，最大支持16个。每个数组元素对应自适应码流中的一条音频流。如果要将主媒体文件中的音频流添加到输出的自适应码流中，那么也需要在此处指定。数组中元素的顺序将决定自适应码流中的音频流顺序。如果输入的媒体文件同时带有视频流和音频流，那么视频流将被忽略。
                     */
                    std::vector<ComplexAdaptiveDynamicStreamingTaskAudioInput> m_audioSet;
                    bool m_audioSetHasBeenSet;

                    /**
                     * 多语言字幕参数，最大可支持16个。每个数组元素对应自适应码流中的一条字幕流。数组中元素的顺序将决定自适应码流中的字幕流顺序。
                     */
                    std::vector<ComplexAdaptiveDynamicStreamingTaskSubtitleInput> m_subtitleSet;
                    bool m_subtitleSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATECOMPLEXADAPTIVEDYNAMICSTREAMINGTASKREQUEST_H_
