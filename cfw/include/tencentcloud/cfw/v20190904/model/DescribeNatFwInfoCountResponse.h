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
                     * 获取返回参数 success 成功 failed 失败
                     * @return ReturnMsg 返回参数 success 成功 failed 失败
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
                     * 获取当前租户的nat防火墙实例个数
                     * @return NatFwInsCount 当前租户的nat防火墙实例个数
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
                     * 获取当前租户接入防火墙的子网个数
                     * @return SubnetCount 当前租户接入防火墙的子网个数
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
                     * 获取打开NAT防火墙开关个数
                     * @return OpenSwitchCount 打开NAT防火墙开关个数
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
                     * 返回参数 success 成功 failed 失败
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                    /**
                     * 当前租户的nat防火墙实例个数
                     */
                    int64_t m_natFwInsCount;
                    bool m_natFwInsCountHasBeenSet;

                    /**
                     * 当前租户接入防火墙的子网个数
                     */
                    int64_t m_subnetCount;
                    bool m_subnetCountHasBeenSet;

                    /**
                     * 打开NAT防火墙开关个数
                     */
                    int64_t m_openSwitchCount;
                    bool m_openSwitchCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWINFOCOUNTRESPONSE_H_
