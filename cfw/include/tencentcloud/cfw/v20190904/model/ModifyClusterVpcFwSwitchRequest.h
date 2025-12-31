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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYCLUSTERVPCFWSWITCHREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYCLUSTERVPCFWSWITCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/CcnSwitchInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyClusterVpcFwSwitch请求参数结构体
                */
                class ModifyClusterVpcFwSwitchRequest : public AbstractModel
                {
                public:
                    ModifyClusterVpcFwSwitchRequest();
                    ~ModifyClusterVpcFwSwitchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开关，0：关闭，1：开启
                     * @return Enable 开关，0：关闭，1：开启
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置开关，0：关闭，1：开启
                     * @param _enable 开关，0：关闭，1：开启
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取集群模式vpc间防火墙ccn开关信息
                     * @return CcnSwitch 集群模式vpc间防火墙ccn开关信息
                     * 
                     */
                    std::vector<CcnSwitchInfo> GetCcnSwitch() const;

                    /**
                     * 设置集群模式vpc间防火墙ccn开关信息
                     * @param _ccnSwitch 集群模式vpc间防火墙ccn开关信息
                     * 
                     */
                    void SetCcnSwitch(const std::vector<CcnSwitchInfo>& _ccnSwitch);

                    /**
                     * 判断参数 CcnSwitch 是否已赋值
                     * @return CcnSwitch 是否已赋值
                     * 
                     */
                    bool CcnSwitchHasBeenSet() const;

                private:

                    /**
                     * 开关，0：关闭，1：开启
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 集群模式vpc间防火墙ccn开关信息
                     */
                    std::vector<CcnSwitchInfo> m_ccnSwitch;
                    bool m_ccnSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYCLUSTERVPCFWSWITCHREQUEST_H_
