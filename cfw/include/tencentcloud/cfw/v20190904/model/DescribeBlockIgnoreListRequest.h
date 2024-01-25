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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKIGNORELISTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKIGNORELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeBlockIgnoreList请求参数结构体
                */
                class DescribeBlockIgnoreListRequest : public AbstractModel
                {
                public:
                    DescribeBlockIgnoreListRequest();
                    ~DescribeBlockIgnoreListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取单页数量
                     * @return Limit 单页数量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单页数量
                     * @param _limit 单页数量
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
                     * 获取页偏移量
                     * @return Offset 页偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置页偏移量
                     * @param _offset 页偏移量
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
                     * 获取方向：1互联网入站，0互联网出站，3内网，空 全部方向
                     * @return Direction 方向：1互联网入站，0互联网出站，3内网，空 全部方向
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置方向：1互联网入站，0互联网出站，3内网，空 全部方向
                     * @param _direction 方向：1互联网入站，0互联网出站，3内网，空 全部方向
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取排序类型：desc降序，asc正序
                     * @return Order 排序类型：desc降序，asc正序
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序类型：desc降序，asc正序
                     * @param _order 排序类型：desc降序，asc正序
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
                     * 获取排序列：EndTime结束时间，StartTime开始时间，MatchTimes命中次数
                     * @return By 排序列：EndTime结束时间，StartTime开始时间，MatchTimes命中次数
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序列：EndTime结束时间，StartTime开始时间，MatchTimes命中次数
                     * @param _by 排序列：EndTime结束时间，StartTime开始时间，MatchTimes命中次数
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取搜索参数，json格式字符串，空则传"{}"，域名：domain，危险等级：level，放通原因：ignore_reason，安全事件来源：rule_source，地理位置：address，模糊搜索：common
                     * @return SearchValue 搜索参数，json格式字符串，空则传"{}"，域名：domain，危险等级：level，放通原因：ignore_reason，安全事件来源：rule_source，地理位置：address，模糊搜索：common
                     * 
                     */
                    std::string GetSearchValue() const;

                    /**
                     * 设置搜索参数，json格式字符串，空则传"{}"，域名：domain，危险等级：level，放通原因：ignore_reason，安全事件来源：rule_source，地理位置：address，模糊搜索：common
                     * @param _searchValue 搜索参数，json格式字符串，空则传"{}"，域名：domain，危险等级：level，放通原因：ignore_reason，安全事件来源：rule_source，地理位置：address，模糊搜索：common
                     * 
                     */
                    void SetSearchValue(const std::string& _searchValue);

                    /**
                     * 判断参数 SearchValue 是否已赋值
                     * @return SearchValue 是否已赋值
                     * 
                     */
                    bool SearchValueHasBeenSet() const;

                    /**
                     * 获取规则类型：1封禁，2放通
                     * @return RuleType 规则类型：1封禁，2放通
                     * 
                     */
                    uint64_t GetRuleType() const;

                    /**
                     * 设置规则类型：1封禁，2放通
                     * @param _ruleType 规则类型：1封禁，2放通
                     * 
                     */
                    void SetRuleType(const uint64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取blocklist 封禁列表
whitelist 白名单列表
                     * @return ShowType blocklist 封禁列表
whitelist 白名单列表
                     * 
                     */
                    std::string GetShowType() const;

                    /**
                     * 设置blocklist 封禁列表
whitelist 白名单列表
                     * @param _showType blocklist 封禁列表
whitelist 白名单列表
                     * 
                     */
                    void SetShowType(const std::string& _showType);

                    /**
                     * 判断参数 ShowType 是否已赋值
                     * @return ShowType 是否已赋值
                     * 
                     */
                    bool ShowTypeHasBeenSet() const;

                private:

                    /**
                     * 单页数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 页偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 方向：1互联网入站，0互联网出站，3内网，空 全部方向
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 排序类型：desc降序，asc正序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序列：EndTime结束时间，StartTime开始时间，MatchTimes命中次数
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 搜索参数，json格式字符串，空则传"{}"，域名：domain，危险等级：level，放通原因：ignore_reason，安全事件来源：rule_source，地理位置：address，模糊搜索：common
                     */
                    std::string m_searchValue;
                    bool m_searchValueHasBeenSet;

                    /**
                     * 规则类型：1封禁，2放通
                     */
                    uint64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * blocklist 封禁列表
whitelist 白名单列表
                     */
                    std::string m_showType;
                    bool m_showTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKIGNORELISTREQUEST_H_
