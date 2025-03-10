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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERLEVELATTRIBUTE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERLEVELATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 托管集群等级属性
                */
                class ClusterLevelAttribute : public AbstractModel
                {
                public:
                    ClusterLevelAttribute();
                    ~ClusterLevelAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群等级
                     * @return Name 集群等级
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置集群等级
                     * @param _name 集群等级
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
                     * 获取等级名称
                     * @return Alias 等级名称
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置等级名称
                     * @param _alias 等级名称
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

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
                     * 获取Pod数量
                     * @return PodCount Pod数量
                     * 
                     */
                    uint64_t GetPodCount() const;

                    /**
                     * 设置Pod数量
                     * @param _podCount Pod数量
                     * 
                     */
                    void SetPodCount(const uint64_t& _podCount);

                    /**
                     * 判断参数 PodCount 是否已赋值
                     * @return PodCount 是否已赋值
                     * 
                     */
                    bool PodCountHasBeenSet() const;

                    /**
                     * 获取Configmap数量
                     * @return ConfigMapCount Configmap数量
                     * 
                     */
                    uint64_t GetConfigMapCount() const;

                    /**
                     * 设置Configmap数量
                     * @param _configMapCount Configmap数量
                     * 
                     */
                    void SetConfigMapCount(const uint64_t& _configMapCount);

                    /**
                     * 判断参数 ConfigMapCount 是否已赋值
                     * @return ConfigMapCount 是否已赋值
                     * 
                     */
                    bool ConfigMapCountHasBeenSet() const;

                    /**
                     * 获取ReplicaSets数量
                     * @return RSCount ReplicaSets数量
                     * 
                     */
                    uint64_t GetRSCount() const;

                    /**
                     * 设置ReplicaSets数量
                     * @param _rSCount ReplicaSets数量
                     * 
                     */
                    void SetRSCount(const uint64_t& _rSCount);

                    /**
                     * 判断参数 RSCount 是否已赋值
                     * @return RSCount 是否已赋值
                     * 
                     */
                    bool RSCountHasBeenSet() const;

                    /**
                     * 获取CRD数量
                     * @return CRDCount CRD数量
                     * 
                     */
                    uint64_t GetCRDCount() const;

                    /**
                     * 设置CRD数量
                     * @param _cRDCount CRD数量
                     * 
                     */
                    void SetCRDCount(const uint64_t& _cRDCount);

                    /**
                     * 判断参数 CRDCount 是否已赋值
                     * @return CRDCount 是否已赋值
                     * 
                     */
                    bool CRDCountHasBeenSet() const;

                    /**
                     * 获取是否启用
                     * @return Enable 是否启用
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置是否启用
                     * @param _enable 是否启用
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取其他资源数量
                     * @return OtherCount 其他资源数量
                     * 
                     */
                    uint64_t GetOtherCount() const;

                    /**
                     * 设置其他资源数量
                     * @param _otherCount 其他资源数量
                     * 
                     */
                    void SetOtherCount(const uint64_t& _otherCount);

                    /**
                     * 判断参数 OtherCount 是否已赋值
                     * @return OtherCount 是否已赋值
                     * 
                     */
                    bool OtherCountHasBeenSet() const;

                private:

                    /**
                     * 集群等级
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 等级名称
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 节点数量
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * Pod数量
                     */
                    uint64_t m_podCount;
                    bool m_podCountHasBeenSet;

                    /**
                     * Configmap数量
                     */
                    uint64_t m_configMapCount;
                    bool m_configMapCountHasBeenSet;

                    /**
                     * ReplicaSets数量
                     */
                    uint64_t m_rSCount;
                    bool m_rSCountHasBeenSet;

                    /**
                     * CRD数量
                     */
                    uint64_t m_cRDCount;
                    bool m_cRDCountHasBeenSet;

                    /**
                     * 是否启用
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 其他资源数量
                     */
                    uint64_t m_otherCount;
                    bool m_otherCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERLEVELATTRIBUTE_H_
