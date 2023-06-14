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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_LISTTRIGGERSREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_LISTTRIGGERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/Filter.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ListTriggers请求参数结构体
                */
                class ListTriggersRequest : public AbstractModel
                {
                public:
                    ListTriggersRequest();
                    ~ListTriggersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取函数名称
                     * @return FunctionName 函数名称
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置函数名称
                     * @param _functionName 函数名称
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取命名空间，默认是default
                     * @return Namespace 命名空间，默认是default
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间，默认是default
                     * @param _namespace 命名空间，默认是default
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取数据偏移量，默认值为 0
                     * @return Offset 数据偏移量，默认值为 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置数据偏移量，默认值为 0
                     * @param _offset 数据偏移量，默认值为 0
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
                     * 获取返回数据长度，默认值为 20
                     * @return Limit 返回数据长度，默认值为 20
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数据长度，默认值为 20
                     * @param _limit 返回数据长度，默认值为 20
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
                     * 获取根据哪个字段进行返回结果排序,支持以下字段：add_time，mod_time，默认mod_time
                     * @return OrderBy 根据哪个字段进行返回结果排序,支持以下字段：add_time，mod_time，默认mod_time
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置根据哪个字段进行返回结果排序,支持以下字段：add_time，mod_time，默认mod_time
                     * @param _orderBy 根据哪个字段进行返回结果排序,支持以下字段：add_time，mod_time，默认mod_time
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
                     * 获取以升序还是降序的方式返回结果，可选值 ASC 和 DESC，默认DESC
                     * @return Order 以升序还是降序的方式返回结果，可选值 ASC 和 DESC，默认DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置以升序还是降序的方式返回结果，可选值 ASC 和 DESC，默认DESC
                     * @param _order 以升序还是降序的方式返回结果，可选值 ASC 和 DESC，默认DESC
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取* Qualifier: 函数版本，别名
* TriggerName: 函数触发器名称
* Description: 函数触发器描述
                     * @return Filters * Qualifier: 函数版本，别名
* TriggerName: 函数触发器名称
* Description: 函数触发器描述
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置* Qualifier: 函数版本，别名
* TriggerName: 函数触发器名称
* Description: 函数触发器描述
                     * @param _filters * Qualifier: 函数版本，别名
* TriggerName: 函数触发器名称
* Description: 函数触发器描述
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 函数名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 命名空间，默认是default
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 数据偏移量，默认值为 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数据长度，默认值为 20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 根据哪个字段进行返回结果排序,支持以下字段：add_time，mod_time，默认mod_time
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 以升序还是降序的方式返回结果，可选值 ASC 和 DESC，默认DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * * Qualifier: 函数版本，别名
* TriggerName: 函数触发器名称
* Description: 函数触发器描述
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_LISTTRIGGERSREQUEST_H_
