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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ROLEINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ROLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/KeyValue.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 告警数据攻击者或受害者信息
                */
                class RoleInfo : public AbstractModel
                {
                public:
                    RoleInfo();
                    ~RoleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP
                     * @return IP IP
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置IP
                     * @param _iP IP
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取HostIP
                     * @return HostIP HostIP
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置HostIP
                     * @param _hostIP HostIP
                     * 
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     * 
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取原始IP
                     * @return OriginIP 原始IP
                     * 
                     */
                    std::string GetOriginIP() const;

                    /**
                     * 设置原始IP
                     * @param _originIP 原始IP
                     * 
                     */
                    void SetOriginIP(const std::string& _originIP);

                    /**
                     * 判断参数 OriginIP 是否已赋值
                     * @return OriginIP 是否已赋值
                     * 
                     */
                    bool OriginIPHasBeenSet() const;

                    /**
                     * 获取端口
                     * @return Port 端口
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置端口
                     * @param _port 端口
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取资产ID
                     * @return InstanceID 资产ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置资产ID
                     * @param _instanceID 资产ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取城市
                     * @return City 城市
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置城市
                     * @param _city 城市
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取省份
                     * @return Province 省份
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置省份
                     * @param _province 省份
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取国家
                     * @return Country 国家
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置国家
                     * @param _country 国家
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取地址
                     * @return Address 地址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置地址
                     * @param _address 地址
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取纬度
                     * @return Latitude 纬度
                     * 
                     */
                    std::string GetLatitude() const;

                    /**
                     * 设置纬度
                     * @param _latitude 纬度
                     * 
                     */
                    void SetLatitude(const std::string& _latitude);

                    /**
                     * 判断参数 Latitude 是否已赋值
                     * @return Latitude 是否已赋值
                     * 
                     */
                    bool LatitudeHasBeenSet() const;

                    /**
                     * 获取经度
                     * @return Longitude 经度
                     * 
                     */
                    std::string GetLongitude() const;

                    /**
                     * 设置经度
                     * @param _longitude 经度
                     * 
                     */
                    void SetLongitude(const std::string& _longitude);

                    /**
                     * 判断参数 Longitude 是否已赋值
                     * @return Longitude 是否已赋值
                     * 
                     */
                    bool LongitudeHasBeenSet() const;

                    /**
                     * 获取信息
                     * @return Info 信息
                     * 
                     */
                    std::string GetInfo() const;

                    /**
                     * 设置信息
                     * @param _info 信息
                     * 
                     */
                    void SetInfo(const std::string& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取企业名称
                     * @return Name 企业名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置企业名称
                     * @param _name 企业名称
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
                     * 获取账号
                     * @return Account 账号
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置账号
                     * @param _account 账号
                     * 
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取家族团伙
                     * @return Family 家族团伙
                     * 
                     */
                    std::string GetFamily() const;

                    /**
                     * 设置家族团伙
                     * @param _family 家族团伙
                     * 
                     */
                    void SetFamily(const std::string& _family);

                    /**
                     * 判断参数 Family 是否已赋值
                     * @return Family 是否已赋值
                     * 
                     */
                    bool FamilyHasBeenSet() const;

                    /**
                     * 获取病毒名
                     * @return VirusName 病毒名
                     * 
                     */
                    std::string GetVirusName() const;

                    /**
                     * 设置病毒名
                     * @param _virusName 病毒名
                     * 
                     */
                    void SetVirusName(const std::string& _virusName);

                    /**
                     * 判断参数 VirusName 是否已赋值
                     * @return VirusName 是否已赋值
                     * 
                     */
                    bool VirusNameHasBeenSet() const;

                    /**
                     * 获取MD5值
                     * @return MD5 MD5值
                     * 
                     */
                    std::string GetMD5() const;

                    /**
                     * 设置MD5值
                     * @param _mD5 MD5值
                     * 
                     */
                    void SetMD5(const std::string& _mD5);

                    /**
                     * 判断参数 MD5 是否已赋值
                     * @return MD5 是否已赋值
                     * 
                     */
                    bool MD5HasBeenSet() const;

                    /**
                     * 获取恶意进程文件名
                     * @return FileName 恶意进程文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置恶意进程文件名
                     * @param _fileName 恶意进程文件名
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取1:主机资产 2:域名资产 3:网络资产
                     * @return AssetType 1:主机资产 2:域名资产 3:网络资产
                     * 
                     */
                    int64_t GetAssetType() const;

                    /**
                     * 设置1:主机资产 2:域名资产 3:网络资产
                     * @param _assetType 1:主机资产 2:域名资产 3:网络资产
                     * 
                     */
                    void SetAssetType(const int64_t& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取来源日志分析的信息字段
                     * @return FromLogAnalysisData 来源日志分析的信息字段
                     * 
                     */
                    std::vector<KeyValue> GetFromLogAnalysisData() const;

                    /**
                     * 设置来源日志分析的信息字段
                     * @param _fromLogAnalysisData 来源日志分析的信息字段
                     * 
                     */
                    void SetFromLogAnalysisData(const std::vector<KeyValue>& _fromLogAnalysisData);

                    /**
                     * 判断参数 FromLogAnalysisData 是否已赋值
                     * @return FromLogAnalysisData 是否已赋值
                     * 
                     */
                    bool FromLogAnalysisDataHasBeenSet() const;

                    /**
                     * 获取容器名
                     * @return ContainerName 容器名
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置容器名
                     * @param _containerName 容器名
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取容器ID
                     * @return ContainerID 容器ID
                     * 
                     */
                    std::string GetContainerID() const;

                    /**
                     * 设置容器ID
                     * @param _containerID 容器ID
                     * 
                     */
                    void SetContainerID(const std::string& _containerID);

                    /**
                     * 判断参数 ContainerID 是否已赋值
                     * @return ContainerID 是否已赋值
                     * 
                     */
                    bool ContainerIDHasBeenSet() const;

                private:

                    /**
                     * IP
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * HostIP
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * 原始IP
                     */
                    std::string m_originIP;
                    bool m_originIPHasBeenSet;

                    /**
                     * 端口
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 资产ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 城市
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 省份
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 国家
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 纬度
                     */
                    std::string m_latitude;
                    bool m_latitudeHasBeenSet;

                    /**
                     * 经度
                     */
                    std::string m_longitude;
                    bool m_longitudeHasBeenSet;

                    /**
                     * 信息
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 企业名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 账号
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * 家族团伙
                     */
                    std::string m_family;
                    bool m_familyHasBeenSet;

                    /**
                     * 病毒名
                     */
                    std::string m_virusName;
                    bool m_virusNameHasBeenSet;

                    /**
                     * MD5值
                     */
                    std::string m_mD5;
                    bool m_mD5HasBeenSet;

                    /**
                     * 恶意进程文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 1:主机资产 2:域名资产 3:网络资产
                     */
                    int64_t m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 来源日志分析的信息字段
                     */
                    std::vector<KeyValue> m_fromLogAnalysisData;
                    bool m_fromLogAnalysisDataHasBeenSet;

                    /**
                     * 容器名
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * 容器ID
                     */
                    std::string m_containerID;
                    bool m_containerIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ROLEINFO_H_
