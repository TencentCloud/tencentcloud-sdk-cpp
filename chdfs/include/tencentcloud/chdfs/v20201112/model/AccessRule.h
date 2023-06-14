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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_ACCESSRULE_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_ACCESSRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * 权限规则
                */
                class AccessRule : public AbstractModel
                {
                public:
                    AccessRule();
                    ~AccessRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取权限规则ID
                     * @return AccessRuleId 权限规则ID
                     * 
                     */
                    uint64_t GetAccessRuleId() const;

                    /**
                     * 设置权限规则ID
                     * @param _accessRuleId 权限规则ID
                     * 
                     */
                    void SetAccessRuleId(const uint64_t& _accessRuleId);

                    /**
                     * 判断参数 AccessRuleId 是否已赋值
                     * @return AccessRuleId 是否已赋值
                     * 
                     */
                    bool AccessRuleIdHasBeenSet() const;

                    /**
                     * 获取权限规则地址（网段或IP）
                     * @return Address 权限规则地址（网段或IP）
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置权限规则地址（网段或IP）
                     * @param _address 权限规则地址（网段或IP）
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取权限规则访问模式（1：只读；2：读写）
                     * @return AccessMode 权限规则访问模式（1：只读；2：读写）
                     * 
                     */
                    uint64_t GetAccessMode() const;

                    /**
                     * 设置权限规则访问模式（1：只读；2：读写）
                     * @param _accessMode 权限规则访问模式（1：只读；2：读写）
                     * 
                     */
                    void SetAccessMode(const uint64_t& _accessMode);

                    /**
                     * 判断参数 AccessMode 是否已赋值
                     * @return AccessMode 是否已赋值
                     * 
                     */
                    bool AccessModeHasBeenSet() const;

                    /**
                     * 获取优先级（取值范围1~100，值越小优先级越高）
                     * @return Priority 优先级（取值范围1~100，值越小优先级越高）
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置优先级（取值范围1~100，值越小优先级越高）
                     * @param _priority 优先级（取值范围1~100，值越小优先级越高）
                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 权限规则ID
                     */
                    uint64_t m_accessRuleId;
                    bool m_accessRuleIdHasBeenSet;

                    /**
                     * 权限规则地址（网段或IP）
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 权限规则访问模式（1：只读；2：读写）
                     */
                    uint64_t m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * 优先级（取值范围1~100，值越小优先级越高）
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_ACCESSRULE_H_
