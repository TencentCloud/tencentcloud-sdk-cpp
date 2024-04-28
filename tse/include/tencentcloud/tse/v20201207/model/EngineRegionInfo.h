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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_ENGINEREGIONINFO_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_ENGINEREGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/VpcInfo.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 引擎地域配置详情
                */
                class EngineRegionInfo : public AbstractModel
                {
                public:
                    EngineRegionInfo();
                    ~EngineRegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取引擎节点所在地域
                     * @return EngineRegion 引擎节点所在地域
                     * 
                     */
                    std::string GetEngineRegion() const;

                    /**
                     * 设置引擎节点所在地域
                     * @param _engineRegion 引擎节点所在地域
                     * 
                     */
                    void SetEngineRegion(const std::string& _engineRegion);

                    /**
                     * 判断参数 EngineRegion 是否已赋值
                     * @return EngineRegion 是否已赋值
                     * 
                     */
                    bool EngineRegionHasBeenSet() const;

                    /**
                     * 获取此地域节点分配数量
                     * @return Replica 此地域节点分配数量
                     * 
                     */
                    int64_t GetReplica() const;

                    /**
                     * 设置此地域节点分配数量
                     * @param _replica 此地域节点分配数量
                     * 
                     */
                    void SetReplica(const int64_t& _replica);

                    /**
                     * 判断参数 Replica 是否已赋值
                     * @return Replica 是否已赋值
                     * 
                     */
                    bool ReplicaHasBeenSet() const;

                    /**
                     * 获取集群网络信息
                     * @return VpcInfos 集群网络信息
                     * 
                     */
                    std::vector<VpcInfo> GetVpcInfos() const;

                    /**
                     * 设置集群网络信息
                     * @param _vpcInfos 集群网络信息
                     * 
                     */
                    void SetVpcInfos(const std::vector<VpcInfo>& _vpcInfos);

                    /**
                     * 判断参数 VpcInfos 是否已赋值
                     * @return VpcInfos 是否已赋值
                     * 
                     */
                    bool VpcInfosHasBeenSet() const;

                    /**
                     * 获取Polaris: 是否为主地域
Zookeeper: 是否为Leader固定地域
                     * @return MainRegion Polaris: 是否为主地域
Zookeeper: 是否为Leader固定地域
                     * 
                     */
                    bool GetMainRegion() const;

                    /**
                     * 设置Polaris: 是否为主地域
Zookeeper: 是否为Leader固定地域
                     * @param _mainRegion Polaris: 是否为主地域
Zookeeper: 是否为Leader固定地域
                     * 
                     */
                    void SetMainRegion(const bool& _mainRegion);

                    /**
                     * 判断参数 MainRegion 是否已赋值
                     * @return MainRegion 是否已赋值
                     * 
                     */
                    bool MainRegionHasBeenSet() const;

                    /**
                     * 获取引擎规格ID
                     * @return SpecId 引擎规格ID
                     * 
                     */
                    std::string GetSpecId() const;

                    /**
                     * 设置引擎规格ID
                     * @param _specId 引擎规格ID
                     * 
                     */
                    void SetSpecId(const std::string& _specId);

                    /**
                     * 判断参数 SpecId 是否已赋值
                     * @return SpecId 是否已赋值
                     * 
                     */
                    bool SpecIdHasBeenSet() const;

                private:

                    /**
                     * 引擎节点所在地域
                     */
                    std::string m_engineRegion;
                    bool m_engineRegionHasBeenSet;

                    /**
                     * 此地域节点分配数量
                     */
                    int64_t m_replica;
                    bool m_replicaHasBeenSet;

                    /**
                     * 集群网络信息
                     */
                    std::vector<VpcInfo> m_vpcInfos;
                    bool m_vpcInfosHasBeenSet;

                    /**
                     * Polaris: 是否为主地域
Zookeeper: 是否为Leader固定地域
                     */
                    bool m_mainRegion;
                    bool m_mainRegionHasBeenSet;

                    /**
                     * 引擎规格ID
                     */
                    std::string m_specId;
                    bool m_specIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_ENGINEREGIONINFO_H_
