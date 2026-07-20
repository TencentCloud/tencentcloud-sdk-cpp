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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWINFOCOUNTRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWINFOCOUNTRESPONSE_H_

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
                * DescribeNatFwInfoCount返回参数结构体
                */
                class DescribeNatFwInfoCountResponse : public AbstractModel
                {
                public:
                    DescribeNatFwInfoCountResponse();
                    ~DescribeNatFwInfoCountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>返回参数 success 成功 failed 失败</p>
                     * @return ReturnMsg <p>返回参数 success 成功 failed 失败</p>
                     * 
                     */
                    std::string GetReturnMsg() const;

                    /**
                     * 判断参数 ReturnMsg 是否已赋值
                     * @return ReturnMsg 是否已赋值
                     * 
                     */
                    bool ReturnMsgHasBeenSet() const;

                    /**
                     * 获取<p>当前租户的nat防火墙实例个数</p>
                     * @return NatFwInsCount <p>当前租户的nat防火墙实例个数</p>
                     * 
                     */
                    int64_t GetNatFwInsCount() const;

                    /**
                     * 判断参数 NatFwInsCount 是否已赋值
                     * @return NatFwInsCount 是否已赋值
                     * 
                     */
                    bool NatFwInsCountHasBeenSet() const;

                    /**
                     * 获取<p>当前租户接入防火墙的子网个数</p>
                     * @return SubnetCount <p>当前租户接入防火墙的子网个数</p>
                     * 
                     */
                    int64_t GetSubnetCount() const;

                    /**
                     * 判断参数 SubnetCount 是否已赋值
                     * @return SubnetCount 是否已赋值
                     * 
                     */
                    bool SubnetCountHasBeenSet() const;

                    /**
                     * 获取<p>打开NAT防火墙开关个数</p>
                     * @return OpenSwitchCount <p>打开NAT防火墙开关个数</p>
                     * 
                     */
                    int64_t GetOpenSwitchCount() const;

                    /**
                     * 判断参数 OpenSwitchCount 是否已赋值
                     * @return OpenSwitchCount 是否已赋值
                     * 
                     */
                    bool OpenSwitchCountHasBeenSet() const;

                private:

                    /**
                     * <p>返回参数 success 成功 failed 失败</p>
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                    /**
                     * <p>当前租户的nat防火墙实例个数</p>
                     */
                    int64_t m_natFwInsCount;
                    bool m_natFwInsCountHasBeenSet;

                    /**
                     * <p>当前租户接入防火墙的子网个数</p>
                     */
                    int64_t m_subnetCount;
                    bool m_subnetCountHasBeenSet;

                    /**
                     * <p>打开NAT防火墙开关个数</p>
                     */
                    int64_t m_openSwitchCount;
                    bool m_openSwitchCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWINFOCOUNTRESPONSE_H_
