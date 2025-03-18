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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_SRCINFO_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_SRCINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * 源实例信息
                */
                class SrcInfo : public AbstractModel
                {
                public:
                    SrcInfo();
                    ~SrcInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取阿里云AccessKey。源库是阿里云RDS5.6适用
                     * @return AccessKey 阿里云AccessKey。源库是阿里云RDS5.6适用
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置阿里云AccessKey。源库是阿里云RDS5.6适用
                     * @param _accessKey 阿里云AccessKey。源库是阿里云RDS5.6适用
                     * 
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取实例的IP地址
                     * @return Ip 实例的IP地址
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置实例的IP地址
                     * @param _ip 实例的IP地址
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取实例的端口
                     * @return Port 实例的端口
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置实例的端口
                     * @param _port 实例的端口
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取实例的用户名
                     * @return User 实例的用户名
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置实例的用户名
                     * @param _user 实例的用户名
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取实例的密码
                     * @return Password 实例的密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置实例的密码
                     * @param _password 实例的密码
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取阿里云RDS实例ID。源库是阿里云RDS5.6/5.6适用
                     * @return RdsInstanceId 阿里云RDS实例ID。源库是阿里云RDS5.6/5.6适用
                     * 
                     */
                    std::string GetRdsInstanceId() const;

                    /**
                     * 设置阿里云RDS实例ID。源库是阿里云RDS5.6/5.6适用
                     * @param _rdsInstanceId 阿里云RDS实例ID。源库是阿里云RDS5.6/5.6适用
                     * 
                     */
                    void SetRdsInstanceId(const std::string& _rdsInstanceId);

                    /**
                     * 判断参数 RdsInstanceId 是否已赋值
                     * @return RdsInstanceId 是否已赋值
                     * 
                     */
                    bool RdsInstanceIdHasBeenSet() const;

                    /**
                     * 获取CVM实例短ID，格式如：ins-olgl39y8，与云服务器控制台页面显示的实例ID相同。如果是CVM自建实例，需要传递此字段
                     * @return CvmInstanceId CVM实例短ID，格式如：ins-olgl39y8，与云服务器控制台页面显示的实例ID相同。如果是CVM自建实例，需要传递此字段
                     * 
                     */
                    std::string GetCvmInstanceId() const;

                    /**
                     * 设置CVM实例短ID，格式如：ins-olgl39y8，与云服务器控制台页面显示的实例ID相同。如果是CVM自建实例，需要传递此字段
                     * @param _cvmInstanceId CVM实例短ID，格式如：ins-olgl39y8，与云服务器控制台页面显示的实例ID相同。如果是CVM自建实例，需要传递此字段
                     * 
                     */
                    void SetCvmInstanceId(const std::string& _cvmInstanceId);

                    /**
                     * 判断参数 CvmInstanceId 是否已赋值
                     * @return CvmInstanceId 是否已赋值
                     * 
                     */
                    bool CvmInstanceIdHasBeenSet() const;

                    /**
                     * 获取专线网关ID，格式如：dcg-0rxtqqxb
                     * @return UniqDcgId 专线网关ID，格式如：dcg-0rxtqqxb
                     * 
                     */
                    std::string GetUniqDcgId() const;

                    /**
                     * 设置专线网关ID，格式如：dcg-0rxtqqxb
                     * @param _uniqDcgId 专线网关ID，格式如：dcg-0rxtqqxb
                     * 
                     */
                    void SetUniqDcgId(const std::string& _uniqDcgId);

                    /**
                     * 判断参数 UniqDcgId 是否已赋值
                     * @return UniqDcgId 是否已赋值
                     * 
                     */
                    bool UniqDcgIdHasBeenSet() const;

                    /**
                     * 获取私有网络ID，格式如：vpc-92jblxto
                     * @return VpcId 私有网络ID，格式如：vpc-92jblxto
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID，格式如：vpc-92jblxto
                     * @param _vpcId 私有网络ID，格式如：vpc-92jblxto
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取私有网络下的子网ID，格式如：subnet-3paxmkdz
                     * @return SubnetId 私有网络下的子网ID，格式如：subnet-3paxmkdz
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络下的子网ID，格式如：subnet-3paxmkdz
                     * @param _subnetId 私有网络下的子网ID，格式如：subnet-3paxmkdz
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取VPN网关ID，格式如：vpngw-9ghexg7q
                     * @return UniqVpnGwId VPN网关ID，格式如：vpngw-9ghexg7q
                     * 
                     */
                    std::string GetUniqVpnGwId() const;

                    /**
                     * 设置VPN网关ID，格式如：vpngw-9ghexg7q
                     * @param _uniqVpnGwId VPN网关ID，格式如：vpngw-9ghexg7q
                     * 
                     */
                    void SetUniqVpnGwId(const std::string& _uniqVpnGwId);

                    /**
                     * 判断参数 UniqVpnGwId 是否已赋值
                     * @return UniqVpnGwId 是否已赋值
                     * 
                     */
                    bool UniqVpnGwIdHasBeenSet() const;

                    /**
                     * 获取数据库实例ID，格式如：cdb-powiqx8q
                     * @return InstanceId 数据库实例ID，格式如：cdb-powiqx8q
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置数据库实例ID，格式如：cdb-powiqx8q
                     * @param _instanceId 数据库实例ID，格式如：cdb-powiqx8q
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
                     * 获取地域英文名，如：ap-guangzhou
                     * @return Region 地域英文名，如：ap-guangzhou
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域英文名，如：ap-guangzhou
                     * @param _region 地域英文名，如：ap-guangzhou
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
                     * 获取当实例为RDS实例时，填写为aliyun, 其他情况均填写others
                     * @return Supplier 当实例为RDS实例时，填写为aliyun, 其他情况均填写others
                     * 
                     */
                    std::string GetSupplier() const;

                    /**
                     * 设置当实例为RDS实例时，填写为aliyun, 其他情况均填写others
                     * @param _supplier 当实例为RDS实例时，填写为aliyun, 其他情况均填写others
                     * 
                     */
                    void SetSupplier(const std::string& _supplier);

                    /**
                     * 判断参数 Supplier 是否已赋值
                     * @return Supplier 是否已赋值
                     * 
                     */
                    bool SupplierHasBeenSet() const;

                    /**
                     * 获取云联网ID，如：ccn-afp6kltc
                     * @return CcnId 云联网ID，如：ccn-afp6kltc
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置云联网ID，如：ccn-afp6kltc
                     * @param _ccnId 云联网ID，如：ccn-afp6kltc
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取数据库版本，当实例为RDS实例时才有效，格式如：5.6或者5.7，默认为5.6
                     * @return EngineVersion 数据库版本，当实例为RDS实例时才有效，格式如：5.6或者5.7，默认为5.6
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置数据库版本，当实例为RDS实例时才有效，格式如：5.6或者5.7，默认为5.6
                     * @param _engineVersion 数据库版本，当实例为RDS实例时才有效，格式如：5.6或者5.7，默认为5.6
                     * 
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                private:

                    /**
                     * 阿里云AccessKey。源库是阿里云RDS5.6适用
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * 实例的IP地址
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 实例的端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 实例的用户名
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 实例的密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 阿里云RDS实例ID。源库是阿里云RDS5.6/5.6适用
                     */
                    std::string m_rdsInstanceId;
                    bool m_rdsInstanceIdHasBeenSet;

                    /**
                     * CVM实例短ID，格式如：ins-olgl39y8，与云服务器控制台页面显示的实例ID相同。如果是CVM自建实例，需要传递此字段
                     */
                    std::string m_cvmInstanceId;
                    bool m_cvmInstanceIdHasBeenSet;

                    /**
                     * 专线网关ID，格式如：dcg-0rxtqqxb
                     */
                    std::string m_uniqDcgId;
                    bool m_uniqDcgIdHasBeenSet;

                    /**
                     * 私有网络ID，格式如：vpc-92jblxto
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络下的子网ID，格式如：subnet-3paxmkdz
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * VPN网关ID，格式如：vpngw-9ghexg7q
                     */
                    std::string m_uniqVpnGwId;
                    bool m_uniqVpnGwIdHasBeenSet;

                    /**
                     * 数据库实例ID，格式如：cdb-powiqx8q
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 地域英文名，如：ap-guangzhou
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 当实例为RDS实例时，填写为aliyun, 其他情况均填写others
                     */
                    std::string m_supplier;
                    bool m_supplierHasBeenSet;

                    /**
                     * 云联网ID，如：ccn-afp6kltc
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 数据库版本，当实例为RDS实例时才有效，格式如：5.6或者5.7，默认为5.6
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_SRCINFO_H_
