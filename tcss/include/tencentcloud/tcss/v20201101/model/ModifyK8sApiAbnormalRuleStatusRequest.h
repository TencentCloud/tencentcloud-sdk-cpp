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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYK8SAPIABNORMALRULESTATUSREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYK8SAPIABNORMALRULESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifyK8sApiAbnormalRuleStatus请求参数结构体
                */
                class ModifyK8sApiAbnormalRuleStatusRequest : public AbstractModel
                {
                public:
                    ModifyK8sApiAbnormalRuleStatusRequest();
                    ~ModifyK8sApiAbnormalRuleStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则ID
                     * @return RuleID 规则ID
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 设置规则ID
                     * @param _ruleID 规则ID
                     * 
                     */
                    void SetRuleID(const std::string& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取状态(true:开 false:关)
                     * @return Status 状态(true:开 false:关)
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置状态(true:开 false:关)
                     * @param _status 状态(true:开 false:关)
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 规则ID
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * 状态(true:开 false:关)
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYK8SAPIABNORMALRULESTATUSREQUEST_H_
