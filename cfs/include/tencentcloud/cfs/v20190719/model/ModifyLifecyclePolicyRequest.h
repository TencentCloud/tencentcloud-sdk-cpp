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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYLIFECYCLEPOLICYREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYLIFECYCLEPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/LifecycleRule.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ModifyLifecyclePolicy请求参数结构体
                */
                class ModifyLifecyclePolicyRequest : public AbstractModel
                {
                public:
                    ModifyLifecyclePolicyRequest();
                    ~ModifyLifecyclePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取生命周期管理策略名称，中文/英文/数字/下划线/中划线的组合，不超过64个字符
                     * @return LifecyclePolicyName 生命周期管理策略名称，中文/英文/数字/下划线/中划线的组合，不超过64个字符
                     * 
                     */
                    std::string GetLifecyclePolicyName() const;

                    /**
                     * 设置生命周期管理策略名称，中文/英文/数字/下划线/中划线的组合，不超过64个字符
                     * @param _lifecyclePolicyName 生命周期管理策略名称，中文/英文/数字/下划线/中划线的组合，不超过64个字符
                     * 
                     */
                    void SetLifecyclePolicyName(const std::string& _lifecyclePolicyName);

                    /**
                     * 判断参数 LifecyclePolicyName 是否已赋值
                     * @return LifecyclePolicyName 是否已赋值
                     * 
                     */
                    bool LifecyclePolicyNameHasBeenSet() const;

                    /**
                     * 获取生命周期管理策略关联的管理规则列表
                     * @return LifecycleRules 生命周期管理策略关联的管理规则列表
                     * 
                     */
                    std::vector<LifecycleRule> GetLifecycleRules() const;

                    /**
                     * 设置生命周期管理策略关联的管理规则列表
                     * @param _lifecycleRules 生命周期管理策略关联的管理规则列表
                     * 
                     */
                    void SetLifecycleRules(const std::vector<LifecycleRule>& _lifecycleRules);

                    /**
                     * 判断参数 LifecycleRules 是否已赋值
                     * @return LifecycleRules 是否已赋值
                     * 
                     */
                    bool LifecycleRulesHasBeenSet() const;

                    /**
                     * 获取生命周期管理策略ID
                     * @return LifecyclePolicyID 生命周期管理策略ID
                     * 
                     */
                    std::string GetLifecyclePolicyID() const;

                    /**
                     * 设置生命周期管理策略ID
                     * @param _lifecyclePolicyID 生命周期管理策略ID
                     * 
                     */
                    void SetLifecyclePolicyID(const std::string& _lifecyclePolicyID);

                    /**
                     * 判断参数 LifecyclePolicyID 是否已赋值
                     * @return LifecyclePolicyID 是否已赋值
                     * 
                     */
                    bool LifecyclePolicyIDHasBeenSet() const;

                private:

                    /**
                     * 生命周期管理策略名称，中文/英文/数字/下划线/中划线的组合，不超过64个字符
                     */
                    std::string m_lifecyclePolicyName;
                    bool m_lifecyclePolicyNameHasBeenSet;

                    /**
                     * 生命周期管理策略关联的管理规则列表
                     */
                    std::vector<LifecycleRule> m_lifecycleRules;
                    bool m_lifecycleRulesHasBeenSet;

                    /**
                     * 生命周期管理策略ID
                     */
                    std::string m_lifecyclePolicyID;
                    bool m_lifecyclePolicyIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYLIFECYCLEPOLICYREQUEST_H_
