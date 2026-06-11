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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMINSTANCESREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/ApmTag.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeApmInstances请求参数结构体
                */
                class DescribeApmInstancesRequest : public AbstractModel
                {
                public:
                    DescribeApmInstancesRequest();
                    ~DescribeApmInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Tag 列表</p>
                     * @return Tags <p>Tag 列表</p>
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置<p>Tag 列表</p>
                     * @param _tags <p>Tag 列表</p>
                     * 
                     */
                    void SetTags(const std::vector<ApmTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>按业务系统名过滤，支持模糊检索</p>
                     * @return InstanceName <p>按业务系统名过滤，支持模糊检索</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>按业务系统名过滤，支持模糊检索</p>
                     * @param _instanceName <p>按业务系统名过滤，支持模糊检索</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>按业务系统 ID 过滤，支持模糊检索</p>
                     * @return InstanceId <p>按业务系统 ID 过滤，支持模糊检索</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>按业务系统 ID 过滤，支持模糊检索</p>
                     * @param _instanceId <p>按业务系统 ID 过滤，支持模糊检索</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>按业务系统 ID 过滤</p>
                     * @return InstanceIds <p>按业务系统 ID 过滤</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>按业务系统 ID 过滤</p>
                     * @param _instanceIds <p>按业务系统 ID 过滤</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>是否查询官方 Demo 业务系统（0=非 Demo 业务系统，1=Demo 业务系统，默认为0）</p>
                     * @return DemoInstanceFlag <p>是否查询官方 Demo 业务系统（0=非 Demo 业务系统，1=Demo 业务系统，默认为0）</p>
                     * 
                     */
                    int64_t GetDemoInstanceFlag() const;

                    /**
                     * 设置<p>是否查询官方 Demo 业务系统（0=非 Demo 业务系统，1=Demo 业务系统，默认为0）</p>
                     * @param _demoInstanceFlag <p>是否查询官方 Demo 业务系统（0=非 Demo 业务系统，1=Demo 业务系统，默认为0）</p>
                     * 
                     */
                    void SetDemoInstanceFlag(const int64_t& _demoInstanceFlag);

                    /**
                     * 判断参数 DemoInstanceFlag 是否已赋值
                     * @return DemoInstanceFlag 是否已赋值
                     * 
                     */
                    bool DemoInstanceFlagHasBeenSet() const;

                    /**
                     * 获取<p>是否查询全地域业务系统（0=不查询全地域，1=查询全地域，默认为0）</p>
                     * @return AllRegionsFlag <p>是否查询全地域业务系统（0=不查询全地域，1=查询全地域，默认为0）</p>
                     * 
                     */
                    int64_t GetAllRegionsFlag() const;

                    /**
                     * 设置<p>是否查询全地域业务系统（0=不查询全地域，1=查询全地域，默认为0）</p>
                     * @param _allRegionsFlag <p>是否查询全地域业务系统（0=不查询全地域，1=查询全地域，默认为0）</p>
                     * 
                     */
                    void SetAllRegionsFlag(const int64_t& _allRegionsFlag);

                    /**
                     * 判断参数 AllRegionsFlag 是否已赋值
                     * @return AllRegionsFlag 是否已赋值
                     * 
                     */
                    bool AllRegionsFlagHasBeenSet() const;

                    /**
                     * 获取<p>页码，从1开始</p><p>单位：页</p>
                     * @return PageIndex <p>页码，从1开始</p><p>单位：页</p>
                     * 
                     */
                    int64_t GetPageIndex() const;

                    /**
                     * 设置<p>页码，从1开始</p><p>单位：页</p>
                     * @param _pageIndex <p>页码，从1开始</p><p>单位：页</p>
                     * 
                     */
                    void SetPageIndex(const int64_t& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     * 
                     */
                    bool PageIndexHasBeenSet() const;

                    /**
                     * 获取<p>每页数量，默认20，最大100</p><p>单位：个</p>
                     * @return PageSize <p>每页数量，默认20，最大100</p><p>单位：个</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页数量，默认20，最大100</p><p>单位：个</p>
                     * @param _pageSize <p>每页数量，默认20，最大100</p><p>单位：个</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>搜索参数（OR 匹配 Name / InstanceKey）</p>
                     * @return Keyword <p>搜索参数（OR 匹配 Name / InstanceKey）</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>搜索参数（OR 匹配 Name / InstanceKey）</p>
                     * @param _keyword <p>搜索参数（OR 匹配 Name / InstanceKey）</p>
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取<p>排序类型：ASC | DESC</p>
                     * @return OrderDirection <p>排序类型：ASC | DESC</p>
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置<p>排序类型：ASC | DESC</p>
                     * @param _orderDirection <p>排序类型：ASC | DESC</p>
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                    /**
                     * 获取<p>排序字段：ServiceCount / TotalCount</p>
                     * @return OrderBy <p>排序字段：ServiceCount / TotalCount</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>排序字段：ServiceCount / TotalCount</p>
                     * @param _orderBy <p>排序字段：ServiceCount / TotalCount</p>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                private:

                    /**
                     * <p>Tag 列表</p>
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>按业务系统名过滤，支持模糊检索</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>按业务系统 ID 过滤，支持模糊检索</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>按业务系统 ID 过滤</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>是否查询官方 Demo 业务系统（0=非 Demo 业务系统，1=Demo 业务系统，默认为0）</p>
                     */
                    int64_t m_demoInstanceFlag;
                    bool m_demoInstanceFlagHasBeenSet;

                    /**
                     * <p>是否查询全地域业务系统（0=不查询全地域，1=查询全地域，默认为0）</p>
                     */
                    int64_t m_allRegionsFlag;
                    bool m_allRegionsFlagHasBeenSet;

                    /**
                     * <p>页码，从1开始</p><p>单位：页</p>
                     */
                    int64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * <p>每页数量，默认20，最大100</p><p>单位：个</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>搜索参数（OR 匹配 Name / InstanceKey）</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>排序类型：ASC | DESC</p>
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                    /**
                     * <p>排序字段：ServiceCount / TotalCount</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMINSTANCESREQUEST_H_
