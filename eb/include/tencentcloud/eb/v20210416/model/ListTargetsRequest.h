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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_LISTTARGETSREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_LISTTARGETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * ListTargets请求参数结构体
                */
                class ListTargetsRequest : public AbstractModel
                {
                public:
                    ListTargetsRequest();
                    ~ListTargetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>事件集ID</p>
                     * @return EventBusId <p>事件集ID</p>
                     * 
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 设置<p>事件集ID</p>
                     * @param _eventBusId <p>事件集ID</p>
                     * 
                     */
                    void SetEventBusId(const std::string& _eventBusId);

                    /**
                     * 判断参数 EventBusId 是否已赋值
                     * @return EventBusId 是否已赋值
                     * 
                     */
                    bool EventBusIdHasBeenSet() const;

                    /**
                     * 获取<p>事件规则ID</p>
                     * @return RuleId <p>事件规则ID</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>事件规则ID</p>
                     * @param _ruleId <p>事件规则ID</p>
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取<p>根据哪个字段进行返回结果排序,支持以下字段：AddTime（创建时间）, ModTime（修改时间）</p>
                     * @return OrderBy <p>根据哪个字段进行返回结果排序,支持以下字段：AddTime（创建时间）, ModTime（修改时间）</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>根据哪个字段进行返回结果排序,支持以下字段：AddTime（创建时间）, ModTime（修改时间）</p>
                     * @param _orderBy <p>根据哪个字段进行返回结果排序,支持以下字段：AddTime（创建时间）, ModTime（修改时间）</p>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取<p>返回数量，默认为20，最大值为100。</p>
                     * @return Limit <p>返回数量，默认为20，最大值为100。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为20，最大值为100。</p>
                     * @param _limit <p>返回数量，默认为20，最大值为100。</p>
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
                     * 获取<p>分页偏移量，默认为0。</p>
                     * @return Offset <p>分页偏移量，默认为0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，默认为0。</p>
                     * @param _offset <p>分页偏移量，默认为0。</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>以升序还是降序的方式返回结果，可选值 ASC（升序） 和 DESC（降序）</p>
                     * @return Order <p>以升序还是降序的方式返回结果，可选值 ASC（升序） 和 DESC（降序）</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>以升序还是降序的方式返回结果，可选值 ASC（升序） 和 DESC（降序）</p>
                     * @param _order <p>以升序还是降序的方式返回结果，可选值 ASC（升序） 和 DESC（降序）</p>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * <p>事件集ID</p>
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * <p>事件规则ID</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>根据哪个字段进行返回结果排序,支持以下字段：AddTime（创建时间）, ModTime（修改时间）</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>返回数量，默认为20，最大值为100。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页偏移量，默认为0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>以升序还是降序的方式返回结果，可选值 ASC（升序） 和 DESC（降序）</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_LISTTARGETSREQUEST_H_
