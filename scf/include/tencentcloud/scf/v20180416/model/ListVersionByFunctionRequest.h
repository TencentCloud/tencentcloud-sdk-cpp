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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_LISTVERSIONBYFUNCTIONREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_LISTVERSIONBYFUNCTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ListVersionByFunction请求参数结构体
                */
                class ListVersionByFunctionRequest : public AbstractModel
                {
                public:
                    ListVersionByFunctionRequest();
                    ~ListVersionByFunctionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取函数名
                     * @return FunctionName 函数名
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置函数名
                     * @param _functionName 函数名
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
                     * 获取函数所在命名空间
                     * @return Namespace 函数所在命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置函数所在命名空间
                     * @param _namespace 函数所在命名空间
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
                     * 获取以升序还是降序的方式返回结果，可选值 ASC 和 DESC
                     * @return Order 以升序还是降序的方式返回结果，可选值 ASC 和 DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置以升序还是降序的方式返回结果，可选值 ASC 和 DESC
                     * @param _order 以升序还是降序的方式返回结果，可选值 ASC 和 DESC
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
                     * 获取根据哪个字段进行返回结果排序,支持以下字段：AddTime, ModTime
                     * @return OrderBy 根据哪个字段进行返回结果排序,支持以下字段：AddTime, ModTime
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置根据哪个字段进行返回结果排序,支持以下字段：AddTime, ModTime
                     * @param _orderBy 根据哪个字段进行返回结果排序,支持以下字段：AddTime, ModTime
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
                     * 函数名
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 函数所在命名空间
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
                     * 以升序还是降序的方式返回结果，可选值 ASC 和 DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 根据哪个字段进行返回结果排序,支持以下字段：AddTime, ModTime
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_LISTVERSIONBYFUNCTIONREQUEST_H_
