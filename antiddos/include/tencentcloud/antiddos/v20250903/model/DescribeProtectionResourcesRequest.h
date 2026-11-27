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

#ifndef TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_DESCRIBEPROTECTIONRESOURCESREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_DESCRIBEPROTECTIONRESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20250903/model/ProtectionFilter.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20250903
        {
            namespace Model
            {
                /**
                * DescribeProtectionResources请求参数结构体
                */
                class DescribeProtectionResourcesRequest : public AbstractModel
                {
                public:
                    DescribeProtectionResourcesRequest();
                    ~DescribeProtectionResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>防护实例 ID。</p>
                     * @return ProtectionId <p>防护实例 ID。</p>
                     * 
                     */
                    std::string GetProtectionId() const;

                    /**
                     * 设置<p>防护实例 ID。</p>
                     * @param _protectionId <p>防护实例 ID。</p>
                     * 
                     */
                    void SetProtectionId(const std::string& _protectionId);

                    /**
                     * 判断参数 ProtectionId 是否已赋值
                     * @return ProtectionId 是否已赋值
                     * 
                     */
                    bool ProtectionIdHasBeenSet() const;

                    /**
                     * 获取<p>分页查询偏移量。默认值：0。</p>
                     * @return Offset <p>分页查询偏移量。默认值：0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页查询偏移量。默认值：0。</p>
                     * @param _offset <p>分页查询偏移量。默认值：0。</p>
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
                     * 获取<p>分页查询限制数目。默认值：20，最大值：100。</p>
                     * @return Limit <p>分页查询限制数目。默认值：20，最大值：100。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页查询限制数目。默认值：20，最大值：100。</p>
                     * @param _limit <p>分页查询限制数目。默认值：20，最大值：100。</p>
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
                     * 获取<p>过滤条件。<p><code>Filters</code> 数组的元素个数上限为 20。不填写该参数时，返回防护实例下的全部防护资源。</p><p>支持的过滤字段：</p><ul><li><code>ResourceType</code>：按防护资源类型过滤。可选项：<ul><li><code>cvm</code>：云服务器。</li><li><code>lighthouse</code>：轻量应用服务器。</li><li><code>clb</code>：负载均衡。</li><li><code>eip</code>：弹性公网 IP。</li><li><code>waf</code>：Web 应用防火墙。</li><li><code>teo_l7_domain</code>：EdgeOne 域名。</li><li><code>teo_l4_proxy</code>：EdgeOne 四层代理。</li></ul></li></ul></p>
                     * @return Filters <p>过滤条件。<p><code>Filters</code> 数组的元素个数上限为 20。不填写该参数时，返回防护实例下的全部防护资源。</p><p>支持的过滤字段：</p><ul><li><code>ResourceType</code>：按防护资源类型过滤。可选项：<ul><li><code>cvm</code>：云服务器。</li><li><code>lighthouse</code>：轻量应用服务器。</li><li><code>clb</code>：负载均衡。</li><li><code>eip</code>：弹性公网 IP。</li><li><code>waf</code>：Web 应用防火墙。</li><li><code>teo_l7_domain</code>：EdgeOne 域名。</li><li><code>teo_l4_proxy</code>：EdgeOne 四层代理。</li></ul></li></ul></p>
                     * 
                     */
                    std::vector<ProtectionFilter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件。<p><code>Filters</code> 数组的元素个数上限为 20。不填写该参数时，返回防护实例下的全部防护资源。</p><p>支持的过滤字段：</p><ul><li><code>ResourceType</code>：按防护资源类型过滤。可选项：<ul><li><code>cvm</code>：云服务器。</li><li><code>lighthouse</code>：轻量应用服务器。</li><li><code>clb</code>：负载均衡。</li><li><code>eip</code>：弹性公网 IP。</li><li><code>waf</code>：Web 应用防火墙。</li><li><code>teo_l7_domain</code>：EdgeOne 域名。</li><li><code>teo_l4_proxy</code>：EdgeOne 四层代理。</li></ul></li></ul></p>
                     * @param _filters <p>过滤条件。<p><code>Filters</code> 数组的元素个数上限为 20。不填写该参数时，返回防护实例下的全部防护资源。</p><p>支持的过滤字段：</p><ul><li><code>ResourceType</code>：按防护资源类型过滤。可选项：<ul><li><code>cvm</code>：云服务器。</li><li><code>lighthouse</code>：轻量应用服务器。</li><li><code>clb</code>：负载均衡。</li><li><code>eip</code>：弹性公网 IP。</li><li><code>waf</code>：Web 应用防火墙。</li><li><code>teo_l7_domain</code>：EdgeOne 域名。</li><li><code>teo_l4_proxy</code>：EdgeOne 四层代理。</li></ul></li></ul></p>
                     * 
                     */
                    void SetFilters(const std::vector<ProtectionFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>防护实例 ID。</p>
                     */
                    std::string m_protectionId;
                    bool m_protectionIdHasBeenSet;

                    /**
                     * <p>分页查询偏移量。默认值：0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页查询限制数目。默认值：20，最大值：100。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>过滤条件。<p><code>Filters</code> 数组的元素个数上限为 20。不填写该参数时，返回防护实例下的全部防护资源。</p><p>支持的过滤字段：</p><ul><li><code>ResourceType</code>：按防护资源类型过滤。可选项：<ul><li><code>cvm</code>：云服务器。</li><li><code>lighthouse</code>：轻量应用服务器。</li><li><code>clb</code>：负载均衡。</li><li><code>eip</code>：弹性公网 IP。</li><li><code>waf</code>：Web 应用防火墙。</li><li><code>teo_l7_domain</code>：EdgeOne 域名。</li><li><code>teo_l4_proxy</code>：EdgeOne 四层代理。</li></ul></li></ul></p>
                     */
                    std::vector<ProtectionFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_DESCRIBEPROTECTIONRESOURCESREQUEST_H_
