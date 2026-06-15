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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_EXCLUSIVEINSTANCE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_EXCLUSIVEINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 独占实例
                */
                class ExclusiveInstance : public AbstractModel
                {
                public:
                    ExclusiveInstance();
                    ~ExclusiveInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>配置中心类型[注册中心Registration、配置中心Configuration]</p>
                     * @return CenterType <p>配置中心类型[注册中心Registration、配置中心Configuration]</p>
                     * 
                     */
                    std::string GetCenterType() const;

                    /**
                     * 设置<p>配置中心类型[注册中心Registration、配置中心Configuration]</p>
                     * @param _centerType <p>配置中心类型[注册中心Registration、配置中心Configuration]</p>
                     * 
                     */
                    void SetCenterType(const std::string& _centerType);

                    /**
                     * 判断参数 CenterType 是否已赋值
                     * @return CenterType 是否已赋值
                     * 
                     */
                    bool CenterTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例id，通过<a href="https://console.cloud.tencent.com/tse/governance">北极星控制台</a>获取</p>
                     * @return InstanceId <p>实例id，通过<a href="https://console.cloud.tencent.com/tse/governance">北极星控制台</a>获取</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例id，通过<a href="https://console.cloud.tencent.com/tse/governance">北极星控制台</a>获取</p>
                     * @param _instanceId <p>实例id，通过<a href="https://console.cloud.tencent.com/tse/governance">北极星控制台</a>获取</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>实例类型，例如北极星Polaris</p>
                     * @return InstanceType <p>实例类型，例如北极星Polaris</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例类型，例如北极星Polaris</p>
                     * @param _instanceType <p>实例类型，例如北极星Polaris</p>
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
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>实例地域id，通过<a href="https://console.cloud.tencent.com/tse/governance">北极星控制台</a>获取</p>
                     * @return RegionId <p>实例地域id，通过<a href="https://console.cloud.tencent.com/tse/governance">北极星控制台</a>获取</p>
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置<p>实例地域id，通过<a href="https://console.cloud.tencent.com/tse/governance">北极星控制台</a>获取</p>
                     * @param _regionId <p>实例地域id，通过<a href="https://console.cloud.tencent.com/tse/governance">北极星控制台</a>获取</p>
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取<p>实例命名空间ID，通过<a href="https://console.cloud.tencent.com/tse/governance">北极星控制台</a>获取</p>
                     * @return InstanceNamespaceId <p>实例命名空间ID，通过<a href="https://console.cloud.tencent.com/tse/governance">北极星控制台</a>获取</p>
                     * 
                     */
                    std::string GetInstanceNamespaceId() const;

                    /**
                     * 设置<p>实例命名空间ID，通过<a href="https://console.cloud.tencent.com/tse/governance">北极星控制台</a>获取</p>
                     * @param _instanceNamespaceId <p>实例命名空间ID，通过<a href="https://console.cloud.tencent.com/tse/governance">北极星控制台</a>获取</p>
                     * 
                     */
                    void SetInstanceNamespaceId(const std::string& _instanceNamespaceId);

                    /**
                     * 判断参数 InstanceNamespaceId 是否已赋值
                     * @return InstanceNamespaceId 是否已赋值
                     * 
                     */
                    bool InstanceNamespaceIdHasBeenSet() const;

                    /**
                     * 获取<p>部署组Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId <p>部署组Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>部署组Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupId <p>部署组Id</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>文档ID</p>
                     * @return ApplicationId <p>文档ID</p>
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置<p>文档ID</p>
                     * @param _applicationId <p>文档ID</p>
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                private:

                    /**
                     * <p>配置中心类型[注册中心Registration、配置中心Configuration]</p>
                     */
                    std::string m_centerType;
                    bool m_centerTypeHasBeenSet;

                    /**
                     * <p>实例id，通过<a href="https://console.cloud.tencent.com/tse/governance">北极星控制台</a>获取</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例类型，例如北极星Polaris</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>实例地域id，通过<a href="https://console.cloud.tencent.com/tse/governance">北极星控制台</a>获取</p>
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>实例命名空间ID，通过<a href="https://console.cloud.tencent.com/tse/governance">北极星控制台</a>获取</p>
                     */
                    std::string m_instanceNamespaceId;
                    bool m_instanceNamespaceIdHasBeenSet;

                    /**
                     * <p>部署组Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>文档ID</p>
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_EXCLUSIVEINSTANCE_H_
