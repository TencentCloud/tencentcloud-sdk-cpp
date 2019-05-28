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
                     * 获取阿里云AccessKey
                     * @return AccessKey 阿里云AccessKey
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置阿里云AccessKey
                     * @param AccessKey 阿里云AccessKey
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取实例的IP地址
                     * @return Ip 实例的IP地址
                     */
                    std::string GetIp() const;

                    /**
                     * 设置实例的IP地址
                     * @param Ip 实例的IP地址
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取实例的端口
                     * @return Port 实例的端口
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置实例的端口
                     * @param Port 实例的端口
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取实例的用户名
                     * @return User 实例的用户名
                     */
                    std::string GetUser() const;

                    /**
                     * 设置实例的用户名
                     * @param User 实例的用户名
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取实例的密码
                     * @return Password 实例的密码
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置实例的密码
                     * @param Password 实例的密码
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取阿里云rds实例id
                     * @return RdsInstanceId 阿里云rds实例id
                     */
                    std::string GetRdsInstanceId() const;

                    /**
                     * 设置阿里云rds实例id
                     * @param RdsInstanceId 阿里云rds实例id
                     */
                    void SetRdsInstanceId(const std::string& _rdsInstanceId);

                    /**
                     * 判断参数 RdsInstanceId 是否已赋值
                     * @return RdsInstanceId 是否已赋值
                     */
                    bool RdsInstanceIdHasBeenSet() const;

                    /**
                     * 获取CVM实例短ID，格式如：ins-olgl89y8，与云主机控制台页面显示的实例ID相同，如果是CVM自建实例或者通过自建VPN接入的公网实例，需要传递此字段
                     * @return CvmInstanceId CVM实例短ID，格式如：ins-olgl89y8，与云主机控制台页面显示的实例ID相同，如果是CVM自建实例或者通过自建VPN接入的公网实例，需要传递此字段
                     */
                    std::string GetCvmInstanceId() const;

                    /**
                     * 设置CVM实例短ID，格式如：ins-olgl89y8，与云主机控制台页面显示的实例ID相同，如果是CVM自建实例或者通过自建VPN接入的公网实例，需要传递此字段
                     * @param CvmInstanceId CVM实例短ID，格式如：ins-olgl89y8，与云主机控制台页面显示的实例ID相同，如果是CVM自建实例或者通过自建VPN接入的公网实例，需要传递此字段
                     */
                    void SetCvmInstanceId(const std::string& _cvmInstanceId);

                    /**
                     * 判断参数 CvmInstanceId 是否已赋值
                     * @return CvmInstanceId 是否已赋值
                     */
                    bool CvmInstanceIdHasBeenSet() const;

                    /**
                     * 获取专线网关ID
                     * @return UniqDcgId 专线网关ID
                     */
                    std::string GetUniqDcgId() const;

                    /**
                     * 设置专线网关ID
                     * @param UniqDcgId 专线网关ID
                     */
                    void SetUniqDcgId(const std::string& _uniqDcgId);

                    /**
                     * 判断参数 UniqDcgId 是否已赋值
                     * @return UniqDcgId 是否已赋值
                     */
                    bool UniqDcgIdHasBeenSet() const;

                    /**
                     * 获取私有网络ID，和原来的数字vpcId对应，需要调vpc的接口去转换
                     * @return VpcId 私有网络ID，和原来的数字vpcId对应，需要调vpc的接口去转换
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID，和原来的数字vpcId对应，需要调vpc的接口去转换
                     * @param VpcId 私有网络ID，和原来的数字vpcId对应，需要调vpc的接口去转换
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取私有网络下的子网ID, 和原来的数字子网ID对应，需要调用vpc的接口去转换
                     * @return SubnetId 私有网络下的子网ID, 和原来的数字子网ID对应，需要调用vpc的接口去转换
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络下的子网ID, 和原来的数字子网ID对应，需要调用vpc的接口去转换
                     * @param SubnetId 私有网络下的子网ID, 和原来的数字子网ID对应，需要调用vpc的接口去转换
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取系统分配的VPN网关ID
                     * @return UniqVpnGwId 系统分配的VPN网关ID
                     */
                    std::string GetUniqVpnGwId() const;

                    /**
                     * 设置系统分配的VPN网关ID
                     * @param UniqVpnGwId 系统分配的VPN网关ID
                     */
                    void SetUniqVpnGwId(const std::string& _uniqVpnGwId);

                    /**
                     * 判断参数 UniqVpnGwId 是否已赋值
                     * @return UniqVpnGwId 是否已赋值
                     */
                    bool UniqVpnGwIdHasBeenSet() const;

                    /**
                     * 获取实例短Id
                     * @return InstanceId 实例短Id
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例短Id
                     * @param InstanceId 实例短Id
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取地域英文名，如：ap-guangzhou
                     * @return Region 地域英文名，如：ap-guangzhou
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域英文名，如：ap-guangzhou
                     * @param Region 地域英文名，如：ap-guangzhou
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取服务提供商，如:aliyun,others
                     * @return Supplier 服务提供商，如:aliyun,others
                     */
                    std::string GetSupplier() const;

                    /**
                     * 设置服务提供商，如:aliyun,others
                     * @param Supplier 服务提供商，如:aliyun,others
                     */
                    void SetSupplier(const std::string& _supplier);

                    /**
                     * 判断参数 Supplier 是否已赋值
                     * @return Supplier 是否已赋值
                     */
                    bool SupplierHasBeenSet() const;

                private:

                    /**
                     * 阿里云AccessKey
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
                     * 阿里云rds实例id
                     */
                    std::string m_rdsInstanceId;
                    bool m_rdsInstanceIdHasBeenSet;

                    /**
                     * CVM实例短ID，格式如：ins-olgl89y8，与云主机控制台页面显示的实例ID相同，如果是CVM自建实例或者通过自建VPN接入的公网实例，需要传递此字段
                     */
                    std::string m_cvmInstanceId;
                    bool m_cvmInstanceIdHasBeenSet;

                    /**
                     * 专线网关ID
                     */
                    std::string m_uniqDcgId;
                    bool m_uniqDcgIdHasBeenSet;

                    /**
                     * 私有网络ID，和原来的数字vpcId对应，需要调vpc的接口去转换
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络下的子网ID, 和原来的数字子网ID对应，需要调用vpc的接口去转换
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 系统分配的VPN网关ID
                     */
                    std::string m_uniqVpnGwId;
                    bool m_uniqVpnGwIdHasBeenSet;

                    /**
                     * 实例短Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 地域英文名，如：ap-guangzhou
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 服务提供商，如:aliyun,others
                     */
                    std::string m_supplier;
                    bool m_supplierHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_SRCINFO_H_
