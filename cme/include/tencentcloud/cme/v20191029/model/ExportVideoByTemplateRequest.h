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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_EXPORTVIDEOBYTEMPLATEREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_EXPORTVIDEOBYTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/SlotReplacementInfo.h>
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
                * ExportVideoByTemplate请求参数结构体
                */
                class ExportVideoByTemplateRequest : public AbstractModel
                {
                public:
                    ExportVideoByTemplateRequest();
                    ~ExportVideoByTemplateRequest() = default;
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
                     * 获取视频编辑模板  Id。
                     * @return TemplateId 视频编辑模板  Id。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置视频编辑模板  Id。
                     * @param _templateId 视频编辑模板  Id。
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

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
                    int64_t GetDefinition() const;

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
                    void SetDefinition(const int64_t& _definition);

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
                     * 获取需要替换的素材信息。
                     * @return SlotReplacements 需要替换的素材信息。
                     * 
                     */
                    std::vector<SlotReplacementInfo> GetSlotReplacements() const;

                    /**
                     * 设置需要替换的素材信息。
                     * @param _slotReplacements 需要替换的素材信息。
                     * 
                     */
                    void SetSlotReplacements(const std::vector<SlotReplacementInfo>& _slotReplacements);

                    /**
                     * 判断参数 SlotReplacements 是否已赋值
                     * @return SlotReplacements 是否已赋值
                     * 
                     */
                    bool SlotReplacementsHasBeenSet() const;

                    /**
                     * 获取导出的多媒体创作引擎媒资信息。当导出目标为 CME 时必填。
                     * @return CMEExportInfo 导出的多媒体创作引擎媒资信息。当导出目标为 CME 时必填。
                     * 
                     */
                    CMEExportInfo GetCMEExportInfo() const;

                    /**
                     * 设置导出的多媒体创作引擎媒资信息。当导出目标为 CME 时必填。
                     * @param _cMEExportInfo 导出的多媒体创作引擎媒资信息。当导出目标为 CME 时必填。
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
                     * 获取操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，无权限限制。如果指定操作者，则操作者需要有替换媒体及剪辑模板的权限。
                     * @return Operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，无权限限制。如果指定操作者，则操作者需要有替换媒体及剪辑模板的权限。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，无权限限制。如果指定操作者，则操作者需要有替换媒体及剪辑模板的权限。
                     * @param _operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，无权限限制。如果指定操作者，则操作者需要有替换媒体及剪辑模板的权限。
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
                     * 视频编辑模板  Id。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 导出视频预设配置 Id，推荐优先使用下面的默认预设配置 Id，有其他需求可通过接口定制预设配置。
<li>10：分辨率为 480P，输出视频格式为 MP4；</li>
<li>11：分辨率为 720P，输出视频格式为 MP4；</li>
<li>12：分辨率为 1080P，输出视频格式为 MP4。</li>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 导出目标，指定导出视频的目标媒资库，可取值有：
<li>CME：多媒体创作引擎，即导出为多媒体创作引擎媒资库，此导出目标在云点播媒资库依然可见；</li>
<li>VOD：云点播，即导出为云点播媒资库，此导出目标在多媒体创作引擎媒资库将不可见。</li>
                     */
                    std::string m_exportDestination;
                    bool m_exportDestinationHasBeenSet;

                    /**
                     * 需要替换的素材信息。
                     */
                    std::vector<SlotReplacementInfo> m_slotReplacements;
                    bool m_slotReplacementsHasBeenSet;

                    /**
                     * 导出的多媒体创作引擎媒资信息。当导出目标为 CME 时必填。
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
                     * 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，无权限限制。如果指定操作者，则操作者需要有替换媒体及剪辑模板的权限。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_EXPORTVIDEOBYTEMPLATEREQUEST_H_
