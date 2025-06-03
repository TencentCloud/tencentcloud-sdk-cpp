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
#include <tencentcloud/cme/v20191029/model/MediaCastProjectInput.h>


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
                     * 获取平台 Id，指定访问的平台。平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @return Platform 平台 Id，指定访问的平台。平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台 Id，指定访问的平台。平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @param _platform 平台 Id，指定访问的平台。平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取项目名称，不可超过30个字符。
                     * @return Name 项目名称，不可超过30个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置项目名称，不可超过30个字符。
                     * @param _name 项目名称，不可超过30个字符。
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
                     * 获取项目归属者，即项目的所有者，后续操作只有该所有者有权限操作。

注：目前所有项目只能设置归属个人，暂不支持团队项目。
                     * @return Owner 项目归属者，即项目的所有者，后续操作只有该所有者有权限操作。

注：目前所有项目只能设置归属个人，暂不支持团队项目。
                     * 
                     */
                    Entity GetOwner() const;

                    /**
                     * 设置项目归属者，即项目的所有者，后续操作只有该所有者有权限操作。

注：目前所有项目只能设置归属个人，暂不支持团队项目。
                     * @param _owner 项目归属者，即项目的所有者，后续操作只有该所有者有权限操作。

注：目前所有项目只能设置归属个人，暂不支持团队项目。
                     * 
                     */
                    void SetOwner(const Entity& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取项目类别，取值有：
<li>VIDEO_EDIT：视频编辑。</li>
<li>SWITCHER：导播台。</li>
<li>VIDEO_SEGMENTATION：视频拆条。</li>
<li>STREAM_CONNECT：云转推。</li>
<li>RECORD_REPLAY：录制回放。</li>
<li>MEDIA_CAST：媒体转推。</li>
                     * @return Category 项目类别，取值有：
<li>VIDEO_EDIT：视频编辑。</li>
<li>SWITCHER：导播台。</li>
<li>VIDEO_SEGMENTATION：视频拆条。</li>
<li>STREAM_CONNECT：云转推。</li>
<li>RECORD_REPLAY：录制回放。</li>
<li>MEDIA_CAST：媒体转推。</li>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置项目类别，取值有：
<li>VIDEO_EDIT：视频编辑。</li>
<li>SWITCHER：导播台。</li>
<li>VIDEO_SEGMENTATION：视频拆条。</li>
<li>STREAM_CONNECT：云转推。</li>
<li>RECORD_REPLAY：录制回放。</li>
<li>MEDIA_CAST：媒体转推。</li>
                     * @param _category 项目类别，取值有：
<li>VIDEO_EDIT：视频编辑。</li>
<li>SWITCHER：导播台。</li>
<li>VIDEO_SEGMENTATION：视频拆条。</li>
<li>STREAM_CONNECT：云转推。</li>
<li>RECORD_REPLAY：录制回放。</li>
<li>MEDIA_CAST：媒体转推。</li>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取项目模式，一个项目可以有多种模式并相互切换。
当 Category 为 VIDEO_EDIT 时，可选模式有：
<li>Default：默认模式，即普通视频编辑项目。</li>
<li>VideoEditTemplate：剪辑模板制作模式，用于制作剪辑模板。</li>

注：不填则为默认模式。
                     * @return Mode 项目模式，一个项目可以有多种模式并相互切换。
当 Category 为 VIDEO_EDIT 时，可选模式有：
<li>Default：默认模式，即普通视频编辑项目。</li>
<li>VideoEditTemplate：剪辑模板制作模式，用于制作剪辑模板。</li>

注：不填则为默认模式。
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置项目模式，一个项目可以有多种模式并相互切换。
当 Category 为 VIDEO_EDIT 时，可选模式有：
<li>Default：默认模式，即普通视频编辑项目。</li>
<li>VideoEditTemplate：剪辑模板制作模式，用于制作剪辑模板。</li>

注：不填则为默认模式。
                     * @param _mode 项目模式，一个项目可以有多种模式并相互切换。
当 Category 为 VIDEO_EDIT 时，可选模式有：
<li>Default：默认模式，即普通视频编辑项目。</li>
<li>VideoEditTemplate：剪辑模板制作模式，用于制作剪辑模板。</li>

注：不填则为默认模式。
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取画布宽高比。
该字段已经废弃，请使用具体项目输入中的 AspectRatio 字段。
                     * @return AspectRatio 画布宽高比。
该字段已经废弃，请使用具体项目输入中的 AspectRatio 字段。
                     * @deprecated
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置画布宽高比。
该字段已经废弃，请使用具体项目输入中的 AspectRatio 字段。
                     * @param _aspectRatio 画布宽高比。
该字段已经废弃，请使用具体项目输入中的 AspectRatio 字段。
                     * @deprecated
                     */
                    void SetAspectRatio(const std::string& _aspectRatio);

                    /**
                     * 判断参数 AspectRatio 是否已赋值
                     * @return AspectRatio 是否已赋值
                     * @deprecated
                     */
                    bool AspectRatioHasBeenSet() const;

                    /**
                     * 获取项目描述信息。
                     * @return Description 项目描述信息。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置项目描述信息。
                     * @param _description 项目描述信息。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取导播台项目输入信息，仅当项目类型为 SWITCHER 时必填。
                     * @return SwitcherProjectInput 导播台项目输入信息，仅当项目类型为 SWITCHER 时必填。
                     * 
                     */
                    SwitcherProjectInput GetSwitcherProjectInput() const;

                    /**
                     * 设置导播台项目输入信息，仅当项目类型为 SWITCHER 时必填。
                     * @param _switcherProjectInput 导播台项目输入信息，仅当项目类型为 SWITCHER 时必填。
                     * 
                     */
                    void SetSwitcherProjectInput(const SwitcherProjectInput& _switcherProjectInput);

                    /**
                     * 判断参数 SwitcherProjectInput 是否已赋值
                     * @return SwitcherProjectInput 是否已赋值
                     * 
                     */
                    bool SwitcherProjectInputHasBeenSet() const;

                    /**
                     * 获取直播剪辑项目输入信息，暂未开放，请勿使用。
                     * @return LiveStreamClipProjectInput 直播剪辑项目输入信息，暂未开放，请勿使用。
                     * 
                     */
                    LiveStreamClipProjectInput GetLiveStreamClipProjectInput() const;

                    /**
                     * 设置直播剪辑项目输入信息，暂未开放，请勿使用。
                     * @param _liveStreamClipProjectInput 直播剪辑项目输入信息，暂未开放，请勿使用。
                     * 
                     */
                    void SetLiveStreamClipProjectInput(const LiveStreamClipProjectInput& _liveStreamClipProjectInput);

                    /**
                     * 判断参数 LiveStreamClipProjectInput 是否已赋值
                     * @return LiveStreamClipProjectInput 是否已赋值
                     * 
                     */
                    bool LiveStreamClipProjectInputHasBeenSet() const;

                    /**
                     * 获取视频编辑项目输入信息，仅当项目类型为 VIDEO_EDIT 时必填。
                     * @return VideoEditProjectInput 视频编辑项目输入信息，仅当项目类型为 VIDEO_EDIT 时必填。
                     * 
                     */
                    VideoEditProjectInput GetVideoEditProjectInput() const;

                    /**
                     * 设置视频编辑项目输入信息，仅当项目类型为 VIDEO_EDIT 时必填。
                     * @param _videoEditProjectInput 视频编辑项目输入信息，仅当项目类型为 VIDEO_EDIT 时必填。
                     * 
                     */
                    void SetVideoEditProjectInput(const VideoEditProjectInput& _videoEditProjectInput);

                    /**
                     * 判断参数 VideoEditProjectInput 是否已赋值
                     * @return VideoEditProjectInput 是否已赋值
                     * 
                     */
                    bool VideoEditProjectInputHasBeenSet() const;

                    /**
                     * 获取视频拆条项目输入信息，仅当项目类型为 VIDEO_SEGMENTATION  时必填。
                     * @return VideoSegmentationProjectInput 视频拆条项目输入信息，仅当项目类型为 VIDEO_SEGMENTATION  时必填。
                     * 
                     */
                    VideoSegmentationProjectInput GetVideoSegmentationProjectInput() const;

                    /**
                     * 设置视频拆条项目输入信息，仅当项目类型为 VIDEO_SEGMENTATION  时必填。
                     * @param _videoSegmentationProjectInput 视频拆条项目输入信息，仅当项目类型为 VIDEO_SEGMENTATION  时必填。
                     * 
                     */
                    void SetVideoSegmentationProjectInput(const VideoSegmentationProjectInput& _videoSegmentationProjectInput);

                    /**
                     * 判断参数 VideoSegmentationProjectInput 是否已赋值
                     * @return VideoSegmentationProjectInput 是否已赋值
                     * 
                     */
                    bool VideoSegmentationProjectInputHasBeenSet() const;

                    /**
                     * 获取云转推项目输入信息，仅当项目类型为 STREAM_CONNECT 时必填。
                     * @return StreamConnectProjectInput 云转推项目输入信息，仅当项目类型为 STREAM_CONNECT 时必填。
                     * 
                     */
                    StreamConnectProjectInput GetStreamConnectProjectInput() const;

                    /**
                     * 设置云转推项目输入信息，仅当项目类型为 STREAM_CONNECT 时必填。
                     * @param _streamConnectProjectInput 云转推项目输入信息，仅当项目类型为 STREAM_CONNECT 时必填。
                     * 
                     */
                    void SetStreamConnectProjectInput(const StreamConnectProjectInput& _streamConnectProjectInput);

                    /**
                     * 判断参数 StreamConnectProjectInput 是否已赋值
                     * @return StreamConnectProjectInput 是否已赋值
                     * 
                     */
                    bool StreamConnectProjectInputHasBeenSet() const;

                    /**
                     * 获取录制回放项目输入信息，仅当项目类型为 RECORD_REPLAY 时必填。
                     * @return RecordReplayProjectInput 录制回放项目输入信息，仅当项目类型为 RECORD_REPLAY 时必填。
                     * 
                     */
                    RecordReplayProjectInput GetRecordReplayProjectInput() const;

                    /**
                     * 设置录制回放项目输入信息，仅当项目类型为 RECORD_REPLAY 时必填。
                     * @param _recordReplayProjectInput 录制回放项目输入信息，仅当项目类型为 RECORD_REPLAY 时必填。
                     * 
                     */
                    void SetRecordReplayProjectInput(const RecordReplayProjectInput& _recordReplayProjectInput);

                    /**
                     * 判断参数 RecordReplayProjectInput 是否已赋值
                     * @return RecordReplayProjectInput 是否已赋值
                     * 
                     */
                    bool RecordReplayProjectInputHasBeenSet() const;

                    /**
                     * 获取媒体转推项目输入信息，仅当项目类型为 MEDIA_CAST 时必填。
                     * @return MediaCastProjectInput 媒体转推项目输入信息，仅当项目类型为 MEDIA_CAST 时必填。
                     * 
                     */
                    MediaCastProjectInput GetMediaCastProjectInput() const;

                    /**
                     * 设置媒体转推项目输入信息，仅当项目类型为 MEDIA_CAST 时必填。
                     * @param _mediaCastProjectInput 媒体转推项目输入信息，仅当项目类型为 MEDIA_CAST 时必填。
                     * 
                     */
                    void SetMediaCastProjectInput(const MediaCastProjectInput& _mediaCastProjectInput);

                    /**
                     * 判断参数 MediaCastProjectInput 是否已赋值
                     * @return MediaCastProjectInput 是否已赋值
                     * 
                     */
                    bool MediaCastProjectInputHasBeenSet() const;

                private:

                    /**
                     * 平台 Id，指定访问的平台。平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 项目名称，不可超过30个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 项目归属者，即项目的所有者，后续操作只有该所有者有权限操作。

注：目前所有项目只能设置归属个人，暂不支持团队项目。
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
<li>MEDIA_CAST：媒体转推。</li>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 项目模式，一个项目可以有多种模式并相互切换。
当 Category 为 VIDEO_EDIT 时，可选模式有：
<li>Default：默认模式，即普通视频编辑项目。</li>
<li>VideoEditTemplate：剪辑模板制作模式，用于制作剪辑模板。</li>

注：不填则为默认模式。
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
                     * 导播台项目输入信息，仅当项目类型为 SWITCHER 时必填。
                     */
                    SwitcherProjectInput m_switcherProjectInput;
                    bool m_switcherProjectInputHasBeenSet;

                    /**
                     * 直播剪辑项目输入信息，暂未开放，请勿使用。
                     */
                    LiveStreamClipProjectInput m_liveStreamClipProjectInput;
                    bool m_liveStreamClipProjectInputHasBeenSet;

                    /**
                     * 视频编辑项目输入信息，仅当项目类型为 VIDEO_EDIT 时必填。
                     */
                    VideoEditProjectInput m_videoEditProjectInput;
                    bool m_videoEditProjectInputHasBeenSet;

                    /**
                     * 视频拆条项目输入信息，仅当项目类型为 VIDEO_SEGMENTATION  时必填。
                     */
                    VideoSegmentationProjectInput m_videoSegmentationProjectInput;
                    bool m_videoSegmentationProjectInputHasBeenSet;

                    /**
                     * 云转推项目输入信息，仅当项目类型为 STREAM_CONNECT 时必填。
                     */
                    StreamConnectProjectInput m_streamConnectProjectInput;
                    bool m_streamConnectProjectInputHasBeenSet;

                    /**
                     * 录制回放项目输入信息，仅当项目类型为 RECORD_REPLAY 时必填。
                     */
                    RecordReplayProjectInput m_recordReplayProjectInput;
                    bool m_recordReplayProjectInputHasBeenSet;

                    /**
                     * 媒体转推项目输入信息，仅当项目类型为 MEDIA_CAST 时必填。
                     */
                    MediaCastProjectInput m_mediaCastProjectInput;
                    bool m_mediaCastProjectInputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_CREATEPROJECTREQUEST_H_
