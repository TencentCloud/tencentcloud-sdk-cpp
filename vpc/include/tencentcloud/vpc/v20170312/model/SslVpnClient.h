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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SSLVPNCLIENT_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SSLVPNCLIENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * SSL-VPN-CLIENT 出参
                */
                class SslVpnClient : public AbstractModel
                {
                public:
                    SslVpnClient();
                    ~SslVpnClient() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC实例ID。
                     * @return VpcId VPC实例ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID。
                     * @param _vpcId VPC实例ID。
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
                     * 获取SSL-VPN-SERVER 实例ID。
                     * @return SslVpnServerId SSL-VPN-SERVER 实例ID。
                     * 
                     */
                    std::string GetSslVpnServerId() const;

                    /**
                     * 设置SSL-VPN-SERVER 实例ID。
                     * @param _sslVpnServerId SSL-VPN-SERVER 实例ID。
                     * 
                     */
                    void SetSslVpnServerId(const std::string& _sslVpnServerId);

                    /**
                     * 判断参数 SslVpnServerId 是否已赋值
                     * @return SslVpnServerId 是否已赋值
                     * 
                     */
                    bool SslVpnServerIdHasBeenSet() const;

                    /**
                     * 获取证书状态。
0:创建中
1:正常
2:已停用
3.已过期
4.创建出错
                     * @return CertStatus 证书状态。
0:创建中
1:正常
2:已停用
3.已过期
4.创建出错
                     * 
                     */
                    uint64_t GetCertStatus() const;

                    /**
                     * 设置证书状态。
0:创建中
1:正常
2:已停用
3.已过期
4.创建出错
                     * @param _certStatus 证书状态。
0:创建中
1:正常
2:已停用
3.已过期
4.创建出错
                     * 
                     */
                    void SetCertStatus(const uint64_t& _certStatus);

                    /**
                     * 判断参数 CertStatus 是否已赋值
                     * @return CertStatus 是否已赋值
                     * 
                     */
                    bool CertStatusHasBeenSet() const;

                    /**
                     * 获取SSL-VPN-CLIENT 实例ID。
                     * @return SslVpnClientId SSL-VPN-CLIENT 实例ID。
                     * 
                     */
                    std::string GetSslVpnClientId() const;

                    /**
                     * 设置SSL-VPN-CLIENT 实例ID。
                     * @param _sslVpnClientId SSL-VPN-CLIENT 实例ID。
                     * 
                     */
                    void SetSslVpnClientId(const std::string& _sslVpnClientId);

                    /**
                     * 判断参数 SslVpnClientId 是否已赋值
                     * @return SslVpnClientId 是否已赋值
                     * 
                     */
                    bool SslVpnClientIdHasBeenSet() const;

                    /**
                     * 获取证书开始时间。
                     * @return CertBeginTime 证书开始时间。
                     * 
                     */
                    std::string GetCertBeginTime() const;

                    /**
                     * 设置证书开始时间。
                     * @param _certBeginTime 证书开始时间。
                     * 
                     */
                    void SetCertBeginTime(const std::string& _certBeginTime);

                    /**
                     * 判断参数 CertBeginTime 是否已赋值
                     * @return CertBeginTime 是否已赋值
                     * 
                     */
                    bool CertBeginTimeHasBeenSet() const;

                    /**
                     * 获取证书到期时间。
                     * @return CertEndTime 证书到期时间。
                     * 
                     */
                    std::string GetCertEndTime() const;

                    /**
                     * 设置证书到期时间。
                     * @param _certEndTime 证书到期时间。
                     * 
                     */
                    void SetCertEndTime(const std::string& _certEndTime);

                    /**
                     * 判断参数 CertEndTime 是否已赋值
                     * @return CertEndTime 是否已赋值
                     * 
                     */
                    bool CertEndTimeHasBeenSet() const;

                    /**
                     * 获取CLIENT NAME。
                     * @return Name CLIENT NAME。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置CLIENT NAME。
                     * @param _name CLIENT NAME。
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
                     * 获取创建CLIENT 状态。
0 创建中
1 创建出错
2 更新中
3 更新出错
4 销毁中
5 销毁出错
6 已连通
7 未知
                     * @return State 创建CLIENT 状态。
0 创建中
1 创建出错
2 更新中
3 更新出错
4 销毁中
5 销毁出错
6 已连通
7 未知
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置创建CLIENT 状态。
0 创建中
1 创建出错
2 更新中
3 更新出错
4 销毁中
5 销毁出错
6 已连通
7 未知
                     * @param _state 创建CLIENT 状态。
0 创建中
1 创建出错
2 更新中
3 更新出错
4 销毁中
5 销毁出错
6 已连通
7 未知
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * VPC实例ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * SSL-VPN-SERVER 实例ID。
                     */
                    std::string m_sslVpnServerId;
                    bool m_sslVpnServerIdHasBeenSet;

                    /**
                     * 证书状态。
0:创建中
1:正常
2:已停用
3.已过期
4.创建出错
                     */
                    uint64_t m_certStatus;
                    bool m_certStatusHasBeenSet;

                    /**
                     * SSL-VPN-CLIENT 实例ID。
                     */
                    std::string m_sslVpnClientId;
                    bool m_sslVpnClientIdHasBeenSet;

                    /**
                     * 证书开始时间。
                     */
                    std::string m_certBeginTime;
                    bool m_certBeginTimeHasBeenSet;

                    /**
                     * 证书到期时间。
                     */
                    std::string m_certEndTime;
                    bool m_certEndTimeHasBeenSet;

                    /**
                     * CLIENT NAME。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 创建CLIENT 状态。
0 创建中
1 创建出错
2 更新中
3 更新出错
4 销毁中
5 销毁出错
6 已连通
7 未知
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SSLVPNCLIENT_H_
