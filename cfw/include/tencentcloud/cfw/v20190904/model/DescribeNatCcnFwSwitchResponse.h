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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATCCNFWSWITCHRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATCCNFWSWITCHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/AccessInstanceInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeNatCcnFwSwitch返回参数结构体
                */
                class DescribeNatCcnFwSwitchResponse : public AbstractModel
                {
                public:
                    DescribeNatCcnFwSwitchResponse();
                    ~DescribeNatCcnFwSwitchResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>开关接入模式，1-自动接入，2-手动接入</p><p>枚举值：</p><ul><li>1： 自动接入</li><li>2： 手动接入</li></ul>
                     * @return SwitchMode <p>开关接入模式，1-自动接入，2-手动接入</p><p>枚举值：</p><ul><li>1： 自动接入</li><li>2： 手动接入</li></ul>
                     * 
                     */
                    int64_t GetSwitchMode() const;

                    /**
                     * 判断参数 SwitchMode 是否已赋值
                     * @return SwitchMode 是否已赋值
                     * 
                     */
                    bool SwitchModeHasBeenSet() const;

                    /**
                     * 获取<p>引流路由方法，0-多路由表，1-策略路由</p><p>枚举值：</p><ul><li>0： 多路由表</li><li>1： 策略路由</li></ul>
                     * @return RoutingMode <p>引流路由方法，0-多路由表，1-策略路由</p><p>枚举值：</p><ul><li>0： 多路由表</li><li>1： 策略路由</li></ul>
                     * 
                     */
                    int64_t GetRoutingMode() const;

                    /**
                     * 判断参数 RoutingMode 是否已赋值
                     * @return RoutingMode 是否已赋值
                     * 
                     */
                    bool RoutingModeHasBeenSet() const;

                    /**
                     * 获取<p>Bypass状态，0-关闭，1-开启</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul>
                     * @return Bypass <p>Bypass状态，0-关闭，1-开启</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul>
                     * 
                     */
                    int64_t GetBypass() const;

                    /**
                     * 判断参数 Bypass 是否已赋值
                     * @return Bypass 是否已赋值
                     * 
                     */
                    bool BypassHasBeenSet() const;

                    /**
                     * 获取<p>云联网实例ID</p>
                     * @return CcnId <p>云联网实例ID</p>
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取<p>接入的实例列表</p>
                     * @return AccessInstanceList <p>接入的实例列表</p>
                     * 
                     */
                    std::vector<AccessInstanceInfo> GetAccessInstanceList() const;

                    /**
                     * 判断参数 AccessInstanceList 是否已赋值
                     * @return AccessInstanceList 是否已赋值
                     * 
                     */
                    bool AccessInstanceListHasBeenSet() const;

                private:

                    /**
                     * <p>开关接入模式，1-自动接入，2-手动接入</p><p>枚举值：</p><ul><li>1： 自动接入</li><li>2： 手动接入</li></ul>
                     */
                    int64_t m_switchMode;
                    bool m_switchModeHasBeenSet;

                    /**
                     * <p>引流路由方法，0-多路由表，1-策略路由</p><p>枚举值：</p><ul><li>0： 多路由表</li><li>1： 策略路由</li></ul>
                     */
                    int64_t m_routingMode;
                    bool m_routingModeHasBeenSet;

                    /**
                     * <p>Bypass状态，0-关闭，1-开启</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul>
                     */
                    int64_t m_bypass;
                    bool m_bypassHasBeenSet;

                    /**
                     * <p>云联网实例ID</p>
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * <p>接入的实例列表</p>
                     */
                    std::vector<AccessInstanceInfo> m_accessInstanceList;
                    bool m_accessInstanceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATCCNFWSWITCHRESPONSE_H_
