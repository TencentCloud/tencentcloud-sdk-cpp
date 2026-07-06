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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_MODIFYRULEGROUPREQUEST_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_MODIFYRULEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * ModifyRuleGroup请求参数结构体
                */
                class ModifyRuleGroupRequest : public AbstractModel
                {
                public:
                    ModifyRuleGroupRequest();
                    ~ModifyRuleGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则组名称
                     * @return GroupId 规则组名称
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置规则组名称
                     * @param _groupId 规则组名称
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取规则组名称
                     * @return GroupName 规则组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置规则组名称
                     * @param _groupName 规则组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                private:

                    /**
                     * 规则组名称
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 规则组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_MODIFYRULEGROUPREQUEST_H_
