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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RESOURCEPOOLINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RESOURCEPOOLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 资源池信息
                */
                class ResourcePoolInfo : public AbstractModel
                {
                public:
                    ResourcePoolInfo();
                    ~ResourcePoolInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源池id
                     * @return ResourcePools 资源池id
                     * 
                     */
                    std::vector<std::string> GetResourcePools() const;

                    /**
                     * 设置资源池id
                     * @param _resourcePools 资源池id
                     * 
                     */
                    void SetResourcePools(const std::vector<std::string>& _resourcePools);

                    /**
                     * 判断参数 ResourcePools 是否已赋值
                     * @return ResourcePools 是否已赋值
                     * 
                     */
                    bool ResourcePoolsHasBeenSet() const;

                    /**
                     * 获取存储空间大小，单位 MB
                     * @return StorageSize 存储空间大小，单位 MB
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置存储空间大小，单位 MB
                     * @param _storageSize 存储空间大小，单位 MB
                     * 
                     */
                    void SetStorageSize(const int64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                    /**
                     * 获取存储文件数大小
                     * @return StorageFileNum 存储文件数大小
                     * 
                     */
                    int64_t GetStorageFileNum() const;

                    /**
                     * 设置存储文件数大小
                     * @param _storageFileNum 存储文件数大小
                     * 
                     */
                    void SetStorageFileNum(const int64_t& _storageFileNum);

                    /**
                     * 判断参数 StorageFileNum 是否已赋值
                     * @return StorageFileNum 是否已赋值
                     * 
                     */
                    bool StorageFileNumHasBeenSet() const;

                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取存储类型，0 代表HDFS，1 代表OZONE
                     * @return StorageType 存储类型，0 代表HDFS，1 代表OZONE
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置存储类型，0 代表HDFS，1 代表OZONE
                     * @param _storageType 存储类型，0 代表HDFS，1 代表OZONE
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
                     * 资源池id
                     */
                    std::vector<std::string> m_resourcePools;
                    bool m_resourcePoolsHasBeenSet;

                    /**
                     * 存储空间大小，单位 MB
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * 存储文件数大小
                     */
                    int64_t m_storageFileNum;
                    bool m_storageFileNumHasBeenSet;

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 存储类型，0 代表HDFS，1 代表OZONE
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RESOURCEPOOLINFO_H_
