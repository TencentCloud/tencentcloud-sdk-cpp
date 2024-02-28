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
                     * 获取偏移
                     * @return Offset 偏移
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移
                     * @param _offset 偏移
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
                     * 获取最大数量
                     * @return Limit 最大数量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置最大数量
                     * @param _limit 最大数量
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
                     * 获取资源ID或者资源名字模糊查询的关键字
                     * @return SearchWord 资源ID或者资源名字模糊查询的关键字
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置资源ID或者资源名字模糊查询的关键字
                     * @param _searchWord 资源ID或者资源名字模糊查询的关键字
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
                     * 获取标签过滤条件
                     * @return TagFilters 标签过滤条件
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置标签过滤条件
                     * @param _tagFilters 标签过滤条件
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
                     * 获取设备所属的厂商名称，根据厂商来进行筛选
                     * @return Manufacturer 设备所属的厂商名称，根据厂商来进行筛选
                     * 
                     */
                    std::string GetManufacturer() const;

                    /**
                     * 设置设备所属的厂商名称，根据厂商来进行筛选
                     * @param _manufacturer 设备所属的厂商名称，根据厂商来进行筛选
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
                     * 获取Hsm服务类型，可选virtualization、physical、GHSM、EHSM、SHSM、all
                     * @return HsmType Hsm服务类型，可选virtualization、physical、GHSM、EHSM、SHSM、all
                     * 
                     */
                    std::string GetHsmType() const;

                    /**
                     * 设置Hsm服务类型，可选virtualization、physical、GHSM、EHSM、SHSM、all
                     * @param _hsmType Hsm服务类型，可选virtualization、physical、GHSM、EHSM、SHSM、all
                     * 
                     */
                    void SetHsmType(const std::string& _hsmType);

                    /**
                     * 判断参数 HsmType 是否已赋值
                     * @return HsmType 是否已赋值
                     * 
                     */
                    bool HsmTypeHasBeenSet() const;

                private:

                    /**
                     * 偏移
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 最大数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 资源ID或者资源名字模糊查询的关键字
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 标签过滤条件
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * 设备所属的厂商名称，根据厂商来进行筛选
                     */
                    std::string m_manufacturer;
                    bool m_manufacturerHasBeenSet;

                    /**
                     * Hsm服务类型，可选virtualization、physical、GHSM、EHSM、SHSM、all
                     */
                    std::string m_hsmType;
                    bool m_hsmTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEVSMSREQUEST_H_
