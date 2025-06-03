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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATABASESREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATABASESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeDatabases请求参数结构体
                */
                class DescribeDatabasesRequest : public AbstractModel
                {
                public:
                    DescribeDatabasesRequest();
                    ~DescribeDatabasesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取返回数量，默认为10，最大值为100。
                     * @return Limit 返回数量，默认为10，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为10，最大值为100。
                     * @param _limit 返回数量，默认为10，最大值为100。
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
                     * 获取数据偏移量，从0开始，默认为0。
                     * @return Offset 数据偏移量，从0开始，默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置数据偏移量，从0开始，默认为0。
                     * @param _offset 数据偏移量，从0开始，默认为0。
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
                     * 获取模糊匹配，库名关键字。
                     * @return KeyWord 模糊匹配，库名关键字。
                     * 
                     */
                    std::string GetKeyWord() const;

                    /**
                     * 设置模糊匹配，库名关键字。
                     * @param _keyWord 模糊匹配，库名关键字。
                     * 
                     */
                    void SetKeyWord(const std::string& _keyWord);

                    /**
                     * 判断参数 KeyWord 是否已赋值
                     * @return KeyWord 是否已赋值
                     * 
                     */
                    bool KeyWordHasBeenSet() const;

                    /**
                     * 获取数据源唯名称，该名称可以通过DescribeDatasourceConnection接口查询到。默认为DataLakeCatalog
                     * @return DatasourceConnectionName 数据源唯名称，该名称可以通过DescribeDatasourceConnection接口查询到。默认为DataLakeCatalog
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置数据源唯名称，该名称可以通过DescribeDatasourceConnection接口查询到。默认为DataLakeCatalog
                     * @param _datasourceConnectionName 数据源唯名称，该名称可以通过DescribeDatasourceConnection接口查询到。默认为DataLakeCatalog
                     * 
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

                    /**
                     * 获取排序字段，CreateTime：创建时间，Name：数据库名称
                     * @return Sort 排序字段，CreateTime：创建时间，Name：数据库名称
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置排序字段，CreateTime：创建时间，Name：数据库名称
                     * @param _sort 排序字段，CreateTime：创建时间，Name：数据库名称
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取排序类型：false：降序（默认）、true：升序
                     * @return Asc 排序类型：false：降序（默认）、true：升序
                     * 
                     */
                    bool GetAsc() const;

                    /**
                     * 设置排序类型：false：降序（默认）、true：升序
                     * @param _asc 排序类型：false：降序（默认）、true：升序
                     * 
                     */
                    void SetAsc(const bool& _asc);

                    /**
                     * 判断参数 Asc 是否已赋值
                     * @return Asc 是否已赋值
                     * 
                     */
                    bool AscHasBeenSet() const;

                    /**
                     * 获取查询类型：all：全部数据（默认）、permission：有权限的数据
注意：此字段需要开启白名单使用，如果需要使用，请提交工单联系我们。
                     * @return DescribeType 查询类型：all：全部数据（默认）、permission：有权限的数据
注意：此字段需要开启白名单使用，如果需要使用，请提交工单联系我们。
                     * 
                     */
                    std::string GetDescribeType() const;

                    /**
                     * 设置查询类型：all：全部数据（默认）、permission：有权限的数据
注意：此字段需要开启白名单使用，如果需要使用，请提交工单联系我们。
                     * @param _describeType 查询类型：all：全部数据（默认）、permission：有权限的数据
注意：此字段需要开启白名单使用，如果需要使用，请提交工单联系我们。
                     * 
                     */
                    void SetDescribeType(const std::string& _describeType);

                    /**
                     * 判断参数 DescribeType 是否已赋值
                     * @return DescribeType 是否已赋值
                     * 
                     */
                    bool DescribeTypeHasBeenSet() const;

                private:

                    /**
                     * 返回数量，默认为10，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 数据偏移量，从0开始，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 模糊匹配，库名关键字。
                     */
                    std::string m_keyWord;
                    bool m_keyWordHasBeenSet;

                    /**
                     * 数据源唯名称，该名称可以通过DescribeDatasourceConnection接口查询到。默认为DataLakeCatalog
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                    /**
                     * 排序字段，CreateTime：创建时间，Name：数据库名称
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 排序类型：false：降序（默认）、true：升序
                     */
                    bool m_asc;
                    bool m_ascHasBeenSet;

                    /**
                     * 查询类型：all：全部数据（默认）、permission：有权限的数据
注意：此字段需要开启白名单使用，如果需要使用，请提交工单联系我们。
                     */
                    std::string m_describeType;
                    bool m_describeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATABASESREQUEST_H_
