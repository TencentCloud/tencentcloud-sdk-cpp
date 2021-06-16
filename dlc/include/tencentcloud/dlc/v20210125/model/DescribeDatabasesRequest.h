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
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为10，最大值为100。
                     * @param Limit 返回数量，默认为10，最大值为100。
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取数据偏移量，从0开始，默认为0。
                     * @return Offset 数据偏移量，从0开始，默认为0。
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置数据偏移量，从0开始，默认为0。
                     * @param Offset 数据偏移量，从0开始，默认为0。
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取模糊匹配，库名关键字。
                     * @return KeyWord 模糊匹配，库名关键字。
                     */
                    std::string GetKeyWord() const;

                    /**
                     * 设置模糊匹配，库名关键字。
                     * @param KeyWord 模糊匹配，库名关键字。
                     */
                    void SetKeyWord(const std::string& _keyWord);

                    /**
                     * 判断参数 KeyWord 是否已赋值
                     * @return KeyWord 是否已赋值
                     */
                    bool KeyWordHasBeenSet() const;

                    /**
                     * 获取数据源唯名称，该名称可以通过DescribeDatasourceConnection接口查询到。默认为CosDataCatalog
                     * @return DatasourceConnectionName 数据源唯名称，该名称可以通过DescribeDatasourceConnection接口查询到。默认为CosDataCatalog
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置数据源唯名称，该名称可以通过DescribeDatasourceConnection接口查询到。默认为CosDataCatalog
                     * @param DatasourceConnectionName 数据源唯名称，该名称可以通过DescribeDatasourceConnection接口查询到。默认为CosDataCatalog
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

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
                     * 数据源唯名称，该名称可以通过DescribeDatasourceConnection接口查询到。默认为CosDataCatalog
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATABASESREQUEST_H_
