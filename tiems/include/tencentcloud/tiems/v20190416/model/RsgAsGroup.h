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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_RSGASGROUP_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_RSGASGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * 资源组的伸缩组
                */
                class RsgAsGroup : public AbstractModel
                {
                public:
                    RsgAsGroup();
                    ~RsgAsGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取伸缩组 ID
                     * @return Id 伸缩组 ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置伸缩组 ID
                     * @param _id 伸缩组 ID
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
                     * 获取伸缩组所在地域
                     * @return Region 伸缩组所在地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置伸缩组所在地域
                     * @param _region 伸缩组所在地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取伸缩组所在可用区
                     * @return Zone 伸缩组所在可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置伸缩组所在可用区
                     * @param _zone 伸缩组所在可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取伸缩组所在集群
                     * @return Cluster 伸缩组所在集群
                     * 
                     */
                    std::string GetCluster() const;

                    /**
                     * 设置伸缩组所在集群
                     * @param _cluster 伸缩组所在集群
                     * 
                     */
                    void SetCluster(const std::string& _cluster);

                    /**
                     * 判断参数 Cluster 是否已赋值
                     * @return Cluster 是否已赋值
                     * 
                     */
                    bool ClusterHasBeenSet() const;

                    /**
                     * 获取伸缩组所在资源组 ID
                     * @return RsgId 伸缩组所在资源组 ID
                     * 
                     */
                    std::string GetRsgId() const;

                    /**
                     * 设置伸缩组所在资源组 ID
                     * @param _rsgId 伸缩组所在资源组 ID
                     * 
                     */
                    void SetRsgId(const std::string& _rsgId);

                    /**
                     * 判断参数 RsgId 是否已赋值
                     * @return RsgId 是否已赋值
                     * 
                     */
                    bool RsgIdHasBeenSet() const;

                    /**
                     * 获取伸缩组名称
                     * @return Name 伸缩组名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置伸缩组名称
                     * @param _name 伸缩组名称
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
                     * 获取伸缩组允许的最大节点个数
                     * @return MaxSize 伸缩组允许的最大节点个数
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置伸缩组允许的最大节点个数
                     * @param _maxSize 伸缩组允许的最大节点个数
                     * 
                     */
                    void SetMaxSize(const uint64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取伸缩组允许的最小节点个数
                     * @return MinSize 伸缩组允许的最小节点个数
                     * 
                     */
                    uint64_t GetMinSize() const;

                    /**
                     * 设置伸缩组允许的最小节点个数
                     * @param _minSize 伸缩组允许的最小节点个数
                     * 
                     */
                    void SetMinSize(const uint64_t& _minSize);

                    /**
                     * 判断参数 MinSize 是否已赋值
                     * @return MinSize 是否已赋值
                     * 
                     */
                    bool MinSizeHasBeenSet() const;

                    /**
                     * 获取伸缩组创建时间
                     * @return CreateTime 伸缩组创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置伸缩组创建时间
                     * @param _createTime 伸缩组创建时间
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
                     * 获取伸缩组更新时间
                     * @return UpdateTime 伸缩组更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置伸缩组更新时间
                     * @param _updateTime 伸缩组更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取伸缩组状态
                     * @return Status 伸缩组状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置伸缩组状态
                     * @param _status 伸缩组状态
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
                     * 获取伸缩组节点类型
                     * @return InstanceType 伸缩组节点类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置伸缩组节点类型
                     * @param _instanceType 伸缩组节点类型
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取伸缩组内节点个数
                     * @return InstanceCount 伸缩组内节点个数
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置伸缩组内节点个数
                     * @param _instanceCount 伸缩组内节点个数
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取伸缩组起始节点数
                     * @return DesiredSize 伸缩组起始节点数
                     * 
                     */
                    uint64_t GetDesiredSize() const;

                    /**
                     * 设置伸缩组起始节点数
                     * @param _desiredSize 伸缩组起始节点数
                     * 
                     */
                    void SetDesiredSize(const uint64_t& _desiredSize);

                    /**
                     * 判断参数 DesiredSize 是否已赋值
                     * @return DesiredSize 是否已赋值
                     * 
                     */
                    bool DesiredSizeHasBeenSet() const;

                private:

                    /**
                     * 伸缩组 ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 伸缩组所在地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 伸缩组所在可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 伸缩组所在集群
                     */
                    std::string m_cluster;
                    bool m_clusterHasBeenSet;

                    /**
                     * 伸缩组所在资源组 ID
                     */
                    std::string m_rsgId;
                    bool m_rsgIdHasBeenSet;

                    /**
                     * 伸缩组名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 伸缩组允许的最大节点个数
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * 伸缩组允许的最小节点个数
                     */
                    uint64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * 伸缩组创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 伸缩组更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 伸缩组状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 伸缩组节点类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 伸缩组内节点个数
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 伸缩组起始节点数
                     */
                    uint64_t m_desiredSize;
                    bool m_desiredSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_RSGASGROUP_H_
