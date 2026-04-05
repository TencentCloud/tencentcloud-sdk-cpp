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
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
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
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
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
                     * 获取调度器
                     * @return Scheduler 调度器
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置调度器
                     * @param _scheduler 调度器
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
                     * 获取VPC ID
                     * @return VPCId VPC ID
                     * 
                     */
                    std::string GetVPCId() const;

                    /**
                     * 设置VPC ID
                     * @param _vPCId VPC ID
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
                     * 获取节点数量
                     * @return NodeCount 节点数量
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置节点数量
                     * @param _nodeCount 节点数量
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
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
                     * @param _tags 标签
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取集群类型
                     * @return Type 集群类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置集群类型
                     * @param _type 集群类型
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
                     * 获取系统名称
                     * @return OsName 系统名称
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置系统名称
                     * @param _osName 系统名称
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
                     * 获取调度器版本
                     * @return SchedulerVersion 调度器版本
                     * 
                     */
                    std::string GetSchedulerVersion() const;

                    /**
                     * 设置调度器版本
                     * @param _schedulerVersion 调度器版本
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
                     * 获取集群VPC CIDR
                     * @return VPCCIDRBlock 集群VPC CIDR
                     * 
                     */
                    std::string GetVPCCIDRBlock() const;

                    /**
                     * 设置集群VPC CIDR
                     * @param _vPCCIDRBlock 集群VPC CIDR
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
                     * 获取集群确认交付截止日期
                     * @return ConfirmDeadline 集群确认交付截止日期
                     * 
                     */
                    std::string GetConfirmDeadline() const;

                    /**
                     * 设置集群确认交付截止日期
                     * @param _confirmDeadline 集群确认交付截止日期
                     * 
                     */
                    void SetConfirmDeadline(const std::string& _confirmDeadline);

                    /**
                     * 判断参数 ConfirmDeadline 是否已赋值
                     * @return ConfirmDeadline 是否已赋值
                     * 
                     */
                    bool ConfirmDeadlineHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 调度器
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vPCId;
                    bool m_vPCIdHasBeenSet;

                    /**
                     * 节点数量
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 集群类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 系统名称
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * 调度器版本
                     */
                    std::string m_schedulerVersion;
                    bool m_schedulerVersionHasBeenSet;

                    /**
                     * 集群VPC CIDR
                     */
                    std::string m_vPCCIDRBlock;
                    bool m_vPCCIDRBlockHasBeenSet;

                    /**
                     * 集群确认交付截止日期
                     */
                    std::string m_confirmDeadline;
                    bool m_confirmDeadlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_HPCCLUSTER_H_
