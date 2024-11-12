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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKTRENDSRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKTRENDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/NetAttackTrend.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAttackTrends返回参数结构体
                */
                class DescribeAttackTrendsResponse : public AbstractModel
                {
                public:
                    DescribeAttackTrendsResponse();
                    ~DescribeAttackTrendsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取攻击趋势统计数据（天）
                     * @return NetAttackTrend 攻击趋势统计数据（天）
                     * 
                     */
                    std::vector<NetAttackTrend> GetNetAttackTrend() const;

                    /**
                     * 判断参数 NetAttackTrend 是否已赋值
                     * @return NetAttackTrend 是否已赋值
                     * 
                     */
                    bool NetAttackTrendHasBeenSet() const;

                private:

                    /**
                     * 攻击趋势统计数据（天）
                     */
                    std::vector<NetAttackTrend> m_netAttackTrend;
                    bool m_netAttackTrendHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKTRENDSRESPONSE_H_
