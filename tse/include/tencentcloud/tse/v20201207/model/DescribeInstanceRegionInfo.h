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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEINSTANCEREGIONINFO_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEINSTANCEREGIONINFO_H_

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
                * 实例地域信息描述
                */
                class DescribeInstanceRegionInfo : public AbstractModel
                {
                public:
                    DescribeInstanceRegionInfo();
                    ~DescribeInstanceRegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取引擎部署地域信息
                     * @return EngineRegion 引擎部署地域信息
                     * 
                     */
                    std::string GetEngineRegion() const;

                    /**
                     * 设置引擎部署地域信息
                     * @param _engineRegion 引擎部署地域信息
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
                     * 获取引擎在该地域的副本数
                     * @return Replica 引擎在该地域的副本数
                     * 
                     */
                    int64_t GetReplica() const;

                    /**
                     * 设置引擎在该地域的副本数
                     * @param _replica 引擎在该地域的副本数
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
                     * 获取引擎在该地域的规格id
                     * @return SpecId 引擎在该地域的规格id
                     * 
                     */
                    std::string GetSpecId() const;

                    /**
                     * 设置引擎在该地域的规格id
                     * @param _specId 引擎在该地域的规格id
                     * 
                     */
                    void SetSpecId(const std::string& _specId);

                    /**
                     * 判断参数 SpecId 是否已赋值
                     * @return SpecId 是否已赋值
                     * 
                     */
                    bool SpecIdHasBeenSet() const;

                    /**
                     * 获取客户端内网的网络信息
                     * @return IntranetVpcInfos 客户端内网的网络信息
                     * 
                     */
                    std::vector<VpcInfo> GetIntranetVpcInfos() const;

                    /**
                     * 设置客户端内网的网络信息
                     * @param _intranetVpcInfos 客户端内网的网络信息
                     * 
                     */
                    void SetIntranetVpcInfos(const std::vector<VpcInfo>& _intranetVpcInfos);

                    /**
                     * 判断参数 IntranetVpcInfos 是否已赋值
                     * @return IntranetVpcInfos 是否已赋值
                     * 
                     */
                    bool IntranetVpcInfosHasBeenSet() const;

                    /**
                     * 获取控制台内网的网络信息
                     * @return ConsoleIntranetVpcInfos 控制台内网的网络信息
                     * 
                     */
                    std::vector<VpcInfo> GetConsoleIntranetVpcInfos() const;

                    /**
                     * 设置控制台内网的网络信息
                     * @param _consoleIntranetVpcInfos 控制台内网的网络信息
                     * 
                     */
                    void SetConsoleIntranetVpcInfos(const std::vector<VpcInfo>& _consoleIntranetVpcInfos);

                    /**
                     * 判断参数 ConsoleIntranetVpcInfos 是否已赋值
                     * @return ConsoleIntranetVpcInfos 是否已赋值
                     * 
                     */
                    bool ConsoleIntranetVpcInfosHasBeenSet() const;

                    /**
                     * 获取是否开公网
                     * @return EnableClientInternet 是否开公网
                     * 
                     */
                    bool GetEnableClientInternet() const;

                    /**
                     * 设置是否开公网
                     * @param _enableClientInternet 是否开公网
                     * 
                     */
                    void SetEnableClientInternet(const bool& _enableClientInternet);

                    /**
                     * 判断参数 EnableClientInternet 是否已赋值
                     * @return EnableClientInternet 是否已赋值
                     * 
                     */
                    bool EnableClientInternetHasBeenSet() const;

                    /**
                     * 获取限流客户端内网的网络信息
                     * @return LimiterIntranetVpcInfos 限流客户端内网的网络信息
                     * 
                     */
                    std::vector<VpcInfo> GetLimiterIntranetVpcInfos() const;

                    /**
                     * 设置限流客户端内网的网络信息
                     * @param _limiterIntranetVpcInfos 限流客户端内网的网络信息
                     * 
                     */
                    void SetLimiterIntranetVpcInfos(const std::vector<VpcInfo>& _limiterIntranetVpcInfos);

                    /**
                     * 判断参数 LimiterIntranetVpcInfos 是否已赋值
                     * @return LimiterIntranetVpcInfos 是否已赋值
                     * 
                     */
                    bool LimiterIntranetVpcInfosHasBeenSet() const;

                    /**
                     * 获取是否为主地域，仅在服务治理中心多地域有效
                     * @return MainRegion 是否为主地域，仅在服务治理中心多地域有效
                     * 
                     */
                    bool GetMainRegion() const;

                    /**
                     * 设置是否为主地域，仅在服务治理中心多地域有效
                     * @param _mainRegion 是否为主地域，仅在服务治理中心多地域有效
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
                     * 获取该地域所在的EKS集群
                     * @return EKSClusterID 该地域所在的EKS集群
                     * 
                     */
                    std::string GetEKSClusterID() const;

                    /**
                     * 设置该地域所在的EKS集群
                     * @param _eKSClusterID 该地域所在的EKS集群
                     * 
                     */
                    void SetEKSClusterID(const std::string& _eKSClusterID);

                    /**
                     * 判断参数 EKSClusterID 是否已赋值
                     * @return EKSClusterID 是否已赋值
                     * 
                     */
                    bool EKSClusterIDHasBeenSet() const;

                private:

                    /**
                     * 引擎部署地域信息
                     */
                    std::string m_engineRegion;
                    bool m_engineRegionHasBeenSet;

                    /**
                     * 引擎在该地域的副本数
                     */
                    int64_t m_replica;
                    bool m_replicaHasBeenSet;

                    /**
                     * 引擎在该地域的规格id
                     */
                    std::string m_specId;
                    bool m_specIdHasBeenSet;

                    /**
                     * 客户端内网的网络信息
                     */
                    std::vector<VpcInfo> m_intranetVpcInfos;
                    bool m_intranetVpcInfosHasBeenSet;

                    /**
                     * 控制台内网的网络信息
                     */
                    std::vector<VpcInfo> m_consoleIntranetVpcInfos;
                    bool m_consoleIntranetVpcInfosHasBeenSet;

                    /**
                     * 是否开公网
                     */
                    bool m_enableClientInternet;
                    bool m_enableClientInternetHasBeenSet;

                    /**
                     * 限流客户端内网的网络信息
                     */
                    std::vector<VpcInfo> m_limiterIntranetVpcInfos;
                    bool m_limiterIntranetVpcInfosHasBeenSet;

                    /**
                     * 是否为主地域，仅在服务治理中心多地域有效
                     */
                    bool m_mainRegion;
                    bool m_mainRegionHasBeenSet;

                    /**
                     * 该地域所在的EKS集群
                     */
                    std::string m_eKSClusterID;
                    bool m_eKSClusterIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEINSTANCEREGIONINFO_H_
