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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_GLOBALACCELERATORACLPOLICIES_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_GLOBALACCELERATORACLPOLICIES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * 访问控制策略
                */
                class GlobalAcceleratorAclPolicies : public AbstractModel
                {
                public:
                    GlobalAcceleratorAclPolicies();
                    ~GlobalAcceleratorAclPolicies() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问控制策略ID。
                     * @return GlobalAcceleratorAclPolicyId 访问控制策略ID。
                     * 
                     */
                    std::string GetGlobalAcceleratorAclPolicyId() const;

                    /**
                     * 设置访问控制策略ID。
                     * @param _globalAcceleratorAclPolicyId 访问控制策略ID。
                     * 
                     */
                    void SetGlobalAcceleratorAclPolicyId(const std::string& _globalAcceleratorAclPolicyId);

                    /**
                     * 判断参数 GlobalAcceleratorAclPolicyId 是否已赋值
                     * @return GlobalAcceleratorAclPolicyId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorAclPolicyIdHasBeenSet() const;

                    /**
                     * 获取默认动作。
                     * @return DefaultAction 默认动作。
                     * 
                     */
                    std::string GetDefaultAction() const;

                    /**
                     * 设置默认动作。
                     * @param _defaultAction 默认动作。
                     * 
                     */
                    void SetDefaultAction(const std::string& _defaultAction);

                    /**
                     * 判断参数 DefaultAction 是否已赋值
                     * @return DefaultAction 是否已赋值
                     * 
                     */
                    bool DefaultActionHasBeenSet() const;

                    /**
                     * 获取状态。
                     * @return Status 状态。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态。
                     * @param _status 状态。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 访问控制策略ID。
                     */
                    std::string m_globalAcceleratorAclPolicyId;
                    bool m_globalAcceleratorAclPolicyIdHasBeenSet;

                    /**
                     * 默认动作。
                     */
                    std::string m_defaultAction;
                    bool m_defaultActionHasBeenSet;

                    /**
                     * 状态。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_GLOBALACCELERATORACLPOLICIES_H_
