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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROLE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * 角色实例
                */
                class Role : public AbstractModel
                {
                public:
                    Role();
                    ~Role() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>角色名称。</p>
                     * @return RoleName <p>角色名称。</p>
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置<p>角色名称。</p>
                     * @param _roleName <p>角色名称。</p>
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取<p>角色token值。</p>
                     * @return Token <p>角色token值。</p>
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置<p>角色token值。</p>
                     * @param _token <p>角色token值。</p>
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取<p>备注说明。</p>
                     * @return Remark <p>备注说明。</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注说明。</p>
                     * @param _remark <p>备注说明。</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>创建时间。</p>
                     * @return CreateTime <p>创建时间。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间。</p>
                     * @param _createTime <p>创建时间。</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间。</p>
                     * @return UpdateTime <p>更新时间。</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间。</p>
                     * @param _updateTime <p>更新时间。</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>授权类型（Cluster：集群；TopicAndGroup：主题或消费组）</p>
                     * @return PermType <p>授权类型（Cluster：集群；TopicAndGroup：主题或消费组）</p>
                     * 
                     */
                    std::string GetPermType() const;

                    /**
                     * 设置<p>授权类型（Cluster：集群；TopicAndGroup：主题或消费组）</p>
                     * @param _permType <p>授权类型（Cluster：集群；TopicAndGroup：主题或消费组）</p>
                     * 
                     */
                    void SetPermType(const std::string& _permType);

                    /**
                     * 判断参数 PermType 是否已赋值
                     * @return PermType 是否已赋值
                     * 
                     */
                    bool PermTypeHasBeenSet() const;

                    /**
                     * 获取<p>角色类型</p><p>枚举值：</p><ul><li>Temporary： 轮转密钥</li><li>Permanent： 永久密钥</li></ul>
                     * @return TokenType <p>角色类型</p><p>枚举值：</p><ul><li>Temporary： 轮转密钥</li><li>Permanent： 永久密钥</li></ul>
                     * 
                     */
                    std::string GetTokenType() const;

                    /**
                     * 设置<p>角色类型</p><p>枚举值：</p><ul><li>Temporary： 轮转密钥</li><li>Permanent： 永久密钥</li></ul>
                     * @param _tokenType <p>角色类型</p><p>枚举值：</p><ul><li>Temporary： 轮转密钥</li><li>Permanent： 永久密钥</li></ul>
                     * 
                     */
                    void SetTokenType(const std::string& _tokenType);

                    /**
                     * 判断参数 TokenType 是否已赋值
                     * @return TokenType 是否已赋值
                     * 
                     */
                    bool TokenTypeHasBeenSet() const;

                    /**
                     * 获取<p>SSM 唯一 ID</p>
                     * @return SecretName <p>SSM 唯一 ID</p>
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置<p>SSM 唯一 ID</p>
                     * @param _secretName <p>SSM 唯一 ID</p>
                     * 
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取<p>轮转周期</p><p>单位：天</p>
                     * @return RotateFreq <p>轮转周期</p><p>单位：天</p>
                     * 
                     */
                    uint64_t GetRotateFreq() const;

                    /**
                     * 设置<p>轮转周期</p><p>单位：天</p>
                     * @param _rotateFreq <p>轮转周期</p><p>单位：天</p>
                     * 
                     */
                    void SetRotateFreq(const uint64_t& _rotateFreq);

                    /**
                     * 判断参数 RotateFreq 是否已赋值
                     * @return RotateFreq 是否已赋值
                     * 
                     */
                    bool RotateFreqHasBeenSet() const;

                private:

                    /**
                     * <p>角色名称。</p>
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * <p>角色token值。</p>
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * <p>备注说明。</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>创建时间。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间。</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>授权类型（Cluster：集群；TopicAndGroup：主题或消费组）</p>
                     */
                    std::string m_permType;
                    bool m_permTypeHasBeenSet;

                    /**
                     * <p>角色类型</p><p>枚举值：</p><ul><li>Temporary： 轮转密钥</li><li>Permanent： 永久密钥</li></ul>
                     */
                    std::string m_tokenType;
                    bool m_tokenTypeHasBeenSet;

                    /**
                     * <p>SSM 唯一 ID</p>
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * <p>轮转周期</p><p>单位：天</p>
                     */
                    uint64_t m_rotateFreq;
                    bool m_rotateFreqHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROLE_H_
