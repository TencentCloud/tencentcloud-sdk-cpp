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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWINSTANCESINFORESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWINSTANCESINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/NatInstanceInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeNatFwInstancesInfo返回参数结构体
                */
                class DescribeNatFwInstancesInfoResponse : public AbstractModel
                {
                public:
                    DescribeNatFwInstancesInfoResponse();
                    ~DescribeNatFwInstancesInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例卡片信息数组
                     * @return NatinsLst 实例卡片信息数组
                     * 
                     */
                    std::vector<NatInstanceInfo> GetNatinsLst() const;

                    /**
                     * 判断参数 NatinsLst 是否已赋值
                     * @return NatinsLst 是否已赋值
                     * 
                     */
                    bool NatinsLstHasBeenSet() const;

                    /**
                     * 获取nat 防火墙个数
                     * @return Total nat 防火墙个数
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
                     * 实例卡片信息数组
                     */
                    std::vector<NatInstanceInfo> m_natinsLst;
                    bool m_natinsLstHasBeenSet;

                    /**
                     * nat 防火墙个数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWINSTANCESINFORESPONSE_H_
