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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEMLFLOWSERVERREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEMLFLOWSERVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/MlFlowResourceConfig.h>
#include <tencentcloud/dlc/v20210125/model/Tag.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateMlflowServer请求参数结构体
                */
                class CreateMlflowServerRequest : public AbstractModel
                {
                public:
                    CreateMlflowServerRequest();
                    ~CreateMlflowServerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>MlFlow Server 名称</p>
                     * @return ServerName <p>MlFlow Server 名称</p>
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置<p>MlFlow Server 名称</p>
                     * @param _serverName <p>MlFlow Server 名称</p>
                     * 
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取<p>资源分区 ID</p>
                     * @return ResourcePartitionId <p>资源分区 ID</p>
                     * 
                     */
                    std::string GetResourcePartitionId() const;

                    /**
                     * 设置<p>资源分区 ID</p>
                     * @param _resourcePartitionId <p>资源分区 ID</p>
                     * 
                     */
                    void SetResourcePartitionId(const std::string& _resourcePartitionId);

                    /**
                     * 判断参数 ResourcePartitionId 是否已赋值
                     * @return ResourcePartitionId 是否已赋值
                     * 
                     */
                    bool ResourcePartitionIdHasBeenSet() const;

                    /**
                     * 获取<p>资源组（逻辑队列名，可选）</p>
                     * @return Queue <p>资源组（逻辑队列名，可选）</p>
                     * 
                     */
                    std::string GetQueue() const;

                    /**
                     * 设置<p>资源组（逻辑队列名，可选）</p>
                     * @param _queue <p>资源组（逻辑队列名，可选）</p>
                     * 
                     */
                    void SetQueue(const std::string& _queue);

                    /**
                     * 判断参数 Queue 是否已赋值
                     * @return Queue 是否已赋值
                     * 
                     */
                    bool QueueHasBeenSet() const;

                    /**
                     * 获取<p>MlFlow 镜像</p>
                     * @return Image <p>MlFlow 镜像</p>
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>MlFlow 镜像</p>
                     * @param _image <p>MlFlow 镜像</p>
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取<p>存储配置 JSON，按 StorageMode 解释：cos={bucket,region,path}，cfs={fileSystemId,path}（cos/cfs 必填，local 为空）</p>
                     * @return StorageConfig <p>存储配置 JSON，按 StorageMode 解释：cos={bucket,region,path}，cfs={fileSystemId,path}（cos/cfs 必填，local 为空）</p>
                     * 
                     */
                    std::string GetStorageConfig() const;

                    /**
                     * 设置<p>存储配置 JSON，按 StorageMode 解释：cos={bucket,region,path}，cfs={fileSystemId,path}（cos/cfs 必填，local 为空）</p>
                     * @param _storageConfig <p>存储配置 JSON，按 StorageMode 解释：cos={bucket,region,path}，cfs={fileSystemId,path}（cos/cfs 必填，local 为空）</p>
                     * 
                     */
                    void SetStorageConfig(const std::string& _storageConfig);

                    /**
                     * 判断参数 StorageConfig 是否已赋值
                     * @return StorageConfig 是否已赋值
                     * 
                     */
                    bool StorageConfigHasBeenSet() const;

                    /**
                     * 获取<p>存储模式: cos / cfs / local</p>
                     * @return StorageMode <p>存储模式: cos / cfs / local</p>
                     * 
                     */
                    std::string GetStorageMode() const;

                    /**
                     * 设置<p>存储模式: cos / cfs / local</p>
                     * @param _storageMode <p>存储模式: cos / cfs / local</p>
                     * 
                     */
                    void SetStorageMode(const std::string& _storageMode);

                    /**
                     * 判断参数 StorageMode 是否已赋值
                     * @return StorageMode 是否已赋值
                     * 
                     */
                    bool StorageModeHasBeenSet() const;

                    /**
                     * 获取<p>MlFlow的资源配置</p>
                     * @return ResourceConfig <p>MlFlow的资源配置</p>
                     * 
                     */
                    MlFlowResourceConfig GetResourceConfig() const;

                    /**
                     * 设置<p>MlFlow的资源配置</p>
                     * @param _resourceConfig <p>MlFlow的资源配置</p>
                     * 
                     */
                    void SetResourceConfig(const MlFlowResourceConfig& _resourceConfig);

                    /**
                     * 判断参数 ResourceConfig 是否已赋值
                     * @return ResourceConfig 是否已赋值
                     * 
                     */
                    bool ResourceConfigHasBeenSet() const;

                    /**
                     * 获取<p>标签列表（TagKey-TagValue），用于将 MLflow Server 与腾讯云标签系统中的标签绑定</p>
                     * @return Tags <p>标签列表（TagKey-TagValue），用于将 MLflow Server 与腾讯云标签系统中的标签绑定</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表（TagKey-TagValue），用于将 MLflow Server 与腾讯云标签系统中的标签绑定</p>
                     * @param _tags <p>标签列表（TagKey-TagValue），用于将 MLflow Server 与腾讯云标签系统中的标签绑定</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>MlFlow Server 名称</p>
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * <p>资源分区 ID</p>
                     */
                    std::string m_resourcePartitionId;
                    bool m_resourcePartitionIdHasBeenSet;

                    /**
                     * <p>资源组（逻辑队列名，可选）</p>
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * <p>MlFlow 镜像</p>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>存储配置 JSON，按 StorageMode 解释：cos={bucket,region,path}，cfs={fileSystemId,path}（cos/cfs 必填，local 为空）</p>
                     */
                    std::string m_storageConfig;
                    bool m_storageConfigHasBeenSet;

                    /**
                     * <p>存储模式: cos / cfs / local</p>
                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * <p>MlFlow的资源配置</p>
                     */
                    MlFlowResourceConfig m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                    /**
                     * <p>标签列表（TagKey-TagValue），用于将 MLflow Server 与腾讯云标签系统中的标签绑定</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEMLFLOWSERVERREQUEST_H_
