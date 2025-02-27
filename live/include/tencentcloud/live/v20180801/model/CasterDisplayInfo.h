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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CASTERDISPLAYINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CASTERDISPLAYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 导播台展示信息，包括使用的布局、水印、字幕、转场、音频等信息
                */
                class CasterDisplayInfo : public AbstractModel
                {
                public:
                    CasterDisplayInfo();
                    ~CasterDisplayInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取布局Index。
如果使用自定义布局，为自定义布局下标。
如果使用单输入布局，如使用输入1，则LayoutIndexType=1， 且LayoutIndex=1，以此类推。
                     * @return LayoutIndex 布局Index。
如果使用自定义布局，为自定义布局下标。
如果使用单输入布局，如使用输入1，则LayoutIndexType=1， 且LayoutIndex=1，以此类推。
                     * 
                     */
                    uint64_t GetLayoutIndex() const;

                    /**
                     * 设置布局Index。
如果使用自定义布局，为自定义布局下标。
如果使用单输入布局，如使用输入1，则LayoutIndexType=1， 且LayoutIndex=1，以此类推。
                     * @param _layoutIndex 布局Index。
如果使用自定义布局，为自定义布局下标。
如果使用单输入布局，如使用输入1，则LayoutIndexType=1， 且LayoutIndex=1，以此类推。
                     * 
                     */
                    void SetLayoutIndex(const uint64_t& _layoutIndex);

                    /**
                     * 判断参数 LayoutIndex 是否已赋值
                     * @return LayoutIndex 是否已赋值
                     * 
                     */
                    bool LayoutIndexHasBeenSet() const;

                    /**
                     * 获取使用的水印Index列表。
注：当作为入参使用时，列表中的水印Index需要已经存在。
                     * @return MarkPicIndexList 使用的水印Index列表。
注：当作为入参使用时，列表中的水印Index需要已经存在。
                     * 
                     */
                    std::vector<uint64_t> GetMarkPicIndexList() const;

                    /**
                     * 设置使用的水印Index列表。
注：当作为入参使用时，列表中的水印Index需要已经存在。
                     * @param _markPicIndexList 使用的水印Index列表。
注：当作为入参使用时，列表中的水印Index需要已经存在。
                     * 
                     */
                    void SetMarkPicIndexList(const std::vector<uint64_t>& _markPicIndexList);

                    /**
                     * 判断参数 MarkPicIndexList 是否已赋值
                     * @return MarkPicIndexList 是否已赋值
                     * 
                     */
                    bool MarkPicIndexListHasBeenSet() const;

                    /**
                     * 获取使用的文字水印Index列表。
注：作为入参使用时，列表中的Index需要已经存在。
                     * @return MarkWordIndexList 使用的文字水印Index列表。
注：作为入参使用时，列表中的Index需要已经存在。
                     * 
                     */
                    std::vector<uint64_t> GetMarkWordIndexList() const;

                    /**
                     * 设置使用的文字水印Index列表。
注：作为入参使用时，列表中的Index需要已经存在。
                     * @param _markWordIndexList 使用的文字水印Index列表。
注：作为入参使用时，列表中的Index需要已经存在。
                     * 
                     */
                    void SetMarkWordIndexList(const std::vector<uint64_t>& _markWordIndexList);

                    /**
                     * 判断参数 MarkWordIndexList 是否已赋值
                     * @return MarkWordIndexList 是否已赋值
                     * 
                     */
                    bool MarkWordIndexListHasBeenSet() const;

                    /**
                     * 获取使用的转场类型。
注：支持的转场类型可通过DescribeCasterTransitionTypes接口获取。
                     * @return TransitionType 使用的转场类型。
注：支持的转场类型可通过DescribeCasterTransitionTypes接口获取。
                     * 
                     */
                    std::string GetTransitionType() const;

                    /**
                     * 设置使用的转场类型。
注：支持的转场类型可通过DescribeCasterTransitionTypes接口获取。
                     * @param _transitionType 使用的转场类型。
注：支持的转场类型可通过DescribeCasterTransitionTypes接口获取。
                     * 
                     */
                    void SetTransitionType(const std::string& _transitionType);

                    /**
                     * 判断参数 TransitionType 是否已赋值
                     * @return TransitionType 是否已赋值
                     * 
                     */
                    bool TransitionTypeHasBeenSet() const;

                    /**
                     * 获取使用的音频输入Index列表。
注：当该字段非空时，表示使用布局中对应的输入源的视频，AudioIndexList中对应的输入源的音频。且这些输入源需已存在。
                     * @return AudioIndexList 使用的音频输入Index列表。
注：当该字段非空时，表示使用布局中对应的输入源的视频，AudioIndexList中对应的输入源的音频。且这些输入源需已存在。
                     * 
                     */
                    std::vector<uint64_t> GetAudioIndexList() const;

                    /**
                     * 设置使用的音频输入Index列表。
注：当该字段非空时，表示使用布局中对应的输入源的视频，AudioIndexList中对应的输入源的音频。且这些输入源需已存在。
                     * @param _audioIndexList 使用的音频输入Index列表。
注：当该字段非空时，表示使用布局中对应的输入源的视频，AudioIndexList中对应的输入源的音频。且这些输入源需已存在。
                     * 
                     */
                    void SetAudioIndexList(const std::vector<uint64_t>& _audioIndexList);

                    /**
                     * 判断参数 AudioIndexList 是否已赋值
                     * @return AudioIndexList 是否已赋值
                     * 
                     */
                    bool AudioIndexListHasBeenSet() const;

                    /**
                     * 获取作为入参时，表示使用点播输入源，单画面输入时，点播文件是否从头开始播放。
默认为0。
有效值，0,1。
0代表不从头播放
1代表从头播放
                     * @return InputStartType 作为入参时，表示使用点播输入源，单画面输入时，点播文件是否从头开始播放。
默认为0。
有效值，0,1。
0代表不从头播放
1代表从头播放
                     * 
                     */
                    int64_t GetInputStartType() const;

                    /**
                     * 设置作为入参时，表示使用点播输入源，单画面输入时，点播文件是否从头开始播放。
默认为0。
有效值，0,1。
0代表不从头播放
1代表从头播放
                     * @param _inputStartType 作为入参时，表示使用点播输入源，单画面输入时，点播文件是否从头开始播放。
默认为0。
有效值，0,1。
0代表不从头播放
1代表从头播放
                     * 
                     */
                    void SetInputStartType(const int64_t& _inputStartType);

                    /**
                     * 判断参数 InputStartType 是否已赋值
                     * @return InputStartType 是否已赋值
                     * 
                     */
                    bool InputStartTypeHasBeenSet() const;

                    /**
                     * 获取LayoutIndex类型，
默认值:0
可选值[0,1]
0:默认类型，代表普通布局
1:单输入类型，代表单输入布局
                     * @return LayoutIndexType LayoutIndex类型，
默认值:0
可选值[0,1]
0:默认类型，代表普通布局
1:单输入类型，代表单输入布局
                     * 
                     */
                    int64_t GetLayoutIndexType() const;

                    /**
                     * 设置LayoutIndex类型，
默认值:0
可选值[0,1]
0:默认类型，代表普通布局
1:单输入类型，代表单输入布局
                     * @param _layoutIndexType LayoutIndex类型，
默认值:0
可选值[0,1]
0:默认类型，代表普通布局
1:单输入类型，代表单输入布局
                     * 
                     */
                    void SetLayoutIndexType(const int64_t& _layoutIndexType);

                    /**
                     * 判断参数 LayoutIndexType 是否已赋值
                     * @return LayoutIndexType 是否已赋值
                     * 
                     */
                    bool LayoutIndexTypeHasBeenSet() const;

                private:

                    /**
                     * 布局Index。
如果使用自定义布局，为自定义布局下标。
如果使用单输入布局，如使用输入1，则LayoutIndexType=1， 且LayoutIndex=1，以此类推。
                     */
                    uint64_t m_layoutIndex;
                    bool m_layoutIndexHasBeenSet;

                    /**
                     * 使用的水印Index列表。
注：当作为入参使用时，列表中的水印Index需要已经存在。
                     */
                    std::vector<uint64_t> m_markPicIndexList;
                    bool m_markPicIndexListHasBeenSet;

                    /**
                     * 使用的文字水印Index列表。
注：作为入参使用时，列表中的Index需要已经存在。
                     */
                    std::vector<uint64_t> m_markWordIndexList;
                    bool m_markWordIndexListHasBeenSet;

                    /**
                     * 使用的转场类型。
注：支持的转场类型可通过DescribeCasterTransitionTypes接口获取。
                     */
                    std::string m_transitionType;
                    bool m_transitionTypeHasBeenSet;

                    /**
                     * 使用的音频输入Index列表。
注：当该字段非空时，表示使用布局中对应的输入源的视频，AudioIndexList中对应的输入源的音频。且这些输入源需已存在。
                     */
                    std::vector<uint64_t> m_audioIndexList;
                    bool m_audioIndexListHasBeenSet;

                    /**
                     * 作为入参时，表示使用点播输入源，单画面输入时，点播文件是否从头开始播放。
默认为0。
有效值，0,1。
0代表不从头播放
1代表从头播放
                     */
                    int64_t m_inputStartType;
                    bool m_inputStartTypeHasBeenSet;

                    /**
                     * LayoutIndex类型，
默认值:0
可选值[0,1]
0:默认类型，代表普通布局
1:单输入类型，代表单输入布局
                     */
                    int64_t m_layoutIndexType;
                    bool m_layoutIndexTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CASTERDISPLAYINFO_H_
