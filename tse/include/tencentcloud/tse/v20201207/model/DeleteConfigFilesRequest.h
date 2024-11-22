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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DELETECONFIGFILESREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DELETECONFIGFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DeleteConfigFiles请求参数结构体
                */
                class DeleteConfigFilesRequest : public AbstractModel
                {
                public:
                    DeleteConfigFilesRequest();
                    ~DeleteConfigFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TSE实例id
                     * @return InstanceId TSE实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置TSE实例id
                     * @param _instanceId TSE实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
                     * @param _namespace 命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取配置分组名称
                     * @return Group 配置分组名称
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置配置分组名称
                     * @param _group 配置分组名称
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取配置文件名称
                     * @return Name 配置文件名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置配置文件名称
                     * @param _name 配置文件名称
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
                     * 获取配置文件Id
                     * @return Id 配置文件Id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置配置文件Id
                     * @param _id 配置文件Id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * TSE实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 配置分组名称
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * 配置文件名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 配置文件Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DELETECONFIGFILESREQUEST_H_
