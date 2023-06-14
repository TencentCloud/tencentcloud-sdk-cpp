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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBECONFIGMAPSREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBECONFIGMAPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/FieldSort.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeConfigMaps请求参数结构体
                */
                class DescribeConfigMapsRequest : public AbstractModel
                {
                public:
                    DescribeConfigMapsRequest();
                    ~DescribeConfigMapsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取单元ID
                     * @return EdgeUnitID 单元ID
                     * 
                     */
                    uint64_t GetEdgeUnitID() const;

                    /**
                     * 设置单元ID
                     * @param _edgeUnitID 单元ID
                     * 
                     */
                    void SetEdgeUnitID(const uint64_t& _edgeUnitID);

                    /**
                     * 判断参数 EdgeUnitID 是否已赋值
                     * @return EdgeUnitID 是否已赋值
                     * 
                     */
                    bool EdgeUnitIDHasBeenSet() const;

                    /**
                     * 获取翻页偏移量
                     * @return Offset 翻页偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置翻页偏移量
                     * @param _offset 翻页偏移量
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
                     * 获取每页大小(最大100)
                     * @return Limit 每页大小(最大100)
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页大小(最大100)
                     * @param _limit 每页大小(最大100)
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
                     * 获取命名空间
                     * @return ConfigMapNamespace 命名空间
                     * 
                     */
                    std::string GetConfigMapNamespace() const;

                    /**
                     * 设置命名空间
                     * @param _configMapNamespace 命名空间
                     * 
                     */
                    void SetConfigMapNamespace(const std::string& _configMapNamespace);

                    /**
                     * 判断参数 ConfigMapNamespace 是否已赋值
                     * @return ConfigMapNamespace 是否已赋值
                     * 
                     */
                    bool ConfigMapNamespaceHasBeenSet() const;

                    /**
                     * 获取模糊匹配的名称
                     * @return NamePattern 模糊匹配的名称
                     * 
                     */
                    std::string GetNamePattern() const;

                    /**
                     * 设置模糊匹配的名称
                     * @param _namePattern 模糊匹配的名称
                     * 
                     */
                    void SetNamePattern(const std::string& _namePattern);

                    /**
                     * 判断参数 NamePattern 是否已赋值
                     * @return NamePattern 是否已赋值
                     * 
                     */
                    bool NamePatternHasBeenSet() const;

                    /**
                     * 获取Sort.Fileld填写CreateTime Sort.Order(ASC|DESC) 默认ASC
                     * @return Sort Sort.Fileld填写CreateTime Sort.Order(ASC|DESC) 默认ASC
                     * 
                     */
                    FieldSort GetSort() const;

                    /**
                     * 设置Sort.Fileld填写CreateTime Sort.Order(ASC|DESC) 默认ASC
                     * @param _sort Sort.Fileld填写CreateTime Sort.Order(ASC|DESC) 默认ASC
                     * 
                     */
                    void SetSort(const FieldSort& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                private:

                    /**
                     * 单元ID
                     */
                    uint64_t m_edgeUnitID;
                    bool m_edgeUnitIDHasBeenSet;

                    /**
                     * 翻页偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页大小(最大100)
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_configMapNamespace;
                    bool m_configMapNamespaceHasBeenSet;

                    /**
                     * 模糊匹配的名称
                     */
                    std::string m_namePattern;
                    bool m_namePatternHasBeenSet;

                    /**
                     * Sort.Fileld填写CreateTime Sort.Order(ASC|DESC) 默认ASC
                     */
                    FieldSort m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBECONFIGMAPSREQUEST_H_
