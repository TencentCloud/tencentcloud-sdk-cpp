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
                     * 获取<p>可用区</p>
                     * @return Zone <p>可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区</p>
                     * @param _zone <p>可用区</p>
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
                     * 获取<p>FE规格</p>
                     * @return FeSpec <p>FE规格</p>
                     * 
                     */
                    CreateInstanceSpec GetFeSpec() const;

                    /**
                     * 设置<p>FE规格</p>
                     * @param _feSpec <p>FE规格</p>
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
                     * 获取<p>BE规格</p>
                     * @return BeSpec <p>BE规格</p>
                     * 
                     */
                    CreateInstanceSpec GetBeSpec() const;

                    /**
                     * 设置<p>BE规格</p>
                     * @param _beSpec <p>BE规格</p>
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
                     * 获取<p>是否高可用</p>
                     * @return HaFlag <p>是否高可用</p>
                     * 
                     */
                    bool GetHaFlag() const;

                    /**
                     * 设置<p>是否高可用</p>
                     * @param _haFlag <p>是否高可用</p>
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
                     * 获取<p>用户VPCID</p>
                     * @return UserVPCId <p>用户VPCID</p>
                     * 
                     */
                    std::string GetUserVPCId() const;

                    /**
                     * 设置<p>用户VPCID</p>
                     * @param _userVPCId <p>用户VPCID</p>
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
                     * 获取<p>用户子网ID</p>
                     * @return UserSubnetId <p>用户子网ID</p>
                     * 
                     */
                    std::string GetUserSubnetId() const;

                    /**
                     * 设置<p>用户子网ID</p>
                     * @param _userSubnetId <p>用户子网ID</p>
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
                     * 获取<p>产品版本号</p>
                     * @return ProductVersion <p>产品版本号</p>
                     * 
                     */
                    std::string GetProductVersion() const;

                    /**
                     * 设置<p>产品版本号</p>
                     * @param _productVersion <p>产品版本号</p>
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
                     * 获取<p>付费类型</p>
                     * @return ChargeProperties <p>付费类型</p>
                     * 
                     */
                    ChargeProperties GetChargeProperties() const;

                    /**
                     * 设置<p>付费类型</p>
                     * @param _chargeProperties <p>付费类型</p>
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
                     * 获取<p>实例名字</p>
                     * @return InstanceName <p>实例名字</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名字</p>
                     * @param _instanceName <p>实例名字</p>
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
                     * 获取<p>数据库密码</p>
                     * @return DorisUserPwd <p>数据库密码</p>
                     * 
                     */
                    std::string GetDorisUserPwd() const;

                    /**
                     * 设置<p>数据库密码</p>
                     * @param _dorisUserPwd <p>数据库密码</p>
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
                     * 获取<p>标签列表</p>
                     * @return Tags <p>标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tags <p>标签列表</p>
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
                     * 获取<p>高可用类型：<br>0：非高可用（只有1个FE，FeSpec.CreateInstanceSpec.Count=1），<br>1：读高可用（至少需部署3个FE，FeSpec.CreateInstanceSpec.Count&gt;=3，且为奇数），<br>2：读写高可用（至少需部署5个FE，FeSpec.CreateInstanceSpec.Count&gt;=5，且为奇数）。</p>
                     * @return HaType <p>高可用类型：<br>0：非高可用（只有1个FE，FeSpec.CreateInstanceSpec.Count=1），<br>1：读高可用（至少需部署3个FE，FeSpec.CreateInstanceSpec.Count&gt;=3，且为奇数），<br>2：读写高可用（至少需部署5个FE，FeSpec.CreateInstanceSpec.Count&gt;=5，且为奇数）。</p>
                     * 
                     */
                    int64_t GetHaType() const;

                    /**
                     * 设置<p>高可用类型：<br>0：非高可用（只有1个FE，FeSpec.CreateInstanceSpec.Count=1），<br>1：读高可用（至少需部署3个FE，FeSpec.CreateInstanceSpec.Count&gt;=3，且为奇数），<br>2：读写高可用（至少需部署5个FE，FeSpec.CreateInstanceSpec.Count&gt;=5，且为奇数）。</p>
                     * @param _haType <p>高可用类型：<br>0：非高可用（只有1个FE，FeSpec.CreateInstanceSpec.Count=1），<br>1：读高可用（至少需部署3个FE，FeSpec.CreateInstanceSpec.Count&gt;=3，且为奇数），<br>2：读写高可用（至少需部署5个FE，FeSpec.CreateInstanceSpec.Count&gt;=5，且为奇数）。</p>
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
                     * 获取<p>表名大小写是否敏感，0：敏感；1：不敏感，以小写进行比较；2：不敏感，表名改为以小写存储</p>
                     * @return CaseSensitive <p>表名大小写是否敏感，0：敏感；1：不敏感，以小写进行比较；2：不敏感，表名改为以小写存储</p>
                     * 
                     */
                    int64_t GetCaseSensitive() const;

                    /**
                     * 设置<p>表名大小写是否敏感，0：敏感；1：不敏感，以小写进行比较；2：不敏感，表名改为以小写存储</p>
                     * @param _caseSensitive <p>表名大小写是否敏感，0：敏感；1：不敏感，以小写进行比较；2：不敏感，表名改为以小写存储</p>
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
                     * 获取<p>是否开启多可用区</p>
                     * @return EnableMultiZones <p>是否开启多可用区</p>
                     * 
                     */
                    bool GetEnableMultiZones() const;

                    /**
                     * 设置<p>是否开启多可用区</p>
                     * @param _enableMultiZones <p>是否开启多可用区</p>
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
                     * 获取<p>开启多可用区后，用户的所有可用区和子网信息</p>
                     * @return UserMultiZoneInfos <p>开启多可用区后，用户的所有可用区和子网信息</p>
                     * @deprecated
                     */
                    NetworkInfo GetUserMultiZoneInfos() const;

                    /**
                     * 设置<p>开启多可用区后，用户的所有可用区和子网信息</p>
                     * @param _userMultiZoneInfos <p>开启多可用区后，用户的所有可用区和子网信息</p>
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
                     * 获取<p>开启多可用区后，用户的所有可用区和子网信息</p>
                     * @return UserMultiZoneInfoArr <p>开启多可用区后，用户的所有可用区和子网信息</p>
                     * 
                     */
                    std::vector<NetworkInfo> GetUserMultiZoneInfoArr() const;

                    /**
                     * 设置<p>开启多可用区后，用户的所有可用区和子网信息</p>
                     * @param _userMultiZoneInfoArr <p>开启多可用区后，用户的所有可用区和子网信息</p>
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
                     * 获取<p>是否存算分离</p>
                     * @return IsSSC <p>是否存算分离</p>
                     * 
                     */
                    bool GetIsSSC() const;

                    /**
                     * 设置<p>是否存算分离</p>
                     * @param _isSSC <p>是否存算分离</p>
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
                     * 获取<p>CU数</p>
                     * @return SSCCU <p>CU数</p>
                     * 
                     */
                    int64_t GetSSCCU() const;

                    /**
                     * 设置<p>CU数</p>
                     * @param _sSCCU <p>CU数</p>
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
                     * 获取<p>缓存盘大小</p>
                     * @return CacheDiskSize <p>缓存盘大小</p>
                     * @deprecated
                     */
                    std::string GetCacheDiskSize() const;

                    /**
                     * 设置<p>缓存盘大小</p>
                     * @param _cacheDiskSize <p>缓存盘大小</p>
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
                     * 获取<p>缓存盘大小</p>
                     * @return CacheDataDiskSize <p>缓存盘大小</p>
                     * 
                     */
                    int64_t GetCacheDataDiskSize() const;

                    /**
                     * 设置<p>缓存盘大小</p>
                     * @param _cacheDataDiskSize <p>缓存盘大小</p>
                     * 
                     */
                    void SetCacheDataDiskSize(const int64_t& _cacheDataDiskSize);

                    /**
                     * 判断参数 CacheDataDiskSize 是否已赋值
                     * @return CacheDataDiskSize 是否已赋值
                     * 
                     */
                    bool CacheDataDiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>磁盘加密</p>
                     * @return DiskEncrypt <p>磁盘加密</p>
                     * 
                     */
                    int64_t GetDiskEncrypt() const;

                    /**
                     * 设置<p>磁盘加密</p>
                     * @param _diskEncrypt <p>磁盘加密</p>
                     * 
                     */
                    void SetDiskEncrypt(const int64_t& _diskEncrypt);

                    /**
                     * 判断参数 DiskEncrypt 是否已赋值
                     * @return DiskEncrypt 是否已赋值
                     * 
                     */
                    bool DiskEncryptHasBeenSet() const;

                private:

                    /**
                     * <p>可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>FE规格</p>
                     */
                    CreateInstanceSpec m_feSpec;
                    bool m_feSpecHasBeenSet;

                    /**
                     * <p>BE规格</p>
                     */
                    CreateInstanceSpec m_beSpec;
                    bool m_beSpecHasBeenSet;

                    /**
                     * <p>是否高可用</p>
                     */
                    bool m_haFlag;
                    bool m_haFlagHasBeenSet;

                    /**
                     * <p>用户VPCID</p>
                     */
                    std::string m_userVPCId;
                    bool m_userVPCIdHasBeenSet;

                    /**
                     * <p>用户子网ID</p>
                     */
                    std::string m_userSubnetId;
                    bool m_userSubnetIdHasBeenSet;

                    /**
                     * <p>产品版本号</p>
                     */
                    std::string m_productVersion;
                    bool m_productVersionHasBeenSet;

                    /**
                     * <p>付费类型</p>
                     */
                    ChargeProperties m_chargeProperties;
                    bool m_chargePropertiesHasBeenSet;

                    /**
                     * <p>实例名字</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>数据库密码</p>
                     */
                    std::string m_dorisUserPwd;
                    bool m_dorisUserPwdHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>高可用类型：<br>0：非高可用（只有1个FE，FeSpec.CreateInstanceSpec.Count=1），<br>1：读高可用（至少需部署3个FE，FeSpec.CreateInstanceSpec.Count&gt;=3，且为奇数），<br>2：读写高可用（至少需部署5个FE，FeSpec.CreateInstanceSpec.Count&gt;=5，且为奇数）。</p>
                     */
                    int64_t m_haType;
                    bool m_haTypeHasBeenSet;

                    /**
                     * <p>表名大小写是否敏感，0：敏感；1：不敏感，以小写进行比较；2：不敏感，表名改为以小写存储</p>
                     */
                    int64_t m_caseSensitive;
                    bool m_caseSensitiveHasBeenSet;

                    /**
                     * <p>是否开启多可用区</p>
                     */
                    bool m_enableMultiZones;
                    bool m_enableMultiZonesHasBeenSet;

                    /**
                     * <p>开启多可用区后，用户的所有可用区和子网信息</p>
                     */
                    NetworkInfo m_userMultiZoneInfos;
                    bool m_userMultiZoneInfosHasBeenSet;

                    /**
                     * <p>开启多可用区后，用户的所有可用区和子网信息</p>
                     */
                    std::vector<NetworkInfo> m_userMultiZoneInfoArr;
                    bool m_userMultiZoneInfoArrHasBeenSet;

                    /**
                     * <p>是否存算分离</p>
                     */
                    bool m_isSSC;
                    bool m_isSSCHasBeenSet;

                    /**
                     * <p>CU数</p>
                     */
                    int64_t m_sSCCU;
                    bool m_sSCCUHasBeenSet;

                    /**
                     * <p>缓存盘大小</p>
                     */
                    std::string m_cacheDiskSize;
                    bool m_cacheDiskSizeHasBeenSet;

                    /**
                     * <p>缓存盘大小</p>
                     */
                    int64_t m_cacheDataDiskSize;
                    bool m_cacheDataDiskSizeHasBeenSet;

                    /**
                     * <p>磁盘加密</p>
                     */
                    int64_t m_diskEncrypt;
                    bool m_diskEncryptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CREATEINSTANCENEWREQUEST_H_
