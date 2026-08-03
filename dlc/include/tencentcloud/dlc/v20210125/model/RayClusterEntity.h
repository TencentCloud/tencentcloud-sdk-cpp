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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_RAYCLUSTERENTITY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_RAYCLUSTERENTITY_H_

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
                * Ray集群实体
                */
                class RayClusterEntity : public AbstractModel
                {
                public:
                    RayClusterEntity();
                    ~RayClusterEntity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>集群ID</p>
                     * @return Id <p>集群ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _id <p>集群ID</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>资源类型：CLUSTER-普通集群；WORKSPACE-数据实验室（开发入口）</p>
                     * @return Type <p>资源类型：CLUSTER-普通集群；WORKSPACE-数据实验室（开发入口）</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>资源类型：CLUSTER-普通集群；WORKSPACE-数据实验室（开发入口）</p>
                     * @param _type <p>资源类型：CLUSTER-普通集群；WORKSPACE-数据实验室（开发入口）</p>
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
                     * 获取<p>集群名称</p>
                     * @return Name <p>集群名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>集群名称</p>
                     * @param _name <p>集群名称</p>
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
                     * 获取<p>所属资源分区ID</p>
                     * @return ResourcePartitionId <p>所属资源分区ID</p>
                     * 
                     */
                    std::string GetResourcePartitionId() const;

                    /**
                     * 设置<p>所属资源分区ID</p>
                     * @param _resourcePartitionId <p>所属资源分区ID</p>
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
                     * 获取<p>默认资源分区名称</p>
                     * @return ResourcePartitionName <p>默认资源分区名称</p>
                     * 
                     */
                    std::string GetResourcePartitionName() const;

                    /**
                     * 设置<p>默认资源分区名称</p>
                     * @param _resourcePartitionName <p>默认资源分区名称</p>
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
                     * 获取<p>所属队列名称</p>
                     * @return Queue <p>所属队列名称</p>
                     * 
                     */
                    std::string GetQueue() const;

                    /**
                     * 设置<p>所属队列名称</p>
                     * @param _queue <p>所属队列名称</p>
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
                     * 获取<p>应用ID</p>
                     * @return AppId <p>应用ID</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>应用ID</p>
                     * @param _appId <p>应用ID</p>
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
                     * 获取<p>用户UIN</p>
                     * @return Uin <p>用户UIN</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>用户UIN</p>
                     * @param _uin <p>用户UIN</p>
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
                     * 获取<p>子用户UIN</p>
                     * @return SubAccountUin <p>子用户UIN</p>
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置<p>子用户UIN</p>
                     * @param _subAccountUin <p>子用户UIN</p>
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取<p>子用户名称（由聚合层通过 CAM 接口回填）</p>
                     * @return SubAccountName <p>子用户名称（由聚合层通过 CAM 接口回填）</p>
                     * 
                     */
                    std::string GetSubAccountName() const;

                    /**
                     * 设置<p>子用户名称（由聚合层通过 CAM 接口回填）</p>
                     * @param _subAccountName <p>子用户名称（由聚合层通过 CAM 接口回填）</p>
                     * 
                     */
                    void SetSubAccountName(const std::string& _subAccountName);

                    /**
                     * 判断参数 SubAccountName 是否已赋值
                     * @return SubAccountName 是否已赋值
                     * 
                     */
                    bool SubAccountNameHasBeenSet() const;

                    /**
                     * 获取<p>集群状态</p>
                     * @return Status <p>集群状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>集群状态</p>
                     * @param _status <p>集群状态</p>
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
                     * 获取<p>状态详情/错误信息</p>
                     * @return StatusMessage <p>状态详情/错误信息</p>
                     * 
                     */
                    std::string GetStatusMessage() const;

                    /**
                     * 设置<p>状态详情/错误信息</p>
                     * @param _statusMessage <p>状态详情/错误信息</p>
                     * 
                     */
                    void SetStatusMessage(const std::string& _statusMessage);

                    /**
                     * 判断参数 StatusMessage 是否已赋值
                     * @return StatusMessage 是否已赋值
                     * 
                     */
                    bool StatusMessageHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>计算组 ID</p>
                     * @return GroupId <p>计算组 ID</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>计算组 ID</p>
                     * @param _groupId <p>计算组 ID</p>
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>所属集群组名称</p>
                     * @return GroupName <p>所属集群组名称</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>所属集群组名称</p>
                     * @param _groupName <p>所属集群组名称</p>
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取<p>资源配置(JSON)</p>
                     * @return ResourceConfig <p>资源配置(JSON)</p>
                     * 
                     */
                    std::string GetResourceConfig() const;

                    /**
                     * 设置<p>资源配置(JSON)</p>
                     * @param _resourceConfig <p>资源配置(JSON)</p>
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
                     * 获取<p>资源配置ID</p>
                     * @return ResourceConfigId <p>资源配置ID</p>
                     * 
                     */
                    std::string GetResourceConfigId() const;

                    /**
                     * 设置<p>资源配置ID</p>
                     * @param _resourceConfigId <p>资源配置ID</p>
                     * 
                     */
                    void SetResourceConfigId(const std::string& _resourceConfigId);

                    /**
                     * 判断参数 ResourceConfigId 是否已赋值
                     * @return ResourceConfigId 是否已赋值
                     * 
                     */
                    bool ResourceConfigIdHasBeenSet() const;

                    /**
                     * 获取<p>镜像地址</p>
                     * @return Image <p>镜像地址</p>
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>镜像地址</p>
                     * @param _image <p>镜像地址</p>
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
                     * 获取<p>存储卷和挂载卷配置(JSON)</p>
                     * @return Catalog <p>存储卷和挂载卷配置(JSON)</p>
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置<p>存储卷和挂载卷配置(JSON)</p>
                     * @param _catalog <p>存储卷和挂载卷配置(JSON)</p>
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取<p>Dashboard URL / 历史记录链接</p>
                     * @return HistoryUrl <p>Dashboard URL / 历史记录链接</p>
                     * 
                     */
                    std::string GetHistoryUrl() const;

                    /**
                     * 设置<p>Dashboard URL / 历史记录链接</p>
                     * @param _historyUrl <p>Dashboard URL / 历史记录链接</p>
                     * 
                     */
                    void SetHistoryUrl(const std::string& _historyUrl);

                    /**
                     * 判断参数 HistoryUrl 是否已赋值
                     * @return HistoryUrl 是否已赋值
                     * 
                     */
                    bool HistoryUrlHasBeenSet() const;

                    /**
                     * 获取<p>镜像拉取策略</p>
                     * @return ImagePullPolicy <p>镜像拉取策略</p>
                     * 
                     */
                    std::string GetImagePullPolicy() const;

                    /**
                     * 设置<p>镜像拉取策略</p>
                     * @param _imagePullPolicy <p>镜像拉取策略</p>
                     * 
                     */
                    void SetImagePullPolicy(const std::string& _imagePullPolicy);

                    /**
                     * 判断参数 ImagePullPolicy 是否已赋值
                     * @return ImagePullPolicy 是否已赋值
                     * 
                     */
                    bool ImagePullPolicyHasBeenSet() const;

                    /**
                     * 获取<p>镜像拉取类型（BuiltIn: 内置, Custom: 自定义-TCR, CustomCcr: 自定义-CCR）</p>
                     * @return ImagePullType <p>镜像拉取类型（BuiltIn: 内置, Custom: 自定义-TCR, CustomCcr: 自定义-CCR）</p>
                     * 
                     */
                    std::string GetImagePullType() const;

                    /**
                     * 设置<p>镜像拉取类型（BuiltIn: 内置, Custom: 自定义-TCR, CustomCcr: 自定义-CCR）</p>
                     * @param _imagePullType <p>镜像拉取类型（BuiltIn: 内置, Custom: 自定义-TCR, CustomCcr: 自定义-CCR）</p>
                     * 
                     */
                    void SetImagePullType(const std::string& _imagePullType);

                    /**
                     * 判断参数 ImagePullType 是否已赋值
                     * @return ImagePullType 是否已赋值
                     * 
                     */
                    bool ImagePullTypeHasBeenSet() const;

                    /**
                     * 获取<p>高级参数（规范化后的扁平 KV JSON）</p>
                     * @return AdvancedOptions <p>高级参数（规范化后的扁平 KV JSON）</p>
                     * 
                     */
                    std::string GetAdvancedOptions() const;

                    /**
                     * 设置<p>高级参数（规范化后的扁平 KV JSON）</p>
                     * @param _advancedOptions <p>高级参数（规范化后的扁平 KV JSON）</p>
                     * 
                     */
                    void SetAdvancedOptions(const std::string& _advancedOptions);

                    /**
                     * 判断参数 AdvancedOptions 是否已赋值
                     * @return AdvancedOptions 是否已赋值
                     * 
                     */
                    bool AdvancedOptionsHasBeenSet() const;

                    /**
                     * 获取<p>优先级（1-9，数字越大优先级越高）</p>
                     * @return Priority <p>优先级（1-9，数字越大优先级越高）</p>
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置<p>优先级（1-9，数字越大优先级越高）</p>
                     * @param _priority <p>优先级（1-9，数字越大优先级越高）</p>
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取<p>启动时间（最近一次启动）</p>
                     * @return StartTime <p>启动时间（最近一次启动）</p>
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置<p>启动时间（最近一次启动）</p>
                     * @param _startTime <p>启动时间（最近一次启动）</p>
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>停止时间（最近一次停止/休眠）</p>
                     * @return StopTime <p>停止时间（最近一次停止/休眠）</p>
                     * 
                     */
                    uint64_t GetStopTime() const;

                    /**
                     * 设置<p>停止时间（最近一次停止/休眠）</p>
                     * @param _stopTime <p>停止时间（最近一次停止/休眠）</p>
                     * 
                     */
                    void SetStopTime(const uint64_t& _stopTime);

                    /**
                     * 判断参数 StopTime 是否已赋值
                     * @return StopTime 是否已赋值
                     * 
                     */
                    bool StopTimeHasBeenSet() const;

                    /**
                     * 获取<p>标签列表（TagKey-TagValue）</p>
                     * @return Tags <p>标签列表（TagKey-TagValue）</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表（TagKey-TagValue）</p>
                     * @param _tags <p>标签列表（TagKey-TagValue）</p>
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
                     * <p>集群ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>资源类型：CLUSTER-普通集群；WORKSPACE-数据实验室（开发入口）</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>集群名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>所属资源分区ID</p>
                     */
                    std::string m_resourcePartitionId;
                    bool m_resourcePartitionIdHasBeenSet;

                    /**
                     * <p>默认资源分区名称</p>
                     */
                    std::string m_resourcePartitionName;
                    bool m_resourcePartitionNameHasBeenSet;

                    /**
                     * <p>所属队列名称</p>
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * <p>应用ID</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>用户UIN</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>子用户UIN</p>
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * <p>子用户名称（由聚合层通过 CAM 接口回填）</p>
                     */
                    std::string m_subAccountName;
                    bool m_subAccountNameHasBeenSet;

                    /**
                     * <p>集群状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>状态详情/错误信息</p>
                     */
                    std::string m_statusMessage;
                    bool m_statusMessageHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>计算组 ID</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>所属集群组名称</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>资源配置(JSON)</p>
                     */
                    std::string m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                    /**
                     * <p>资源配置ID</p>
                     */
                    std::string m_resourceConfigId;
                    bool m_resourceConfigIdHasBeenSet;

                    /**
                     * <p>镜像地址</p>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>存储卷和挂载卷配置(JSON)</p>
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * <p>Dashboard URL / 历史记录链接</p>
                     */
                    std::string m_historyUrl;
                    bool m_historyUrlHasBeenSet;

                    /**
                     * <p>镜像拉取策略</p>
                     */
                    std::string m_imagePullPolicy;
                    bool m_imagePullPolicyHasBeenSet;

                    /**
                     * <p>镜像拉取类型（BuiltIn: 内置, Custom: 自定义-TCR, CustomCcr: 自定义-CCR）</p>
                     */
                    std::string m_imagePullType;
                    bool m_imagePullTypeHasBeenSet;

                    /**
                     * <p>高级参数（规范化后的扁平 KV JSON）</p>
                     */
                    std::string m_advancedOptions;
                    bool m_advancedOptionsHasBeenSet;

                    /**
                     * <p>优先级（1-9，数字越大优先级越高）</p>
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>启动时间（最近一次启动）</p>
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>停止时间（最近一次停止/休眠）</p>
                     */
                    uint64_t m_stopTime;
                    bool m_stopTimeHasBeenSet;

                    /**
                     * <p>标签列表（TagKey-TagValue）</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_RAYCLUSTERENTITY_H_
