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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_CREATEMCPTOKENREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_CREATEMCPTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateMCPToken请求参数结构体
                */
                class CreateMCPTokenRequest : public AbstractModel
                {
                public:
                    CreateMCPTokenRequest();
                    ~CreateMCPTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Token 过期时间</p><p>取值范围：[0, 2592000]</p><p>单位：秒</p><p>默认值：86400</p><p>不填的话，默认为 1 天超时；过期时间为当前时间 + 超时时间</p>
                     * @return ExpireSeconds <p>Token 过期时间</p><p>取值范围：[0, 2592000]</p><p>单位：秒</p><p>默认值：86400</p><p>不填的话，默认为 1 天超时；过期时间为当前时间 + 超时时间</p>
                     * 
                     */
                    int64_t GetExpireSeconds() const;

                    /**
                     * 设置<p>Token 过期时间</p><p>取值范围：[0, 2592000]</p><p>单位：秒</p><p>默认值：86400</p><p>不填的话，默认为 1 天超时；过期时间为当前时间 + 超时时间</p>
                     * @param _expireSeconds <p>Token 过期时间</p><p>取值范围：[0, 2592000]</p><p>单位：秒</p><p>默认值：86400</p><p>不填的话，默认为 1 天超时；过期时间为当前时间 + 超时时间</p>
                     * 
                     */
                    void SetExpireSeconds(const int64_t& _expireSeconds);

                    /**
                     * 判断参数 ExpireSeconds 是否已赋值
                     * @return ExpireSeconds 是否已赋值
                     * 
                     */
                    bool ExpireSecondsHasBeenSet() const;

                    /**
                     * 获取<p>Token 名称（注释）</p><p>参数格式：只支持：中英文、数字、连字符 &quot;-&quot; 的组合</p><p>长度不得超过 16 个字符</p>
                     * @return TokenName <p>Token 名称（注释）</p><p>参数格式：只支持：中英文、数字、连字符 &quot;-&quot; 的组合</p><p>长度不得超过 16 个字符</p>
                     * 
                     */
                    std::string GetTokenName() const;

                    /**
                     * 设置<p>Token 名称（注释）</p><p>参数格式：只支持：中英文、数字、连字符 &quot;-&quot; 的组合</p><p>长度不得超过 16 个字符</p>
                     * @param _tokenName <p>Token 名称（注释）</p><p>参数格式：只支持：中英文、数字、连字符 &quot;-&quot; 的组合</p><p>长度不得超过 16 个字符</p>
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
                     * 获取<p>用户 Id</p><p>参数格式：只支持：字母（A-Za-z）、数字（0-9）、下划线（_）的组合</p><p>固定使用这个 UserId  来操作云渲染并发资源，长度不能超过 64 个字符</p>
                     * @return UserId <p>用户 Id</p><p>参数格式：只支持：字母（A-Za-z）、数字（0-9）、下划线（_）的组合</p><p>固定使用这个 UserId  来操作云渲染并发资源，长度不能超过 64 个字符</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户 Id</p><p>参数格式：只支持：字母（A-Za-z）、数字（0-9）、下划线（_）的组合</p><p>固定使用这个 UserId  来操作云渲染并发资源，长度不能超过 64 个字符</p>
                     * @param _userId <p>用户 Id</p><p>参数格式：只支持：字母（A-Za-z）、数字（0-9）、下划线（_）的组合</p><p>固定使用这个 UserId  来操作云渲染并发资源，长度不能超过 64 个字符</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * <p>Token 过期时间</p><p>取值范围：[0, 2592000]</p><p>单位：秒</p><p>默认值：86400</p><p>不填的话，默认为 1 天超时；过期时间为当前时间 + 超时时间</p>
                     */
                    int64_t m_expireSeconds;
                    bool m_expireSecondsHasBeenSet;

                    /**
                     * <p>Token 名称（注释）</p><p>参数格式：只支持：中英文、数字、连字符 &quot;-&quot; 的组合</p><p>长度不得超过 16 个字符</p>
                     */
                    std::string m_tokenName;
                    bool m_tokenNameHasBeenSet;

                    /**
                     * <p>用户 Id</p><p>参数格式：只支持：字母（A-Za-z）、数字（0-9）、下划线（_）的组合</p><p>固定使用这个 UserId  来操作云渲染并发资源，长度不能超过 64 个字符</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_CREATEMCPTOKENREQUEST_H_
