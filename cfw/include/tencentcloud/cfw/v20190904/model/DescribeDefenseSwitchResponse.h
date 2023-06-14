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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEDEFENSESWITCHRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEDEFENSESWITCHRESPONSE_H_

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
                * DescribeDefenseSwitch返回参数结构体
                */
                class DescribeDefenseSwitchResponse : public AbstractModel
                {
                public:
                    DescribeDefenseSwitchResponse();
                    ~DescribeDefenseSwitchResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取基础防御开关
                     * @return BasicRuleSwitch 基础防御开关
                     * 
                     */
                    int64_t GetBasicRuleSwitch() const;

                    /**
                     * 判断参数 BasicRuleSwitch 是否已赋值
                     * @return BasicRuleSwitch 是否已赋值
                     * 
                     */
                    bool BasicRuleSwitchHasBeenSet() const;

                    /**
                     * 获取安全基线开关
                     * @return BaselineAllSwitch 安全基线开关
                     * 
                     */
                    int64_t GetBaselineAllSwitch() const;

                    /**
                     * 判断参数 BaselineAllSwitch 是否已赋值
                     * @return BaselineAllSwitch 是否已赋值
                     * 
                     */
                    bool BaselineAllSwitchHasBeenSet() const;

                    /**
                     * 获取威胁情报开关
                     * @return TiSwitch 威胁情报开关
                     * 
                     */
                    int64_t GetTiSwitch() const;

                    /**
                     * 判断参数 TiSwitch 是否已赋值
                     * @return TiSwitch 是否已赋值
                     * 
                     */
                    bool TiSwitchHasBeenSet() const;

                    /**
                     * 获取虚拟补丁开关
                     * @return VirtualPatchSwitch 虚拟补丁开关
                     * 
                     */
                    int64_t GetVirtualPatchSwitch() const;

                    /**
                     * 判断参数 VirtualPatchSwitch 是否已赋值
                     * @return VirtualPatchSwitch 是否已赋值
                     * 
                     */
                    bool VirtualPatchSwitchHasBeenSet() const;

                    /**
                     * 获取是否历史开启
                     * @return HistoryOpen 是否历史开启
                     * 
                     */
                    int64_t GetHistoryOpen() const;

                    /**
                     * 判断参数 HistoryOpen 是否已赋值
                     * @return HistoryOpen 是否已赋值
                     * 
                     */
                    bool HistoryOpenHasBeenSet() const;

                    /**
                     * 获取状态值，0：查询成功，非0：查询失败
                     * @return ReturnCode 状态值，0：查询成功，非0：查询失败
                     * 
                     */
                    int64_t GetReturnCode() const;

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     * 
                     */
                    bool ReturnCodeHasBeenSet() const;

                    /**
                     * 获取状态信息，success：查询成功，fail：查询失败
                     * @return ReturnMsg 状态信息，success：查询成功，fail：查询失败
                     * 
                     */
                    std::string GetReturnMsg() const;

                    /**
                     * 判断参数 ReturnMsg 是否已赋值
                     * @return ReturnMsg 是否已赋值
                     * 
                     */
                    bool ReturnMsgHasBeenSet() const;

                private:

                    /**
                     * 基础防御开关
                     */
                    int64_t m_basicRuleSwitch;
                    bool m_basicRuleSwitchHasBeenSet;

                    /**
                     * 安全基线开关
                     */
                    int64_t m_baselineAllSwitch;
                    bool m_baselineAllSwitchHasBeenSet;

                    /**
                     * 威胁情报开关
                     */
                    int64_t m_tiSwitch;
                    bool m_tiSwitchHasBeenSet;

                    /**
                     * 虚拟补丁开关
                     */
                    int64_t m_virtualPatchSwitch;
                    bool m_virtualPatchSwitchHasBeenSet;

                    /**
                     * 是否历史开启
                     */
                    int64_t m_historyOpen;
                    bool m_historyOpenHasBeenSet;

                    /**
                     * 状态值，0：查询成功，非0：查询失败
                     */
                    int64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * 状态信息，success：查询成功，fail：查询失败
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEDEFENSESWITCHRESPONSE_H_
