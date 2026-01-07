/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_MODIFYKNOWLEDGEBASEREQUEST_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_MODIFYKNOWLEDGEBASEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * ModifyKnowledgeBase请求参数结构体
                */
                class ModifyKnowledgeBaseRequest : public AbstractModel
                {
                public:
                    ModifyKnowledgeBaseRequest();
                    ~ModifyKnowledgeBaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
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
                     * 获取操作类型：Create，Update，Delete
                     * @return OperateType 操作类型：Create，Update，Delete
                     * 
                     */
                    std::string GetOperateType() const;

                    /**
                     * 设置操作类型：Create，Update，Delete
                     * @param _operateType 操作类型：Create，Update，Delete
                     * 
                     */
                    void SetOperateType(const std::string& _operateType);

                    /**
                     * 判断参数 OperateType 是否已赋值
                     * @return OperateType 是否已赋值
                     * 
                     */
                    bool OperateTypeHasBeenSet() const;

                    /**
                     * 获取知识库id，update和delete时必填
                     * @return KnowledgeBaseId 知识库id，update和delete时必填
                     * 
                     */
                    std::string GetKnowledgeBaseId() const;

                    /**
                     * 设置知识库id，update和delete时必填
                     * @param _knowledgeBaseId 知识库id，update和delete时必填
                     * 
                     */
                    void SetKnowledgeBaseId(const std::string& _knowledgeBaseId);

                    /**
                     * 判断参数 KnowledgeBaseId 是否已赋值
                     * @return KnowledgeBaseId 是否已赋值
                     * 
                     */
                    bool KnowledgeBaseIdHasBeenSet() const;

                    /**
                     * 获取知识库名称，create和update时必填。只允许字母、数字、汉字、下划线
                     * @return KnowledgeBaseName 知识库名称，create和update时必填。只允许字母、数字、汉字、下划线
                     * 
                     */
                    std::string GetKnowledgeBaseName() const;

                    /**
                     * 设置知识库名称，create和update时必填。只允许字母、数字、汉字、下划线
                     * @param _knowledgeBaseName 知识库名称，create和update时必填。只允许字母、数字、汉字、下划线
                     * 
                     */
                    void SetKnowledgeBaseName(const std::string& _knowledgeBaseName);

                    /**
                     * 判断参数 KnowledgeBaseName 是否已赋值
                     * @return KnowledgeBaseName 是否已赋值
                     * 
                     */
                    bool KnowledgeBaseNameHasBeenSet() const;

                    /**
                     * 获取知识库描述，create和update时必填
                     * @return KnowledgeBaseDesc 知识库描述，create和update时必填
                     * 
                     */
                    std::string GetKnowledgeBaseDesc() const;

                    /**
                     * 设置知识库描述，create和update时必填
                     * @param _knowledgeBaseDesc 知识库描述，create和update时必填
                     * 
                     */
                    void SetKnowledgeBaseDesc(const std::string& _knowledgeBaseDesc);

                    /**
                     * 判断参数 KnowledgeBaseDesc 是否已赋值
                     * @return KnowledgeBaseDesc 是否已赋值
                     * 
                     */
                    bool KnowledgeBaseDescHasBeenSet() const;

                    /**
                     * 获取1仅自己使用，2指定用户，0全员
                     * @return UseScope 1仅自己使用，2指定用户，0全员
                     * 
                     */
                    int64_t GetUseScope() const;

                    /**
                     * 设置1仅自己使用，2指定用户，0全员
                     * @param _useScope 1仅自己使用，2指定用户，0全员
                     * 
                     */
                    void SetUseScope(const int64_t& _useScope);

                    /**
                     * 判断参数 UseScope 是否已赋值
                     * @return UseScope 是否已赋值
                     * 
                     */
                    bool UseScopeHasBeenSet() const;

                    /**
                     * 获取可使用用户列表
                     * @return AuthorityUins 可使用用户列表
                     * 
                     */
                    std::vector<std::string> GetAuthorityUins() const;

                    /**
                     * 设置可使用用户列表
                     * @param _authorityUins 可使用用户列表
                     * 
                     */
                    void SetAuthorityUins(const std::vector<std::string>& _authorityUins);

                    /**
                     * 判断参数 AuthorityUins 是否已赋值
                     * @return AuthorityUins 是否已赋值
                     * 
                     */
                    bool AuthorityUinsHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 操作类型：Create，Update，Delete
                     */
                    std::string m_operateType;
                    bool m_operateTypeHasBeenSet;

                    /**
                     * 知识库id，update和delete时必填
                     */
                    std::string m_knowledgeBaseId;
                    bool m_knowledgeBaseIdHasBeenSet;

                    /**
                     * 知识库名称，create和update时必填。只允许字母、数字、汉字、下划线
                     */
                    std::string m_knowledgeBaseName;
                    bool m_knowledgeBaseNameHasBeenSet;

                    /**
                     * 知识库描述，create和update时必填
                     */
                    std::string m_knowledgeBaseDesc;
                    bool m_knowledgeBaseDescHasBeenSet;

                    /**
                     * 1仅自己使用，2指定用户，0全员
                     */
                    int64_t m_useScope;
                    bool m_useScopeHasBeenSet;

                    /**
                     * 可使用用户列表
                     */
                    std::vector<std::string> m_authorityUins;
                    bool m_authorityUinsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_MODIFYKNOWLEDGEBASEREQUEST_H_
