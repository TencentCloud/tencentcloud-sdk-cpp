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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEREGISTRYRECORDLISTREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEREGISTRYRECORDLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/CloudFilter.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DescribeRegistryRecordList请求参数结构体
                */
                class DescribeRegistryRecordListRequest : public AbstractModel
                {
                public:
                    DescribeRegistryRecordListRequest();
                    ~DescribeRegistryRecordListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>RegistryId 必填。大写常量 MARKETPLACE 表示服务端主 YAML marketplace.registry_ids 配置的工具市场；真实 reg-xxx 表示具体 Registry。省略、空字符串、null 或其他大小写均拒绝。市场读取要求已认证身份，只返回配置来源内未删除、已审批的可读版本，文件还须 READY 和有效制品；不回退私有目录。</p>
                     * @return RegistryId <p>RegistryId 必填。大写常量 MARKETPLACE 表示服务端主 YAML marketplace.registry_ids 配置的工具市场；真实 reg-xxx 表示具体 Registry。省略、空字符串、null 或其他大小写均拒绝。市场读取要求已认证身份，只返回配置来源内未删除、已审批的可读版本，文件还须 READY 和有效制品；不回退私有目录。</p>
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置<p>RegistryId 必填。大写常量 MARKETPLACE 表示服务端主 YAML marketplace.registry_ids 配置的工具市场；真实 reg-xxx 表示具体 Registry。省略、空字符串、null 或其他大小写均拒绝。市场读取要求已认证身份，只返回配置来源内未删除、已审批的可读版本，文件还须 READY 和有效制品；不回退私有目录。</p>
                     * @param _registryId <p>RegistryId 必填。大写常量 MARKETPLACE 表示服务端主 YAML marketplace.registry_ids 配置的工具市场；真实 reg-xxx 表示具体 Registry。省略、空字符串、null 或其他大小写均拒绝。市场读取要求已认证身份，只返回配置来源内未删除、已审批的可读版本，文件还须 READY 和有效制品；不回退私有目录。</p>
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取<p>分页起始偏移，默认 0。</p>
                     * @return Offset <p>分页起始偏移，默认 0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页起始偏移，默认 0。</p>
                     * @param _offset <p>分页起始偏移，默认 0。</p>
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
                     * 获取<p>分页条数，默认 20，最大 100。</p>
                     * @return Limit <p>分页条数，默认 20，最大 100。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页条数，默认 20，最大 100。</p>
                     * @param _limit <p>分页条数，默认 20，最大 100。</p>
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
                     * 获取<p>过滤条件。支持 Filter.Name：<code>name</code>/<code>search</code>（按 Record Name 模糊搜索）；其他名称返回 <code>InvalidParameter.Filters.Name</code>。</p>
                     * @return Filters <p>过滤条件。支持 Filter.Name：<code>name</code>/<code>search</code>（按 Record Name 模糊搜索）；其他名称返回 <code>InvalidParameter.Filters.Name</code>。</p>
                     * 
                     */
                    std::vector<CloudFilter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件。支持 Filter.Name：<code>name</code>/<code>search</code>（按 Record Name 模糊搜索）；其他名称返回 <code>InvalidParameter.Filters.Name</code>。</p>
                     * @param _filters <p>过滤条件。支持 Filter.Name：<code>name</code>/<code>search</code>（按 Record Name 模糊搜索）；其他名称返回 <code>InvalidParameter.Filters.Name</code>。</p>
                     * 
                     */
                    void SetFilters(const std::vector<CloudFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>RegistryId 必填。大写常量 MARKETPLACE 表示服务端主 YAML marketplace.registry_ids 配置的工具市场；真实 reg-xxx 表示具体 Registry。省略、空字符串、null 或其他大小写均拒绝。市场读取要求已认证身份，只返回配置来源内未删除、已审批的可读版本，文件还须 READY 和有效制品；不回退私有目录。</p>
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * <p>分页起始偏移，默认 0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页条数，默认 20，最大 100。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>过滤条件。支持 Filter.Name：<code>name</code>/<code>search</code>（按 Record Name 模糊搜索）；其他名称返回 <code>InvalidParameter.Filters.Name</code>。</p>
                     */
                    std::vector<CloudFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEREGISTRYRECORDLISTREQUEST_H_
