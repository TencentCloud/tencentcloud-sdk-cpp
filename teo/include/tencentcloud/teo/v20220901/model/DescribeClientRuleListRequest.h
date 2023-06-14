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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECLIENTRULELISTREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECLIENTRULELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeClientRuleList请求参数结构体
                */
                class DescribeClientRuleListRequest : public AbstractModel
                {
                public:
                    DescribeClientRuleListRequest();
                    ~DescribeClientRuleListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询的站点ID.
                     * @return ZoneId 查询的站点ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置查询的站点ID.
                     * @param _zoneId 查询的站点ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取查询的子域名。
                     * @return Domain 查询的子域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置查询的子域名。
                     * @param _domain 查询的子域名。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取规则类型，取值有：
<li>acl：自定义规则；</li>
<li>rate：限速规则。</li>不填表示查询所有规则。
                     * @return RuleType 规则类型，取值有：
<li>acl：自定义规则；</li>
<li>rate：限速规则。</li>不填表示查询所有规则。
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置规则类型，取值有：
<li>acl：自定义规则；</li>
<li>rate：限速规则。</li>不填表示查询所有规则。
                     * @param _ruleType 规则类型，取值有：
<li>acl：自定义规则；</li>
<li>rate：限速规则。</li>不填表示查询所有规则。
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取规则ID。
                     * @return RuleId 规则ID。
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则ID。
                     * @param _ruleId 规则ID。
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取客户端IP。
                     * @return SourceClientIp 客户端IP。
                     * 
                     */
                    std::string GetSourceClientIp() const;

                    /**
                     * 设置客户端IP。
                     * @param _sourceClientIp 客户端IP。
                     * 
                     */
                    void SetSourceClientIp(const std::string& _sourceClientIp);

                    /**
                     * 判断参数 SourceClientIp 是否已赋值
                     * @return SourceClientIp 是否已赋值
                     * 
                     */
                    bool SourceClientIpHasBeenSet() const;

                    /**
                     * 获取分页查询的限制数目，默认值为20，最大查询条目为1000。
                     * @return Limit 分页查询的限制数目，默认值为20，最大查询条目为1000。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页查询的限制数目，默认值为20，最大查询条目为1000。
                     * @param _limit 分页查询的限制数目，默认值为20，最大查询条目为1000。
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
                     * 获取分页的偏移量，默认值为0。
                     * @return Offset 分页的偏移量，默认值为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页的偏移量，默认值为0。
                     * @param _offset 分页的偏移量，默认值为0。
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
                     * 获取数据归属地区，取值有：
<li>overseas：全球（除中国大陆地区）数据；</li>
<li>mainland：中国大陆地区数据。</li>不填将根据用户所在地智能选择地区。
                     * @return Area 数据归属地区，取值有：
<li>overseas：全球（除中国大陆地区）数据；</li>
<li>mainland：中国大陆地区数据。</li>不填将根据用户所在地智能选择地区。
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置数据归属地区，取值有：
<li>overseas：全球（除中国大陆地区）数据；</li>
<li>mainland：中国大陆地区数据。</li>不填将根据用户所在地智能选择地区。
                     * @param _area 数据归属地区，取值有：
<li>overseas：全球（除中国大陆地区）数据；</li>
<li>mainland：中国大陆地区数据。</li>不填将根据用户所在地智能选择地区。
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * 查询的站点ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 查询的子域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 规则类型，取值有：
<li>acl：自定义规则；</li>
<li>rate：限速规则。</li>不填表示查询所有规则。
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 规则ID。
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 客户端IP。
                     */
                    std::string m_sourceClientIp;
                    bool m_sourceClientIpHasBeenSet;

                    /**
                     * 分页查询的限制数目，默认值为20，最大查询条目为1000。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页的偏移量，默认值为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 数据归属地区，取值有：
<li>overseas：全球（除中国大陆地区）数据；</li>
<li>mainland：中国大陆地区数据。</li>不填将根据用户所在地智能选择地区。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECLIENTRULELISTREQUEST_H_
