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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEOVERVIEWDDOSTRENDRESPONSE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEOVERVIEWDDOSTRENDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeOverviewDDoSTrend返回参数结构体
                */
                class DescribeOverviewDDoSTrendResponse : public AbstractModel
                {
                public:
                    DescribeOverviewDDoSTrendResponse();
                    ~DescribeOverviewDDoSTrendResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取值个数
                     * @return Count 值个数
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取值数组，攻击流量带宽单位为Mbps，包速率单位为pps
                     * @return Data 值数组，攻击流量带宽单位为Mbps，包速率单位为pps
                     * 
                     */
                    std::vector<uint64_t> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 值个数
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 值数组，攻击流量带宽单位为Mbps，包速率单位为pps
                     */
                    std::vector<uint64_t> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEOVERVIEWDDOSTRENDRESPONSE_H_
