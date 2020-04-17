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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MODIFYMATERIALREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MODIFYMATERIALREQUEST_H_

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
                * ModifyMaterial请求参数结构体
                */
                class ModifyMaterialRequest : public AbstractModel
                {
                public:
                    ModifyMaterialRequest();
                    ~ModifyMaterialRequest() = default;
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
                     * 获取素材 Id。
                     * @return MaterialId 素材 Id。
                     */
                    std::string GetMaterialId() const;

                    /**
                     * 设置素材 Id。
                     * @param MaterialId 素材 Id。
                     */
                    void SetMaterialId(const std::string& _materialId);

                    /**
                     * 判断参数 MaterialId 是否已赋值
                     * @return MaterialId 是否已赋值
                     */
                    bool MaterialIdHasBeenSet() const;

                    /**
                     * 获取素材归属。
                     * @return Owner 素材归属。
                     */
                    Entity GetOwner() const;

                    /**
                     * 设置素材归属。
                     * @param Owner 素材归属。
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
                     * 获取素材标签，单个标签长度不能超过10个字符，数组长度不能超过10。
                     * @return Tags 素材标签，单个标签长度不能超过10个字符，数组长度不能超过10。
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置素材标签，单个标签长度不能超过10个字符，数组长度不能超过10。
                     * @param Tags 素材标签，单个标签长度不能超过10个字符，数组长度不能超过10。
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取素材分类路径，例如填写"/a/b"，则代表该素材存储的路径为"/a/b"。
                     * @return ClassPath 素材分类路径，例如填写"/a/b"，则代表该素材存储的路径为"/a/b"。
                     */
                    std::string GetClassPath() const;

                    /**
                     * 设置素材分类路径，例如填写"/a/b"，则代表该素材存储的路径为"/a/b"。
                     * @param ClassPath 素材分类路径，例如填写"/a/b"，则代表该素材存储的路径为"/a/b"。
                     */
                    void SetClassPath(const std::string& _classPath);

                    /**
                     * 判断参数 ClassPath 是否已赋值
                     * @return ClassPath 是否已赋值
                     */
                    bool ClassPathHasBeenSet() const;

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
                     * 素材 Id。
                     */
                    std::string m_materialId;
                    bool m_materialIdHasBeenSet;

                    /**
                     * 素材归属。
                     */
                    Entity m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 素材名称，不能超过30个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 素材标签，单个标签长度不能超过10个字符，数组长度不能超过10。
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 素材分类路径，例如填写"/a/b"，则代表该素材存储的路径为"/a/b"。
                     */
                    std::string m_classPath;
                    bool m_classPathHasBeenSet;

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

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MODIFYMATERIALREQUEST_H_
