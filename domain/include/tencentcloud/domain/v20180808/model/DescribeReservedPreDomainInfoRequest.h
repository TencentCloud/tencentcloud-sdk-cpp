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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBERESERVEDPREDOMAININFOREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBERESERVEDPREDOMAININFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeReservedPreDomainInfo请求参数结构体
                */
                class DescribeReservedPreDomainInfoRequest : public AbstractModel
                {
                public:
                    DescribeReservedPreDomainInfoRequest();
                    ~DescribeReservedPreDomainInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名,每次最多支持500条域名查询
                     * @return DomainList 域名,每次最多支持500条域名查询
                     * 
                     */
                    std::vector<std::string> GetDomainList() const;

                    /**
                     * 设置域名,每次最多支持500条域名查询
                     * @param _domainList 域名,每次最多支持500条域名查询
                     * 
                     */
                    void SetDomainList(const std::vector<std::string>& _domainList);

                    /**
                     * 判断参数 DomainList 是否已赋值
                     * @return DomainList 是否已赋值
                     * 
                     */
                    bool DomainListHasBeenSet() const;

                    /**
                     * 获取状态，用于筛选，可不填写(1. 成功 2. 失败（失败Reason字段将会被赋值）3. 域名交割中 4. 域名交割完成 5. 预约 6. 竞价)
                     * @return ReservedStatus 状态，用于筛选，可不填写(1. 成功 2. 失败（失败Reason字段将会被赋值）3. 域名交割中 4. 域名交割完成 5. 预约 6. 竞价)
                     * 
                     */
                    int64_t GetReservedStatus() const;

                    /**
                     * 设置状态，用于筛选，可不填写(1. 成功 2. 失败（失败Reason字段将会被赋值）3. 域名交割中 4. 域名交割完成 5. 预约 6. 竞价)
                     * @param _reservedStatus 状态，用于筛选，可不填写(1. 成功 2. 失败（失败Reason字段将会被赋值）3. 域名交割中 4. 域名交割完成 5. 预约 6. 竞价)
                     * 
                     */
                    void SetReservedStatus(const int64_t& _reservedStatus);

                    /**
                     * 判断参数 ReservedStatus 是否已赋值
                     * @return ReservedStatus 是否已赋值
                     * 
                     */
                    bool ReservedStatusHasBeenSet() const;

                    /**
                     * 获取根据预约时间排序，仅支持："desc","asc"。
                     * @return ReservedTimeSort 根据预约时间排序，仅支持："desc","asc"。
                     * 
                     */
                    std::string GetReservedTimeSort() const;

                    /**
                     * 设置根据预约时间排序，仅支持："desc","asc"。
                     * @param _reservedTimeSort 根据预约时间排序，仅支持："desc","asc"。
                     * 
                     */
                    void SetReservedTimeSort(const std::string& _reservedTimeSort);

                    /**
                     * 判断参数 ReservedTimeSort 是否已赋值
                     * @return ReservedTimeSort 是否已赋值
                     * 
                     */
                    bool ReservedTimeSortHasBeenSet() const;

                    /**
                     * 获取条数
                     * @return Limit 条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置条数
                     * @param _limit 条数
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 域名,每次最多支持500条域名查询
                     */
                    std::vector<std::string> m_domainList;
                    bool m_domainListHasBeenSet;

                    /**
                     * 状态，用于筛选，可不填写(1. 成功 2. 失败（失败Reason字段将会被赋值）3. 域名交割中 4. 域名交割完成 5. 预约 6. 竞价)
                     */
                    int64_t m_reservedStatus;
                    bool m_reservedStatusHasBeenSet;

                    /**
                     * 根据预约时间排序，仅支持："desc","asc"。
                     */
                    std::string m_reservedTimeSort;
                    bool m_reservedTimeSortHasBeenSet;

                    /**
                     * 条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBERESERVEDPREDOMAININFOREQUEST_H_
