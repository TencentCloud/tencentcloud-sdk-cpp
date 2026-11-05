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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXABLEMACHINEACTION_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXABLEMACHINEACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 不可修复原因关联动作
                */
                class VulFixableMachineAction : public AbstractModel
                {
                public:
                    VulFixableMachineAction();
                    ~VulFixableMachineAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取动作类型
枚举值：
UPGRADE_PROTECTION：升级防护
REINSTALL_CLIENT：重新安装客户端
                     * @return ActionType 动作类型
枚举值：
UPGRADE_PROTECTION：升级防护
REINSTALL_CLIENT：重新安装客户端
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置动作类型
枚举值：
UPGRADE_PROTECTION：升级防护
REINSTALL_CLIENT：重新安装客户端
                     * @param _actionType 动作类型
枚举值：
UPGRADE_PROTECTION：升级防护
REINSTALL_CLIENT：重新安装客户端
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取动作按钮文案
                     * @return ActionText 动作按钮文案
                     * 
                     */
                    std::string GetActionText() const;

                    /**
                     * 设置动作按钮文案
                     * @param _actionText 动作按钮文案
                     * 
                     */
                    void SetActionText(const std::string& _actionText);

                    /**
                     * 判断参数 ActionText 是否已赋值
                     * @return ActionText 是否已赋值
                     * 
                     */
                    bool ActionTextHasBeenSet() const;

                private:

                    /**
                     * 动作类型
枚举值：
UPGRADE_PROTECTION：升级防护
REINSTALL_CLIENT：重新安装客户端
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 动作按钮文案
                     */
                    std::string m_actionText;
                    bool m_actionTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXABLEMACHINEACTION_H_
