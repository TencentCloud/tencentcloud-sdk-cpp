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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_DOWNLOADBILLREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_DOWNLOADBILLREQUEST_H_

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
                * DownloadBill请求参数结构体
                */
                class DownloadBillRequest : public AbstractModel
                {
                public:
                    DownloadBillRequest();
                    ~DownloadBillRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取请求下载对账单日期
                     * @return StateDate 请求下载对账单日期
                     * 
                     */
                    std::string GetStateDate() const;

                    /**
                     * 设置请求下载对账单日期
                     * @param _stateDate 请求下载对账单日期
                     * 
                     */
                    void SetStateDate(const std::string& _stateDate);

                    /**
                     * 判断参数 StateDate 是否已赋值
                     * @return StateDate 是否已赋值
                     * 
                     */
                    bool StateDateHasBeenSet() const;

                    /**
                     * 获取聚鑫分配的MidasAppId
                     * @return MidasAppId 聚鑫分配的MidasAppId
                     * 
                     */
                    std::string GetMidasAppId() const;

                    /**
                     * 设置聚鑫分配的MidasAppId
                     * @param _midasAppId 聚鑫分配的MidasAppId
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
                     * 获取聚鑫分配的SecretId
                     * @return MidasSecretId 聚鑫分配的SecretId
                     * 
                     */
                    std::string GetMidasSecretId() const;

                    /**
                     * 设置聚鑫分配的SecretId
                     * @param _midasSecretId 聚鑫分配的SecretId
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
                     * 获取使用聚鑫安全密钥计算的签名
                     * @return MidasSignature 使用聚鑫安全密钥计算的签名
                     * 
                     */
                    std::string GetMidasSignature() const;

                    /**
                     * 设置使用聚鑫安全密钥计算的签名
                     * @param _midasSignature 使用聚鑫安全密钥计算的签名
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

                private:

                    /**
                     * 请求下载对账单日期
                     */
                    std::string m_stateDate;
                    bool m_stateDateHasBeenSet;

                    /**
                     * 聚鑫分配的MidasAppId
                     */
                    std::string m_midasAppId;
                    bool m_midasAppIdHasBeenSet;

                    /**
                     * 聚鑫分配的SecretId
                     */
                    std::string m_midasSecretId;
                    bool m_midasSecretIdHasBeenSet;

                    /**
                     * 使用聚鑫安全密钥计算的签名
                     */
                    std::string m_midasSignature;
                    bool m_midasSignatureHasBeenSet;

                    /**
                     * 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     */
                    std::string m_midasEnvironment;
                    bool m_midasEnvironmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_DOWNLOADBILLREQUEST_H_
