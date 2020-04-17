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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBENAMESPACESREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBENAMESPACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeNamespaces请求参数结构体
                */
                class DescribeNamespacesRequest : public AbstractModel
                {
                public:
                    DescribeNamespacesRequest();
                    ~DescribeNamespacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return RegistryId 实例Id
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置实例Id
                     * @param RegistryId 实例Id
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取指定命名空间，不填写默认查询所有命名空间
                     * @return NamespaceName 指定命名空间，不填写默认查询所有命名空间
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置指定命名空间，不填写默认查询所有命名空间
                     * @param NamespaceName 指定命名空间，不填写默认查询所有命名空间
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取每页个数
                     * @return Limit 每页个数
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页个数
                     * @param Limit 每页个数
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取页偏移
                     * @return Offset 页偏移
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置页偏移
                     * @param Offset 页偏移
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 指定命名空间，不填写默认查询所有命名空间
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 每页个数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 页偏移
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBENAMESPACESREQUEST_H_
