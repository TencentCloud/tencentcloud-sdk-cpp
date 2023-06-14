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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_TCRINSTANCETOKEN_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_TCRINSTANCETOKEN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 实例登录令牌
                */
                class TcrInstanceToken : public AbstractModel
                {
                public:
                    TcrInstanceToken();
                    ~TcrInstanceToken() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取令牌ID
                     * @return Id 令牌ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置令牌ID
                     * @param _id 令牌ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取令牌描述
                     * @return Desc 令牌描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置令牌描述
                     * @param _desc 令牌描述
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取令牌所属实例ID
                     * @return RegistryId 令牌所属实例ID
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置令牌所属实例ID
                     * @param _registryId 令牌所属实例ID
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取令牌启用状态
                     * @return Enabled 令牌启用状态
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置令牌启用状态
                     * @param _enabled 令牌启用状态
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取令牌创建时间
                     * @return CreatedAt 令牌创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置令牌创建时间
                     * @param _createdAt 令牌创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取令牌过期时间戳
                     * @return ExpiredAt 令牌过期时间戳
                     * 
                     */
                    int64_t GetExpiredAt() const;

                    /**
                     * 设置令牌过期时间戳
                     * @param _expiredAt 令牌过期时间戳
                     * 
                     */
                    void SetExpiredAt(const int64_t& _expiredAt);

                    /**
                     * 判断参数 ExpiredAt 是否已赋值
                     * @return ExpiredAt 是否已赋值
                     * 
                     */
                    bool ExpiredAtHasBeenSet() const;

                private:

                    /**
                     * 令牌ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 令牌描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 令牌所属实例ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 令牌启用状态
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 令牌创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 令牌过期时间戳
                     */
                    int64_t m_expiredAt;
                    bool m_expiredAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_TCRINSTANCETOKEN_H_
