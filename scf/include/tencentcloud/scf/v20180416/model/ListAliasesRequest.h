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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_LISTALIASESREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_LISTALIASESREQUEST_H_

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
                * ListAliases请求参数结构体
                */
                class ListAliasesRequest : public AbstractModel
                {
                public:
                    ListAliasesRequest();
                    ~ListAliasesRequest() = default;
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
                     * 获取函数所在的命名空间
                     * @return Namespace 函数所在的命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置函数所在的命名空间
                     * @param _namespace 函数所在的命名空间
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
                     * 获取如果提供此参数，则只返回与该函数版本有关联的别名
                     * @return FunctionVersion 如果提供此参数，则只返回与该函数版本有关联的别名
                     * 
                     */
                    std::string GetFunctionVersion() const;

                    /**
                     * 设置如果提供此参数，则只返回与该函数版本有关联的别名
                     * @param _functionVersion 如果提供此参数，则只返回与该函数版本有关联的别名
                     * 
                     */
                    void SetFunctionVersion(const std::string& _functionVersion);

                    /**
                     * 判断参数 FunctionVersion 是否已赋值
                     * @return FunctionVersion 是否已赋值
                     * 
                     */
                    bool FunctionVersionHasBeenSet() const;

                    /**
                     * 获取数据偏移量，默认值为 0
                     * @return Offset 数据偏移量，默认值为 0
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置数据偏移量，默认值为 0
                     * @param _offset 数据偏移量，默认值为 0
                     * 
                     */
                    void SetOffset(const std::string& _offset);

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
                    std::string GetLimit() const;

                    /**
                     * 设置返回数据长度，默认值为 20
                     * @param _limit 返回数据长度，默认值为 20
                     * 
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 函数名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 函数所在的命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 如果提供此参数，则只返回与该函数版本有关联的别名
                     */
                    std::string m_functionVersion;
                    bool m_functionVersionHasBeenSet;

                    /**
                     * 数据偏移量，默认值为 0
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数据长度，默认值为 20
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_LISTALIASESREQUEST_H_
