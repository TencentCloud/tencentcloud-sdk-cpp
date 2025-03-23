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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODEDATADISKSREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODEDATADISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Filters.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeNodeDataDisks请求参数结构体
                */
                class DescribeNodeDataDisksRequest : public AbstractModel
                {
                public:
                    DescribeNodeDataDisksRequest();
                    ~DescribeNodeDataDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EMR集群实例ID
                     * @return InstanceId EMR集群实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置EMR集群实例ID
                     * @param _instanceId EMR集群实例ID
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
                     * 获取节点CVM实例Id列表
                     * @return CvmInstanceIds 节点CVM实例Id列表
                     * 
                     */
                    std::vector<std::string> GetCvmInstanceIds() const;

                    /**
                     * 设置节点CVM实例Id列表
                     * @param _cvmInstanceIds 节点CVM实例Id列表
                     * 
                     */
                    void SetCvmInstanceIds(const std::vector<std::string>& _cvmInstanceIds);

                    /**
                     * 判断参数 CvmInstanceIds 是否已赋值
                     * @return CvmInstanceIds 是否已赋值
                     * 
                     */
                    bool CvmInstanceIdsHasBeenSet() const;

                    /**
                     * 获取查询云盘的过滤条件
                     * @return Filters 查询云盘的过滤条件
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置查询云盘的过滤条件
                     * @param _filters 查询云盘的过滤条件
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取模糊搜索
                     * @return InnerSearch 模糊搜索
                     * 
                     */
                    std::string GetInnerSearch() const;

                    /**
                     * 设置模糊搜索
                     * @param _innerSearch 模糊搜索
                     * 
                     */
                    void SetInnerSearch(const std::string& _innerSearch);

                    /**
                     * 判断参数 InnerSearch 是否已赋值
                     * @return InnerSearch 是否已赋值
                     * 
                     */
                    bool InnerSearchHasBeenSet() const;

                    /**
                     * 获取每页返回数量，默认值为100，最大值为100。
                     * @return Limit 每页返回数量，默认值为100，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页返回数量，默认值为100，最大值为100。
                     * @param _limit 每页返回数量，默认值为100，最大值为100。
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
                     * 获取数据偏移值
                     * @return Offset 数据偏移值
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置数据偏移值
                     * @param _offset 数据偏移值
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * EMR集群实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 节点CVM实例Id列表
                     */
                    std::vector<std::string> m_cvmInstanceIds;
                    bool m_cvmInstanceIdsHasBeenSet;

                    /**
                     * 查询云盘的过滤条件
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 模糊搜索
                     */
                    std::string m_innerSearch;
                    bool m_innerSearchHasBeenSet;

                    /**
                     * 每页返回数量，默认值为100，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 数据偏移值
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODEDATADISKSREQUEST_H_
