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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_HPCCLUSTER_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_HPCCLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/Tag.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * HPC集群
                */
                class HPCCluster : public AbstractModel
                {
                public:
                    HPCCluster();
                    ~HPCCluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
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
                     * 获取<p>名称</p>
                     * @return Name <p>名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称</p>
                     * @param _name <p>名称</p>
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
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>状态</p>
                     * @return Status <p>状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态</p>
                     * @param _status <p>状态</p>
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
                     * 获取<p>调度器</p>
                     * @return Scheduler <p>调度器</p>
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置<p>调度器</p>
                     * @param _scheduler <p>调度器</p>
                     * 
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     * 
                     */
                    bool SchedulerHasBeenSet() const;

                    /**
                     * 获取<p>VPC ID</p>
                     * @return VPCId <p>VPC ID</p>
                     * 
                     */
                    std::string GetVPCId() const;

                    /**
                     * 设置<p>VPC ID</p>
                     * @param _vPCId <p>VPC ID</p>
                     * 
                     */
                    void SetVPCId(const std::string& _vPCId);

                    /**
                     * 判断参数 VPCId 是否已赋值
                     * @return VPCId 是否已赋值
                     * 
                     */
                    bool VPCIdHasBeenSet() const;

                    /**
                     * 获取<p>节点数量</p>
                     * @return NodeCount <p>节点数量</p>
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置<p>节点数量</p>
                     * @param _nodeCount <p>节点数量</p>
                     * 
                     */
                    void SetNodeCount(const uint64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
                     * @return Tags <p>标签</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tags <p>标签</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>集群类型</p>
                     * @return Type <p>集群类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>集群类型</p>
                     * @param _type <p>集群类型</p>
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
                     * 获取<p>系统名称</p>
                     * @return OsName <p>系统名称</p>
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置<p>系统名称</p>
                     * @param _osName <p>系统名称</p>
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取<p>调度器版本</p>
                     * @return SchedulerVersion <p>调度器版本</p>
                     * 
                     */
                    std::string GetSchedulerVersion() const;

                    /**
                     * 设置<p>调度器版本</p>
                     * @param _schedulerVersion <p>调度器版本</p>
                     * 
                     */
                    void SetSchedulerVersion(const std::string& _schedulerVersion);

                    /**
                     * 判断参数 SchedulerVersion 是否已赋值
                     * @return SchedulerVersion 是否已赋值
                     * 
                     */
                    bool SchedulerVersionHasBeenSet() const;

                    /**
                     * 获取<p>集群VPC CIDR</p>
                     * @return VPCCIDRBlock <p>集群VPC CIDR</p>
                     * 
                     */
                    std::string GetVPCCIDRBlock() const;

                    /**
                     * 设置<p>集群VPC CIDR</p>
                     * @param _vPCCIDRBlock <p>集群VPC CIDR</p>
                     * 
                     */
                    void SetVPCCIDRBlock(const std::string& _vPCCIDRBlock);

                    /**
                     * 判断参数 VPCCIDRBlock 是否已赋值
                     * @return VPCCIDRBlock 是否已赋值
                     * 
                     */
                    bool VPCCIDRBlockHasBeenSet() const;

                    /**
                     * 获取<p>集群确认交付截止日期</p>
                     * @return ConfirmDeadline <p>集群确认交付截止日期</p>
                     * 
                     */
                    std::string GetConfirmDeadline() const;

                    /**
                     * 设置<p>集群确认交付截止日期</p>
                     * @param _confirmDeadline <p>集群确认交付截止日期</p>
                     * 
                     */
                    void SetConfirmDeadline(const std::string& _confirmDeadline);

                    /**
                     * 判断参数 ConfirmDeadline 是否已赋值
                     * @return ConfirmDeadline 是否已赋值
                     * 
                     */
                    bool ConfirmDeadlineHasBeenSet() const;

                    /**
                     * 获取<p>状态原因</p>
                     * @return StatusReason <p>状态原因</p>
                     * 
                     */
                    std::string GetStatusReason() const;

                    /**
                     * 设置<p>状态原因</p>
                     * @param _statusReason <p>状态原因</p>
                     * 
                     */
                    void SetStatusReason(const std::string& _statusReason);

                    /**
                     * 判断参数 StatusReason 是否已赋值
                     * @return StatusReason 是否已赋值
                     * 
                     */
                    bool StatusReasonHasBeenSet() const;

                    /**
                     * 获取<p>隔离时间</p>
                     * @return IsolateTime <p>隔离时间</p>
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置<p>隔离时间</p>
                     * @param _isolateTime <p>隔离时间</p>
                     * 
                     */
                    void SetIsolateTime(const std::string& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     * 
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取<p>消息</p>
                     * @return Message <p>消息</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>消息</p>
                     * @param _message <p>消息</p>
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>调度器</p>
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * <p>VPC ID</p>
                     */
                    std::string m_vPCId;
                    bool m_vPCIdHasBeenSet;

                    /**
                     * <p>节点数量</p>
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>集群类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>系统名称</p>
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * <p>调度器版本</p>
                     */
                    std::string m_schedulerVersion;
                    bool m_schedulerVersionHasBeenSet;

                    /**
                     * <p>集群VPC CIDR</p>
                     */
                    std::string m_vPCCIDRBlock;
                    bool m_vPCCIDRBlockHasBeenSet;

                    /**
                     * <p>集群确认交付截止日期</p>
                     */
                    std::string m_confirmDeadline;
                    bool m_confirmDeadlineHasBeenSet;

                    /**
                     * <p>状态原因</p>
                     */
                    std::string m_statusReason;
                    bool m_statusReasonHasBeenSet;

                    /**
                     * <p>隔离时间</p>
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * <p>消息</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_HPCCLUSTER_H_
