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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_INSTANCEBASICINFO_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_INSTANCEBASICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/RedisInstanceConf.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 实例基础信息。
                */
                class InstanceBasicInfo : public AbstractModel
                {
                public:
                    InstanceBasicInfo();
                    ~InstanceBasicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
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
                     * 获取实例名称。
                     * @return InstanceName 实例名称。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称。
                     * @param _instanceName 实例名称。
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
                     * 获取实例内网IP。
                     * @return Vip 实例内网IP。
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置实例内网IP。
                     * @param _vip 实例内网IP。
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取实例内网Port。
                     * @return Vport 实例内网Port。
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置实例内网Port。
                     * @param _vport 实例内网Port。
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取实例产品。
                     * @return Product 实例产品。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置实例产品。
                     * @param _product 实例产品。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取实例引擎版本。
                     * @return EngineVersion 实例引擎版本。
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置实例引擎版本。
                     * @param _engineVersion 实例引擎版本。
                     * 
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取CPU数量，对于Redis为0。
                     * @return Cpu CPU数量，对于Redis为0。
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置CPU数量，对于Redis为0。
                     * @param _cpu CPU数量，对于Redis为0。
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取实例部署模式。
                     * @return DeployMode 实例部署模式。
                     * 
                     */
                    std::string GetDeployMode() const;

                    /**
                     * 设置实例部署模式。
                     * @param _deployMode 实例部署模式。
                     * 
                     */
                    void SetDeployMode(const std::string& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     * 
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取实例内存配置。
                     * @return InstanceConf 实例内存配置。
                     * 
                     */
                    RedisInstanceConf GetInstanceConf() const;

                    /**
                     * 设置实例内存配置。
                     * @param _instanceConf 实例内存配置。
                     * 
                     */
                    void SetInstanceConf(const RedisInstanceConf& _instanceConf);

                    /**
                     * 判断参数 InstanceConf 是否已赋值
                     * @return InstanceConf 是否已赋值
                     * 
                     */
                    bool InstanceConfHasBeenSet() const;

                    /**
                     * 获取DBbrain是否支持该实例。
                     * @return IsSupported DBbrain是否支持该实例。
                     * 
                     */
                    bool GetIsSupported() const;

                    /**
                     * 设置DBbrain是否支持该实例。
                     * @param _isSupported DBbrain是否支持该实例。
                     * 
                     */
                    void SetIsSupported(const bool& _isSupported);

                    /**
                     * 判断参数 IsSupported 是否已赋值
                     * @return IsSupported 是否已赋值
                     * 
                     */
                    bool IsSupportedHasBeenSet() const;

                    /**
                     * 获取实例内存，单位MB。
                     * @return Memory 实例内存，单位MB。
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置实例内存，单位MB。
                     * @param _memory 实例内存，单位MB。
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取实例地域。
                     * @return Region 实例地域。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置实例地域。
                     * @param _region 实例地域。
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
                     * 获取实例子网统一ID，对于redis为空字符串。
                     * @return UniqSubnetId 实例子网统一ID，对于redis为空字符串。
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置实例子网统一ID，对于redis为空字符串。
                     * @param _uniqSubnetId 实例子网统一ID，对于redis为空字符串。
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取实例私有网络统一ID，对于redis为空字符串。
                     * @return UniqVpcId 实例私有网络统一ID，对于redis为空字符串。
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置实例私有网络统一ID，对于redis为空字符串。
                     * @param _uniqVpcId 实例私有网络统一ID，对于redis为空字符串。
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取实例磁盘容量，对于Redis为0。
                     * @return Volume 实例磁盘容量，对于Redis为0。
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置实例磁盘容量，对于Redis为0。
                     * @param _volume 实例磁盘容量，对于Redis为0。
                     * 
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例内网IP。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 实例内网Port。
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 实例产品。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 实例引擎版本。
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * CPU数量，对于Redis为0。
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 实例部署模式。
                     */
                    std::string m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * 实例内存配置。
                     */
                    RedisInstanceConf m_instanceConf;
                    bool m_instanceConfHasBeenSet;

                    /**
                     * DBbrain是否支持该实例。
                     */
                    bool m_isSupported;
                    bool m_isSupportedHasBeenSet;

                    /**
                     * 实例内存，单位MB。
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例地域。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 实例子网统一ID，对于redis为空字符串。
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * 实例私有网络统一ID，对于redis为空字符串。
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 实例磁盘容量，对于Redis为0。
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_INSTANCEBASICINFO_H_
