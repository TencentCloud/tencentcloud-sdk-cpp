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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_IMPORTMATERIALREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_IMPORTMATERIALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/Entity.h>
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
                * ImportMaterial请求参数结构体
                */
                class ImportMaterialRequest : public AbstractModel
                {
                public:
                    ImportMaterialRequest();
                    ~ImportMaterialRequest() = default;
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
                     * 获取媒体归属者，可支持归属团队或个人。
                     * @return Owner 媒体归属者，可支持归属团队或个人。
                     * 
                     */
                    Entity GetOwner() const;

                    /**
                     * 设置媒体归属者，可支持归属团队或个人。
                     * @param _owner 媒体归属者，可支持归属团队或个人。
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
                     * 获取媒体名称，不能超过30个字符。
                     * @return Name 媒体名称，不能超过30个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置媒体名称，不能超过30个字符。
                     * @param _name 媒体名称，不能超过30个字符。
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
                     * 获取导入媒资类型，取值：
<li>VOD：云点播文件；</li>
<li>EXTERNAL：媒资绑定。</li>

注意：如果不填默认为云点播文件，如果媒体存储在非腾讯云点播中，都需要使用媒资绑定。另外，导入云点播的文件，使用云点播的子应用 Id 必须与创建多媒体创作引擎平台时使用的云点播子应用一致。
                     * @return SourceType 导入媒资类型，取值：
<li>VOD：云点播文件；</li>
<li>EXTERNAL：媒资绑定。</li>

注意：如果不填默认为云点播文件，如果媒体存储在非腾讯云点播中，都需要使用媒资绑定。另外，导入云点播的文件，使用云点播的子应用 Id 必须与创建多媒体创作引擎平台时使用的云点播子应用一致。
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置导入媒资类型，取值：
<li>VOD：云点播文件；</li>
<li>EXTERNAL：媒资绑定。</li>

注意：如果不填默认为云点播文件，如果媒体存储在非腾讯云点播中，都需要使用媒资绑定。另外，导入云点播的文件，使用云点播的子应用 Id 必须与创建多媒体创作引擎平台时使用的云点播子应用一致。
                     * @param _sourceType 导入媒资类型，取值：
<li>VOD：云点播文件；</li>
<li>EXTERNAL：媒资绑定。</li>

注意：如果不填默认为云点播文件，如果媒体存储在非腾讯云点播中，都需要使用媒资绑定。另外，导入云点播的文件，使用云点播的子应用 Id 必须与创建多媒体创作引擎平台时使用的云点播子应用一致。
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
                     * 获取云点播媒资 FileId，仅当 SourceType 为 VOD 时有效。
                     * @return VodFileId 云点播媒资 FileId，仅当 SourceType 为 VOD 时有效。
                     * 
                     */
                    std::string GetVodFileId() const;

                    /**
                     * 设置云点播媒资 FileId，仅当 SourceType 为 VOD 时有效。
                     * @param _vodFileId 云点播媒资 FileId，仅当 SourceType 为 VOD 时有效。
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
                     * 获取媒体分类路径，形如："/a/b"，层级数不能超过10，每个层级长度不能超过15字符。若不填则默认为根路径。
                     * @return ClassPath 媒体分类路径，形如："/a/b"，层级数不能超过10，每个层级长度不能超过15字符。若不填则默认为根路径。
                     * 
                     */
                    std::string GetClassPath() const;

                    /**
                     * 设置媒体分类路径，形如："/a/b"，层级数不能超过10，每个层级长度不能超过15字符。若不填则默认为根路径。
                     * @param _classPath 媒体分类路径，形如："/a/b"，层级数不能超过10，每个层级长度不能超过15字符。若不填则默认为根路径。
                     * 
                     */
                    void SetClassPath(const std::string& _classPath);

                    /**
                     * 判断参数 ClassPath 是否已赋值
                     * @return ClassPath 是否已赋值
                     * 
                     */
                    bool ClassPathHasBeenSet() const;

                    /**
                     * 获取媒体预处理任务参数 ID。可取值有：
<li>10：进行编辑预处理。</li>
                     * @return PreProcessDefinition 媒体预处理任务参数 ID。可取值有：
<li>10：进行编辑预处理。</li>
                     * 
                     */
                    int64_t GetPreProcessDefinition() const;

                    /**
                     * 设置媒体预处理任务参数 ID。可取值有：
<li>10：进行编辑预处理。</li>
                     * @param _preProcessDefinition 媒体预处理任务参数 ID。可取值有：
<li>10：进行编辑预处理。</li>
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
                     * 获取操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以向任意团队或者个人导入媒体。如果指定操作者，如果媒体归属为个人，则操作者必须与归属者一致；如果媒体归属为团队，则必须为团队可导入媒体的团队成员(如果没有特殊设置，所有团队成员可导入媒体)。
                     * @return Operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以向任意团队或者个人导入媒体。如果指定操作者，如果媒体归属为个人，则操作者必须与归属者一致；如果媒体归属为团队，则必须为团队可导入媒体的团队成员(如果没有特殊设置，所有团队成员可导入媒体)。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以向任意团队或者个人导入媒体。如果指定操作者，如果媒体归属为个人，则操作者必须与归属者一致；如果媒体归属为团队，则必须为团队可导入媒体的团队成员(如果没有特殊设置，所有团队成员可导入媒体)。
                     * @param _operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以向任意团队或者个人导入媒体。如果指定操作者，如果媒体归属为个人，则操作者必须与归属者一致；如果媒体归属为团队，则必须为团队可导入媒体的团队成员(如果没有特殊设置，所有团队成员可导入媒体)。
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
                     * 媒体归属者，可支持归属团队或个人。
                     */
                    Entity m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 媒体名称，不能超过30个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 导入媒资类型，取值：
<li>VOD：云点播文件；</li>
<li>EXTERNAL：媒资绑定。</li>

注意：如果不填默认为云点播文件，如果媒体存储在非腾讯云点播中，都需要使用媒资绑定。另外，导入云点播的文件，使用云点播的子应用 Id 必须与创建多媒体创作引擎平台时使用的云点播子应用一致。
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 云点播媒资 FileId，仅当 SourceType 为 VOD 时有效。
                     */
                    std::string m_vodFileId;
                    bool m_vodFileIdHasBeenSet;

                    /**
                     * 原始媒资文件信息，当 SourceType 取值 EXTERNAL 的时候必填。
                     */
                    ExternalMediaInfo m_externalMediaInfo;
                    bool m_externalMediaInfoHasBeenSet;

                    /**
                     * 媒体分类路径，形如："/a/b"，层级数不能超过10，每个层级长度不能超过15字符。若不填则默认为根路径。
                     */
                    std::string m_classPath;
                    bool m_classPathHasBeenSet;

                    /**
                     * 媒体预处理任务参数 ID。可取值有：
<li>10：进行编辑预处理。</li>
                     */
                    int64_t m_preProcessDefinition;
                    bool m_preProcessDefinitionHasBeenSet;

                    /**
                     * 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以向任意团队或者个人导入媒体。如果指定操作者，如果媒体归属为个人，则操作者必须与归属者一致；如果媒体归属为团队，则必须为团队可导入媒体的团队成员(如果没有特殊设置，所有团队成员可导入媒体)。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_IMPORTMATERIALREQUEST_H_
