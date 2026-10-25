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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMBUSINESSSYSTEMSRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMBUSINESSSYSTEMSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/BusinessSystemItem.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTDEMBusinessSystems返回参数结构体
                */
                class DescribeTDEMBusinessSystemsResponse : public AbstractModel
                {
                public:
                    DescribeTDEMBusinessSystemsResponse();
                    ~DescribeTDEMBusinessSystemsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>总数</p>
                     * @return TotalCount <p>总数</p>
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
                     * 获取<p>业务系统列表</p>
                     * @return BusinessSystemSet <p>业务系统列表</p>
                     * 
                     */
                    std::vector<BusinessSystemItem> GetBusinessSystemSet() const;

                    /**
                     * 判断参数 BusinessSystemSet 是否已赋值
                     * @return BusinessSystemSet 是否已赋值
                     * 
                     */
                    bool BusinessSystemSetHasBeenSet() const;

                private:

                    /**
                     * <p>总数</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>业务系统列表</p>
                     */
                    std::vector<BusinessSystemItem> m_businessSystemSet;
                    bool m_businessSystemSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMBUSINESSSYSTEMSRESPONSE_H_
