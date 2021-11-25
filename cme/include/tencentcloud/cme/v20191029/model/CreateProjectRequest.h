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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_CREATEPROJECTREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_CREATEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/Entity.h>
#include <tencentcloud/cme/v20191029/model/SwitcherProjectInput.h>
#include <tencentcloud/cme/v20191029/model/LiveStreamClipProjectInput.h>
#include <tencentcloud/cme/v20191029/model/VideoEditProjectInput.h>
#include <tencentcloud/cme/v20191029/model/VideoSegmentationProjectInput.h>
#include <tencentcloud/cme/v20191029/model/StreamConnectProjectInput.h>
#include <tencentcloud/cme/v20191029/model/RecordReplayProjectInput.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * CreateProject请求参数结构体
                */
                class CreateProjectRequest : public AbstractModel
                {
                public:
                    CreateProjectRequest();
                    ~CreateProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台名称，指定访问的平台。
                     * @return Platform 平台名称，指定访问的平台。
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台名称，指定访问的平台。
                     * @param Platform 平台名称，指定访问的平台。
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取项目名称，不可超过30个字符。
                     * @return Name 项目名称，不可超过30个字符。
                     */
                    std::string GetName() const;

                    /**
                     * 设置项目名称，不可超过30个字符。
                     * @param Name 项目名称，不可超过30个字符。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取项目归属者。
注：云转推项目，仅支持个人归属。
                     * @return Owner 项目归属者。
注：云转推项目，仅支持个人归属。
                     */
                    Entity GetOwner() const;

                    /**
                     * 设置项目归属者。
注：云转推项目，仅支持个人归属。
                     * @param Owner 项目归属者。
注：云转推项目，仅支持个人归属。
                     */
                    void SetOwner(const Entity& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取项目类别，取值有：
<li>VIDEO_EDIT：视频编辑。</li>
<li>SWITCHER：导播台。</li>
<li>VIDEO_SEGMENTATION：视频拆条。</li>
<li>STREAM_CONNECT：云转推。</li>
<li>RECORD_REPLAY：录制回放。</li>
                     * @return Category 项目类别，取值有：
<li>VIDEO_EDIT：视频编辑。</li>
<li>SWITCHER：导播台。</li>
<li>VIDEO_SEGMENTATION：视频拆条。</li>
<li>STREAM_CONNECT：云转推。</li>
<li>RECORD_REPLAY：录制回放。</li>
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置项目类别，取值有：
<li>VIDEO_EDIT：视频编辑。</li>
<li>SWITCHER：导播台。</li>
<li>VIDEO_SEGMENTATION：视频拆条。</li>
<li>STREAM_CONNECT：云转推。</li>
<li>RECORD_REPLAY：录制回放。</li>
                     * @param Category 项目类别，取值有：
<li>VIDEO_EDIT：视频编辑。</li>
<li>SWITCHER：导播台。</li>
<li>VIDEO_SEGMENTATION：视频拆条。</li>
<li>STREAM_CONNECT：云转推。</li>
<li>RECORD_REPLAY：录制回放。</li>
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取项目模式，一个项目可以有多种模式并相互切换。
当 Category 为 VIDEO_EDIT 时，可选模式有：
<li>Default：默认模式。</li>
<li>VideoEditTemplate：视频编辑模板制作模式。</li>
                     * @return Mode 项目模式，一个项目可以有多种模式并相互切换。
当 Category 为 VIDEO_EDIT 时，可选模式有：
<li>Default：默认模式。</li>
<li>VideoEditTemplate：视频编辑模板制作模式。</li>
                     */
                    std::string GetMode() const;

                    /**
                     * 设置项目模式，一个项目可以有多种模式并相互切换。
当 Category 为 VIDEO_EDIT 时，可选模式有：
<li>Default：默认模式。</li>
<li>VideoEditTemplate：视频编辑模板制作模式。</li>
                     * @param Mode 项目模式，一个项目可以有多种模式并相互切换。
当 Category 为 VIDEO_EDIT 时，可选模式有：
<li>Default：默认模式。</li>
<li>VideoEditTemplate：视频编辑模板制作模式。</li>
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取画布宽高比。
该字段已经废弃，请使用具体项目输入中的 AspectRatio 字段。
                     * @return AspectRatio 画布宽高比。
该字段已经废弃，请使用具体项目输入中的 AspectRatio 字段。
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置画布宽高比。
该字段已经废弃，请使用具体项目输入中的 AspectRatio 字段。
                     * @param AspectRatio 画布宽高比。
该字段已经废弃，请使用具体项目输入中的 AspectRatio 字段。
                     */
                    void SetAspectRatio(const std::string& _aspectRatio);

                    /**
                     * 判断参数 AspectRatio 是否已赋值
                     * @return AspectRatio 是否已赋值
                     */
                    bool AspectRatioHasBeenSet() const;

                    /**
                     * 获取项目描述信息。
                     * @return Description 项目描述信息。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置项目描述信息。
                     * @param Description 项目描述信息。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取导播台信息，仅当项目类型为 SWITCHER 时必填。
                     * @return SwitcherProjectInput 导播台信息，仅当项目类型为 SWITCHER 时必填。
                     */
                    SwitcherProjectInput GetSwitcherProjectInput() const;

                    /**
                     * 设置导播台信息，仅当项目类型为 SWITCHER 时必填。
                     * @param SwitcherProjectInput 导播台信息，仅当项目类型为 SWITCHER 时必填。
                     */
                    void SetSwitcherProjectInput(const SwitcherProjectInput& _switcherProjectInput);

                    /**
                     * 判断参数 SwitcherProjectInput 是否已赋值
                     * @return SwitcherProjectInput 是否已赋值
                     */
                    bool SwitcherProjectInputHasBeenSet() const;

                    /**
                     * 获取直播剪辑信息，暂未开放，请勿使用。
                     * @return LiveStreamClipProjectInput 直播剪辑信息，暂未开放，请勿使用。
                     */
                    LiveStreamClipProjectInput GetLiveStreamClipProjectInput() const;

                    /**
                     * 设置直播剪辑信息，暂未开放，请勿使用。
                     * @param LiveStreamClipProjectInput 直播剪辑信息，暂未开放，请勿使用。
                     */
                    void SetLiveStreamClipProjectInput(const LiveStreamClipProjectInput& _liveStreamClipProjectInput);

                    /**
                     * 判断参数 LiveStreamClipProjectInput 是否已赋值
                     * @return LiveStreamClipProjectInput 是否已赋值
                     */
                    bool LiveStreamClipProjectInputHasBeenSet() const;

                    /**
                     * 获取视频编辑信息，仅当项目类型为 VIDEO_EDIT 时必填。
                     * @return VideoEditProjectInput 视频编辑信息，仅当项目类型为 VIDEO_EDIT 时必填。
                     */
                    VideoEditProjectInput GetVideoEditProjectInput() const;

                    /**
                     * 设置视频编辑信息，仅当项目类型为 VIDEO_EDIT 时必填。
                     * @param VideoEditProjectInput 视频编辑信息，仅当项目类型为 VIDEO_EDIT 时必填。
                     */
                    void SetVideoEditProjectInput(const VideoEditProjectInput& _videoEditProjectInput);

                    /**
                     * 判断参数 VideoEditProjectInput 是否已赋值
                     * @return VideoEditProjectInput 是否已赋值
                     */
                    bool VideoEditProjectInputHasBeenSet() const;

                    /**
                     * 获取视频拆条信息，仅当项目类型为 VIDEO_SEGMENTATION  时必填。
                     * @return VideoSegmentationProjectInput 视频拆条信息，仅当项目类型为 VIDEO_SEGMENTATION  时必填。
                     */
                    VideoSegmentationProjectInput GetVideoSegmentationProjectInput() const;

                    /**
                     * 设置视频拆条信息，仅当项目类型为 VIDEO_SEGMENTATION  时必填。
                     * @param VideoSegmentationProjectInput 视频拆条信息，仅当项目类型为 VIDEO_SEGMENTATION  时必填。
                     */
                    void SetVideoSegmentationProjectInput(const VideoSegmentationProjectInput& _videoSegmentationProjectInput);

                    /**
                     * 判断参数 VideoSegmentationProjectInput 是否已赋值
                     * @return VideoSegmentationProjectInput 是否已赋值
                     */
                    bool VideoSegmentationProjectInputHasBeenSet() const;

                    /**
                     * 获取云转推项目信息，仅当项目类型为 STREAM_CONNECT 时必填。
                     * @return StreamConnectProjectInput 云转推项目信息，仅当项目类型为 STREAM_CONNECT 时必填。
                     */
                    StreamConnectProjectInput GetStreamConnectProjectInput() const;

                    /**
                     * 设置云转推项目信息，仅当项目类型为 STREAM_CONNECT 时必填。
                     * @param StreamConnectProjectInput 云转推项目信息，仅当项目类型为 STREAM_CONNECT 时必填。
                     */
                    void SetStreamConnectProjectInput(const StreamConnectProjectInput& _streamConnectProjectInput);

                    /**
                     * 判断参数 StreamConnectProjectInput 是否已赋值
                     * @return StreamConnectProjectInput 是否已赋值
                     */
                    bool StreamConnectProjectInputHasBeenSet() const;

                    /**
                     * 获取录制回放项目信息，仅当项目类型为 RECORD_REPLAY 时必填。
                     * @return RecordReplayProjectInput 录制回放项目信息，仅当项目类型为 RECORD_REPLAY 时必填。
                     */
                    RecordReplayProjectInput GetRecordReplayProjectInput() const;

                    /**
                     * 设置录制回放项目信息，仅当项目类型为 RECORD_REPLAY 时必填。
                     * @param RecordReplayProjectInput 录制回放项目信息，仅当项目类型为 RECORD_REPLAY 时必填。
                     */
                    void SetRecordReplayProjectInput(const RecordReplayProjectInput& _recordReplayProjectInput);

                    /**
                     * 判断参数 RecordReplayProjectInput 是否已赋值
                     * @return RecordReplayProjectInput 是否已赋值
                     */
                    bool RecordReplayProjectInputHasBeenSet() const;

                private:

                    /**
                     * 平台名称，指定访问的平台。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 项目名称，不可超过30个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 项目归属者。
注：云转推项目，仅支持个人归属。
                     */
                    Entity m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 项目类别，取值有：
<li>VIDEO_EDIT：视频编辑。</li>
<li>SWITCHER：导播台。</li>
<li>VIDEO_SEGMENTATION：视频拆条。</li>
<li>STREAM_CONNECT：云转推。</li>
<li>RECORD_REPLAY：录制回放。</li>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 项目模式，一个项目可以有多种模式并相互切换。
当 Category 为 VIDEO_EDIT 时，可选模式有：
<li>Default：默认模式。</li>
<li>VideoEditTemplate：视频编辑模板制作模式。</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 画布宽高比。
该字段已经废弃，请使用具体项目输入中的 AspectRatio 字段。
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * 项目描述信息。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 导播台信息，仅当项目类型为 SWITCHER 时必填。
                     */
                    SwitcherProjectInput m_switcherProjectInput;
                    bool m_switcherProjectInputHasBeenSet;

                    /**
                     * 直播剪辑信息，暂未开放，请勿使用。
                     */
                    LiveStreamClipProjectInput m_liveStreamClipProjectInput;
                    bool m_liveStreamClipProjectInputHasBeenSet;

                    /**
                     * 视频编辑信息，仅当项目类型为 VIDEO_EDIT 时必填。
                     */
                    VideoEditProjectInput m_videoEditProjectInput;
                    bool m_videoEditProjectInputHasBeenSet;

                    /**
                     * 视频拆条信息，仅当项目类型为 VIDEO_SEGMENTATION  时必填。
                     */
                    VideoSegmentationProjectInput m_videoSegmentationProjectInput;
                    bool m_videoSegmentationProjectInputHasBeenSet;

                    /**
                     * 云转推项目信息，仅当项目类型为 STREAM_CONNECT 时必填。
                     */
                    StreamConnectProjectInput m_streamConnectProjectInput;
                    bool m_streamConnectProjectInputHasBeenSet;

                    /**
                     * 录制回放项目信息，仅当项目类型为 RECORD_REPLAY 时必填。
                     */
                    RecordReplayProjectInput m_recordReplayProjectInput;
                    bool m_recordReplayProjectInputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_CREATEPROJECTREQUEST_H_
