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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEBIDDINGLISTRESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEBIDDINGLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/domain/v20180808/model/BiddingResult.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeBiddingList返回参数结构体
                */
                class DescribeBiddingListResponse : public AbstractModel
                {
                public:
                    DescribeBiddingListResponse();
                    ~DescribeBiddingListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索结果条数
                     * @return Total 搜索结果条数
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
                     * 获取竞价列表
                     * @return BiddingList 竞价列表
                     * 
                     */
                    std::vector<BiddingResult> GetBiddingList() const;

                    /**
                     * 判断参数 BiddingList 是否已赋值
                     * @return BiddingList 是否已赋值
                     * 
                     */
                    bool BiddingListHasBeenSet() const;

                private:

                    /**
                     * 搜索结果条数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 竞价列表
                     */
                    std::vector<BiddingResult> m_biddingList;
                    bool m_biddingListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEBIDDINGLISTRESPONSE_H_
