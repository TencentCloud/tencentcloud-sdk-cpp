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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_REGISTERBEHAVIORREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_REGISTERBEHAVIORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * RegisterBehavior请求参数结构体
                */
                class RegisterBehaviorRequest : public AbstractModel
                {
                public:
                    RegisterBehaviorRequest();
                    ~RegisterBehaviorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取聚鑫分配的支付主MidasAppId
                     * @return MidasAppId 聚鑫分配的支付主MidasAppId
                     * 
                     */
                    std::string GetMidasAppId() const;

                    /**
                     * 设置聚鑫分配的支付主MidasAppId
                     * @param _midasAppId 聚鑫分配的支付主MidasAppId
                     * 
                     */
                    void SetMidasAppId(const std::string& _midasAppId);

                    /**
                     * 判断参数 MidasAppId 是否已赋值
                     * @return MidasAppId 是否已赋值
                     * 
                     */
                    bool MidasAppIdHasBeenSet() const;

                    /**
                     * 获取聚鑫计费SubAppId，代表子商户
                     * @return SubAppId 聚鑫计费SubAppId，代表子商户
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置聚鑫计费SubAppId，代表子商户
                     * @param _subAppId 聚鑫计费SubAppId，代表子商户
                     * 
                     */
                    void SetSubAppId(const std::string& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取聚鑫分配的安全ID
                     * @return MidasSecretId 聚鑫分配的安全ID
                     * 
                     */
                    std::string GetMidasSecretId() const;

                    /**
                     * 设置聚鑫分配的安全ID
                     * @param _midasSecretId 聚鑫分配的安全ID
                     * 
                     */
                    void SetMidasSecretId(const std::string& _midasSecretId);

                    /**
                     * 判断参数 MidasSecretId 是否已赋值
                     * @return MidasSecretId 是否已赋值
                     * 
                     */
                    bool MidasSecretIdHasBeenSet() const;

                    /**
                     * 获取按照聚鑫安全密钥计算的签名
                     * @return MidasSignature 按照聚鑫安全密钥计算的签名
                     * 
                     */
                    std::string GetMidasSignature() const;

                    /**
                     * 设置按照聚鑫安全密钥计算的签名
                     * @param _midasSignature 按照聚鑫安全密钥计算的签名
                     * 
                     */
                    void SetMidasSignature(const std::string& _midasSignature);

                    /**
                     * 判断参数 MidasSignature 是否已赋值
                     * @return MidasSignature 是否已赋值
                     * 
                     */
                    bool MidasSignatureHasBeenSet() const;

                    /**
                     * 获取功能标志
1：登记行为记录信息
2：查询补录信息
                     * @return FunctionFlag 功能标志
1：登记行为记录信息
2：查询补录信息
                     * 
                     */
                    int64_t GetFunctionFlag() const;

                    /**
                     * 设置功能标志
1：登记行为记录信息
2：查询补录信息
                     * @param _functionFlag 功能标志
1：登记行为记录信息
2：查询补录信息
                     * 
                     */
                    void SetFunctionFlag(const int64_t& _functionFlag);

                    /**
                     * 判断参数 FunctionFlag 是否已赋值
                     * @return FunctionFlag 是否已赋值
                     * 
                     */
                    bool FunctionFlagHasBeenSet() const;

                    /**
                     * 获取环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * @return MidasEnvironment 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * 
                     */
                    std::string GetMidasEnvironment() const;

                    /**
                     * 设置环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * @param _midasEnvironment 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * 
                     */
                    void SetMidasEnvironment(const std::string& _midasEnvironment);

                    /**
                     * 判断参数 MidasEnvironment 是否已赋值
                     * @return MidasEnvironment 是否已赋值
                     * 
                     */
                    bool MidasEnvironmentHasBeenSet() const;

                    /**
                     * 获取操作点击时间
yyyyMMddHHmmss
功能标志FunctionFlag=1时必输
                     * @return OperationClickTime 操作点击时间
yyyyMMddHHmmss
功能标志FunctionFlag=1时必输
                     * 
                     */
                    std::string GetOperationClickTime() const;

                    /**
                     * 设置操作点击时间
yyyyMMddHHmmss
功能标志FunctionFlag=1时必输
                     * @param _operationClickTime 操作点击时间
yyyyMMddHHmmss
功能标志FunctionFlag=1时必输
                     * 
                     */
                    void SetOperationClickTime(const std::string& _operationClickTime);

                    /**
                     * 判断参数 OperationClickTime 是否已赋值
                     * @return OperationClickTime 是否已赋值
                     * 
                     */
                    bool OperationClickTimeHasBeenSet() const;

                    /**
                     * 获取IP地址
功能标志FunctionFlag=1时必输
                     * @return IpAddress IP地址
功能标志FunctionFlag=1时必输
                     * 
                     */
                    std::string GetIpAddress() const;

                    /**
                     * 设置IP地址
功能标志FunctionFlag=1时必输
                     * @param _ipAddress IP地址
功能标志FunctionFlag=1时必输
                     * 
                     */
                    void SetIpAddress(const std::string& _ipAddress);

                    /**
                     * 判断参数 IpAddress 是否已赋值
                     * @return IpAddress 是否已赋值
                     * 
                     */
                    bool IpAddressHasBeenSet() const;

                    /**
                     * 获取MAC地址
功能标志FunctionFlag=1时必输
                     * @return MacAddress MAC地址
功能标志FunctionFlag=1时必输
                     * 
                     */
                    std::string GetMacAddress() const;

                    /**
                     * 设置MAC地址
功能标志FunctionFlag=1时必输
                     * @param _macAddress MAC地址
功能标志FunctionFlag=1时必输
                     * 
                     */
                    void SetMacAddress(const std::string& _macAddress);

                    /**
                     * 判断参数 MacAddress 是否已赋值
                     * @return MacAddress 是否已赋值
                     * 
                     */
                    bool MacAddressHasBeenSet() const;

                    /**
                     * 获取签约渠道
1:  App
2:  平台H5网页
3：公众号
4：小程序
功能标志FunctionFlag=1时必输
                     * @return SignChannel 签约渠道
1:  App
2:  平台H5网页
3：公众号
4：小程序
功能标志FunctionFlag=1时必输
                     * 
                     */
                    int64_t GetSignChannel() const;

                    /**
                     * 设置签约渠道
1:  App
2:  平台H5网页
3：公众号
4：小程序
功能标志FunctionFlag=1时必输
                     * @param _signChannel 签约渠道
1:  App
2:  平台H5网页
3：公众号
4：小程序
功能标志FunctionFlag=1时必输
                     * 
                     */
                    void SetSignChannel(const int64_t& _signChannel);

                    /**
                     * 判断参数 SignChannel 是否已赋值
                     * @return SignChannel 是否已赋值
                     * 
                     */
                    bool SignChannelHasBeenSet() const;

                private:

                    /**
                     * 聚鑫分配的支付主MidasAppId
                     */
                    std::string m_midasAppId;
                    bool m_midasAppIdHasBeenSet;

                    /**
                     * 聚鑫计费SubAppId，代表子商户
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 聚鑫分配的安全ID
                     */
                    std::string m_midasSecretId;
                    bool m_midasSecretIdHasBeenSet;

                    /**
                     * 按照聚鑫安全密钥计算的签名
                     */
                    std::string m_midasSignature;
                    bool m_midasSignatureHasBeenSet;

                    /**
                     * 功能标志
1：登记行为记录信息
2：查询补录信息
                     */
                    int64_t m_functionFlag;
                    bool m_functionFlagHasBeenSet;

                    /**
                     * 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     */
                    std::string m_midasEnvironment;
                    bool m_midasEnvironmentHasBeenSet;

                    /**
                     * 操作点击时间
yyyyMMddHHmmss
功能标志FunctionFlag=1时必输
                     */
                    std::string m_operationClickTime;
                    bool m_operationClickTimeHasBeenSet;

                    /**
                     * IP地址
功能标志FunctionFlag=1时必输
                     */
                    std::string m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                    /**
                     * MAC地址
功能标志FunctionFlag=1时必输
                     */
                    std::string m_macAddress;
                    bool m_macAddressHasBeenSet;

                    /**
                     * 签约渠道
1:  App
2:  平台H5网页
3：公众号
4：小程序
功能标志FunctionFlag=1时必输
                     */
                    int64_t m_signChannel;
                    bool m_signChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_REGISTERBEHAVIORREQUEST_H_
