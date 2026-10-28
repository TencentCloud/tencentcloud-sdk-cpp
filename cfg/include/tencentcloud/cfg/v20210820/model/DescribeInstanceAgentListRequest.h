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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEINSTANCEAGENTLISTREQUEST_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEINSTANCEAGENTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/AgentFilter.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeInstanceAgentList请求参数结构体
                */
                class DescribeInstanceAgentListRequest : public AbstractModel
                {
                public:
                    DescribeInstanceAgentListRequest();
                    ~DescribeInstanceAgentListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>1:CVM<br>2.TKE</p>
                     * @return InstanceType <p>1:CVM<br>2.TKE</p>
                     * 
                     */
                    uint64_t GetInstanceType() const;

                    /**
                     * 设置<p>1:CVM<br>2.TKE</p>
                     * @param _instanceType <p>1:CVM<br>2.TKE</p>
                     * 
                     */
                    void SetInstanceType(const uint64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>筛选条件</p>
                     * @return Filters <p>筛选条件</p>
                     * 
                     */
                    std::vector<AgentFilter> GetFilters() const;

                    /**
                     * 设置<p>筛选条件</p>
                     * @param _filters <p>筛选条件</p>
                     * 
                     */
                    void SetFilters(const std::vector<AgentFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>页数</p>
                     * @return Page <p>页数</p>
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置<p>页数</p>
                     * @param _page <p>页数</p>
                     * 
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取<p>每页大小</p>
                     * @return PageSize <p>每页大小</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>每页大小</p>
                     * @param _pageSize <p>每页大小</p>
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>查询探针场景</p>
                     * @return AgentScene <p>查询探针场景</p>
                     * 
                     */
                    uint64_t GetAgentScene() const;

                    /**
                     * 设置<p>查询探针场景</p>
                     * @param _agentScene <p>查询探针场景</p>
                     * 
                     */
                    void SetAgentScene(const uint64_t& _agentScene);

                    /**
                     * 判断参数 AgentScene 是否已赋值
                     * @return AgentScene 是否已赋值
                     * 
                     */
                    bool AgentSceneHasBeenSet() const;

                private:

                    /**
                     * <p>1:CVM<br>2.TKE</p>
                     */
                    uint64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>筛选条件</p>
                     */
                    std::vector<AgentFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>页数</p>
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>每页大小</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>查询探针场景</p>
                     */
                    uint64_t m_agentScene;
                    bool m_agentSceneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEINSTANCEAGENTLISTREQUEST_H_
