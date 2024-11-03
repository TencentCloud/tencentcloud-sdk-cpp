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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWVPCDNSLSTRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWVPCDNSLSTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/VpcDnsInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeNatFwVpcDnsLst返回参数结构体
                */
                class DescribeNatFwVpcDnsLstResponse : public AbstractModel
                {
                public:
                    DescribeNatFwVpcDnsLstResponse();
                    ~DescribeNatFwVpcDnsLstResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取nat防火墙vpc dns 信息数组
                     * @return VpcDnsSwitchLst nat防火墙vpc dns 信息数组
                     * 
                     */
                    std::vector<VpcDnsInfo> GetVpcDnsSwitchLst() const;

                    /**
                     * 判断参数 VpcDnsSwitchLst 是否已赋值
                     * @return VpcDnsSwitchLst 是否已赋值
                     * 
                     */
                    bool VpcDnsSwitchLstHasBeenSet() const;

                    /**
                     * 获取返回参数 success成功 failed 失败
                     * @return ReturnMsg 返回参数 success成功 failed 失败
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
                     * 获取开关总条数
                     * @return Total 开关总条数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * nat防火墙vpc dns 信息数组
                     */
                    std::vector<VpcDnsInfo> m_vpcDnsSwitchLst;
                    bool m_vpcDnsSwitchLstHasBeenSet;

                    /**
                     * 返回参数 success成功 failed 失败
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                    /**
                     * 开关总条数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWVPCDNSLSTRESPONSE_H_
