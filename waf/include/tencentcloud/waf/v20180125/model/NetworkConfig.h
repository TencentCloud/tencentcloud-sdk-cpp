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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_NETWORKCONFIG_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_NETWORKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 实例的网络配置
                */
                class NetworkConfig : public AbstractModel
                {
                public:
                    NetworkConfig();
                    ~NetworkConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取高防EIP地址
                     * @return AntiDDosEip 高防EIP地址
                     * 
                     */
                    std::string GetAntiDDosEip() const;

                    /**
                     * 设置高防EIP地址
                     * @param _antiDDosEip 高防EIP地址
                     * 
                     */
                    void SetAntiDDosEip(const std::string& _antiDDosEip);

                    /**
                     * 判断参数 AntiDDosEip 是否已赋值
                     * @return AntiDDosEip 是否已赋值
                     * 
                     */
                    bool AntiDDosEipHasBeenSet() const;

                    /**
                     * 获取高防EIP绑定状态。
0：解绑
1：绑定
                     * @return AntiDDosEipStatus 高防EIP绑定状态。
0：解绑
1：绑定
                     * 
                     */
                    uint64_t GetAntiDDosEipStatus() const;

                    /**
                     * 设置高防EIP绑定状态。
0：解绑
1：绑定
                     * @param _antiDDosEipStatus 高防EIP绑定状态。
0：解绑
1：绑定
                     * 
                     */
                    void SetAntiDDosEipStatus(const uint64_t& _antiDDosEipStatus);

                    /**
                     * 判断参数 AntiDDosEipStatus 是否已赋值
                     * @return AntiDDosEipStatus 是否已赋值
                     * 
                     */
                    bool AntiDDosEipStatusHasBeenSet() const;

                    /**
                     * 获取WAF原生VIP绑定状态。
0：解绑
1：绑定
                     * @return VipStatus WAF原生VIP绑定状态。
0：解绑
1：绑定
                     * 
                     */
                    uint64_t GetVipStatus() const;

                    /**
                     * 设置WAF原生VIP绑定状态。
0：解绑
1：绑定
                     * @param _vipStatus WAF原生VIP绑定状态。
0：解绑
1：绑定
                     * 
                     */
                    void SetVipStatus(const uint64_t& _vipStatus);

                    /**
                     * 判断参数 VipStatus 是否已赋值
                     * @return VipStatus 是否已赋值
                     * 
                     */
                    bool VipStatusHasBeenSet() const;

                private:

                    /**
                     * 高防EIP地址
                     */
                    std::string m_antiDDosEip;
                    bool m_antiDDosEipHasBeenSet;

                    /**
                     * 高防EIP绑定状态。
0：解绑
1：绑定
                     */
                    uint64_t m_antiDDosEipStatus;
                    bool m_antiDDosEipStatusHasBeenSet;

                    /**
                     * WAF原生VIP绑定状态。
0：解绑
1：绑定
                     */
                    uint64_t m_vipStatus;
                    bool m_vipStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_NETWORKCONFIG_H_
