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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEBIDDINGAPPOINTLISTRESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEBIDDINGAPPOINTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/domain/v20180808/model/BiddingAppointResult.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeBiddingAppointList返回参数结构体
                */
                class DescribeBiddingAppointListResponse : public AbstractModel
                {
                public:
                    DescribeBiddingAppointListResponse();
                    ~DescribeBiddingAppointListResponse() = default;
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
                     * 获取预约列表
                     * @return AppointList 预约列表
                     * 
                     */
                    std::vector<BiddingAppointResult> GetAppointList() const;

                    /**
                     * 判断参数 AppointList 是否已赋值
                     * @return AppointList 是否已赋值
                     * 
                     */
                    bool AppointListHasBeenSet() const;

                private:

                    /**
                     * 搜索结果条数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 预约列表
                     */
                    std::vector<BiddingAppointResult> m_appointList;
                    bool m_appointListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEBIDDINGAPPOINTLISTRESPONSE_H_
