/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEAPIKEYLISTREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEAPIKEYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeApiKeyList请求参数结构体
                */
                class DescribeApiKeyListRequest : public AbstractModel
                {
                public:
                    DescribeApiKeyListRequest();
                    ~DescribeApiKeyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境 ID，用于标识该密钥归属的云开发环境，不同环境之间的数据相互隔离
                     * @return EnvId 环境 ID，用于标识该密钥归属的云开发环境，不同环境之间的数据相互隔离
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境 ID，用于标识该密钥归属的云开发环境，不同环境之间的数据相互隔离
                     * @param _envId 环境 ID，用于标识该密钥归属的云开发环境，不同环境之间的数据相互隔离
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取分页查询的页码，从 1 开始。与 PageSize 配合使用，不传则默认返回第 1 页
                     * @return PageNumber 分页查询的页码，从 1 开始。与 PageSize 配合使用，不传则默认返回第 1 页
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置分页查询的页码，从 1 开始。与 PageSize 配合使用，不传则默认返回第 1 页
                     * @param _pageNumber 分页查询的页码，从 1 开始。与 PageSize 配合使用，不传则默认返回第 1 页
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取分页查询每页返回的记录条数。与 PageNumber 配合使用，不传则使用系统默认值
                     * @return PageSize 分页查询每页返回的记录条数。与 PageNumber 配合使用，不传则使用系统默认值
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页查询每页返回的记录条数。与 PageNumber 配合使用，不传则使用系统默认值
                     * @param _pageSize 分页查询每页返回的记录条数。与 PageNumber 配合使用，不传则使用系统默认值
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取密钥类型过滤条件。可选值：api_key（服务端调用使用的 API 密钥，具有完整权限）、publish_key（客户端使用的公开密钥，权限受限）密钥类型过滤条件。不传默认值为api_key
                     * @return KeyType 密钥类型过滤条件。可选值：api_key（服务端调用使用的 API 密钥，具有完整权限）、publish_key（客户端使用的公开密钥，权限受限）密钥类型过滤条件。不传默认值为api_key
                     * 
                     */
                    std::string GetKeyType() const;

                    /**
                     * 设置密钥类型过滤条件。可选值：api_key（服务端调用使用的 API 密钥，具有完整权限）、publish_key（客户端使用的公开密钥，权限受限）密钥类型过滤条件。不传默认值为api_key
                     * @param _keyType 密钥类型过滤条件。可选值：api_key（服务端调用使用的 API 密钥，具有完整权限）、publish_key（客户端使用的公开密钥，权限受限）密钥类型过滤条件。不传默认值为api_key
                     * 
                     */
                    void SetKeyType(const std::string& _keyType);

                    /**
                     * 判断参数 KeyType 是否已赋值
                     * @return KeyType 是否已赋值
                     * 
                     */
                    bool KeyTypeHasBeenSet() const;

                private:

                    /**
                     * 环境 ID，用于标识该密钥归属的云开发环境，不同环境之间的数据相互隔离
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 分页查询的页码，从 1 开始。与 PageSize 配合使用，不传则默认返回第 1 页
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页查询每页返回的记录条数。与 PageNumber 配合使用，不传则使用系统默认值
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 密钥类型过滤条件。可选值：api_key（服务端调用使用的 API 密钥，具有完整权限）、publish_key（客户端使用的公开密钥，权限受限）密钥类型过滤条件。不传默认值为api_key
                     */
                    std::string m_keyType;
                    bool m_keyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEAPIKEYLISTREQUEST_H_
