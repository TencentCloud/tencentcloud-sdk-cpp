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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_EXPORTVIDEOBYVIDEOSEGMENTATIONDATAREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_EXPORTVIDEOBYVIDEOSEGMENTATIONDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/CMEExportInfo.h>
#include <tencentcloud/cme/v20191029/model/VODExportInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * ExportVideoByVideoSegmentationData请求参数结构体
                */
                class ExportVideoByVideoSegmentationDataRequest : public AbstractModel
                {
                public:
                    ExportVideoByVideoSegmentationDataRequest();
                    ~ExportVideoByVideoSegmentationDataRequest() = default;
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
                     * 获取视频拆条项目 Id 。
                     * @return ProjectId 视频拆条项目 Id 。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置视频拆条项目 Id 。
                     * @param _projectId 视频拆条项目 Id 。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取指定需要导出的智能拆条片段的组 Id 。
                     * @return SegmentGroupId 指定需要导出的智能拆条片段的组 Id 。
                     * 
                     */
                    std::string GetSegmentGroupId() const;

                    /**
                     * 设置指定需要导出的智能拆条片段的组 Id 。
                     * @param _segmentGroupId 指定需要导出的智能拆条片段的组 Id 。
                     * 
                     */
                    void SetSegmentGroupId(const std::string& _segmentGroupId);

                    /**
                     * 判断参数 SegmentGroupId 是否已赋值
                     * @return SegmentGroupId 是否已赋值
                     * 
                     */
                    bool SegmentGroupIdHasBeenSet() const;

                    /**
                     * 获取指定需要导出的智能拆条片段 Id  集合。
                     * @return SegmentIds 指定需要导出的智能拆条片段 Id  集合。
                     * 
                     */
                    std::vector<std::string> GetSegmentIds() const;

                    /**
                     * 设置指定需要导出的智能拆条片段 Id  集合。
                     * @param _segmentIds 指定需要导出的智能拆条片段 Id  集合。
                     * 
                     */
                    void SetSegmentIds(const std::vector<std::string>& _segmentIds);

                    /**
                     * 判断参数 SegmentIds 是否已赋值
                     * @return SegmentIds 是否已赋值
                     * 
                     */
                    bool SegmentIdsHasBeenSet() const;

                    /**
                     * 获取导出模板 Id，目前不支持自定义创建，只支持下面的预置模板 Id。
<li>10：分辨率为 480P，输出视频格式为 MP4；</li>
<li>11：分辨率为 720P，输出视频格式为 MP4；</li>
<li>12：分辨率为 1080P，输出视频格式为 MP4。</li>
                     * @return Definition 导出模板 Id，目前不支持自定义创建，只支持下面的预置模板 Id。
<li>10：分辨率为 480P，输出视频格式为 MP4；</li>
<li>11：分辨率为 720P，输出视频格式为 MP4；</li>
<li>12：分辨率为 1080P，输出视频格式为 MP4。</li>
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置导出模板 Id，目前不支持自定义创建，只支持下面的预置模板 Id。
<li>10：分辨率为 480P，输出视频格式为 MP4；</li>
<li>11：分辨率为 720P，输出视频格式为 MP4；</li>
<li>12：分辨率为 1080P，输出视频格式为 MP4。</li>
                     * @param _definition 导出模板 Id，目前不支持自定义创建，只支持下面的预置模板 Id。
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
<li>CME：多媒体创作引擎，即导出为多媒体创作引擎媒资库，此导出目标在云点播媒资库依然可见；</li>
<li>VOD：云点播，即导出为云点播媒资库，此导出目标在多媒体创作引擎媒资库将不可见。</li>
                     * @return ExportDestination 导出目标，指定导出视频的目标媒资库，可取值有：
<li>CME：多媒体创作引擎，即导出为多媒体创作引擎媒资库，此导出目标在云点播媒资库依然可见；</li>
<li>VOD：云点播，即导出为云点播媒资库，此导出目标在多媒体创作引擎媒资库将不可见。</li>
                     * 
                     */
                    std::string GetExportDestination() const;

                    /**
                     * 设置导出目标，指定导出视频的目标媒资库，可取值有：
<li>CME：多媒体创作引擎，即导出为多媒体创作引擎媒资库，此导出目标在云点播媒资库依然可见；</li>
<li>VOD：云点播，即导出为云点播媒资库，此导出目标在多媒体创作引擎媒资库将不可见。</li>
                     * @param _exportDestination 导出目标，指定导出视频的目标媒资库，可取值有：
<li>CME：多媒体创作引擎，即导出为多媒体创作引擎媒资库，此导出目标在云点播媒资库依然可见；</li>
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
                     * 获取操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以操作任意智能拆条项目。如果指定操作者，则操作者必须为项目所有。
                     * @return Operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以操作任意智能拆条项目。如果指定操作者，则操作者必须为项目所有。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以操作任意智能拆条项目。如果指定操作者，则操作者必须为项目所有。
                     * @param _operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以操作任意智能拆条项目。如果指定操作者，则操作者必须为项目所有。
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
                     * 视频拆条项目 Id 。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 指定需要导出的智能拆条片段的组 Id 。
                     */
                    std::string m_segmentGroupId;
                    bool m_segmentGroupIdHasBeenSet;

                    /**
                     * 指定需要导出的智能拆条片段 Id  集合。
                     */
                    std::vector<std::string> m_segmentIds;
                    bool m_segmentIdsHasBeenSet;

                    /**
                     * 导出模板 Id，目前不支持自定义创建，只支持下面的预置模板 Id。
<li>10：分辨率为 480P，输出视频格式为 MP4；</li>
<li>11：分辨率为 720P，输出视频格式为 MP4；</li>
<li>12：分辨率为 1080P，输出视频格式为 MP4。</li>
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 导出目标，指定导出视频的目标媒资库，可取值有：
<li>CME：多媒体创作引擎，即导出为多媒体创作引擎媒资库，此导出目标在云点播媒资库依然可见；</li>
<li>VOD：云点播，即导出为云点播媒资库，此导出目标在多媒体创作引擎媒资库将不可见。</li>
                     */
                    std::string m_exportDestination;
                    bool m_exportDestinationHasBeenSet;

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
                     * 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以操作任意智能拆条项目。如果指定操作者，则操作者必须为项目所有。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_EXPORTVIDEOBYVIDEOSEGMENTATIONDATAREQUEST_H_
