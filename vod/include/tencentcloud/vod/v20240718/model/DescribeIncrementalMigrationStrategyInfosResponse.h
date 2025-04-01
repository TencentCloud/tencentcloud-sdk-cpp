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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_DESCRIBEINCREMENTALMIGRATIONSTRATEGYINFOSRESPONSE_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_DESCRIBEINCREMENTALMIGRATIONSTRATEGYINFOSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20240718/model/IncrementalMigrationStrategyInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            namespace Model
            {
                /**
                * DescribeIncrementalMigrationStrategyInfos返回参数结构体
                */
                class DescribeIncrementalMigrationStrategyInfosResponse : public AbstractModel
                {
                public:
                    DescribeIncrementalMigrationStrategyInfosResponse();
                    ~DescribeIncrementalMigrationStrategyInfosResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数。
                     * @return TotalCount 总数。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取策略信息集合。
                     * @return StrategyInfoSet 策略信息集合。
                     * 
                     */
                    std::vector<IncrementalMigrationStrategyInfo> GetStrategyInfoSet() const;

                    /**
                     * 判断参数 StrategyInfoSet 是否已赋值
                     * @return StrategyInfoSet 是否已赋值
                     * 
                     */
                    bool StrategyInfoSetHasBeenSet() const;

                private:

                    /**
                     * 总数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 策略信息集合。
                     */
                    std::vector<IncrementalMigrationStrategyInfo> m_strategyInfoSet;
                    bool m_strategyInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_DESCRIBEINCREMENTALMIGRATIONSTRATEGYINFOSRESPONSE_H_
