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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CREATEINSTANCENEWREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CREATEINSTANCENEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/CreateInstanceSpec.h>
#include <tencentcloud/cdwdoris/v20211228/model/ChargeProperties.h>
#include <tencentcloud/cdwdoris/v20211228/model/Tag.h>
#include <tencentcloud/cdwdoris/v20211228/model/NetworkInfo.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * CreateInstanceNew请求参数结构体
                */
                class CreateInstanceNewRequest : public AbstractModel
                {
                public:
                    CreateInstanceNewRequest();
                    ~CreateInstanceNewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
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
                     * 获取FE规格
                     * @return FeSpec FE规格
                     * 
                     */
                    CreateInstanceSpec GetFeSpec() const;

                    /**
                     * 设置FE规格
                     * @param _feSpec FE规格
                     * 
                     */
                    void SetFeSpec(const CreateInstanceSpec& _feSpec);

                    /**
                     * 判断参数 FeSpec 是否已赋值
                     * @return FeSpec 是否已赋值
                     * 
                     */
                    bool FeSpecHasBeenSet() const;

                    /**
                     * 获取BE规格
                     * @return BeSpec BE规格
                     * 
                     */
                    CreateInstanceSpec GetBeSpec() const;

                    /**
                     * 设置BE规格
                     * @param _beSpec BE规格
                     * 
                     */
                    void SetBeSpec(const CreateInstanceSpec& _beSpec);

                    /**
                     * 判断参数 BeSpec 是否已赋值
                     * @return BeSpec 是否已赋值
                     * 
                     */
                    bool BeSpecHasBeenSet() const;

                    /**
                     * 获取是否高可用
                     * @return HaFlag 是否高可用
                     * 
                     */
                    bool GetHaFlag() const;

                    /**
                     * 设置是否高可用
                     * @param _haFlag 是否高可用
                     * 
                     */
                    void SetHaFlag(const bool& _haFlag);

                    /**
                     * 判断参数 HaFlag 是否已赋值
                     * @return HaFlag 是否已赋值
                     * 
                     */
                    bool HaFlagHasBeenSet() const;

                    /**
                     * 获取用户VPCID
                     * @return UserVPCId 用户VPCID
                     * 
                     */
                    std::string GetUserVPCId() const;

                    /**
                     * 设置用户VPCID
                     * @param _userVPCId 用户VPCID
                     * 
                     */
                    void SetUserVPCId(const std::string& _userVPCId);

                    /**
                     * 判断参数 UserVPCId 是否已赋值
                     * @return UserVPCId 是否已赋值
                     * 
                     */
                    bool UserVPCIdHasBeenSet() const;

                    /**
                     * 获取用户子网ID
                     * @return UserSubnetId 用户子网ID
                     * 
                     */
                    std::string GetUserSubnetId() const;

                    /**
                     * 设置用户子网ID
                     * @param _userSubnetId 用户子网ID
                     * 
                     */
                    void SetUserSubnetId(const std::string& _userSubnetId);

                    /**
                     * 判断参数 UserSubnetId 是否已赋值
                     * @return UserSubnetId 是否已赋值
                     * 
                     */
                    bool UserSubnetIdHasBeenSet() const;

                    /**
                     * 获取产品版本号
                     * @return ProductVersion 产品版本号
                     * 
                     */
                    std::string GetProductVersion() const;

                    /**
                     * 设置产品版本号
                     * @param _productVersion 产品版本号
                     * 
                     */
                    void SetProductVersion(const std::string& _productVersion);

                    /**
                     * 判断参数 ProductVersion 是否已赋值
                     * @return ProductVersion 是否已赋值
                     * 
                     */
                    bool ProductVersionHasBeenSet() const;

                    /**
                     * 获取付费类型
                     * @return ChargeProperties 付费类型
                     * 
                     */
                    ChargeProperties GetChargeProperties() const;

                    /**
                     * 设置付费类型
                     * @param _chargeProperties 付费类型
                     * 
                     */
                    void SetChargeProperties(const ChargeProperties& _chargeProperties);

                    /**
                     * 判断参数 ChargeProperties 是否已赋值
                     * @return ChargeProperties 是否已赋值
                     * 
                     */
                    bool ChargePropertiesHasBeenSet() const;

                    /**
                     * 获取实例名字
                     * @return InstanceName 实例名字
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名字
                     * @param _instanceName 实例名字
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
                     * 获取数据库密码
                     * @return DorisUserPwd 数据库密码
                     * 
                     */
                    std::string GetDorisUserPwd() const;

                    /**
                     * 设置数据库密码
                     * @param _dorisUserPwd 数据库密码
                     * 
                     */
                    void SetDorisUserPwd(const std::string& _dorisUserPwd);

                    /**
                     * 判断参数 DorisUserPwd 是否已赋值
                     * @return DorisUserPwd 是否已赋值
                     * 
                     */
                    bool DorisUserPwdHasBeenSet() const;

                    /**
                     * 获取标签列表
                     * @return Tags 标签列表
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表
                     * @param _tags 标签列表
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
                     * 获取高可用类型：
0：非高可用（只有1个FE，FeSpec.CreateInstanceSpec.Count=1），
1：读高可用（至少需部署3个FE，FeSpec.CreateInstanceSpec.Count>=3，且为奇数），
2：读写高可用（至少需部署5个FE，FeSpec.CreateInstanceSpec.Count>=5，且为奇数）。
                     * @return HaType 高可用类型：
0：非高可用（只有1个FE，FeSpec.CreateInstanceSpec.Count=1），
1：读高可用（至少需部署3个FE，FeSpec.CreateInstanceSpec.Count>=3，且为奇数），
2：读写高可用（至少需部署5个FE，FeSpec.CreateInstanceSpec.Count>=5，且为奇数）。
                     * 
                     */
                    int64_t GetHaType() const;

                    /**
                     * 设置高可用类型：
0：非高可用（只有1个FE，FeSpec.CreateInstanceSpec.Count=1），
1：读高可用（至少需部署3个FE，FeSpec.CreateInstanceSpec.Count>=3，且为奇数），
2：读写高可用（至少需部署5个FE，FeSpec.CreateInstanceSpec.Count>=5，且为奇数）。
                     * @param _haType 高可用类型：
0：非高可用（只有1个FE，FeSpec.CreateInstanceSpec.Count=1），
1：读高可用（至少需部署3个FE，FeSpec.CreateInstanceSpec.Count>=3，且为奇数），
2：读写高可用（至少需部署5个FE，FeSpec.CreateInstanceSpec.Count>=5，且为奇数）。
                     * 
                     */
                    void SetHaType(const int64_t& _haType);

                    /**
                     * 判断参数 HaType 是否已赋值
                     * @return HaType 是否已赋值
                     * 
                     */
                    bool HaTypeHasBeenSet() const;

                    /**
                     * 获取表名大小写是否敏感，0：敏感；1：不敏感，以小写进行比较；2：不敏感，表名改为以小写存储
                     * @return CaseSensitive 表名大小写是否敏感，0：敏感；1：不敏感，以小写进行比较；2：不敏感，表名改为以小写存储
                     * 
                     */
                    int64_t GetCaseSensitive() const;

                    /**
                     * 设置表名大小写是否敏感，0：敏感；1：不敏感，以小写进行比较；2：不敏感，表名改为以小写存储
                     * @param _caseSensitive 表名大小写是否敏感，0：敏感；1：不敏感，以小写进行比较；2：不敏感，表名改为以小写存储
                     * 
                     */
                    void SetCaseSensitive(const int64_t& _caseSensitive);

                    /**
                     * 判断参数 CaseSensitive 是否已赋值
                     * @return CaseSensitive 是否已赋值
                     * 
                     */
                    bool CaseSensitiveHasBeenSet() const;

                    /**
                     * 获取是否开启多可用区
                     * @return EnableMultiZones 是否开启多可用区
                     * 
                     */
                    bool GetEnableMultiZones() const;

                    /**
                     * 设置是否开启多可用区
                     * @param _enableMultiZones 是否开启多可用区
                     * 
                     */
                    void SetEnableMultiZones(const bool& _enableMultiZones);

                    /**
                     * 判断参数 EnableMultiZones 是否已赋值
                     * @return EnableMultiZones 是否已赋值
                     * 
                     */
                    bool EnableMultiZonesHasBeenSet() const;

                    /**
                     * 获取开启多可用区后，用户的所有可用区和子网信息
                     * @return UserMultiZoneInfos 开启多可用区后，用户的所有可用区和子网信息
                     * @deprecated
                     */
                    NetworkInfo GetUserMultiZoneInfos() const;

                    /**
                     * 设置开启多可用区后，用户的所有可用区和子网信息
                     * @param _userMultiZoneInfos 开启多可用区后，用户的所有可用区和子网信息
                     * @deprecated
                     */
                    void SetUserMultiZoneInfos(const NetworkInfo& _userMultiZoneInfos);

                    /**
                     * 判断参数 UserMultiZoneInfos 是否已赋值
                     * @return UserMultiZoneInfos 是否已赋值
                     * @deprecated
                     */
                    bool UserMultiZoneInfosHasBeenSet() const;

                    /**
                     * 获取开启多可用区后，用户的所有可用区和子网信息
                     * @return UserMultiZoneInfoArr 开启多可用区后，用户的所有可用区和子网信息
                     * 
                     */
                    std::vector<NetworkInfo> GetUserMultiZoneInfoArr() const;

                    /**
                     * 设置开启多可用区后，用户的所有可用区和子网信息
                     * @param _userMultiZoneInfoArr 开启多可用区后，用户的所有可用区和子网信息
                     * 
                     */
                    void SetUserMultiZoneInfoArr(const std::vector<NetworkInfo>& _userMultiZoneInfoArr);

                    /**
                     * 判断参数 UserMultiZoneInfoArr 是否已赋值
                     * @return UserMultiZoneInfoArr 是否已赋值
                     * 
                     */
                    bool UserMultiZoneInfoArrHasBeenSet() const;

                    /**
                     * 获取是否存算分离
                     * @return IsSSC 是否存算分离
                     * 
                     */
                    bool GetIsSSC() const;

                    /**
                     * 设置是否存算分离
                     * @param _isSSC 是否存算分离
                     * 
                     */
                    void SetIsSSC(const bool& _isSSC);

                    /**
                     * 判断参数 IsSSC 是否已赋值
                     * @return IsSSC 是否已赋值
                     * 
                     */
                    bool IsSSCHasBeenSet() const;

                    /**
                     * 获取CU数
                     * @return SSCCU CU数
                     * 
                     */
                    int64_t GetSSCCU() const;

                    /**
                     * 设置CU数
                     * @param _sSCCU CU数
                     * 
                     */
                    void SetSSCCU(const int64_t& _sSCCU);

                    /**
                     * 判断参数 SSCCU 是否已赋值
                     * @return SSCCU 是否已赋值
                     * 
                     */
                    bool SSCCUHasBeenSet() const;

                    /**
                     * 获取缓存盘大小
                     * @return CacheDiskSize 缓存盘大小
                     * @deprecated
                     */
                    std::string GetCacheDiskSize() const;

                    /**
                     * 设置缓存盘大小
                     * @param _cacheDiskSize 缓存盘大小
                     * @deprecated
                     */
                    void SetCacheDiskSize(const std::string& _cacheDiskSize);

                    /**
                     * 判断参数 CacheDiskSize 是否已赋值
                     * @return CacheDiskSize 是否已赋值
                     * @deprecated
                     */
                    bool CacheDiskSizeHasBeenSet() const;

                    /**
                     * 获取缓存盘大小
                     * @return CacheDataDiskSize 缓存盘大小
                     * 
                     */
                    int64_t GetCacheDataDiskSize() const;

                    /**
                     * 设置缓存盘大小
                     * @param _cacheDataDiskSize 缓存盘大小
                     * 
                     */
                    void SetCacheDataDiskSize(const int64_t& _cacheDataDiskSize);

                    /**
                     * 判断参数 CacheDataDiskSize 是否已赋值
                     * @return CacheDataDiskSize 是否已赋值
                     * 
                     */
                    bool CacheDataDiskSizeHasBeenSet() const;

                private:

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * FE规格
                     */
                    CreateInstanceSpec m_feSpec;
                    bool m_feSpecHasBeenSet;

                    /**
                     * BE规格
                     */
                    CreateInstanceSpec m_beSpec;
                    bool m_beSpecHasBeenSet;

                    /**
                     * 是否高可用
                     */
                    bool m_haFlag;
                    bool m_haFlagHasBeenSet;

                    /**
                     * 用户VPCID
                     */
                    std::string m_userVPCId;
                    bool m_userVPCIdHasBeenSet;

                    /**
                     * 用户子网ID
                     */
                    std::string m_userSubnetId;
                    bool m_userSubnetIdHasBeenSet;

                    /**
                     * 产品版本号
                     */
                    std::string m_productVersion;
                    bool m_productVersionHasBeenSet;

                    /**
                     * 付费类型
                     */
                    ChargeProperties m_chargeProperties;
                    bool m_chargePropertiesHasBeenSet;

                    /**
                     * 实例名字
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 数据库密码
                     */
                    std::string m_dorisUserPwd;
                    bool m_dorisUserPwdHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 高可用类型：
0：非高可用（只有1个FE，FeSpec.CreateInstanceSpec.Count=1），
1：读高可用（至少需部署3个FE，FeSpec.CreateInstanceSpec.Count>=3，且为奇数），
2：读写高可用（至少需部署5个FE，FeSpec.CreateInstanceSpec.Count>=5，且为奇数）。
                     */
                    int64_t m_haType;
                    bool m_haTypeHasBeenSet;

                    /**
                     * 表名大小写是否敏感，0：敏感；1：不敏感，以小写进行比较；2：不敏感，表名改为以小写存储
                     */
                    int64_t m_caseSensitive;
                    bool m_caseSensitiveHasBeenSet;

                    /**
                     * 是否开启多可用区
                     */
                    bool m_enableMultiZones;
                    bool m_enableMultiZonesHasBeenSet;

                    /**
                     * 开启多可用区后，用户的所有可用区和子网信息
                     */
                    NetworkInfo m_userMultiZoneInfos;
                    bool m_userMultiZoneInfosHasBeenSet;

                    /**
                     * 开启多可用区后，用户的所有可用区和子网信息
                     */
                    std::vector<NetworkInfo> m_userMultiZoneInfoArr;
                    bool m_userMultiZoneInfoArrHasBeenSet;

                    /**
                     * 是否存算分离
                     */
                    bool m_isSSC;
                    bool m_isSSCHasBeenSet;

                    /**
                     * CU数
                     */
                    int64_t m_sSCCU;
                    bool m_sSCCUHasBeenSet;

                    /**
                     * 缓存盘大小
                     */
                    std::string m_cacheDiskSize;
                    bool m_cacheDiskSizeHasBeenSet;

                    /**
                     * 缓存盘大小
                     */
                    int64_t m_cacheDataDiskSize;
                    bool m_cacheDataDiskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CREATEINSTANCENEWREQUEST_H_
