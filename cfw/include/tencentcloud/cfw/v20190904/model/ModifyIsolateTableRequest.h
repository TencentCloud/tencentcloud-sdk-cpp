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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYISOLATETABLEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYISOLATETABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyIsolateTable请求参数结构体
                */
                class ModifyIsolateTableRequest : public AbstractModel
                {
                public:
                    ModifyIsolateTableRequest();
                    ~ModifyIsolateTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>操作动作，仅接受精确值 edit 或 delete。ButtonAction 为 edit 时修改该资产所有匹配隔离记录的有效期，需传 StartTime 和 EndTime；ButtonAction 为 delete 时解除该资产的全部匹配隔离，StartTime 和 EndTime 可省略。</p>
                     * @return ButtonAction <p>操作动作，仅接受精确值 edit 或 delete。ButtonAction 为 edit 时修改该资产所有匹配隔离记录的有效期，需传 StartTime 和 EndTime；ButtonAction 为 delete 时解除该资产的全部匹配隔离，StartTime 和 EndTime 可省略。</p>
                     * 
                     */
                    std::string GetButtonAction() const;

                    /**
                     * 设置<p>操作动作，仅接受精确值 edit 或 delete。ButtonAction 为 edit 时修改该资产所有匹配隔离记录的有效期，需传 StartTime 和 EndTime；ButtonAction 为 delete 时解除该资产的全部匹配隔离，StartTime 和 EndTime 可省略。</p>
                     * @param _buttonAction <p>操作动作，仅接受精确值 edit 或 delete。ButtonAction 为 edit 时修改该资产所有匹配隔离记录的有效期，需传 StartTime 和 EndTime；ButtonAction 为 delete 时解除该资产的全部匹配隔离，StartTime 和 EndTime 可省略。</p>
                     * 
                     */
                    void SetButtonAction(const std::string& _buttonAction);

                    /**
                     * 判断参数 ButtonAction 是否已赋值
                     * @return ButtonAction 是否已赋值
                     * 
                     */
                    bool ButtonActionHasBeenSet() const;

                    /**
                     * 获取<p>必填的资产实例 ID。调用 DescribeCfwRules，传 RuleType=intrusion_prevention、ListType=isolate 和目标 InstanceId，并使用完全匹配的 rules[].instance_id。edit 或 delete 作用于该实例的全部隔离记录。</p>
                     * @return InstanceID <p>必填的资产实例 ID。调用 DescribeCfwRules，传 RuleType=intrusion_prevention、ListType=isolate 和目标 InstanceId，并使用完全匹配的 rules[].instance_id。edit 或 delete 作用于该实例的全部隔离记录。</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>必填的资产实例 ID。调用 DescribeCfwRules，传 RuleType=intrusion_prevention、ListType=isolate 和目标 InstanceId，并使用完全匹配的 rules[].instance_id。edit 或 delete 作用于该实例的全部隔离记录。</p>
                     * @param _instanceID <p>必填的资产实例 ID。调用 DescribeCfwRules，传 RuleType=intrusion_prevention、ListType=isolate 和目标 InstanceId，并使用完全匹配的 rules[].instance_id。edit 或 delete 作用于该实例的全部隔离记录。</p>
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取<p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     * @return CfwAiAgentOperationSource <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     * 
                     */
                    std::string GetCfwAiAgentOperationSource() const;

                    /**
                     * 设置<p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     * @param _cfwAiAgentOperationSource <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     * 
                     */
                    void SetCfwAiAgentOperationSource(const std::string& _cfwAiAgentOperationSource);

                    /**
                     * 判断参数 CfwAiAgentOperationSource 是否已赋值
                     * @return CfwAiAgentOperationSource 是否已赋值
                     * 
                     */
                    bool CfwAiAgentOperationSourceHasBeenSet() const;

                    /**
                     * 获取<p>隔离结束时间。ButtonAction 为 edit 时必填，格式为 YYYY-MM-DD HH:MM:SS，且不得早于 StartTime；除永久隔离值 3000-01-01 00:00:00 外，必须晚于当前时间。ButtonAction 为 delete 时可省略。</p>
                     * @return EndTime <p>隔离结束时间。ButtonAction 为 edit 时必填，格式为 YYYY-MM-DD HH:MM:SS，且不得早于 StartTime；除永久隔离值 3000-01-01 00:00:00 外，必须晚于当前时间。ButtonAction 为 delete 时可省略。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>隔离结束时间。ButtonAction 为 edit 时必填，格式为 YYYY-MM-DD HH:MM:SS，且不得早于 StartTime；除永久隔离值 3000-01-01 00:00:00 外，必须晚于当前时间。ButtonAction 为 delete 时可省略。</p>
                     * @param _endTime <p>隔离结束时间。ButtonAction 为 edit 时必填，格式为 YYYY-MM-DD HH:MM:SS，且不得早于 StartTime；除永久隔离值 3000-01-01 00:00:00 外，必须晚于当前时间。ButtonAction 为 delete 时可省略。</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>隔离起始时间。ButtonAction 为 edit 时必填，格式为 YYYY-MM-DD HH:MM:SS，且不得晚于 EndTime；该时间将应用于该实例的全部匹配隔离记录。ButtonAction 为 delete 时可省略。</p>
                     * @return StartTime <p>隔离起始时间。ButtonAction 为 edit 时必填，格式为 YYYY-MM-DD HH:MM:SS，且不得晚于 EndTime；该时间将应用于该实例的全部匹配隔离记录。ButtonAction 为 delete 时可省略。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>隔离起始时间。ButtonAction 为 edit 时必填，格式为 YYYY-MM-DD HH:MM:SS，且不得晚于 EndTime；该时间将应用于该实例的全部匹配隔离记录。ButtonAction 为 delete 时可省略。</p>
                     * @param _startTime <p>隔离起始时间。ButtonAction 为 edit 时必填，格式为 YYYY-MM-DD HH:MM:SS，且不得晚于 EndTime；该时间将应用于该实例的全部匹配隔离记录。ButtonAction 为 delete 时可省略。</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                private:

                    /**
                     * <p>操作动作，仅接受精确值 edit 或 delete。ButtonAction 为 edit 时修改该资产所有匹配隔离记录的有效期，需传 StartTime 和 EndTime；ButtonAction 为 delete 时解除该资产的全部匹配隔离，StartTime 和 EndTime 可省略。</p>
                     */
                    std::string m_buttonAction;
                    bool m_buttonActionHasBeenSet;

                    /**
                     * <p>必填的资产实例 ID。调用 DescribeCfwRules，传 RuleType=intrusion_prevention、ListType=isolate 和目标 InstanceId，并使用完全匹配的 rules[].instance_id。edit 或 delete 作用于该实例的全部隔离记录。</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>。
                     */
                    std::string m_cfwAiAgentOperationSource;
                    bool m_cfwAiAgentOperationSourceHasBeenSet;

                    /**
                     * <p>隔离结束时间。ButtonAction 为 edit 时必填，格式为 YYYY-MM-DD HH:MM:SS，且不得早于 StartTime；除永久隔离值 3000-01-01 00:00:00 外，必须晚于当前时间。ButtonAction 为 delete 时可省略。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>隔离起始时间。ButtonAction 为 edit 时必填，格式为 YYYY-MM-DD HH:MM:SS，且不得晚于 EndTime；该时间将应用于该实例的全部匹配隔离记录。ButtonAction 为 delete 时可省略。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYISOLATETABLEREQUEST_H_
