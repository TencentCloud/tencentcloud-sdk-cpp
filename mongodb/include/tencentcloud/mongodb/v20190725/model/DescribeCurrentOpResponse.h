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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBECURRENTOPRESPONSE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBECURRENTOPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/CurrentOp.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeCurrentOp返回参数结构体
                */
                class DescribeCurrentOpResponse : public AbstractModel
                {
                public:
                    DescribeCurrentOpResponse();
                    ~DescribeCurrentOpResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合查询条件的操作总数。
                     * @return TotalCount 符合查询条件的操作总数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取当前操作列表。
                     * @return CurrentOps 当前操作列表。
                     * 
                     */
                    std::vector<CurrentOp> GetCurrentOps() const;

                    /**
                     * 判断参数 CurrentOps 是否已赋值
                     * @return CurrentOps 是否已赋值
                     * 
                     */
                    bool CurrentOpsHasBeenSet() const;

                private:

                    /**
                     * 符合查询条件的操作总数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 当前操作列表。
                     */
                    std::vector<CurrentOp> m_currentOps;
                    bool m_currentOpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBECURRENTOPRESPONSE_H_
