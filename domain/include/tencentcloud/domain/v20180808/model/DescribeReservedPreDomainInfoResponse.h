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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBERESERVEDPREDOMAININFORESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBERESERVEDPREDOMAININFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/domain/v20180808/model/ReservedPreDomainInfo.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeReservedPreDomainInfo返回参数结构体
                */
                class DescribeReservedPreDomainInfoResponse : public AbstractModel
                {
                public:
                    DescribeReservedPreDomainInfoResponse();
                    ~DescribeReservedPreDomainInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取预释放预约列表
                     * @return ReservedPreDomainInfoList 预释放预约列表
                     * 
                     */
                    std::vector<ReservedPreDomainInfo> GetReservedPreDomainInfoList() const;

                    /**
                     * 判断参数 ReservedPreDomainInfoList 是否已赋值
                     * @return ReservedPreDomainInfoList 是否已赋值
                     * 
                     */
                    bool ReservedPreDomainInfoListHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return Total 总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 预释放预约列表
                     */
                    std::vector<ReservedPreDomainInfo> m_reservedPreDomainInfoList;
                    bool m_reservedPreDomainInfoListHasBeenSet;

                    /**
                     * 总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBERESERVEDPREDOMAININFORESPONSE_H_
