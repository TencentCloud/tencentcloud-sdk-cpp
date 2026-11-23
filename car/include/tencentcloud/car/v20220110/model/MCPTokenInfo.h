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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_MCPTOKENINFO_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_MCPTOKENINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * MCP Token 信息
                */
                class MCPTokenInfo : public AbstractModel
                {
                public:
                    MCPTokenInfo();
                    ~MCPTokenInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>TokenId</p><p>用于管理 Token 数据，可用来延长对应 Token 有效时间</p>
                     * @return TokenId <p>TokenId</p><p>用于管理 Token 数据，可用来延长对应 Token 有效时间</p>
                     * 
                     */
                    std::string GetTokenId() const;

                    /**
                     * 设置<p>TokenId</p><p>用于管理 Token 数据，可用来延长对应 Token 有效时间</p>
                     * @param _tokenId <p>TokenId</p><p>用于管理 Token 数据，可用来延长对应 Token 有效时间</p>
                     * 
                     */
                    void SetTokenId(const std::string& _tokenId);

                    /**
                     * 判断参数 TokenId 是否已赋值
                     * @return TokenId 是否已赋值
                     * 
                     */
                    bool TokenIdHasBeenSet() const;

                    /**
                     * 获取<p>Token 名称（注释）</p>
                     * @return TokenName <p>Token 名称（注释）</p>
                     * 
                     */
                    std::string GetTokenName() const;

                    /**
                     * 设置<p>Token 名称（注释）</p>
                     * @param _tokenName <p>Token 名称（注释）</p>
                     * 
                     */
                    void SetTokenName(const std::string& _tokenName);

                    /**
                     * 判断参数 TokenName 是否已赋值
                     * @return TokenName 是否已赋值
                     * 
                     */
                    bool TokenNameHasBeenSet() const;

                    /**
                     * 获取<p>用户 Id</p><p>固定使用这个 UserId  来操作云渲染并发资源（为空不限制）</p>
                     * @return UserId <p>用户 Id</p><p>固定使用这个 UserId  来操作云渲染并发资源（为空不限制）</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户 Id</p><p>固定使用这个 UserId  来操作云渲染并发资源（为空不限制）</p>
                     * @param _userId <p>用户 Id</p><p>固定使用这个 UserId  来操作云渲染并发资源（为空不限制）</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取<p>权限范围</p><p>默认值：[&quot;*&quot;]</p><p>用于指定操作权限，默认拥有全部权限</p>
                     * @return Scopes <p>权限范围</p><p>默认值：[&quot;*&quot;]</p><p>用于指定操作权限，默认拥有全部权限</p>
                     * 
                     */
                    std::vector<std::string> GetScopes() const;

                    /**
                     * 设置<p>权限范围</p><p>默认值：[&quot;*&quot;]</p><p>用于指定操作权限，默认拥有全部权限</p>
                     * @param _scopes <p>权限范围</p><p>默认值：[&quot;*&quot;]</p><p>用于指定操作权限，默认拥有全部权限</p>
                     * 
                     */
                    void SetScopes(const std::vector<std::string>& _scopes);

                    /**
                     * 判断参数 Scopes 是否已赋值
                     * @return Scopes 是否已赋值
                     * 
                     */
                    bool ScopesHasBeenSet() const;

                    /**
                     * 获取<p>Token 状态</p><p>枚举值：</p><ul><li>ACTIVE： 正常状态，未被吊销。不代表还在有效期内</li><li>REVOKED： 已被吊销，永久失效</li></ul><p>默认值：ACTIVE</p>
                     * @return Status <p>Token 状态</p><p>枚举值：</p><ul><li>ACTIVE： 正常状态，未被吊销。不代表还在有效期内</li><li>REVOKED： 已被吊销，永久失效</li></ul><p>默认值：ACTIVE</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Token 状态</p><p>枚举值：</p><ul><li>ACTIVE： 正常状态，未被吊销。不代表还在有效期内</li><li>REVOKED： 已被吊销，永久失效</li></ul><p>默认值：ACTIVE</p>
                     * @param _status <p>Token 状态</p><p>枚举值：</p><ul><li>ACTIVE： 正常状态，未被吊销。不代表还在有效期内</li><li>REVOKED： 已被吊销，永久失效</li></ul><p>默认值：ACTIVE</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Token 创建时间</p>
                     * @return CreatedTime <p>Token 创建时间</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>Token 创建时间</p>
                     * @param _createdTime <p>Token 创建时间</p>
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>Token 过期时间</p>
                     * @return ExpiresTime <p>Token 过期时间</p>
                     * 
                     */
                    std::string GetExpiresTime() const;

                    /**
                     * 设置<p>Token 过期时间</p>
                     * @param _expiresTime <p>Token 过期时间</p>
                     * 
                     */
                    void SetExpiresTime(const std::string& _expiresTime);

                    /**
                     * 判断参数 ExpiresTime 是否已赋值
                     * @return ExpiresTime 是否已赋值
                     * 
                     */
                    bool ExpiresTimeHasBeenSet() const;

                private:

                    /**
                     * <p>TokenId</p><p>用于管理 Token 数据，可用来延长对应 Token 有效时间</p>
                     */
                    std::string m_tokenId;
                    bool m_tokenIdHasBeenSet;

                    /**
                     * <p>Token 名称（注释）</p>
                     */
                    std::string m_tokenName;
                    bool m_tokenNameHasBeenSet;

                    /**
                     * <p>用户 Id</p><p>固定使用这个 UserId  来操作云渲染并发资源（为空不限制）</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>权限范围</p><p>默认值：[&quot;*&quot;]</p><p>用于指定操作权限，默认拥有全部权限</p>
                     */
                    std::vector<std::string> m_scopes;
                    bool m_scopesHasBeenSet;

                    /**
                     * <p>Token 状态</p><p>枚举值：</p><ul><li>ACTIVE： 正常状态，未被吊销。不代表还在有效期内</li><li>REVOKED： 已被吊销，永久失效</li></ul><p>默认值：ACTIVE</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Token 创建时间</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>Token 过期时间</p>
                     */
                    std::string m_expiresTime;
                    bool m_expiresTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_MCPTOKENINFO_H_
