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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDESCRIBEBILLUSAGEDETAILRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDESCRIBEBILLUSAGEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelBillUsageDetail.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelDescribeBillUsageDetail返回参数结构体
                */
                class ChannelDescribeBillUsageDetailResponse : public AbstractModel
                {
                public:
                    ChannelDescribeBillUsageDetailResponse();
                    ~ChannelDescribeBillUsageDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回查询记录总数
                     * @return Total 返回查询记录总数
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
                     * 获取消耗记录详情
                     * @return Details 消耗记录详情
                     * 
                     */
                    std::vector<ChannelBillUsageDetail> GetDetails() const;

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                private:

                    /**
                     * 返回查询记录总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 消耗记录详情
                     */
                    std::vector<ChannelBillUsageDetail> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDESCRIBEBILLUSAGEDETAILRESPONSE_H_
