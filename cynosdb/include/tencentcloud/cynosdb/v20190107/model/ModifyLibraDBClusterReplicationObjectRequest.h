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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBCLUSTERREPLICATIONOBJECTREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBCLUSTERREPLICATIONOBJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ReplicationObject.h>
#include <tencentcloud/cynosdb/v20190107/model/AutoMapRule.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyLibraDBClusterReplicationObject请求参数结构体
                */
                class ModifyLibraDBClusterReplicationObjectRequest : public AbstractModel
                {
                public:
                    ModifyLibraDBClusterReplicationObjectRequest();
                    ~ModifyLibraDBClusterReplicationObjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分析集群ID
                     * @return ClusterId 分析集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置分析集群ID
                     * @param _clusterId 分析集群ID
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
                     * 获取只读分析引擎实例 ID
                     * @return InstanceId 只读分析引擎实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置只读分析引擎实例 ID
                     * @param _instanceId 只读分析引擎实例 ID
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
                     * 获取映射模式
                     * @return ForceDefaultMapRule 映射模式
                     * 
                     */
                    std::string GetForceDefaultMapRule() const;

                    /**
                     * 设置映射模式
                     * @param _forceDefaultMapRule 映射模式
                     * 
                     */
                    void SetForceDefaultMapRule(const std::string& _forceDefaultMapRule);

                    /**
                     * 判断参数 ForceDefaultMapRule 是否已赋值
                     * @return ForceDefaultMapRule 是否已赋值
                     * 
                     */
                    bool ForceDefaultMapRuleHasBeenSet() const;

                    /**
                     * 获取同步对象
                     * @return Objects 同步对象
                     * 
                     */
                    std::vector<ReplicationObject> GetObjects() const;

                    /**
                     * 设置同步对象
                     * @param _objects 同步对象
                     * 
                     */
                    void SetObjects(const std::vector<ReplicationObject>& _objects);

                    /**
                     * 判断参数 Objects 是否已赋值
                     * @return Objects 是否已赋值
                     * 
                     */
                    bool ObjectsHasBeenSet() const;

                    /**
                     * 获取自动映射规则
                     * @return AutoMapRules 自动映射规则
                     * 
                     */
                    std::vector<AutoMapRule> GetAutoMapRules() const;

                    /**
                     * 设置自动映射规则
                     * @param _autoMapRules 自动映射规则
                     * 
                     */
                    void SetAutoMapRules(const std::vector<AutoMapRule>& _autoMapRules);

                    /**
                     * 判断参数 AutoMapRules 是否已赋值
                     * @return AutoMapRules 是否已赋值
                     * 
                     */
                    bool AutoMapRulesHasBeenSet() const;

                    /**
                     * 获取是否按照最新映射规则刷新存量映射关系
                     * @return RefreshMapping 是否按照最新映射规则刷新存量映射关系
                     * 
                     */
                    bool GetRefreshMapping() const;

                    /**
                     * 设置是否按照最新映射规则刷新存量映射关系
                     * @param _refreshMapping 是否按照最新映射规则刷新存量映射关系
                     * 
                     */
                    void SetRefreshMapping(const bool& _refreshMapping);

                    /**
                     * 判断参数 RefreshMapping 是否已赋值
                     * @return RefreshMapping 是否已赋值
                     * 
                     */
                    bool RefreshMappingHasBeenSet() const;

                private:

                    /**
                     * 分析集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 只读分析引擎实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 映射模式
                     */
                    std::string m_forceDefaultMapRule;
                    bool m_forceDefaultMapRuleHasBeenSet;

                    /**
                     * 同步对象
                     */
                    std::vector<ReplicationObject> m_objects;
                    bool m_objectsHasBeenSet;

                    /**
                     * 自动映射规则
                     */
                    std::vector<AutoMapRule> m_autoMapRules;
                    bool m_autoMapRulesHasBeenSet;

                    /**
                     * 是否按照最新映射规则刷新存量映射关系
                     */
                    bool m_refreshMapping;
                    bool m_refreshMappingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBCLUSTERREPLICATIONOBJECTREQUEST_H_
