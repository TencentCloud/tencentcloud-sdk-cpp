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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_CREATEGLOBALACCELERATORACLRULERESPONSE_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_CREATEGLOBALACCELERATORACLRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateGlobalAcceleratorAclRule返回参数结构体
                */
                class CreateGlobalAcceleratorAclRuleResponse : public AbstractModel
                {
                public:
                    CreateGlobalAcceleratorAclRuleResponse();
                    ~CreateGlobalAcceleratorAclRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取异步任务ID。
                     * @return TaskId 异步任务ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取ACL规则ID。
                     * @return GlobalAcceleratorAclRuleIds ACL规则ID。
                     * 
                     */
                    std::vector<std::string> GetGlobalAcceleratorAclRuleIds() const;

                    /**
                     * 判断参数 GlobalAcceleratorAclRuleIds 是否已赋值
                     * @return GlobalAcceleratorAclRuleIds 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorAclRuleIdsHasBeenSet() const;

                private:

                    /**
                     * 异步任务ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * ACL规则ID。
                     */
                    std::vector<std::string> m_globalAcceleratorAclRuleIds;
                    bool m_globalAcceleratorAclRuleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_CREATEGLOBALACCELERATORACLRULERESPONSE_H_
