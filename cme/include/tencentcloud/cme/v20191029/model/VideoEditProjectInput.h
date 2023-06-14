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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_VIDEOEDITPROJECTINPUT_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_VIDEOEDITPROJECTINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/MediaTrack.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 视频编辑项目输入参数
                */
                class VideoEditProjectInput : public AbstractModel
                {
                public:
                    VideoEditProjectInput();
                    ~VideoEditProjectInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取画布宽高比，取值有：
<li>16:9；</li>
<li>9:16；</li>
<li>2:1。</li>
默认值 16:9 。
                     * @return AspectRatio 画布宽高比，取值有：
<li>16:9；</li>
<li>9:16；</li>
<li>2:1。</li>
默认值 16:9 。
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置画布宽高比，取值有：
<li>16:9；</li>
<li>9:16；</li>
<li>2:1。</li>
默认值 16:9 。
                     * @param _aspectRatio 画布宽高比，取值有：
<li>16:9；</li>
<li>9:16；</li>
<li>2:1。</li>
默认值 16:9 。
                     * 
                     */
                    void SetAspectRatio(const std::string& _aspectRatio);

                    /**
                     * 判断参数 AspectRatio 是否已赋值
                     * @return AspectRatio 是否已赋值
                     * 
                     */
                    bool AspectRatioHasBeenSet() const;

                    /**
                     * 获取视频编辑模板媒体 ID ，通过模板媒体导入项目轨道数据时填写。
                     * @return VideoEditTemplateId 视频编辑模板媒体 ID ，通过模板媒体导入项目轨道数据时填写。
                     * 
                     */
                    std::string GetVideoEditTemplateId() const;

                    /**
                     * 设置视频编辑模板媒体 ID ，通过模板媒体导入项目轨道数据时填写。
                     * @param _videoEditTemplateId 视频编辑模板媒体 ID ，通过模板媒体导入项目轨道数据时填写。
                     * 
                     */
                    void SetVideoEditTemplateId(const std::string& _videoEditTemplateId);

                    /**
                     * 判断参数 VideoEditTemplateId 是否已赋值
                     * @return VideoEditTemplateId 是否已赋值
                     * 
                     */
                    bool VideoEditTemplateIdHasBeenSet() const;

                    /**
                     * 获取输入的媒体轨道列表，包括视频、音频，等媒体组成的多个轨道信息。其中：<li>输入的多个轨道在时间轴上和输出媒体文件的时间轴对齐；</li><li>时间轴上相同时间点的各个轨道的素材进行重叠，视频或者图片按轨道顺序进行图像的叠加，轨道顺序高的素材叠加在上面，音频素材进行混音；</li><li>视频、音频，每一种类型的轨道最多支持10个。</li>
注：当从模板导入项目时（即 VideoEditTemplateId 不为空时），该参数无效。
                     * @return InitTracks 输入的媒体轨道列表，包括视频、音频，等媒体组成的多个轨道信息。其中：<li>输入的多个轨道在时间轴上和输出媒体文件的时间轴对齐；</li><li>时间轴上相同时间点的各个轨道的素材进行重叠，视频或者图片按轨道顺序进行图像的叠加，轨道顺序高的素材叠加在上面，音频素材进行混音；</li><li>视频、音频，每一种类型的轨道最多支持10个。</li>
注：当从模板导入项目时（即 VideoEditTemplateId 不为空时），该参数无效。
                     * 
                     */
                    std::vector<MediaTrack> GetInitTracks() const;

                    /**
                     * 设置输入的媒体轨道列表，包括视频、音频，等媒体组成的多个轨道信息。其中：<li>输入的多个轨道在时间轴上和输出媒体文件的时间轴对齐；</li><li>时间轴上相同时间点的各个轨道的素材进行重叠，视频或者图片按轨道顺序进行图像的叠加，轨道顺序高的素材叠加在上面，音频素材进行混音；</li><li>视频、音频，每一种类型的轨道最多支持10个。</li>
注：当从模板导入项目时（即 VideoEditTemplateId 不为空时），该参数无效。
                     * @param _initTracks 输入的媒体轨道列表，包括视频、音频，等媒体组成的多个轨道信息。其中：<li>输入的多个轨道在时间轴上和输出媒体文件的时间轴对齐；</li><li>时间轴上相同时间点的各个轨道的素材进行重叠，视频或者图片按轨道顺序进行图像的叠加，轨道顺序高的素材叠加在上面，音频素材进行混音；</li><li>视频、音频，每一种类型的轨道最多支持10个。</li>
注：当从模板导入项目时（即 VideoEditTemplateId 不为空时），该参数无效。
                     * 
                     */
                    void SetInitTracks(const std::vector<MediaTrack>& _initTracks);

                    /**
                     * 判断参数 InitTracks 是否已赋值
                     * @return InitTracks 是否已赋值
                     * 
                     */
                    bool InitTracksHasBeenSet() const;

                private:

                    /**
                     * 画布宽高比，取值有：
<li>16:9；</li>
<li>9:16；</li>
<li>2:1。</li>
默认值 16:9 。
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * 视频编辑模板媒体 ID ，通过模板媒体导入项目轨道数据时填写。
                     */
                    std::string m_videoEditTemplateId;
                    bool m_videoEditTemplateIdHasBeenSet;

                    /**
                     * 输入的媒体轨道列表，包括视频、音频，等媒体组成的多个轨道信息。其中：<li>输入的多个轨道在时间轴上和输出媒体文件的时间轴对齐；</li><li>时间轴上相同时间点的各个轨道的素材进行重叠，视频或者图片按轨道顺序进行图像的叠加，轨道顺序高的素材叠加在上面，音频素材进行混音；</li><li>视频、音频，每一种类型的轨道最多支持10个。</li>
注：当从模板导入项目时（即 VideoEditTemplateId 不为空时），该参数无效。
                     */
                    std::vector<MediaTrack> m_initTracks;
                    bool m_initTracksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_VIDEOEDITPROJECTINPUT_H_
