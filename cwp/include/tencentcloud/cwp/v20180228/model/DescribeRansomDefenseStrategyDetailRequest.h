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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERANSOMDEFENSESTRATEGYDETAILREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERANSOMDEFENSESTRATEGYDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeRansomDefenseStrategyDetail请求参数结构体
                */
                class DescribeRansomDefenseStrategyDetailRequest : public AbstractModel
                {
                public:
                    DescribeRansomDefenseStrategyDetailRequest();
                    ~DescribeRansomDefenseStrategyDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取策略ID
                     * @return Id 策略ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置策略ID
                     * @param _id 策略ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 策略ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERANSOMDEFENSESTRATEGYDETAILREQUEST_H_
