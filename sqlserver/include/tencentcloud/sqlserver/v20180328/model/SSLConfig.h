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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SSLCONFIG_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SSLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * SSL加密配置
                */
                class SSLConfig : public AbstractModel
                {
                public:
                    SSLConfig();
                    ~SSLConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SSL加密状态，
enable-已开启
disable-未开启
enable_doing-开启中
disable_doing-关闭中
renew_doing-更新中
wait_doing-等待维护时间内执行
                     * @return Encryption SSL加密状态，
enable-已开启
disable-未开启
enable_doing-开启中
disable_doing-关闭中
renew_doing-更新中
wait_doing-等待维护时间内执行
                     * 
                     */
                    std::string GetEncryption() const;

                    /**
                     * 设置SSL加密状态，
enable-已开启
disable-未开启
enable_doing-开启中
disable_doing-关闭中
renew_doing-更新中
wait_doing-等待维护时间内执行
                     * @param _encryption SSL加密状态，
enable-已开启
disable-未开启
enable_doing-开启中
disable_doing-关闭中
renew_doing-更新中
wait_doing-等待维护时间内执行
                     * 
                     */
                    void SetEncryption(const std::string& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                    /**
                     * 获取SSL证书有效期，时间格式 YYYY-MM-DD HH:MM:SS
                     * @return SSLValidityPeriod SSL证书有效期，时间格式 YYYY-MM-DD HH:MM:SS
                     * 
                     */
                    std::string GetSSLValidityPeriod() const;

                    /**
                     * 设置SSL证书有效期，时间格式 YYYY-MM-DD HH:MM:SS
                     * @param _sSLValidityPeriod SSL证书有效期，时间格式 YYYY-MM-DD HH:MM:SS
                     * 
                     */
                    void SetSSLValidityPeriod(const std::string& _sSLValidityPeriod);

                    /**
                     * 判断参数 SSLValidityPeriod 是否已赋值
                     * @return SSLValidityPeriod 是否已赋值
                     * 
                     */
                    bool SSLValidityPeriodHasBeenSet() const;

                    /**
                     * 获取SSL证书有效性，0-无效，1-有效
                     * @return SSLValidity SSL证书有效性，0-无效，1-有效
                     * 
                     */
                    uint64_t GetSSLValidity() const;

                    /**
                     * 设置SSL证书有效性，0-无效，1-有效
                     * @param _sSLValidity SSL证书有效性，0-无效，1-有效
                     * 
                     */
                    void SetSSLValidity(const uint64_t& _sSLValidity);

                    /**
                     * 判断参数 SSLValidity 是否已赋值
                     * @return SSLValidity 是否已赋值
                     * 
                     */
                    bool SSLValidityHasBeenSet() const;

                    /**
                     * 获取是否是KMS的CMK证书
                     * @return IsKMS 是否是KMS的CMK证书
                     * 
                     */
                    int64_t GetIsKMS() const;

                    /**
                     * 设置是否是KMS的CMK证书
                     * @param _isKMS 是否是KMS的CMK证书
                     * 
                     */
                    void SetIsKMS(const int64_t& _isKMS);

                    /**
                     * 判断参数 IsKMS 是否已赋值
                     * @return IsKMS 是否已赋值
                     * 
                     */
                    bool IsKMSHasBeenSet() const;

                    /**
                     * 获取KMS中购买的用户主密钥ID（CMK）
                     * @return CMKId KMS中购买的用户主密钥ID（CMK）
                     * 
                     */
                    std::string GetCMKId() const;

                    /**
                     * 设置KMS中购买的用户主密钥ID（CMK）
                     * @param _cMKId KMS中购买的用户主密钥ID（CMK）
                     * 
                     */
                    void SetCMKId(const std::string& _cMKId);

                    /**
                     * 判断参数 CMKId 是否已赋值
                     * @return CMKId 是否已赋值
                     * 
                     */
                    bool CMKIdHasBeenSet() const;

                    /**
                     * 获取CMK所属的地域，不同地域的CMK数据不互通
                     * @return CMKRegion CMK所属的地域，不同地域的CMK数据不互通
                     * 
                     */
                    std::string GetCMKRegion() const;

                    /**
                     * 设置CMK所属的地域，不同地域的CMK数据不互通
                     * @param _cMKRegion CMK所属的地域，不同地域的CMK数据不互通
                     * 
                     */
                    void SetCMKRegion(const std::string& _cMKRegion);

                    /**
                     * 判断参数 CMKRegion 是否已赋值
                     * @return CMKRegion 是否已赋值
                     * 
                     */
                    bool CMKRegionHasBeenSet() const;

                private:

                    /**
                     * SSL加密状态，
enable-已开启
disable-未开启
enable_doing-开启中
disable_doing-关闭中
renew_doing-更新中
wait_doing-等待维护时间内执行
                     */
                    std::string m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * SSL证书有效期，时间格式 YYYY-MM-DD HH:MM:SS
                     */
                    std::string m_sSLValidityPeriod;
                    bool m_sSLValidityPeriodHasBeenSet;

                    /**
                     * SSL证书有效性，0-无效，1-有效
                     */
                    uint64_t m_sSLValidity;
                    bool m_sSLValidityHasBeenSet;

                    /**
                     * 是否是KMS的CMK证书
                     */
                    int64_t m_isKMS;
                    bool m_isKMSHasBeenSet;

                    /**
                     * KMS中购买的用户主密钥ID（CMK）
                     */
                    std::string m_cMKId;
                    bool m_cMKIdHasBeenSet;

                    /**
                     * CMK所属的地域，不同地域的CMK数据不互通
                     */
                    std::string m_cMKRegion;
                    bool m_cMKRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SSLCONFIG_H_
