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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEPRIVATENATGATEWAYTRANSLATIONNATRULESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEPRIVATENATGATEWAYTRANSLATIONNATRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribePrivateNatGatewayTranslationNatRules请求参数结构体
                */
                class DescribePrivateNatGatewayTranslationNatRulesRequest : public AbstractModel
                {
                public:
                    DescribePrivateNatGatewayTranslationNatRulesRequest();
                    ~DescribePrivateNatGatewayTranslationNatRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取私网网关唯一`ID`，形如：`intranat-xxxxxxxx`。
                     * @return NatGatewayId 私网网关唯一`ID`，形如：`intranat-xxxxxxxx`。
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置私网网关唯一`ID`，形如：`intranat-xxxxxxxx`。
                     * @param _natGatewayId 私网网关唯一`ID`，形如：`intranat-xxxxxxxx`。
                     * 
                     */
                    void SetNatGatewayId(const std::string& _natGatewayId);

                    /**
                     * 判断参数 NatGatewayId 是否已赋值
                     * @return NatGatewayId 是否已赋值
                     * 
                     */
                    bool NatGatewayIdHasBeenSet() const;

                    /**
                     * 获取过滤条件。
<li>OriginalIp - String - 转换规则源`IP`。</li>
<li>TranslationIp - String - 转换`IP`。</li>
<li>VpcId - String - 私网网关所在`VpcId`。</li>
<li>Description - String - 转换规则描述</li>
                     * @return Filters 过滤条件。
<li>OriginalIp - String - 转换规则源`IP`。</li>
<li>TranslationIp - String - 转换`IP`。</li>
<li>VpcId - String - 私网网关所在`VpcId`。</li>
<li>Description - String - 转换规则描述</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>OriginalIp - String - 转换规则源`IP`。</li>
<li>TranslationIp - String - 转换`IP`。</li>
<li>VpcId - String - 私网网关所在`VpcId`。</li>
<li>Description - String - 转换规则描述</li>
                     * @param _filters 过滤条件。
<li>OriginalIp - String - 转换规则源`IP`。</li>
<li>TranslationIp - String - 转换`IP`。</li>
<li>VpcId - String - 私网网关所在`VpcId`。</li>
<li>Description - String - 转换规则描述</li>
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
                     * 获取偏移量。默认值为0。
                     * @return Offset 偏移量。默认值为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量。默认值为0。
                     * @param _offset 偏移量。默认值为0。
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
                     * 获取返回数量。默认值为20。
                     * @return Limit 返回数量。默认值为20。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量。默认值为20。
                     * @param _limit 返回数量。默认值为20。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 私网网关唯一`ID`，形如：`intranat-xxxxxxxx`。
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * 过滤条件。
<li>OriginalIp - String - 转换规则源`IP`。</li>
<li>TranslationIp - String - 转换`IP`。</li>
<li>VpcId - String - 私网网关所在`VpcId`。</li>
<li>Description - String - 转换规则描述</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量。默认值为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量。默认值为20。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEPRIVATENATGATEWAYTRANSLATIONNATRULESREQUEST_H_
