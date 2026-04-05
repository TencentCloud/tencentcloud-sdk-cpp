/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_DESCRIBEACCELERATEAREASRESPONSE_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_DESCRIBEACCELERATEAREASRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ga2/v20250115/model/AcceleratorAreas.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * DescribeAccelerateAreas返回参数结构体
                */
                class DescribeAccelerateAreasResponse : public AbstractModel
                {
                public:
                    DescribeAccelerateAreasResponse();
                    ~DescribeAccelerateAreasResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取加速地域信息。
                     * @return AccelerateAreaSet 加速地域信息。
                     * 
                     */
                    std::vector<AcceleratorAreas> GetAccelerateAreaSet() const;

                    /**
                     * 判断参数 AccelerateAreaSet 是否已赋值
                     * @return AccelerateAreaSet 是否已赋值
                     * 
                     */
                    bool AccelerateAreaSetHasBeenSet() const;

                    /**
                     * 获取实例个数。
                     * @return TotalCount 实例个数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 加速地域信息。
                     */
                    std::vector<AcceleratorAreas> m_accelerateAreaSet;
                    bool m_accelerateAreaSetHasBeenSet;

                    /**
                     * 实例个数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_DESCRIBEACCELERATEAREASRESPONSE_H_
