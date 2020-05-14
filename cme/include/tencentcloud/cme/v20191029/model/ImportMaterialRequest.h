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
                     * 获取云点播媒资 FileId。
                     * @return VodFileId 云点播媒资 FileId。
                     */
                    std::string GetVodFileId() const;

                    /**
                     * 设置云点播媒资 FileId。
                     * @param VodFileId 云点播媒资 FileId。
                     */
                    void SetVodFileId(const std::string& _vodFileId);

                    /**
                     * 判断参数 VodFileId 是否已赋值
                     * @return VodFileId 是否已赋值
                     */
                    bool VodFileIdHasBeenSet() const;

                    /**
                     * 获取素材归属者。
                     * @return Owner 素材归属者。
                     */
                    Entity GetOwner() const;

                    /**
                     * 设置素材归属者。
                     * @param Owner 素材归属者。
                     */
                    void SetOwner(const Entity& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取素材名称，不能超过30个字符。
                     * @return Name 素材名称，不能超过30个字符。
                     */
                    std::string GetName() const;

                    /**
                     * 设置素材名称，不能超过30个字符。
                     * @param Name 素材名称，不能超过30个字符。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取素材分类路径，形如："/a/b"，层级数不能超过10，每个层级长度不能超过15字符。若不填则默认为根路径。
                     * @return ClassPath 素材分类路径，形如："/a/b"，层级数不能超过10，每个层级长度不能超过15字符。若不填则默认为根路径。
                     */
                    std::string GetClassPath() const;

                    /**
                     * 设置素材分类路径，形如："/a/b"，层级数不能超过10，每个层级长度不能超过15字符。若不填则默认为根路径。
                     * @param ClassPath 素材分类路径，形如："/a/b"，层级数不能超过10，每个层级长度不能超过15字符。若不填则默认为根路径。
                     */
                    void SetClassPath(const std::string& _classPath);

                    /**
                     * 判断参数 ClassPath 是否已赋值
                     * @return ClassPath 是否已赋值
                     */
                    bool ClassPathHasBeenSet() const;

                    /**
                     * 获取素材预处理任务模板 ID。取值：
<li>10：进行编辑预处理。</li>
                     * @return PreProcessDefinition 素材预处理任务模板 ID。取值：
<li>10：进行编辑预处理。</li>
                     */
                    int64_t GetPreProcessDefinition() const;

                    /**
                     * 设置素材预处理任务模板 ID。取值：
<li>10：进行编辑预处理。</li>
                     * @param PreProcessDefinition 素材预处理任务模板 ID。取值：
<li>10：进行编辑预处理。</li>
                     */
                    void SetPreProcessDefinition(const int64_t& _preProcessDefinition);

                    /**
                     * 判断参数 PreProcessDefinition 是否已赋值
                     * @return PreProcessDefinition 是否已赋值
                     */
                    bool PreProcessDefinitionHasBeenSet() const;

                    /**
                     * 获取操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     * @return Operator 操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     * @param Operator 操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 平台名称，指定访问的平台。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 云点播媒资 FileId。
                     */
                    std::string m_vodFileId;
                    bool m_vodFileIdHasBeenSet;

                    /**
                     * 素材归属者。
                     */
                    Entity m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 素材名称，不能超过30个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 素材分类路径，形如："/a/b"，层级数不能超过10，每个层级长度不能超过15字符。若不填则默认为根路径。
                     */
                    std::string m_classPath;
                    bool m_classPathHasBeenSet;

                    /**
                     * 素材预处理任务模板 ID。取值：
<li>10：进行编辑预处理。</li>
                     */
                    int64_t m_preProcessDefinition;
                    bool m_preProcessDefinitionHasBeenSet;

                    /**
                     * 操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_IMPORTMATERIALREQUEST_H_
