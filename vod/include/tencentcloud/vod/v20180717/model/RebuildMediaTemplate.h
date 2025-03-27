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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDMEDIATEMPLATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDMEDIATEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/RebuildVideoInfo.h>
#include <tencentcloud/vod/v20180717/model/RebuildAudioInfo.h>
#include <tencentcloud/vod/v20180717/model/RebuildMediaTargetVideoStream.h>
#include <tencentcloud/vod/v20180717/model/RebuildMediaTargetAudioStream.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 音画质重生模板详情。
                */
                class RebuildMediaTemplate : public AbstractModel
                {
                public:
                    RebuildMediaTemplate();
                    ~RebuildMediaTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音画质重生模板号。
                     * @return Definition 音画质重生模板号。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置音画质重生模板号。
                     * @param _definition 音画质重生模板号。
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取模板类型，可选值：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     * @return Type 模板类型，可选值：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置模板类型，可选值：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     * @param _type 模板类型，可选值：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
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
                     * 获取音画质重生模板名称。
                     * @return Name 音画质重生模板名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置音画质重生模板名称。
                     * @param _name 音画质重生模板名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取音画质重生模板描述。
                     * @return Comment 音画质重生模板描述。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置音画质重生模板描述。
                     * @param _comment 音画质重生模板描述。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取音画质重生视频控制信息。
                     * @return RebuildVideoInfo 音画质重生视频控制信息。
                     * 
                     */
                    RebuildVideoInfo GetRebuildVideoInfo() const;

                    /**
                     * 设置音画质重生视频控制信息。
                     * @param _rebuildVideoInfo 音画质重生视频控制信息。
                     * 
                     */
                    void SetRebuildVideoInfo(const RebuildVideoInfo& _rebuildVideoInfo);

                    /**
                     * 判断参数 RebuildVideoInfo 是否已赋值
                     * @return RebuildVideoInfo 是否已赋值
                     * 
                     */
                    bool RebuildVideoInfoHasBeenSet() const;

                    /**
                     * 获取音画质重生音频控制信息。
                     * @return RebuildAudioInfo 音画质重生音频控制信息。
                     * 
                     */
                    RebuildAudioInfo GetRebuildAudioInfo() const;

                    /**
                     * 设置音画质重生音频控制信息。
                     * @param _rebuildAudioInfo 音画质重生音频控制信息。
                     * 
                     */
                    void SetRebuildAudioInfo(const RebuildAudioInfo& _rebuildAudioInfo);

                    /**
                     * 判断参数 RebuildAudioInfo 是否已赋值
                     * @return RebuildAudioInfo 是否已赋值
                     * 
                     */
                    bool RebuildAudioInfoHasBeenSet() const;

                    /**
                     * 获取输出视频控制信息。
                     * @return TargetVideoInfo 输出视频控制信息。
                     * 
                     */
                    RebuildMediaTargetVideoStream GetTargetVideoInfo() const;

                    /**
                     * 设置输出视频控制信息。
                     * @param _targetVideoInfo 输出视频控制信息。
                     * 
                     */
                    void SetTargetVideoInfo(const RebuildMediaTargetVideoStream& _targetVideoInfo);

                    /**
                     * 判断参数 TargetVideoInfo 是否已赋值
                     * @return TargetVideoInfo 是否已赋值
                     * 
                     */
                    bool TargetVideoInfoHasBeenSet() const;

                    /**
                     * 获取输出音频控制信息。
                     * @return TargetAudioInfo 输出音频控制信息。
                     * 
                     */
                    RebuildMediaTargetAudioStream GetTargetAudioInfo() const;

                    /**
                     * 设置输出音频控制信息。
                     * @param _targetAudioInfo 输出音频控制信息。
                     * 
                     */
                    void SetTargetAudioInfo(const RebuildMediaTargetAudioStream& _targetAudioInfo);

                    /**
                     * 判断参数 TargetAudioInfo 是否已赋值
                     * @return TargetAudioInfo 是否已赋值
                     * 
                     */
                    bool TargetAudioInfoHasBeenSet() const;

                    /**
                     * 获取封装格式。可选值：mp4、hls。默认是 mp4。
                     * @return Container 封装格式。可选值：mp4、hls。默认是 mp4。
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置封装格式。可选值：mp4、hls。默认是 mp4。
                     * @param _container 封装格式。可选值：mp4、hls。默认是 mp4。
                     * 
                     */
                    void SetContainer(const std::string& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     * 
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取是否去除视频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
默认值 0。
                     * @return RemoveVideo 是否去除视频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
默认值 0。
                     * 
                     */
                    int64_t GetRemoveVideo() const;

                    /**
                     * 设置是否去除视频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
默认值 0。
                     * @param _removeVideo 是否去除视频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
默认值 0。
                     * 
                     */
                    void SetRemoveVideo(const int64_t& _removeVideo);

                    /**
                     * 判断参数 RemoveVideo 是否已赋值
                     * @return RemoveVideo 是否已赋值
                     * 
                     */
                    bool RemoveVideoHasBeenSet() const;

                    /**
                     * 获取是否去除音频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
默认值 0。
                     * @return RemoveAudio 是否去除音频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
默认值 0。
                     * 
                     */
                    int64_t GetRemoveAudio() const;

                    /**
                     * 设置是否去除音频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
默认值 0。
                     * @param _removeAudio 是否去除音频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
默认值 0。
                     * 
                     */
                    void SetRemoveAudio(const int64_t& _removeAudio);

                    /**
                     * 判断参数 RemoveAudio 是否已赋值
                     * @return RemoveAudio 是否已赋值
                     * 
                     */
                    bool RemoveAudioHasBeenSet() const;

                    /**
                     * 获取模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return CreateTime 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _createTime 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return UpdateTime 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _updateTime 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 音画质重生模板号。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 模板类型，可选值：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 音画质重生模板名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 音画质重生模板描述。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 音画质重生视频控制信息。
                     */
                    RebuildVideoInfo m_rebuildVideoInfo;
                    bool m_rebuildVideoInfoHasBeenSet;

                    /**
                     * 音画质重生音频控制信息。
                     */
                    RebuildAudioInfo m_rebuildAudioInfo;
                    bool m_rebuildAudioInfoHasBeenSet;

                    /**
                     * 输出视频控制信息。
                     */
                    RebuildMediaTargetVideoStream m_targetVideoInfo;
                    bool m_targetVideoInfoHasBeenSet;

                    /**
                     * 输出音频控制信息。
                     */
                    RebuildMediaTargetAudioStream m_targetAudioInfo;
                    bool m_targetAudioInfoHasBeenSet;

                    /**
                     * 封装格式。可选值：mp4、hls。默认是 mp4。
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * 是否去除视频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
默认值 0。
                     */
                    int64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * 是否去除音频数据，可选值：
<li>0：保留</li>
<li>1：去除</li>
默认值 0。
                     */
                    int64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                    /**
                     * 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDMEDIATEMPLATE_H_
