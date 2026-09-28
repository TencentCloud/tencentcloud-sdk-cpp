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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEVSMSREQUEST_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEVSMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudhsm/v20191112/model/TagFilter.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeVsms请求参数结构体
                */
                class DescribeVsmsRequest : public AbstractModel
                {
                public:
                    DescribeVsmsRequest();
                    ~DescribeVsmsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>偏移</p>
                     * @return Offset <p>偏移</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移</p>
                     * @param _offset <p>偏移</p>
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
                     * 获取<p>最大数量</p>
                     * @return Limit <p>最大数量</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>最大数量</p>
                     * @param _limit <p>最大数量</p>
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
                     * 获取<p>资源ID或者资源名字模糊查询的关键字</p>
                     * @return SearchWord <p>资源ID或者资源名字模糊查询的关键字</p>
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置<p>资源ID或者资源名字模糊查询的关键字</p>
                     * @param _searchWord <p>资源ID或者资源名字模糊查询的关键字</p>
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取<p>标签过滤条件</p>
                     * @return TagFilters <p>标签过滤条件</p>
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置<p>标签过滤条件</p>
                     * @param _tagFilters <p>标签过滤条件</p>
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                    /**
                     * 获取<p>设备所属的厂商名称，根据厂商来进行筛选</p>
                     * @return Manufacturer <p>设备所属的厂商名称，根据厂商来进行筛选</p>
                     * 
                     */
                    std::string GetManufacturer() const;

                    /**
                     * 设置<p>设备所属的厂商名称，根据厂商来进行筛选</p>
                     * @param _manufacturer <p>设备所属的厂商名称，根据厂商来进行筛选</p>
                     * 
                     */
                    void SetManufacturer(const std::string& _manufacturer);

                    /**
                     * 判断参数 Manufacturer 是否已赋值
                     * @return Manufacturer 是否已赋值
                     * 
                     */
                    bool ManufacturerHasBeenSet() const;

                    /**
                     * 获取<p>Hsm服务类型，可选virtualization、physical、GHSM、EHSM、SHSM、all</p>
                     * @return HsmType <p>Hsm服务类型，可选virtualization、physical、GHSM、EHSM、SHSM、all</p>
                     * 
                     */
                    std::string GetHsmType() const;

                    /**
                     * 设置<p>Hsm服务类型，可选virtualization、physical、GHSM、EHSM、SHSM、all</p>
                     * @param _hsmType <p>Hsm服务类型，可选virtualization、physical、GHSM、EHSM、SHSM、all</p>
                     * 
                     */
                    void SetHsmType(const std::string& _hsmType);

                    /**
                     * 判断参数 HsmType 是否已赋值
                     * @return HsmType 是否已赋值
                     * 
                     */
                    bool HsmTypeHasBeenSet() const;

                    /**
                     * 获取<p>集群id</p>
                     * @return ClusterId <p>集群id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群id</p>
                     * @param _clusterId <p>集群id</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * <p>偏移</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>最大数量</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>资源ID或者资源名字模糊查询的关键字</p>
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * <p>标签过滤条件</p>
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * <p>设备所属的厂商名称，根据厂商来进行筛选</p>
                     */
                    std::string m_manufacturer;
                    bool m_manufacturerHasBeenSet;

                    /**
                     * <p>Hsm服务类型，可选virtualization、physical、GHSM、EHSM、SHSM、all</p>
                     */
                    std::string m_hsmType;
                    bool m_hsmTypeHasBeenSet;

                    /**
                     * <p>集群id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEVSMSREQUEST_H_
