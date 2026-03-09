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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DESCRIBEJOBRECORDDETAILSRESPONSE_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DESCRIBEJOBRECORDDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctem/v20231128/model/DisplayJobRecordDetail.h>
#include <tencentcloud/ctem/v20231128/model/Equity.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * DescribeJobRecordDetails返回参数结构体
                */
                class DescribeJobRecordDetailsResponse : public AbstractModel
                {
                public:
                    DescribeJobRecordDetailsResponse();
                    ~DescribeJobRecordDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>总数</p>
                     * @return Total <p>总数</p>
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>数组</p>
                     * @return List <p>数组</p>
                     * 
                     */
                    std::vector<DisplayJobRecordDetail> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取<p>持股路径</p>
                     * @return EnterpriseEquityPath <p>持股路径</p>
                     * 
                     */
                    std::vector<Equity> GetEnterpriseEquityPath() const;

                    /**
                     * 判断参数 EnterpriseEquityPath 是否已赋值
                     * @return EnterpriseEquityPath 是否已赋值
                     * 
                     */
                    bool EnterpriseEquityPathHasBeenSet() const;

                private:

                    /**
                     * <p>总数</p>
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>数组</p>
                     */
                    std::vector<DisplayJobRecordDetail> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * <p>持股路径</p>
                     */
                    std::vector<Equity> m_enterpriseEquityPath;
                    bool m_enterpriseEquityPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DESCRIBEJOBRECORDDETAILSRESPONSE_H_
