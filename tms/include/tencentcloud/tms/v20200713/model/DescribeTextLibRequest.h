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

#ifndef TENCENTCLOUD_TMS_V20200713_MODEL_DESCRIBETEXTLIBREQUEST_H_
#define TENCENTCLOUD_TMS_V20200713_MODEL_DESCRIBETEXTLIBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20200713
        {
            namespace Model
            {
                /**
                * DescribeTextLib请求参数结构体
                */
                class DescribeTextLibRequest : public AbstractModel
                {
                public:
                    DescribeTextLibRequest();
                    ~DescribeTextLibRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取内容类型 text: 1; image: 2; audio: 3; video: 4
                     * @return StrategyType 内容类型 text: 1; image: 2; audio: 3; video: 4
                     * 
                     */
                    int64_t GetStrategyType() const;

                    /**
                     * 设置内容类型 text: 1; image: 2; audio: 3; video: 4
                     * @param _strategyType 内容类型 text: 1; image: 2; audio: 3; video: 4
                     * 
                     */
                    void SetStrategyType(const int64_t& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                private:

                    /**
                     * 内容类型 text: 1; image: 2; audio: 3; video: 4
                     */
                    int64_t m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20200713_MODEL_DESCRIBETEXTLIBREQUEST_H_
