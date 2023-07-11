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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEPARAMTEMPLATESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEPARAMTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeParamTemplates请求参数结构体
                */
                class DescribeParamTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeParamTemplatesRequest();
                    ~DescribeParamTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库引擎版本号
                     * @return EngineVersions 数据库引擎版本号
                     * 
                     */
                    std::vector<std::string> GetEngineVersions() const;

                    /**
                     * 设置数据库引擎版本号
                     * @param _engineVersions 数据库引擎版本号
                     * 
                     */
                    void SetEngineVersions(const std::vector<std::string>& _engineVersions);

                    /**
                     * 判断参数 EngineVersions 是否已赋值
                     * @return EngineVersions 是否已赋值
                     * 
                     */
                    bool EngineVersionsHasBeenSet() const;

                    /**
                     * 获取模板名称
                     * @return TemplateNames 模板名称
                     * 
                     */
                    std::vector<std::string> GetTemplateNames() const;

                    /**
                     * 设置模板名称
                     * @param _templateNames 模板名称
                     * 
                     */
                    void SetTemplateNames(const std::vector<std::string>& _templateNames);

                    /**
                     * 判断参数 TemplateNames 是否已赋值
                     * @return TemplateNames 是否已赋值
                     * 
                     */
                    bool TemplateNamesHasBeenSet() const;

                    /**
                     * 获取模板ID
                     * @return TemplateIds 模板ID
                     * 
                     */
                    std::vector<int64_t> GetTemplateIds() const;

                    /**
                     * 设置模板ID
                     * @param _templateIds 模板ID
                     * 
                     */
                    void SetTemplateIds(const std::vector<int64_t>& _templateIds);

                    /**
                     * 判断参数 TemplateIds 是否已赋值
                     * @return TemplateIds 是否已赋值
                     * 
                     */
                    bool TemplateIdsHasBeenSet() const;

                    /**
                     * 获取数据库类型，可选值：NORMAL，SERVERLESS
                     * @return DbModes 数据库类型，可选值：NORMAL，SERVERLESS
                     * 
                     */
                    std::vector<std::string> GetDbModes() const;

                    /**
                     * 设置数据库类型，可选值：NORMAL，SERVERLESS
                     * @param _dbModes 数据库类型，可选值：NORMAL，SERVERLESS
                     * 
                     */
                    void SetDbModes(const std::vector<std::string>& _dbModes);

                    /**
                     * 判断参数 DbModes 是否已赋值
                     * @return DbModes 是否已赋值
                     * 
                     */
                    bool DbModesHasBeenSet() const;

                    /**
                     * 获取查询偏移量
                     * @return Offset 查询偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置查询偏移量
                     * @param _offset 查询偏移量
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
                     * 获取查询限制条数
                     * @return Limit 查询限制条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询限制条数
                     * @param _limit 查询限制条数
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
                     * 获取查询的模板对应的产品类型
                     * @return Products 查询的模板对应的产品类型
                     * 
                     */
                    std::vector<std::string> GetProducts() const;

                    /**
                     * 设置查询的模板对应的产品类型
                     * @param _products 查询的模板对应的产品类型
                     * 
                     */
                    void SetProducts(const std::vector<std::string>& _products);

                    /**
                     * 判断参数 Products 是否已赋值
                     * @return Products 是否已赋值
                     * 
                     */
                    bool ProductsHasBeenSet() const;

                    /**
                     * 获取模板类型
                     * @return TemplateTypes 模板类型
                     * 
                     */
                    std::vector<std::string> GetTemplateTypes() const;

                    /**
                     * 设置模板类型
                     * @param _templateTypes 模板类型
                     * 
                     */
                    void SetTemplateTypes(const std::vector<std::string>& _templateTypes);

                    /**
                     * 判断参数 TemplateTypes 是否已赋值
                     * @return TemplateTypes 是否已赋值
                     * 
                     */
                    bool TemplateTypesHasBeenSet() const;

                    /**
                     * 获取版本类型
                     * @return EngineTypes 版本类型
                     * 
                     */
                    std::vector<std::string> GetEngineTypes() const;

                    /**
                     * 设置版本类型
                     * @param _engineTypes 版本类型
                     * 
                     */
                    void SetEngineTypes(const std::vector<std::string>& _engineTypes);

                    /**
                     * 判断参数 EngineTypes 是否已赋值
                     * @return EngineTypes 是否已赋值
                     * 
                     */
                    bool EngineTypesHasBeenSet() const;

                    /**
                     * 获取返回结果的排序字段
                     * @return OrderBy 返回结果的排序字段
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置返回结果的排序字段
                     * @param _orderBy 返回结果的排序字段
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取排序方式（asc、desc）
                     * @return OrderDirection 排序方式（asc、desc）
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置排序方式（asc、desc）
                     * @param _orderDirection 排序方式（asc、desc）
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                private:

                    /**
                     * 数据库引擎版本号
                     */
                    std::vector<std::string> m_engineVersions;
                    bool m_engineVersionsHasBeenSet;

                    /**
                     * 模板名称
                     */
                    std::vector<std::string> m_templateNames;
                    bool m_templateNamesHasBeenSet;

                    /**
                     * 模板ID
                     */
                    std::vector<int64_t> m_templateIds;
                    bool m_templateIdsHasBeenSet;

                    /**
                     * 数据库类型，可选值：NORMAL，SERVERLESS
                     */
                    std::vector<std::string> m_dbModes;
                    bool m_dbModesHasBeenSet;

                    /**
                     * 查询偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询限制条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询的模板对应的产品类型
                     */
                    std::vector<std::string> m_products;
                    bool m_productsHasBeenSet;

                    /**
                     * 模板类型
                     */
                    std::vector<std::string> m_templateTypes;
                    bool m_templateTypesHasBeenSet;

                    /**
                     * 版本类型
                     */
                    std::vector<std::string> m_engineTypes;
                    bool m_engineTypesHasBeenSet;

                    /**
                     * 返回结果的排序字段
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式（asc、desc）
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEPARAMTEMPLATESREQUEST_H_
