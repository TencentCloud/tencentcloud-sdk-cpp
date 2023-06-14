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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATEBACKUPSTORAGELOCATIONREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATEBACKUPSTORAGELOCATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreateBackupStorageLocation请求参数结构体
                */
                class CreateBackupStorageLocationRequest : public AbstractModel
                {
                public:
                    CreateBackupStorageLocationRequest();
                    ~CreateBackupStorageLocationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取存储仓库所属地域，比如COS广州(ap-guangzhou)
                     * @return StorageRegion 存储仓库所属地域，比如COS广州(ap-guangzhou)
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置存储仓库所属地域，比如COS广州(ap-guangzhou)
                     * @param _storageRegion 存储仓库所属地域，比如COS广州(ap-guangzhou)
                     * 
                     */
                    void SetStorageRegion(const std::string& _storageRegion);

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     * 
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取对象存储桶名称，如果是COS必须是tke-backup前缀开头
                     * @return Bucket 对象存储桶名称，如果是COS必须是tke-backup前缀开头
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置对象存储桶名称，如果是COS必须是tke-backup前缀开头
                     * @param _bucket 对象存储桶名称，如果是COS必须是tke-backup前缀开头
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取备份仓库名称
                     * @return Name 备份仓库名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置备份仓库名称
                     * @param _name 备份仓库名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取存储服务提供方，默认腾讯云
                     * @return Provider 存储服务提供方，默认腾讯云
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置存储服务提供方，默认腾讯云
                     * @param _provider 存储服务提供方，默认腾讯云
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取对象存储桶路径
                     * @return Path 对象存储桶路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置对象存储桶路径
                     * @param _path 对象存储桶路径
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                private:

                    /**
                     * 存储仓库所属地域，比如COS广州(ap-guangzhou)
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * 对象存储桶名称，如果是COS必须是tke-backup前缀开头
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 备份仓库名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 存储服务提供方，默认腾讯云
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * 对象存储桶路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATEBACKUPSTORAGELOCATIONREQUEST_H_
