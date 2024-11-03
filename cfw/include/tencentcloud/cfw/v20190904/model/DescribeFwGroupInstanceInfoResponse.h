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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEFWGROUPINSTANCEINFORESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEFWGROUPINSTANCEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/VpcFwGroupInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeFwGroupInstanceInfo返回参数结构体
                */
                class DescribeFwGroupInstanceInfoResponse : public AbstractModel
                {
                public:
                    DescribeFwGroupInstanceInfoResponse();
                    ~DescribeFwGroupInstanceInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取防火墙(组)详细信息
                     * @return VpcFwGroupLst 防火墙(组)详细信息
                     * 
                     */
                    std::vector<VpcFwGroupInfo> GetVpcFwGroupLst() const;

                    /**
                     * 判断参数 VpcFwGroupLst 是否已赋值
                     * @return VpcFwGroupLst 是否已赋值
                     * 
                     */
                    bool VpcFwGroupLstHasBeenSet() const;

                    /**
                     * 获取防火墙(组)个数
                     * @return Total 防火墙(组)个数
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
                     * 防火墙(组)详细信息
                     */
                    std::vector<VpcFwGroupInfo> m_vpcFwGroupLst;
                    bool m_vpcFwGroupLstHasBeenSet;

                    /**
                     * 防火墙(组)个数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEFWGROUPINSTANCEINFORESPONSE_H_
