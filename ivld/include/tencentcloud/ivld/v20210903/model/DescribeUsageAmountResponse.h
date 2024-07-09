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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBEUSAGEAMOUNTRESPONSE_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBEUSAGEAMOUNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * DescribeUsageAmount返回参数结构体
                */
                class DescribeUsageAmountResponse : public AbstractModel
                {
                public:
                    DescribeUsageAmountResponse();
                    ~DescribeUsageAmountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资源使用小时数
                     * @return UsedHours 资源使用小时数
                     * 
                     */
                    double GetUsedHours() const;

                    /**
                     * 判断参数 UsedHours 是否已赋值
                     * @return UsedHours 是否已赋值
                     * 
                     */
                    bool UsedHoursHasBeenSet() const;

                    /**
                     * 获取资源包总量小时数
                     * @return TotalHours 资源包总量小时数
                     * 
                     */
                    double GetTotalHours() const;

                    /**
                     * 判断参数 TotalHours 是否已赋值
                     * @return TotalHours 是否已赋值
                     * 
                     */
                    bool TotalHoursHasBeenSet() const;

                private:

                    /**
                     * 资源使用小时数
                     */
                    double m_usedHours;
                    bool m_usedHoursHasBeenSet;

                    /**
                     * 资源包总量小时数
                     */
                    double m_totalHours;
                    bool m_totalHoursHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBEUSAGEAMOUNTRESPONSE_H_
