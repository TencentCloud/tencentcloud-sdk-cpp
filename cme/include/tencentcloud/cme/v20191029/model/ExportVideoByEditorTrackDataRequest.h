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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_EXPORTVIDEOBYEDITORTRACKDATAREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_EXPORTVIDEOBYEDITORTRACKDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/CMEExportInfo.h>
#include <tencentcloud/cme/v20191029/model/VODExportInfo.h>
#include <tencentcloud/cme/v20191029/model/VideoExportExtensionArgs.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * ExportVideoByEditorTrackData请求参数结构体
                */
                class ExportVideoByEditorTrackDataRequest : public AbstractModel
                {
                public:
                    ExportVideoByEditorTrackDataRequest();
                    ~ExportVideoByEditorTrackDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @return Platform 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @param _platform 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
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
                     * 获取导出视频预设配置 Id，推荐优先使用下面的默认预设配置 Id，有其他需求可通过接口定制预设配置。
<li>10：分辨率为 480P，输出视频格式为 MP4；</li>
<li>11：分辨率为 720P，输出视频格式为 MP4；</li>
<li>12：分辨率为 1080P，输出视频格式为 MP4。</li>
                     * @return Definition 导出视频预设配置 Id，推荐优先使用下面的默认预设配置 Id，有其他需求可通过接口定制预设配置。
<li>10：分辨率为 480P，输出视频格式为 MP4；</li>
<li>11：分辨率为 720P，输出视频格式为 MP4；</li>
<li>12：分辨率为 1080P，输出视频格式为 MP4。</li>
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置导出视频预设配置 Id，推荐优先使用下面的默认预设配置 Id，有其他需求可通过接口定制预设配置。
<li>10：分辨率为 480P，输出视频格式为 MP4；</li>
<li>11：分辨率为 720P，输出视频格式为 MP4；</li>
<li>12：分辨率为 1080P，输出视频格式为 MP4。</li>
                     * @param _definition 导出视频预设配置 Id，推荐优先使用下面的默认预设配置 Id，有其他需求可通过接口定制预设配置。
<li>10：分辨率为 480P，输出视频格式为 MP4；</li>
<li>11：分辨率为 720P，输出视频格式为 MP4；</li>
<li>12：分辨率为 1080P，输出视频格式为 MP4。</li>
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
                     * 获取导出目标，指定导出视频的目标媒资库，可取值有：
<li>CME：多媒体创建引擎，即导出到多媒体创作引擎媒资库，此导出目标在云点播媒资库依然可见；</li>
<li>VOD：云点播，即导出为云点播媒资库，此导出目标在多媒体创作引擎媒资库将不可见。</li>
                     * @return ExportDestination 导出目标，指定导出视频的目标媒资库，可取值有：
<li>CME：多媒体创建引擎，即导出到多媒体创作引擎媒资库，此导出目标在云点播媒资库依然可见；</li>
<li>VOD：云点播，即导出为云点播媒资库，此导出目标在多媒体创作引擎媒资库将不可见。</li>
                     * 
                     */
                    std::string GetExportDestination() const;

                    /**
                     * 设置导出目标，指定导出视频的目标媒资库，可取值有：
<li>CME：多媒体创建引擎，即导出到多媒体创作引擎媒资库，此导出目标在云点播媒资库依然可见；</li>
<li>VOD：云点播，即导出为云点播媒资库，此导出目标在多媒体创作引擎媒资库将不可见。</li>
                     * @param _exportDestination 导出目标，指定导出视频的目标媒资库，可取值有：
<li>CME：多媒体创建引擎，即导出到多媒体创作引擎媒资库，此导出目标在云点播媒资库依然可见；</li>
<li>VOD：云点播，即导出为云点播媒资库，此导出目标在多媒体创作引擎媒资库将不可见。</li>
                     * 
                     */
                    void SetExportDestination(const std::string& _exportDestination);

                    /**
                     * 判断参数 ExportDestination 是否已赋值
                     * @return ExportDestination 是否已赋值
                     * 
                     */
                    bool ExportDestinationHasBeenSet() const;

                    /**
                     * 获取轨道数据，用于描述待导出视频的内容。关于轨道数据的格式请查看 [视频合成协议](https://cloud.tencent.com/document/product/1156/51225)。文档中也描述了如何在页面上查看一个剪辑项目的轨道数据，该能力可以帮助开发者更方便地构造自己的轨道数据。
                     * @return TrackData 轨道数据，用于描述待导出视频的内容。关于轨道数据的格式请查看 [视频合成协议](https://cloud.tencent.com/document/product/1156/51225)。文档中也描述了如何在页面上查看一个剪辑项目的轨道数据，该能力可以帮助开发者更方便地构造自己的轨道数据。
                     * 
                     */
                    std::string GetTrackData() const;

                    /**
                     * 设置轨道数据，用于描述待导出视频的内容。关于轨道数据的格式请查看 [视频合成协议](https://cloud.tencent.com/document/product/1156/51225)。文档中也描述了如何在页面上查看一个剪辑项目的轨道数据，该能力可以帮助开发者更方便地构造自己的轨道数据。
                     * @param _trackData 轨道数据，用于描述待导出视频的内容。关于轨道数据的格式请查看 [视频合成协议](https://cloud.tencent.com/document/product/1156/51225)。文档中也描述了如何在页面上查看一个剪辑项目的轨道数据，该能力可以帮助开发者更方便地构造自己的轨道数据。
                     * 
                     */
                    void SetTrackData(const std::string& _trackData);

                    /**
                     * 判断参数 TrackData 是否已赋值
                     * @return TrackData 是否已赋值
                     * 
                     */
                    bool TrackDataHasBeenSet() const;

                    /**
                     * 获取轨道数据对应的画布宽高比，配合预设配置中的视频短边尺寸，可决定导出画面的尺寸。例：
<li>如果 AspectRatio 取值 16:9，预设配置选为12（短边1080），则导出尺寸为 1920 * 1080；</li>
<li>如果 AspectRatio 取值 9:16，预设配置选为11（短边720），则导出尺寸为 720 *1280。</li>
                     * @return AspectRatio 轨道数据对应的画布宽高比，配合预设配置中的视频短边尺寸，可决定导出画面的尺寸。例：
<li>如果 AspectRatio 取值 16:9，预设配置选为12（短边1080），则导出尺寸为 1920 * 1080；</li>
<li>如果 AspectRatio 取值 9:16，预设配置选为11（短边720），则导出尺寸为 720 *1280。</li>
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置轨道数据对应的画布宽高比，配合预设配置中的视频短边尺寸，可决定导出画面的尺寸。例：
<li>如果 AspectRatio 取值 16:9，预设配置选为12（短边1080），则导出尺寸为 1920 * 1080；</li>
<li>如果 AspectRatio 取值 9:16，预设配置选为11（短边720），则导出尺寸为 720 *1280。</li>
                     * @param _aspectRatio 轨道数据对应的画布宽高比，配合预设配置中的视频短边尺寸，可决定导出画面的尺寸。例：
<li>如果 AspectRatio 取值 16:9，预设配置选为12（短边1080），则导出尺寸为 1920 * 1080；</li>
<li>如果 AspectRatio 取值 9:16，预设配置选为11（短边720），则导出尺寸为 720 *1280。</li>
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
                     * 获取视频封面图片文件（如 jpeg, png 等）进行 Base64 编码后的字符串，仅支持 gif、jpeg、png 三种图片格式，原图片文件不能超过2 M大 小。
                     * @return CoverData 视频封面图片文件（如 jpeg, png 等）进行 Base64 编码后的字符串，仅支持 gif、jpeg、png 三种图片格式，原图片文件不能超过2 M大 小。
                     * 
                     */
                    std::string GetCoverData() const;

                    /**
                     * 设置视频封面图片文件（如 jpeg, png 等）进行 Base64 编码后的字符串，仅支持 gif、jpeg、png 三种图片格式，原图片文件不能超过2 M大 小。
                     * @param _coverData 视频封面图片文件（如 jpeg, png 等）进行 Base64 编码后的字符串，仅支持 gif、jpeg、png 三种图片格式，原图片文件不能超过2 M大 小。
                     * 
                     */
                    void SetCoverData(const std::string& _coverData);

                    /**
                     * 判断参数 CoverData 是否已赋值
                     * @return CoverData 是否已赋值
                     * 
                     */
                    bool CoverDataHasBeenSet() const;

                    /**
                     * 获取导出的多媒体创作引擎媒体信息。当导出目标为 CME 时必填。
                     * @return CMEExportInfo 导出的多媒体创作引擎媒体信息。当导出目标为 CME 时必填。
                     * 
                     */
                    CMEExportInfo GetCMEExportInfo() const;

                    /**
                     * 设置导出的多媒体创作引擎媒体信息。当导出目标为 CME 时必填。
                     * @param _cMEExportInfo 导出的多媒体创作引擎媒体信息。当导出目标为 CME 时必填。
                     * 
                     */
                    void SetCMEExportInfo(const CMEExportInfo& _cMEExportInfo);

                    /**
                     * 判断参数 CMEExportInfo 是否已赋值
                     * @return CMEExportInfo 是否已赋值
                     * 
                     */
                    bool CMEExportInfoHasBeenSet() const;

                    /**
                     * 获取导出的云点播媒资信息。当导出目标为 VOD 时必填。
                     * @return VODExportInfo 导出的云点播媒资信息。当导出目标为 VOD 时必填。
                     * 
                     */
                    VODExportInfo GetVODExportInfo() const;

                    /**
                     * 设置导出的云点播媒资信息。当导出目标为 VOD 时必填。
                     * @param _vODExportInfo 导出的云点播媒资信息。当导出目标为 VOD 时必填。
                     * 
                     */
                    void SetVODExportInfo(const VODExportInfo& _vODExportInfo);

                    /**
                     * 判断参数 VODExportInfo 是否已赋值
                     * @return VODExportInfo 是否已赋值
                     * 
                     */
                    bool VODExportInfoHasBeenSet() const;

                    /**
                     * 获取视频导出扩展参数。可以覆盖导出模板中的参数，灵活的指定导出规格及参数。
                     * @return ExportExtensionArgs 视频导出扩展参数。可以覆盖导出模板中的参数，灵活的指定导出规格及参数。
                     * 
                     */
                    VideoExportExtensionArgs GetExportExtensionArgs() const;

                    /**
                     * 设置视频导出扩展参数。可以覆盖导出模板中的参数，灵活的指定导出规格及参数。
                     * @param _exportExtensionArgs 视频导出扩展参数。可以覆盖导出模板中的参数，灵活的指定导出规格及参数。
                     * 
                     */
                    void SetExportExtensionArgs(const VideoExportExtensionArgs& _exportExtensionArgs);

                    /**
                     * 判断参数 ExportExtensionArgs 是否已赋值
                     * @return ExportExtensionArgs 是否已赋值
                     * 
                     */
                    bool ExportExtensionArgsHasBeenSet() const;

                    /**
                     * 获取操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，无权限限制。如果指定操作者，轨道数据中使用的媒资该操作者需要拥有使用权限。
                     * @return Operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，无权限限制。如果指定操作者，轨道数据中使用的媒资该操作者需要拥有使用权限。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，无权限限制。如果指定操作者，轨道数据中使用的媒资该操作者需要拥有使用权限。
                     * @param _operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，无权限限制。如果指定操作者，轨道数据中使用的媒资该操作者需要拥有使用权限。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 导出视频预设配置 Id，推荐优先使用下面的默认预设配置 Id，有其他需求可通过接口定制预设配置。
<li>10：分辨率为 480P，输出视频格式为 MP4；</li>
<li>11：分辨率为 720P，输出视频格式为 MP4；</li>
<li>12：分辨率为 1080P，输出视频格式为 MP4。</li>
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 导出目标，指定导出视频的目标媒资库，可取值有：
<li>CME：多媒体创建引擎，即导出到多媒体创作引擎媒资库，此导出目标在云点播媒资库依然可见；</li>
<li>VOD：云点播，即导出为云点播媒资库，此导出目标在多媒体创作引擎媒资库将不可见。</li>
                     */
                    std::string m_exportDestination;
                    bool m_exportDestinationHasBeenSet;

                    /**
                     * 轨道数据，用于描述待导出视频的内容。关于轨道数据的格式请查看 [视频合成协议](https://cloud.tencent.com/document/product/1156/51225)。文档中也描述了如何在页面上查看一个剪辑项目的轨道数据，该能力可以帮助开发者更方便地构造自己的轨道数据。
                     */
                    std::string m_trackData;
                    bool m_trackDataHasBeenSet;

                    /**
                     * 轨道数据对应的画布宽高比，配合预设配置中的视频短边尺寸，可决定导出画面的尺寸。例：
<li>如果 AspectRatio 取值 16:9，预设配置选为12（短边1080），则导出尺寸为 1920 * 1080；</li>
<li>如果 AspectRatio 取值 9:16，预设配置选为11（短边720），则导出尺寸为 720 *1280。</li>
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * 视频封面图片文件（如 jpeg, png 等）进行 Base64 编码后的字符串，仅支持 gif、jpeg、png 三种图片格式，原图片文件不能超过2 M大 小。
                     */
                    std::string m_coverData;
                    bool m_coverDataHasBeenSet;

                    /**
                     * 导出的多媒体创作引擎媒体信息。当导出目标为 CME 时必填。
                     */
                    CMEExportInfo m_cMEExportInfo;
                    bool m_cMEExportInfoHasBeenSet;

                    /**
                     * 导出的云点播媒资信息。当导出目标为 VOD 时必填。
                     */
                    VODExportInfo m_vODExportInfo;
                    bool m_vODExportInfoHasBeenSet;

                    /**
                     * 视频导出扩展参数。可以覆盖导出模板中的参数，灵活的指定导出规格及参数。
                     */
                    VideoExportExtensionArgs m_exportExtensionArgs;
                    bool m_exportExtensionArgsHasBeenSet;

                    /**
                     * 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，无权限限制。如果指定操作者，轨道数据中使用的媒资该操作者需要拥有使用权限。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_EXPORTVIDEOBYEDITORTRACKDATAREQUEST_H_
