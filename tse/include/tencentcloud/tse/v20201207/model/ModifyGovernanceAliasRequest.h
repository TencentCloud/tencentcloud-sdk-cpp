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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYGOVERNANCEALIASREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYGOVERNANCEALIASREQUEST_H_

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
                * ModifyGovernanceAlias请求参数结构体
                */
                class ModifyGovernanceAliasRequest : public AbstractModel
                {
                public:
                    ModifyGovernanceAliasRequest();
                    ~ModifyGovernanceAliasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取tse实例id。
                     * @return InstanceId tse实例id。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置tse实例id。
                     * @param _instanceId tse实例id。
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
                     * 获取服务别名
                     * @return Alias 服务别名
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置服务别名
                     * @param _alias 服务别名
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取服务别名命名空间
                     * @return AliasNamespace 服务别名命名空间
                     * 
                     */
                    std::string GetAliasNamespace() const;

                    /**
                     * 设置服务别名命名空间
                     * @param _aliasNamespace 服务别名命名空间
                     * 
                     */
                    void SetAliasNamespace(const std::string& _aliasNamespace);

                    /**
                     * 判断参数 AliasNamespace 是否已赋值
                     * @return AliasNamespace 是否已赋值
                     * 
                     */
                    bool AliasNamespaceHasBeenSet() const;

                    /**
                     * 获取服务别名所指向的服务名
                     * @return Service 服务别名所指向的服务名
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置服务别名所指向的服务名
                     * @param _service 服务别名所指向的服务名
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取服务别名所指向的命名空间
                     * @return Namespace 服务别名所指向的命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置服务别名所指向的命名空间
                     * @param _namespace 服务别名所指向的命名空间
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
                     * 获取服务别名描述
                     * @return Comment 服务别名描述
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置服务别名描述
                     * @param _comment 服务别名描述
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * tse实例id。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 服务别名
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 服务别名命名空间
                     */
                    std::string m_aliasNamespace;
                    bool m_aliasNamespaceHasBeenSet;

                    /**
                     * 服务别名所指向的服务名
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * 服务别名所指向的命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 服务别名描述
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYGOVERNANCEALIASREQUEST_H_
