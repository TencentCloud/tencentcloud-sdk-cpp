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

#ifndef TENCENTCLOUD_IOTTID_V20190411_MODEL_TIDKEYSINFO_H_
#define TENCENTCLOUD_IOTTID_V20190411_MODEL_TIDKEYSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iottid
    {
        namespace V20190411
        {
            namespace Model
            {
                /**
                * 系统生成的TID和密钥信息
                */
                class TidKeysInfo : public AbstractModel
                {
                public:
                    TidKeysInfo();
                    ~TidKeysInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TID号码
                     * @return Tid TID号码
                     * 
                     */
                    std::string GetTid() const;

                    /**
                     * 设置TID号码
                     * @param _tid TID号码
                     * 
                     */
                    void SetTid(const std::string& _tid);

                    /**
                     * 判断参数 Tid 是否已赋值
                     * @return Tid 是否已赋值
                     * 
                     */
                    bool TidHasBeenSet() const;

                    /**
                     * 获取公钥
                     * @return PublicKey 公钥
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 设置公钥
                     * @param _publicKey 公钥
                     * 
                     */
                    void SetPublicKey(const std::string& _publicKey);

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     * 
                     */
                    bool PublicKeyHasBeenSet() const;

                    /**
                     * 获取私钥
                     * @return PrivateKey 私钥
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置私钥
                     * @param _privateKey 私钥
                     * 
                     */
                    void SetPrivateKey(const std::string& _privateKey);

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     * 
                     */
                    bool PrivateKeyHasBeenSet() const;

                    /**
                     * 获取共享密钥
                     * @return Psk 共享密钥
                     * 
                     */
                    std::string GetPsk() const;

                    /**
                     * 设置共享密钥
                     * @param _psk 共享密钥
                     * 
                     */
                    void SetPsk(const std::string& _psk);

                    /**
                     * 判断参数 Psk 是否已赋值
                     * @return Psk 是否已赋值
                     * 
                     */
                    bool PskHasBeenSet() const;

                    /**
                     * 获取软加固白盒密钥下载地址
                     * @return DownloadUrl 软加固白盒密钥下载地址
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 设置软加固白盒密钥下载地址
                     * @param _downloadUrl 软加固白盒密钥下载地址
                     * 
                     */
                    void SetDownloadUrl(const std::string& _downloadUrl);

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取软加固设备标识码
                     * @return DeviceCode 软加固设备标识码
                     * 
                     */
                    std::string GetDeviceCode() const;

                    /**
                     * 设置软加固设备标识码
                     * @param _deviceCode 软加固设备标识码
                     * 
                     */
                    void SetDeviceCode(const std::string& _deviceCode);

                    /**
                     * 判断参数 DeviceCode 是否已赋值
                     * @return DeviceCode 是否已赋值
                     * 
                     */
                    bool DeviceCodeHasBeenSet() const;

                private:

                    /**
                     * TID号码
                     */
                    std::string m_tid;
                    bool m_tidHasBeenSet;

                    /**
                     * 公钥
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * 私钥
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * 共享密钥
                     */
                    std::string m_psk;
                    bool m_pskHasBeenSet;

                    /**
                     * 软加固白盒密钥下载地址
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * 软加固设备标识码
                     */
                    std::string m_deviceCode;
                    bool m_deviceCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTTID_V20190411_MODEL_TIDKEYSINFO_H_
