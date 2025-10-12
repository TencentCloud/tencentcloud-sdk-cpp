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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_DATASOURCEFILEUPLOAD_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_DATASOURCEFILEUPLOAD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 数据源文件上传
                */
                class DataSourceFileUpload : public AbstractModel
                {
                public:
                    DataSourceFileUpload();
                    ~DataSourceFileUpload() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Truststore认证文件，默认文件名truststore.jks
                     * @return TrustStore Truststore认证文件，默认文件名truststore.jks
                     * 
                     */
                    std::string GetTrustStore() const;

                    /**
                     * 设置Truststore认证文件，默认文件名truststore.jks
                     * @param _trustStore Truststore认证文件，默认文件名truststore.jks
                     * 
                     */
                    void SetTrustStore(const std::string& _trustStore);

                    /**
                     * 判断参数 TrustStore 是否已赋值
                     * @return TrustStore 是否已赋值
                     * 
                     */
                    bool TrustStoreHasBeenSet() const;

                    /**
                     * 获取Keystore认证文件，默认文件名keystore.jks
                     * @return KeyStore Keystore认证文件，默认文件名keystore.jks
                     * 
                     */
                    std::string GetKeyStore() const;

                    /**
                     * 设置Keystore认证文件，默认文件名keystore.jks
                     * @param _keyStore Keystore认证文件，默认文件名keystore.jks
                     * 
                     */
                    void SetKeyStore(const std::string& _keyStore);

                    /**
                     * 判断参数 KeyStore 是否已赋值
                     * @return KeyStore 是否已赋值
                     * 
                     */
                    bool KeyStoreHasBeenSet() const;

                    /**
                     * 获取core-site.xml文件
                     * @return CoreSite core-site.xml文件
                     * 
                     */
                    std::string GetCoreSite() const;

                    /**
                     * 设置core-site.xml文件
                     * @param _coreSite core-site.xml文件
                     * 
                     */
                    void SetCoreSite(const std::string& _coreSite);

                    /**
                     * 判断参数 CoreSite 是否已赋值
                     * @return CoreSite 是否已赋值
                     * 
                     */
                    bool CoreSiteHasBeenSet() const;

                    /**
                     * 获取hdfs-site.xml文件
                     * @return HdfsSite hdfs-site.xml文件
                     * 
                     */
                    std::string GetHdfsSite() const;

                    /**
                     * 设置hdfs-site.xml文件
                     * @param _hdfsSite hdfs-site.xml文件
                     * 
                     */
                    void SetHdfsSite(const std::string& _hdfsSite);

                    /**
                     * 判断参数 HdfsSite 是否已赋值
                     * @return HdfsSite 是否已赋值
                     * 
                     */
                    bool HdfsSiteHasBeenSet() const;

                    /**
                     * 获取hive-site.xml文件
                     * @return HiveSite hive-site.xml文件
                     * 
                     */
                    std::string GetHiveSite() const;

                    /**
                     * 设置hive-site.xml文件
                     * @param _hiveSite hive-site.xml文件
                     * 
                     */
                    void SetHiveSite(const std::string& _hiveSite);

                    /**
                     * 判断参数 HiveSite 是否已赋值
                     * @return HiveSite 是否已赋值
                     * 
                     */
                    bool HiveSiteHasBeenSet() const;

                    /**
                     * 获取hbase-site文件
                     * @return HBASESite hbase-site文件
                     * 
                     */
                    std::string GetHBASESite() const;

                    /**
                     * 设置hbase-site文件
                     * @param _hBASESite hbase-site文件
                     * 
                     */
                    void SetHBASESite(const std::string& _hBASESite);

                    /**
                     * 判断参数 HBASESite 是否已赋值
                     * @return HBASESite 是否已赋值
                     * 
                     */
                    bool HBASESiteHasBeenSet() const;

                    /**
                     * 获取keytab文件，默认文件名[数据源名].keytab
                     * @return KeyTab keytab文件，默认文件名[数据源名].keytab
                     * 
                     */
                    std::string GetKeyTab() const;

                    /**
                     * 设置keytab文件，默认文件名[数据源名].keytab
                     * @param _keyTab keytab文件，默认文件名[数据源名].keytab
                     * 
                     */
                    void SetKeyTab(const std::string& _keyTab);

                    /**
                     * 判断参数 KeyTab 是否已赋值
                     * @return KeyTab 是否已赋值
                     * 
                     */
                    bool KeyTabHasBeenSet() const;

                    /**
                     * 获取krb5.conf文件
                     * @return KRB5Conf krb5.conf文件
                     * 
                     */
                    std::string GetKRB5Conf() const;

                    /**
                     * 设置krb5.conf文件
                     * @param _kRB5Conf krb5.conf文件
                     * 
                     */
                    void SetKRB5Conf(const std::string& _kRB5Conf);

                    /**
                     * 判断参数 KRB5Conf 是否已赋值
                     * @return KRB5Conf 是否已赋值
                     * 
                     */
                    bool KRB5ConfHasBeenSet() const;

                    /**
                     * 获取私钥,默认文件名private_key.pem
                     * @return PrivateKey 私钥,默认文件名private_key.pem
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置私钥,默认文件名private_key.pem
                     * @param _privateKey 私钥,默认文件名private_key.pem
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
                     * 获取公钥,默认文件名public_key.pem
                     * @return PublicKey 公钥,默认文件名public_key.pem
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 设置公钥,默认文件名public_key.pem
                     * @param _publicKey 公钥,默认文件名public_key.pem
                     * 
                     */
                    void SetPublicKey(const std::string& _publicKey);

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     * 
                     */
                    bool PublicKeyHasBeenSet() const;

                private:

                    /**
                     * Truststore认证文件，默认文件名truststore.jks
                     */
                    std::string m_trustStore;
                    bool m_trustStoreHasBeenSet;

                    /**
                     * Keystore认证文件，默认文件名keystore.jks
                     */
                    std::string m_keyStore;
                    bool m_keyStoreHasBeenSet;

                    /**
                     * core-site.xml文件
                     */
                    std::string m_coreSite;
                    bool m_coreSiteHasBeenSet;

                    /**
                     * hdfs-site.xml文件
                     */
                    std::string m_hdfsSite;
                    bool m_hdfsSiteHasBeenSet;

                    /**
                     * hive-site.xml文件
                     */
                    std::string m_hiveSite;
                    bool m_hiveSiteHasBeenSet;

                    /**
                     * hbase-site文件
                     */
                    std::string m_hBASESite;
                    bool m_hBASESiteHasBeenSet;

                    /**
                     * keytab文件，默认文件名[数据源名].keytab
                     */
                    std::string m_keyTab;
                    bool m_keyTabHasBeenSet;

                    /**
                     * krb5.conf文件
                     */
                    std::string m_kRB5Conf;
                    bool m_kRB5ConfHasBeenSet;

                    /**
                     * 私钥,默认文件名private_key.pem
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * 公钥,默认文件名public_key.pem
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_DATASOURCEFILEUPLOAD_H_
