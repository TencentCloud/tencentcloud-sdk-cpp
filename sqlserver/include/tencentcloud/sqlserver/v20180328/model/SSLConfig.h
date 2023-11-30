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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Encryption SSL加密状态，
enable-已开启
disable-未开启
enable_doing-开启中
disable_doing-关闭中
renew_doing-更新中
wait_doing-等待维护时间内执行
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _encryption SSL加密状态，
enable-已开启
disable-未开启
enable_doing-开启中
disable_doing-关闭中
renew_doing-更新中
wait_doing-等待维护时间内执行
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SSLValidityPeriod SSL证书有效期，时间格式 YYYY-MM-DD HH:MM:SS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSSLValidityPeriod() const;

                    /**
                     * 设置SSL证书有效期，时间格式 YYYY-MM-DD HH:MM:SS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sSLValidityPeriod SSL证书有效期，时间格式 YYYY-MM-DD HH:MM:SS
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SSLValidity SSL证书有效性，0-无效，1-有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSSLValidity() const;

                    /**
                     * 设置SSL证书有效性，0-无效，1-有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sSLValidity SSL证书有效性，0-无效，1-有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSSLValidity(const uint64_t& _sSLValidity);

                    /**
                     * 判断参数 SSLValidity 是否已赋值
                     * @return SSLValidity 是否已赋值
                     * 
                     */
                    bool SSLValidityHasBeenSet() const;

                private:

                    /**
                     * SSL加密状态，
enable-已开启
disable-未开启
enable_doing-开启中
disable_doing-关闭中
renew_doing-更新中
wait_doing-等待维护时间内执行
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * SSL证书有效期，时间格式 YYYY-MM-DD HH:MM:SS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sSLValidityPeriod;
                    bool m_sSLValidityPeriodHasBeenSet;

                    /**
                     * SSL证书有效性，0-无效，1-有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_sSLValidity;
                    bool m_sSLValidityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SSLCONFIG_H_
