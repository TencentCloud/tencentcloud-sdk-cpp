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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBATCHIPACCESSCONTROLREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBATCHIPACCESSCONTROLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/FiltersItemNew.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeBatchIpAccessControl请求参数结构体
                */
                class DescribeBatchIpAccessControlRequest : public AbstractModel
                {
                public:
                    DescribeBatchIpAccessControlRequest();
                    ~DescribeBatchIpAccessControlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取筛选条件，支持 ActionType（可选的值为40：白名单，42：黑名单），ValidStatus（可选的值0：全部，1：生效，2：过期），Ip，Domains（域名列表），GroupId（防护对象组ID），GroupName（防护对象组名），RuleId（规则ID），TimerType（生效方式，1：永久生效，2：定时生效，3：按周周期生效，4：按月周期生效）
                     * @return Filters 筛选条件，支持 ActionType（可选的值为40：白名单，42：黑名单），ValidStatus（可选的值0：全部，1：生效，2：过期），Ip，Domains（域名列表），GroupId（防护对象组ID），GroupName（防护对象组名），RuleId（规则ID），TimerType（生效方式，1：永久生效，2：定时生效，3：按周周期生效，4：按月周期生效）
                     * 
                     */
                    std::vector<FiltersItemNew> GetFilters() const;

                    /**
                     * 设置筛选条件，支持 ActionType（可选的值为40：白名单，42：黑名单），ValidStatus（可选的值0：全部，1：生效，2：过期），Ip，Domains（域名列表），GroupId（防护对象组ID），GroupName（防护对象组名），RuleId（规则ID），TimerType（生效方式，1：永久生效，2：定时生效，3：按周周期生效，4：按月周期生效）
                     * @param _filters 筛选条件，支持 ActionType（可选的值为40：白名单，42：黑名单），ValidStatus（可选的值0：全部，1：生效，2：过期），Ip，Domains（域名列表），GroupId（防护对象组ID），GroupName（防护对象组名），RuleId（规则ID），TimerType（生效方式，1：永久生效，2：定时生效，3：按周周期生效，4：按月周期生效）
                     * 
                     */
                    void SetFilters(const std::vector<FiltersItemNew>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取偏移
                     * @return OffSet 偏移
                     * 
                     */
                    uint64_t GetOffSet() const;

                    /**
                     * 设置偏移
                     * @param _offSet 偏移
                     * 
                     */
                    void SetOffSet(const uint64_t& _offSet);

                    /**
                     * 判断参数 OffSet 是否已赋值
                     * @return OffSet 是否已赋值
                     * 
                     */
                    bool OffSetHasBeenSet() const;

                    /**
                     * 获取限制
                     * @return Limit 限制
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制
                     * @param _limit 限制
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取排序参数
                     * @return Sort 排序参数
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置排序参数
                     * @param _sort 排序参数
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                private:

                    /**
                     * 筛选条件，支持 ActionType（可选的值为40：白名单，42：黑名单），ValidStatus（可选的值0：全部，1：生效，2：过期），Ip，Domains（域名列表），GroupId（防护对象组ID），GroupName（防护对象组名），RuleId（规则ID），TimerType（生效方式，1：永久生效，2：定时生效，3：按周周期生效，4：按月周期生效）
                     */
                    std::vector<FiltersItemNew> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移
                     */
                    uint64_t m_offSet;
                    bool m_offSetHasBeenSet;

                    /**
                     * 限制
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序参数
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBATCHIPACCESSCONTROLREQUEST_H_
