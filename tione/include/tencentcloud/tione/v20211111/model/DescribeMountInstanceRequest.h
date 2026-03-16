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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMOUNTINSTANCEREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMOUNTINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeMountInstance请求参数结构体
                */
                class DescribeMountInstanceRequest : public AbstractModel
                {
                public:
                    DescribeMountInstanceRequest();
                    ~DescribeMountInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据源类型英文名
                     * @return Type 数据源类型英文名
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置数据源类型英文名
                     * @param _type 数据源类型英文名
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取存储实例ID
                     * @return StorageId 存储实例ID
                     * 
                     */
                    std::string GetStorageId() const;

                    /**
                     * 设置存储实例ID
                     * @param _storageId 存储实例ID
                     * 
                     */
                    void SetStorageId(const std::string& _storageId);

                    /**
                     * 判断参数 StorageId 是否已赋值
                     * @return StorageId 是否已赋值
                     * 
                     */
                    bool StorageIdHasBeenSet() const;

                private:

                    /**
                     * 数据源类型英文名
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 存储实例ID
                     */
                    std::string m_storageId;
                    bool m_storageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMOUNTINSTANCEREQUEST_H_
