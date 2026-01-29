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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TABLEEXPIRATIONPOLICY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TABLEEXPIRATIONPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 表过期策略
                */
                class TableExpirationPolicy : public AbstractModel
                {
                public:
                    TableExpirationPolicy();
                    ~TableExpirationPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否启用策略
                     * @return Enabled 是否启用策略
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否启用策略
                     * @param _enabled 是否启用策略
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
                     * 获取表过期时间，单位：天
                     * @return Expiration 表过期时间，单位：天
                     * 
                     */
                    uint64_t GetExpiration() const;

                    /**
                     * 设置表过期时间，单位：天
                     * @param _expiration 表过期时间，单位：天
                     * 
                     */
                    void SetExpiration(const uint64_t& _expiration);

                    /**
                     * 判断参数 Expiration 是否已赋值
                     * @return Expiration 是否已赋值
                     * 
                     */
                    bool ExpirationHasBeenSet() const;

                private:

                    /**
                     * 是否启用策略
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 表过期时间，单位：天
                     */
                    uint64_t m_expiration;
                    bool m_expirationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TABLEEXPIRATIONPOLICY_H_
