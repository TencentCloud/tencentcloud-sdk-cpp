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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULDEFENCEPLUGINSTATUSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULDEFENCEPLUGINSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVulDefencePluginStatus请求参数结构体
                */
                class DescribeVulDefencePluginStatusRequest : public AbstractModel
                {
                public:
                    DescribeVulDefencePluginStatusRequest();
                    ~DescribeVulDefencePluginStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件。
<li>Keywords - String - 是否必填：否 - 主机ip或别名筛选</li>
<li>Exception - String - 是否必填：否 - 插件状态 0:正常,1:异常,2:无java进程注入</li>
                     * @return Filters 过滤条件。
<li>Keywords - String - 是否必填：否 - 主机ip或别名筛选</li>
<li>Exception - String - 是否必填：否 - 插件状态 0:正常,1:异常,2:无java进程注入</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>Keywords - String - 是否必填：否 - 主机ip或别名筛选</li>
<li>Exception - String - 是否必填：否 - 插件状态 0:正常,1:异常,2:无java进程注入</li>
                     * @param _filters 过滤条件。
<li>Keywords - String - 是否必填：否 - 主机ip或别名筛选</li>
<li>Exception - String - 是否必填：否 - 插件状态 0:正常,1:异常,2:无java进程注入</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取数据偏移
                     * @return Offset 数据偏移
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置数据偏移
                     * @param _offset 数据偏移
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取数据限制
                     * @return Limit 数据限制
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置数据限制
                     * @param _limit 数据限制
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
                     * 获取排序，大小写无关：asc 升序，desc降序
                     * @return Order 排序，大小写无关：asc 升序，desc降序
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序，大小写无关：asc 升序，desc降序
                     * @param _order 排序，大小写无关：asc 升序，desc降序
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取排序列，严格相等：CreateTime创建时间，ModifyTime更新时间
                     * @return By 排序列，严格相等：CreateTime创建时间，ModifyTime更新时间
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序列，严格相等：CreateTime创建时间，ModifyTime更新时间
                     * @param _by 排序列，严格相等：CreateTime创建时间，ModifyTime更新时间
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * 过滤条件。
<li>Keywords - String - 是否必填：否 - 主机ip或别名筛选</li>
<li>Exception - String - 是否必填：否 - 插件状态 0:正常,1:异常,2:无java进程注入</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 数据偏移
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 数据限制
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序，大小写无关：asc 升序，desc降序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序列，严格相等：CreateTime创建时间，ModifyTime更新时间
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULDEFENCEPLUGINSTATUSREQUEST_H_
