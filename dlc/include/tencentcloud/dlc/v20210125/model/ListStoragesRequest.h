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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LISTSTORAGESREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LISTSTORAGESREQUEST_H_

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
                * ListStorages请求参数结构体
                */
                class ListStoragesRequest : public AbstractModel
                {
                public:
                    ListStoragesRequest();
                    ~ListStoragesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>存储类型筛选：CFS / CFSTurbo / COS / GooseFS；不填表示查询所有类型</p><p>枚举值：</p><ul><li>CFS： CFS 文件.</li><li>CFSTurbo： CFS Turbo 文件.</li><li>COS ： COS Bucket.</li><li>GooseFS： GooseFS .</li></ul>
                     * @return StorageType <p>存储类型筛选：CFS / CFSTurbo / COS / GooseFS；不填表示查询所有类型</p><p>枚举值：</p><ul><li>CFS： CFS 文件.</li><li>CFSTurbo： CFS Turbo 文件.</li><li>COS ： COS Bucket.</li><li>GooseFS： GooseFS .</li></ul>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>存储类型筛选：CFS / CFSTurbo / COS / GooseFS；不填表示查询所有类型</p><p>枚举值：</p><ul><li>CFS： CFS 文件.</li><li>CFSTurbo： CFS Turbo 文件.</li><li>COS ： COS Bucket.</li><li>GooseFS： GooseFS .</li></ul>
                     * @param _storageType <p>存储类型筛选：CFS / CFSTurbo / COS / GooseFS；不填表示查询所有类型</p><p>枚举值：</p><ul><li>CFS： CFS 文件.</li><li>CFSTurbo： CFS Turbo 文件.</li><li>COS ： COS Bucket.</li><li>GooseFS： GooseFS .</li></ul>
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                private:

                    /**
                     * <p>存储类型筛选：CFS / CFSTurbo / COS / GooseFS；不填表示查询所有类型</p><p>枚举值：</p><ul><li>CFS： CFS 文件.</li><li>CFSTurbo： CFS Turbo 文件.</li><li>COS ： COS Bucket.</li><li>GooseFS： GooseFS .</li></ul>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LISTSTORAGESREQUEST_H_
