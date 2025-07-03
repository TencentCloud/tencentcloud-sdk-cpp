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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBESTRATEGYDETAILRESPONSE_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBESTRATEGYDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/igtm/v20231024/model/StrategyDetail.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * DescribeStrategyDetail返回参数结构体
                */
                class DescribeStrategyDetailResponse : public AbstractModel
                {
                public:
                    DescribeStrategyDetailResponse();
                    ~DescribeStrategyDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取策略详情
                     * @return StrategyDetail 策略详情
                     * 
                     */
                    StrategyDetail GetStrategyDetail() const;

                    /**
                     * 判断参数 StrategyDetail 是否已赋值
                     * @return StrategyDetail 是否已赋值
                     * 
                     */
                    bool StrategyDetailHasBeenSet() const;

                private:

                    /**
                     * 策略详情
                     */
                    StrategyDetail m_strategyDetail;
                    bool m_strategyDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBESTRATEGYDETAILRESPONSE_H_
