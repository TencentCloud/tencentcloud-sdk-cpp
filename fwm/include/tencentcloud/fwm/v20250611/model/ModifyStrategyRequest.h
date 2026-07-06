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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_MODIFYSTRATEGYREQUEST_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_MODIFYSTRATEGYREQUEST_H_

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
                * ModifyStrategy请求参数结构体
                */
                class ModifyStrategyRequest : public AbstractModel
                {
                public:
                    ModifyStrategyRequest();
                    ~ModifyStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取策略Id
                     * @return StrategyId 策略Id
                     * 
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置策略Id
                     * @param _strategyId 策略Id
                     * 
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取下发规则接收账号
                     * @return ReceiveAccount 下发规则接收账号
                     * 
                     */
                    std::vector<std::string> GetReceiveAccount() const;

                    /**
                     * 设置下发规则接收账号
                     * @param _receiveAccount 下发规则接收账号
                     * 
                     */
                    void SetReceiveAccount(const std::vector<std::string>& _receiveAccount);

                    /**
                     * 判断参数 ReceiveAccount 是否已赋值
                     * @return ReceiveAccount 是否已赋值
                     * 
                     */
                    bool ReceiveAccountHasBeenSet() const;

                    /**
                     * 获取优先级
                     * @return Sequence 优先级
                     * 
                     */
                    int64_t GetSequence() const;

                    /**
                     * 设置优先级
                     * @param _sequence 优先级
                     * 
                     */
                    void SetSequence(const int64_t& _sequence);

                    /**
                     * 判断参数 Sequence 是否已赋值
                     * @return Sequence 是否已赋值
                     * 
                     */
                    bool SequenceHasBeenSet() const;

                    /**
                     * 获取规则组Id
                     * @return GroupId 规则组Id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置规则组Id
                     * @param _groupId 规则组Id
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
                     * 获取下发规则接收账号组
                     * @return ReceiveGroup 下发规则接收账号组
                     * 
                     */
                    std::vector<std::string> GetReceiveGroup() const;

                    /**
                     * 设置下发规则接收账号组
                     * @param _receiveGroup 下发规则接收账号组
                     * 
                     */
                    void SetReceiveGroup(const std::vector<std::string>& _receiveGroup);

                    /**
                     * 判断参数 ReceiveGroup 是否已赋值
                     * @return ReceiveGroup 是否已赋值
                     * 
                     */
                    bool ReceiveGroupHasBeenSet() const;

                private:

                    /**
                     * 策略Id
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 下发规则接收账号
                     */
                    std::vector<std::string> m_receiveAccount;
                    bool m_receiveAccountHasBeenSet;

                    /**
                     * 优先级
                     */
                    int64_t m_sequence;
                    bool m_sequenceHasBeenSet;

                    /**
                     * 规则组Id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 下发规则接收账号组
                     */
                    std::vector<std::string> m_receiveGroup;
                    bool m_receiveGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_MODIFYSTRATEGYREQUEST_H_
