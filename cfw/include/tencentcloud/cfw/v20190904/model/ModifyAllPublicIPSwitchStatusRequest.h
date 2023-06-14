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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYALLPUBLICIPSWITCHSTATUSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYALLPUBLICIPSWITCHSTATUSREQUEST_H_

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
                * ModifyAllPublicIPSwitchStatus请求参数结构体
                */
                class ModifyAllPublicIPSwitchStatusRequest : public AbstractModel
                {
                public:
                    ModifyAllPublicIPSwitchStatusRequest();
                    ~ModifyAllPublicIPSwitchStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取状态，0：关闭，1：开启
                     * @return Status 状态，0：关闭，1：开启
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态，0：关闭，1：开启
                     * @param _status 状态，0：关闭，1：开启
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取选中的防火墙开关Id
                     * @return FireWallPublicIPs 选中的防火墙开关Id
                     * 
                     */
                    std::vector<std::string> GetFireWallPublicIPs() const;

                    /**
                     * 设置选中的防火墙开关Id
                     * @param _fireWallPublicIPs 选中的防火墙开关Id
                     * 
                     */
                    void SetFireWallPublicIPs(const std::vector<std::string>& _fireWallPublicIPs);

                    /**
                     * 判断参数 FireWallPublicIPs 是否已赋值
                     * @return FireWallPublicIPs 是否已赋值
                     * 
                     */
                    bool FireWallPublicIPsHasBeenSet() const;

                private:

                    /**
                     * 状态，0：关闭，1：开启
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 选中的防火墙开关Id
                     */
                    std::vector<std::string> m_fireWallPublicIPs;
                    bool m_fireWallPublicIPsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYALLPUBLICIPSWITCHSTATUSREQUEST_H_
