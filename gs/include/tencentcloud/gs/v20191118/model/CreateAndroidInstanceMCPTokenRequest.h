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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCEMCPTOKENREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCEMCPTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * CreateAndroidInstanceMCPToken请求参数结构体
                */
                class CreateAndroidInstanceMCPTokenRequest : public AbstractModel
                {
                public:
                    CreateAndroidInstanceMCPTokenRequest();
                    ~CreateAndroidInstanceMCPTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ROOT / USER（大小写敏感），默认 USER。ROOT 可访问该 AppId 下全部实例</p><p>枚举值：</p><ul><li>ROOT： 可访问该 AppId 下全部实例</li><li>USER： 可访问本角色实例白名单内的实例</li></ul><p>默认值：USER</p>
                     * @return Role <p>ROOT / USER（大小写敏感），默认 USER。ROOT 可访问该 AppId 下全部实例</p><p>枚举值：</p><ul><li>ROOT： 可访问该 AppId 下全部实例</li><li>USER： 可访问本角色实例白名单内的实例</li></ul><p>默认值：USER</p>
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置<p>ROOT / USER（大小写敏感），默认 USER。ROOT 可访问该 AppId 下全部实例</p><p>枚举值：</p><ul><li>ROOT： 可访问该 AppId 下全部实例</li><li>USER： 可访问本角色实例白名单内的实例</li></ul><p>默认值：USER</p>
                     * @param _role <p>ROOT / USER（大小写敏感），默认 USER。ROOT 可访问该 AppId 下全部实例</p><p>枚举值：</p><ul><li>ROOT： 可访问该 AppId 下全部实例</li><li>USER： 可访问本角色实例白名单内的实例</li></ul><p>默认值：USER</p>
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取<p>有效期（秒）；0 或不传表示永不过期（负值等同不过期）</p>
                     * @return ExpireSeconds <p>有效期（秒）；0 或不传表示永不过期（负值等同不过期）</p>
                     * 
                     */
                    int64_t GetExpireSeconds() const;

                    /**
                     * 设置<p>有效期（秒）；0 或不传表示永不过期（负值等同不过期）</p>
                     * @param _expireSeconds <p>有效期（秒）；0 或不传表示永不过期（负值等同不过期）</p>
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
                     * 获取<p>备注名</p>
                     * @return TokenName <p>备注名</p>
                     * 
                     */
                    std::string GetTokenName() const;

                    /**
                     * 设置<p>备注名</p>
                     * @param _tokenName <p>备注名</p>
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
                     * 获取<p>USER 角色可访问的实例白名单</p>
                     * @return AllowedInstanceIds <p>USER 角色可访问的实例白名单</p>
                     * 
                     */
                    std::vector<std::string> GetAllowedInstanceIds() const;

                    /**
                     * 设置<p>USER 角色可访问的实例白名单</p>
                     * @param _allowedInstanceIds <p>USER 角色可访问的实例白名单</p>
                     * 
                     */
                    void SetAllowedInstanceIds(const std::vector<std::string>& _allowedInstanceIds);

                    /**
                     * 判断参数 AllowedInstanceIds 是否已赋值
                     * @return AllowedInstanceIds 是否已赋值
                     * 
                     */
                    bool AllowedInstanceIdsHasBeenSet() const;

                private:

                    /**
                     * <p>ROOT / USER（大小写敏感），默认 USER。ROOT 可访问该 AppId 下全部实例</p><p>枚举值：</p><ul><li>ROOT： 可访问该 AppId 下全部实例</li><li>USER： 可访问本角色实例白名单内的实例</li></ul><p>默认值：USER</p>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>有效期（秒）；0 或不传表示永不过期（负值等同不过期）</p>
                     */
                    int64_t m_expireSeconds;
                    bool m_expireSecondsHasBeenSet;

                    /**
                     * <p>备注名</p>
                     */
                    std::string m_tokenName;
                    bool m_tokenNameHasBeenSet;

                    /**
                     * <p>USER 角色可访问的实例白名单</p>
                     */
                    std::vector<std::string> m_allowedInstanceIds;
                    bool m_allowedInstanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCEMCPTOKENREQUEST_H_
