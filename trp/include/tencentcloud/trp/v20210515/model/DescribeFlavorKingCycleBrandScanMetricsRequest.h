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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBEFLAVORKINGCYCLEBRANDSCANMETRICSREQUEST_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBEFLAVORKINGCYCLEBRANDSCANMETRICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * DescribeFlavorKingCycleBrandScanMetrics请求参数结构体
                */
                class DescribeFlavorKingCycleBrandScanMetricsRequest : public AbstractModel
                {
                public:
                    DescribeFlavorKingCycleBrandScanMetricsRequest();
                    ~DescribeFlavorKingCycleBrandScanMetricsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>CorpId</p>
                     * @return CorpId <p>CorpId</p>
                     * 
                     */
                    uint64_t GetCorpId() const;

                    /**
                     * 设置<p>CorpId</p>
                     * @param _corpId <p>CorpId</p>
                     * 
                     */
                    void SetCorpId(const uint64_t& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取<p>溯源ID</p>
                     * @return QueryDate <p>溯源ID</p>
                     * 
                     */
                    std::string GetQueryDate() const;

                    /**
                     * 设置<p>溯源ID</p>
                     * @param _queryDate <p>溯源ID</p>
                     * 
                     */
                    void SetQueryDate(const std::string& _queryDate);

                    /**
                     * 判断参数 QueryDate 是否已赋值
                     * @return QueryDate 是否已赋值
                     * 
                     */
                    bool QueryDateHasBeenSet() const;

                private:

                    /**
                     * <p>CorpId</p>
                     */
                    uint64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * <p>溯源ID</p>
                     */
                    std::string m_queryDate;
                    bool m_queryDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBEFLAVORKINGCYCLEBRANDSCANMETRICSREQUEST_H_
