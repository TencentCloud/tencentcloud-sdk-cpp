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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBESECRETSREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBESECRETSREQUEST_H_

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
                * DescribeSecrets请求参数结构体
                */
                class DescribeSecretsRequest : public AbstractModel
                {
                public:
                    DescribeSecretsRequest();
                    ~DescribeSecretsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取边缘单元ID
                     * @return EdgeUnitID 边缘单元ID
                     * 
                     */
                    uint64_t GetEdgeUnitID() const;

                    /**
                     * 设置边缘单元ID
                     * @param _edgeUnitID 边缘单元ID
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
                     * 获取页号
                     * @return Offset 页号
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置页号
                     * @param _offset 页号
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
                     * 获取每页数目
                     * @return Limit 每页数目
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页数目
                     * @param _limit 每页数目
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
                     * @return SecretNamespace 命名空间
                     * 
                     */
                    std::string GetSecretNamespace() const;

                    /**
                     * 设置命名空间
                     * @param _secretNamespace 命名空间
                     * 
                     */
                    void SetSecretNamespace(const std::string& _secretNamespace);

                    /**
                     * 判断参数 SecretNamespace 是否已赋值
                     * @return SecretNamespace 是否已赋值
                     * 
                     */
                    bool SecretNamespaceHasBeenSet() const;

                    /**
                     * 获取Secret名(模糊匹配)
                     * @return NamePattern Secret名(模糊匹配)
                     * 
                     */
                    std::string GetNamePattern() const;

                    /**
                     * 设置Secret名(模糊匹配)
                     * @param _namePattern Secret名(模糊匹配)
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
                     * 获取Sort.Field:CreateTime Sort.Order:ASC|DESC
                     * @return Sort Sort.Field:CreateTime Sort.Order:ASC|DESC
                     * 
                     */
                    FieldSort GetSort() const;

                    /**
                     * 设置Sort.Field:CreateTime Sort.Order:ASC|DESC
                     * @param _sort Sort.Field:CreateTime Sort.Order:ASC|DESC
                     * 
                     */
                    void SetSort(const FieldSort& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取Secret类型(DockerConfigJson或Opaque)
                     * @return SecretType Secret类型(DockerConfigJson或Opaque)
                     * 
                     */
                    std::string GetSecretType() const;

                    /**
                     * 设置Secret类型(DockerConfigJson或Opaque)
                     * @param _secretType Secret类型(DockerConfigJson或Opaque)
                     * 
                     */
                    void SetSecretType(const std::string& _secretType);

                    /**
                     * 判断参数 SecretType 是否已赋值
                     * @return SecretType 是否已赋值
                     * 
                     */
                    bool SecretTypeHasBeenSet() const;

                private:

                    /**
                     * 边缘单元ID
                     */
                    uint64_t m_edgeUnitID;
                    bool m_edgeUnitIDHasBeenSet;

                    /**
                     * 页号
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页数目
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_secretNamespace;
                    bool m_secretNamespaceHasBeenSet;

                    /**
                     * Secret名(模糊匹配)
                     */
                    std::string m_namePattern;
                    bool m_namePatternHasBeenSet;

                    /**
                     * Sort.Field:CreateTime Sort.Order:ASC|DESC
                     */
                    FieldSort m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * Secret类型(DockerConfigJson或Opaque)
                     */
                    std::string m_secretType;
                    bool m_secretTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBESECRETSREQUEST_H_
