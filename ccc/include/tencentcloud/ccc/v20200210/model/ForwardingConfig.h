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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_FORWARDINGCONFIG_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_FORWARDINGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/ForwardingTarget.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 呼转配置
                */
                class ForwardingConfig : public AbstractModel
                {
                public:
                    ForwardingConfig();
                    ~ForwardingConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否启用
                     * @return Enabled 是否启用
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否启用
                     * @param _enabled 是否启用
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
                     * 获取1 无条件呼转 2 有条件呼转
                     * @return Condition 1 无条件呼转 2 有条件呼转
                     * 
                     */
                    int64_t GetCondition() const;

                    /**
                     * 设置1 无条件呼转 2 有条件呼转
                     * @param _condition 1 无条件呼转 2 有条件呼转
                     * 
                     */
                    void SetCondition(const int64_t& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取呼转目标
                     * @return Target 呼转目标
                     * 
                     */
                    ForwardingTarget GetTarget() const;

                    /**
                     * 设置呼转目标
                     * @param _target 呼转目标
                     * 
                     */
                    void SetTarget(const ForwardingTarget& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                private:

                    /**
                     * 是否启用
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 1 无条件呼转 2 有条件呼转
                     */
                    int64_t m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 呼转目标
                     */
                    ForwardingTarget m_target;
                    bool m_targetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_FORWARDINGCONFIG_H_
