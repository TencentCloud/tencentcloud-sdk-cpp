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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_MLFLOWSERVERINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_MLFLOWSERVERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * MlFlow Server 业务信息
                */
                class MlFlowServerInfo : public AbstractModel
                {
                public:
                    MlFlowServerInfo();
                    ~MlFlowServerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>MLflow 实例的 ID</p>
                     * @return ServerId <p>MLflow 实例的 ID</p>
                     * 
                     */
                    std::string GetServerId() const;

                    /**
                     * 设置<p>MLflow 实例的 ID</p>
                     * @param _serverId <p>MLflow 实例的 ID</p>
                     * 
                     */
                    void SetServerId(const std::string& _serverId);

                    /**
                     * 判断参数 ServerId 是否已赋值
                     * @return ServerId 是否已赋值
                     * 
                     */
                    bool ServerIdHasBeenSet() const;

                    /**
                     * 获取<p>实例名称</p>
                     * @return ServerName <p>实例名称</p>
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _serverName <p>实例名称</p>
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
                     * 获取<p>资源包名</p>
                     * @return ResourcePartitionName <p>资源包名</p>
                     * 
                     */
                    std::string GetResourcePartitionName() const;

                    /**
                     * 设置<p>资源包名</p>
                     * @param _resourcePartitionName <p>资源包名</p>
                     * 
                     */
                    void SetResourcePartitionName(const std::string& _resourcePartitionName);

                    /**
                     * 判断参数 ResourcePartitionName 是否已赋值
                     * @return ResourcePartitionName 是否已赋值
                     * 
                     */
                    bool ResourcePartitionNameHasBeenSet() const;

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
                     * 获取<p>集群内MLflow访问地址。用于训练作业上报 metrics</p>
                     * @return TrackingUri <p>集群内MLflow访问地址。用于训练作业上报 metrics</p>
                     * 
                     */
                    std::string GetTrackingUri() const;

                    /**
                     * 设置<p>集群内MLflow访问地址。用于训练作业上报 metrics</p>
                     * @param _trackingUri <p>集群内MLflow访问地址。用于训练作业上报 metrics</p>
                     * 
                     */
                    void SetTrackingUri(const std::string& _trackingUri);

                    /**
                     * 判断参数 TrackingUri 是否已赋值
                     * @return TrackingUri 是否已赋值
                     * 
                     */
                    bool TrackingUriHasBeenSet() const;

                    /**
                     * 获取<p>集群外访问地址（Ingress URL）</p>
                     * @return UiUrl <p>集群外访问地址（Ingress URL）</p>
                     * 
                     */
                    std::string GetUiUrl() const;

                    /**
                     * 设置<p>集群外访问地址（Ingress URL）</p>
                     * @param _uiUrl <p>集群外访问地址（Ingress URL）</p>
                     * 
                     */
                    void SetUiUrl(const std::string& _uiUrl);

                    /**
                     * 判断参数 UiUrl 是否已赋值
                     * @return UiUrl 是否已赋值
                     * 
                     */
                    bool UiUrlHasBeenSet() const;

                    /**
                     * 获取<p>状态：CREATED / CREATING / RUNNING / FAILED / STOPPED</p><p>枚举值：</p><ul><li>CREATED： 已创建</li><li>CREATING： 创建中</li><li>RUNNING： 运行中</li><li>FAILED： 失败</li><li>STOPPED： 已停止</li></ul>
                     * @return Status <p>状态：CREATED / CREATING / RUNNING / FAILED / STOPPED</p><p>枚举值：</p><ul><li>CREATED： 已创建</li><li>CREATING： 创建中</li><li>RUNNING： 运行中</li><li>FAILED： 失败</li><li>STOPPED： 已停止</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态：CREATED / CREATING / RUNNING / FAILED / STOPPED</p><p>枚举值：</p><ul><li>CREATED： 已创建</li><li>CREATING： 创建中</li><li>RUNNING： 运行中</li><li>FAILED： 失败</li><li>STOPPED： 已停止</li></ul>
                     * @param _status <p>状态：CREATED / CREATING / RUNNING / FAILED / STOPPED</p><p>枚举值：</p><ul><li>CREATED： 已创建</li><li>CREATING： 创建中</li><li>RUNNING： 运行中</li><li>FAILED： 失败</li><li>STOPPED： 已停止</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>仅失败时展示错误信息</p>
                     * @return ErrorMessage <p>仅失败时展示错误信息</p>
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置<p>仅失败时展示错误信息</p>
                     * @param _errorMessage <p>仅失败时展示错误信息</p>
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取<p>MLflow 镜像地址</p>
                     * @return Image <p>MLflow 镜像地址</p>
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>MLflow 镜像地址</p>
                     * @param _image <p>MLflow 镜像地址</p>
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
                     * 获取<p>存储配置 JSON，具体结构按 storageMode 解释（cos / cfs / local）</p>
                     * @return StorageConfig <p>存储配置 JSON，具体结构按 storageMode 解释（cos / cfs / local）</p>
                     * 
                     */
                    std::string GetStorageConfig() const;

                    /**
                     * 设置<p>存储配置 JSON，具体结构按 storageMode 解释（cos / cfs / local）</p>
                     * @param _storageConfig <p>存储配置 JSON，具体结构按 storageMode 解释（cos / cfs / local）</p>
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
                     * 获取<p>存储模式</p><p>枚举值：</p><ul><li>cos： cos 对象存储</li><li>cfs： cfs 文件系统存储</li></ul>
                     * @return StorageMode <p>存储模式</p><p>枚举值：</p><ul><li>cos： cos 对象存储</li><li>cfs： cfs 文件系统存储</li></ul>
                     * 
                     */
                    std::string GetStorageMode() const;

                    /**
                     * 设置<p>存储模式</p><p>枚举值：</p><ul><li>cos： cos 对象存储</li><li>cfs： cfs 文件系统存储</li></ul>
                     * @param _storageMode <p>存储模式</p><p>枚举值：</p><ul><li>cos： cos 对象存储</li><li>cfs： cfs 文件系统存储</li></ul>
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
                     * 获取<p>应用 ID</p>
                     * @return AppId <p>应用 ID</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>应用 ID</p>
                     * @param _appId <p>应用 ID</p>
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>创建者 UIN</p>
                     * @return Uin <p>创建者 UIN</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>创建者 UIN</p>
                     * @param _uin <p>创建者 UIN</p>
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>创建时间（epoch 毫秒）</p><p>单位：毫秒</p>
                     * @return CreateTime <p>创建时间（epoch 毫秒）</p><p>单位：毫秒</p>
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间（epoch 毫秒）</p><p>单位：毫秒</p>
                     * @param _createTime <p>创建时间（epoch 毫秒）</p><p>单位：毫秒</p>
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间（epoch 毫秒）</p><p>单位：毫秒</p>
                     * @return UpdateTime <p>更新时间（epoch 毫秒）</p><p>单位：毫秒</p>
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间（epoch 毫秒）</p><p>单位：毫秒</p>
                     * @param _updateTime <p>更新时间（epoch 毫秒）</p><p>单位：毫秒</p>
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>资源配置 JSON</p>
                     * @return ResourceConfig <p>资源配置 JSON</p>
                     * 
                     */
                    std::string GetResourceConfig() const;

                    /**
                     * 设置<p>资源配置 JSON</p>
                     * @param _resourceConfig <p>资源配置 JSON</p>
                     * 
                     */
                    void SetResourceConfig(const std::string& _resourceConfig);

                    /**
                     * 判断参数 ResourceConfig 是否已赋值
                     * @return ResourceConfig 是否已赋值
                     * 
                     */
                    bool ResourceConfigHasBeenSet() const;

                    /**
                     * 获取<p>标签列表（TagKey-TagValue）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>标签列表（TagKey-TagValue）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表（TagKey-TagValue）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>标签列表（TagKey-TagValue）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * <p>MLflow 实例的 ID</p>
                     */
                    std::string m_serverId;
                    bool m_serverIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * <p>资源分区 ID</p>
                     */
                    std::string m_resourcePartitionId;
                    bool m_resourcePartitionIdHasBeenSet;

                    /**
                     * <p>资源包名</p>
                     */
                    std::string m_resourcePartitionName;
                    bool m_resourcePartitionNameHasBeenSet;

                    /**
                     * <p>资源组（逻辑队列名，可选）</p>
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * <p>集群内MLflow访问地址。用于训练作业上报 metrics</p>
                     */
                    std::string m_trackingUri;
                    bool m_trackingUriHasBeenSet;

                    /**
                     * <p>集群外访问地址（Ingress URL）</p>
                     */
                    std::string m_uiUrl;
                    bool m_uiUrlHasBeenSet;

                    /**
                     * <p>状态：CREATED / CREATING / RUNNING / FAILED / STOPPED</p><p>枚举值：</p><ul><li>CREATED： 已创建</li><li>CREATING： 创建中</li><li>RUNNING： 运行中</li><li>FAILED： 失败</li><li>STOPPED： 已停止</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>仅失败时展示错误信息</p>
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>MLflow 镜像地址</p>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>存储配置 JSON，具体结构按 storageMode 解释（cos / cfs / local）</p>
                     */
                    std::string m_storageConfig;
                    bool m_storageConfigHasBeenSet;

                    /**
                     * <p>存储模式</p><p>枚举值：</p><ul><li>cos： cos 对象存储</li><li>cfs： cfs 文件系统存储</li></ul>
                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * <p>应用 ID</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>创建者 UIN</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>创建时间（epoch 毫秒）</p><p>单位：毫秒</p>
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间（epoch 毫秒）</p><p>单位：毫秒</p>
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>资源配置 JSON</p>
                     */
                    std::string m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                    /**
                     * <p>标签列表（TagKey-TagValue）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_MLFLOWSERVERINFO_H_
