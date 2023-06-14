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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_IMPORTMEDIATOPROJECTREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_IMPORTMEDIATOPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/ExternalMediaInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * ImportMediaToProject请求参数结构体
                */
                class ImportMediaToProjectRequest : public AbstractModel
                {
                public:
                    ImportMediaToProjectRequest();
                    ~ImportMediaToProjectRequest() = default;
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
                     * 获取项目 Id。
                     * @return ProjectId 项目 Id。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目 Id。
                     * @param _projectId 项目 Id。
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
                     * 获取导入媒资类型，取值：
<li>VOD：云点播文件；</li>
<li>EXTERNAL：媒资绑定。</li>

注意：如果不填默认为云点播文件，如果媒体存储在非腾讯云点播中，都需要使用媒资绑定。
                     * @return SourceType 导入媒资类型，取值：
<li>VOD：云点播文件；</li>
<li>EXTERNAL：媒资绑定。</li>

注意：如果不填默认为云点播文件，如果媒体存储在非腾讯云点播中，都需要使用媒资绑定。
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置导入媒资类型，取值：
<li>VOD：云点播文件；</li>
<li>EXTERNAL：媒资绑定。</li>

注意：如果不填默认为云点播文件，如果媒体存储在非腾讯云点播中，都需要使用媒资绑定。
                     * @param _sourceType 导入媒资类型，取值：
<li>VOD：云点播文件；</li>
<li>EXTERNAL：媒资绑定。</li>

注意：如果不填默认为云点播文件，如果媒体存储在非腾讯云点播中，都需要使用媒资绑定。
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取云点播媒资文件 Id，当 SourceType 取值 VOD 或者缺省的时候必填。
                     * @return VodFileId 云点播媒资文件 Id，当 SourceType 取值 VOD 或者缺省的时候必填。
                     * 
                     */
                    std::string GetVodFileId() const;

                    /**
                     * 设置云点播媒资文件 Id，当 SourceType 取值 VOD 或者缺省的时候必填。
                     * @param _vodFileId 云点播媒资文件 Id，当 SourceType 取值 VOD 或者缺省的时候必填。
                     * 
                     */
                    void SetVodFileId(const std::string& _vodFileId);

                    /**
                     * 判断参数 VodFileId 是否已赋值
                     * @return VodFileId 是否已赋值
                     * 
                     */
                    bool VodFileIdHasBeenSet() const;

                    /**
                     * 获取原始媒资文件信息，当 SourceType 取值 EXTERNAL 的时候必填。
                     * @return ExternalMediaInfo 原始媒资文件信息，当 SourceType 取值 EXTERNAL 的时候必填。
                     * 
                     */
                    ExternalMediaInfo GetExternalMediaInfo() const;

                    /**
                     * 设置原始媒资文件信息，当 SourceType 取值 EXTERNAL 的时候必填。
                     * @param _externalMediaInfo 原始媒资文件信息，当 SourceType 取值 EXTERNAL 的时候必填。
                     * 
                     */
                    void SetExternalMediaInfo(const ExternalMediaInfo& _externalMediaInfo);

                    /**
                     * 判断参数 ExternalMediaInfo 是否已赋值
                     * @return ExternalMediaInfo 是否已赋值
                     * 
                     */
                    bool ExternalMediaInfoHasBeenSet() const;

                    /**
                     * 获取媒体名称，不能超过30个字符。如果不填，则媒体名称为点播媒资文件名称。
                     * @return Name 媒体名称，不能超过30个字符。如果不填，则媒体名称为点播媒资文件名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置媒体名称，不能超过30个字符。如果不填，则媒体名称为点播媒资文件名称。
                     * @param _name 媒体名称，不能超过30个字符。如果不填，则媒体名称为点播媒资文件名称。
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
                     * 获取媒体预处理配置 ID，取值：
<li>10：进行视频编辑预处理。</li>

注意：如果填0或者不填则不进行处理，如果原始视频不可在浏览器直接播放将无法在编辑页面编辑。
                     * @return PreProcessDefinition 媒体预处理配置 ID，取值：
<li>10：进行视频编辑预处理。</li>

注意：如果填0或者不填则不进行处理，如果原始视频不可在浏览器直接播放将无法在编辑页面编辑。
                     * 
                     */
                    int64_t GetPreProcessDefinition() const;

                    /**
                     * 设置媒体预处理配置 ID，取值：
<li>10：进行视频编辑预处理。</li>

注意：如果填0或者不填则不进行处理，如果原始视频不可在浏览器直接播放将无法在编辑页面编辑。
                     * @param _preProcessDefinition 媒体预处理配置 ID，取值：
<li>10：进行视频编辑预处理。</li>

注意：如果填0或者不填则不进行处理，如果原始视频不可在浏览器直接播放将无法在编辑页面编辑。
                     * 
                     */
                    void SetPreProcessDefinition(const int64_t& _preProcessDefinition);

                    /**
                     * 判断参数 PreProcessDefinition 是否已赋值
                     * @return PreProcessDefinition 是否已赋值
                     * 
                     */
                    bool PreProcessDefinitionHasBeenSet() const;

                    /**
                     * 获取操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以向所有视频编辑项目导入媒体；如果指定操作者，则操作者必须为项目所有者。
                     * @return Operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以向所有视频编辑项目导入媒体；如果指定操作者，则操作者必须为项目所有者。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以向所有视频编辑项目导入媒体；如果指定操作者，则操作者必须为项目所有者。
                     * @param _operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以向所有视频编辑项目导入媒体；如果指定操作者，则操作者必须为项目所有者。
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
                     * 项目 Id。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 导入媒资类型，取值：
<li>VOD：云点播文件；</li>
<li>EXTERNAL：媒资绑定。</li>

注意：如果不填默认为云点播文件，如果媒体存储在非腾讯云点播中，都需要使用媒资绑定。
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 云点播媒资文件 Id，当 SourceType 取值 VOD 或者缺省的时候必填。
                     */
                    std::string m_vodFileId;
                    bool m_vodFileIdHasBeenSet;

                    /**
                     * 原始媒资文件信息，当 SourceType 取值 EXTERNAL 的时候必填。
                     */
                    ExternalMediaInfo m_externalMediaInfo;
                    bool m_externalMediaInfoHasBeenSet;

                    /**
                     * 媒体名称，不能超过30个字符。如果不填，则媒体名称为点播媒资文件名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 媒体预处理配置 ID，取值：
<li>10：进行视频编辑预处理。</li>

注意：如果填0或者不填则不进行处理，如果原始视频不可在浏览器直接播放将无法在编辑页面编辑。
                     */
                    int64_t m_preProcessDefinition;
                    bool m_preProcessDefinitionHasBeenSet;

                    /**
                     * 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以向所有视频编辑项目导入媒体；如果指定操作者，则操作者必须为项目所有者。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_IMPORTMEDIATOPROJECTREQUEST_H_
