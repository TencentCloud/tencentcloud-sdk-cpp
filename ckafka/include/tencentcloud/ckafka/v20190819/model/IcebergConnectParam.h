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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ICEBERGCONNECTPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ICEBERGCONNECTPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Iceberg连接源参数
                */
                class IcebergConnectParam : public AbstractModel
                {
                public:
                    IcebergConnectParam();
                    ~IcebergConnectParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>EMR实例的HiveMetaStore节点IP</p><p>参数格式：多个使用英文分号;分隔</p><p>创建连接时必选，编辑连接时不接收该参数</p>
                     * @return ServiceVip <p>EMR实例的HiveMetaStore节点IP</p><p>参数格式：多个使用英文分号;分隔</p><p>创建连接时必选，编辑连接时不接收该参数</p>
                     * 
                     */
                    std::string GetServiceVip() const;

                    /**
                     * 设置<p>EMR实例的HiveMetaStore节点IP</p><p>参数格式：多个使用英文分号;分隔</p><p>创建连接时必选，编辑连接时不接收该参数</p>
                     * @param _serviceVip <p>EMR实例的HiveMetaStore节点IP</p><p>参数格式：多个使用英文分号;分隔</p><p>创建连接时必选，编辑连接时不接收该参数</p>
                     * 
                     */
                    void SetServiceVip(const std::string& _serviceVip);

                    /**
                     * 判断参数 ServiceVip 是否已赋值
                     * @return ServiceVip 是否已赋值
                     * 
                     */
                    bool ServiceVipHasBeenSet() const;

                    /**
                     * 获取<p>EMR实例ID</p><p>创建连接时必选，编辑连接时不接收该参数</p>
                     * @return Resource <p>EMR实例ID</p><p>创建连接时必选，编辑连接时不接收该参数</p>
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置<p>EMR实例ID</p><p>创建连接时必选，编辑连接时不接收该参数</p>
                     * @param _resource <p>EMR实例ID</p><p>创建连接时必选，编辑连接时不接收该参数</p>
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取<p>EMR实例的集群网络vpcId</p><p>创建连接时必选，编辑连接时不接收该参数</p>
                     * @return UniqVpcId <p>EMR实例的集群网络vpcId</p><p>创建连接时必选，编辑连接时不接收该参数</p>
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置<p>EMR实例的集群网络vpcId</p><p>创建连接时必选，编辑连接时不接收该参数</p>
                     * @param _uniqVpcId <p>EMR实例的集群网络vpcId</p><p>创建连接时必选，编辑连接时不接收该参数</p>
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取<p>认证类型</p><p>枚举值：</p><ul><li>NONE： 无认证</li><li>KERBEROS： Kerberos认证</li></ul><p>开启Kerberos认证的EMR实例，此处需传入KERBEROS，创建连接时必选，编辑连接时非必选</p>
                     * @return AuthType <p>认证类型</p><p>枚举值：</p><ul><li>NONE： 无认证</li><li>KERBEROS： Kerberos认证</li></ul><p>开启Kerberos认证的EMR实例，此处需传入KERBEROS，创建连接时必选，编辑连接时非必选</p>
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置<p>认证类型</p><p>枚举值：</p><ul><li>NONE： 无认证</li><li>KERBEROS： Kerberos认证</li></ul><p>开启Kerberos认证的EMR实例，此处需传入KERBEROS，创建连接时必选，编辑连接时非必选</p>
                     * @param _authType <p>认证类型</p><p>枚举值：</p><ul><li>NONE： 无认证</li><li>KERBEROS： Kerberos认证</li></ul><p>开启Kerberos认证的EMR实例，此处需传入KERBEROS，创建连接时必选，编辑连接时非必选</p>
                     * 
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取<p>EMR实例的HiveMetaStore节点IP绑定的弹性网卡Id列表</p><p>数量和顺序必须与ServiceVip字段中的多个IP对应，创建连接时必选，编辑连接时不接收该参数</p>
                     * @return EniIdList <p>EMR实例的HiveMetaStore节点IP绑定的弹性网卡Id列表</p><p>数量和顺序必须与ServiceVip字段中的多个IP对应，创建连接时必选，编辑连接时不接收该参数</p>
                     * 
                     */
                    std::vector<std::string> GetEniIdList() const;

                    /**
                     * 设置<p>EMR实例的HiveMetaStore节点IP绑定的弹性网卡Id列表</p><p>数量和顺序必须与ServiceVip字段中的多个IP对应，创建连接时必选，编辑连接时不接收该参数</p>
                     * @param _eniIdList <p>EMR实例的HiveMetaStore节点IP绑定的弹性网卡Id列表</p><p>数量和顺序必须与ServiceVip字段中的多个IP对应，创建连接时必选，编辑连接时不接收该参数</p>
                     * 
                     */
                    void SetEniIdList(const std::vector<std::string>& _eniIdList);

                    /**
                     * 判断参数 EniIdList 是否已赋值
                     * @return EniIdList 是否已赋值
                     * 
                     */
                    bool EniIdListHasBeenSet() const;

                    /**
                     * 获取<p>Catalog数据目录类型</p><p>枚举值：</p><ul><li>HIVE： Hive Catalog</li></ul><p>默认值：HIVE</p><p>仅支持Hive Catalog</p>
                     * @return CatalogType <p>Catalog数据目录类型</p><p>枚举值：</p><ul><li>HIVE： Hive Catalog</li></ul><p>默认值：HIVE</p><p>仅支持Hive Catalog</p>
                     * 
                     */
                    std::string GetCatalogType() const;

                    /**
                     * 设置<p>Catalog数据目录类型</p><p>枚举值：</p><ul><li>HIVE： Hive Catalog</li></ul><p>默认值：HIVE</p><p>仅支持Hive Catalog</p>
                     * @param _catalogType <p>Catalog数据目录类型</p><p>枚举值：</p><ul><li>HIVE： Hive Catalog</li></ul><p>默认值：HIVE</p><p>仅支持Hive Catalog</p>
                     * 
                     */
                    void SetCatalogType(const std::string& _catalogType);

                    /**
                     * 判断参数 CatalogType 是否已赋值
                     * @return CatalogType 是否已赋值
                     * 
                     */
                    bool CatalogTypeHasBeenSet() const;

                    /**
                     * 获取<p>用于Kerberos认证的user.keytab文件的内容</p><p>入参限制：文件内容需使用Base64编码</p><p>AuthType为KERBEROS时必传</p>
                     * @return KeyTabContent <p>用于Kerberos认证的user.keytab文件的内容</p><p>入参限制：文件内容需使用Base64编码</p><p>AuthType为KERBEROS时必传</p>
                     * 
                     */
                    std::string GetKeyTabContent() const;

                    /**
                     * 设置<p>用于Kerberos认证的user.keytab文件的内容</p><p>入参限制：文件内容需使用Base64编码</p><p>AuthType为KERBEROS时必传</p>
                     * @param _keyTabContent <p>用于Kerberos认证的user.keytab文件的内容</p><p>入参限制：文件内容需使用Base64编码</p><p>AuthType为KERBEROS时必传</p>
                     * 
                     */
                    void SetKeyTabContent(const std::string& _keyTabContent);

                    /**
                     * 判断参数 KeyTabContent 是否已赋值
                     * @return KeyTabContent 是否已赋值
                     * 
                     */
                    bool KeyTabContentHasBeenSet() const;

                    /**
                     * 获取<p>用于Kerberos认证的krb5.conf文件的内容</p><p>入参限制：文件内容需使用Base64编码</p><p>AuthType为KERBEROS时必传</p>
                     * @return KRB5ConfContent <p>用于Kerberos认证的krb5.conf文件的内容</p><p>入参限制：文件内容需使用Base64编码</p><p>AuthType为KERBEROS时必传</p>
                     * 
                     */
                    std::string GetKRB5ConfContent() const;

                    /**
                     * 设置<p>用于Kerberos认证的krb5.conf文件的内容</p><p>入参限制：文件内容需使用Base64编码</p><p>AuthType为KERBEROS时必传</p>
                     * @param _kRB5ConfContent <p>用于Kerberos认证的krb5.conf文件的内容</p><p>入参限制：文件内容需使用Base64编码</p><p>AuthType为KERBEROS时必传</p>
                     * 
                     */
                    void SetKRB5ConfContent(const std::string& _kRB5ConfContent);

                    /**
                     * 判断参数 KRB5ConfContent 是否已赋值
                     * @return KRB5ConfContent 是否已赋值
                     * 
                     */
                    bool KRB5ConfContentHasBeenSet() const;

                    /**
                     * 获取<p>用户的Kerberos身份凭证</p>
                     * @return KerberosUserPrincipal <p>用户的Kerberos身份凭证</p>
                     * 
                     */
                    std::string GetKerberosUserPrincipal() const;

                    /**
                     * 设置<p>用户的Kerberos身份凭证</p>
                     * @param _kerberosUserPrincipal <p>用户的Kerberos身份凭证</p>
                     * 
                     */
                    void SetKerberosUserPrincipal(const std::string& _kerberosUserPrincipal);

                    /**
                     * 判断参数 KerberosUserPrincipal 是否已赋值
                     * @return KerberosUserPrincipal 是否已赋值
                     * 
                     */
                    bool KerberosUserPrincipalHasBeenSet() const;

                    /**
                     * 获取<p>HiveMetastore服务端配置的Kerberos Principal</p><p>hive-site.xml中hive.metastore.kerberos.principal的值</p>
                     * @return KerberosPrincipal <p>HiveMetastore服务端配置的Kerberos Principal</p><p>hive-site.xml中hive.metastore.kerberos.principal的值</p>
                     * 
                     */
                    std::string GetKerberosPrincipal() const;

                    /**
                     * 设置<p>HiveMetastore服务端配置的Kerberos Principal</p><p>hive-site.xml中hive.metastore.kerberos.principal的值</p>
                     * @param _kerberosPrincipal <p>HiveMetastore服务端配置的Kerberos Principal</p><p>hive-site.xml中hive.metastore.kerberos.principal的值</p>
                     * 
                     */
                    void SetKerberosPrincipal(const std::string& _kerberosPrincipal);

                    /**
                     * 判断参数 KerberosPrincipal 是否已赋值
                     * @return KerberosPrincipal 是否已赋值
                     * 
                     */
                    bool KerberosPrincipalHasBeenSet() const;

                    /**
                     * 获取<p>是否更新并重启所有关联的连接器任务</p><p>编辑连接时使用，如果不传，则根据认证类型及认证参数是否发生变化，来判断是否更新并重启所有关联的连接器任务</p>
                     * @return IsUpdate <p>是否更新并重启所有关联的连接器任务</p><p>编辑连接时使用，如果不传，则根据认证类型及认证参数是否发生变化，来判断是否更新并重启所有关联的连接器任务</p>
                     * 
                     */
                    bool GetIsUpdate() const;

                    /**
                     * 设置<p>是否更新并重启所有关联的连接器任务</p><p>编辑连接时使用，如果不传，则根据认证类型及认证参数是否发生变化，来判断是否更新并重启所有关联的连接器任务</p>
                     * @param _isUpdate <p>是否更新并重启所有关联的连接器任务</p><p>编辑连接时使用，如果不传，则根据认证类型及认证参数是否发生变化，来判断是否更新并重启所有关联的连接器任务</p>
                     * 
                     */
                    void SetIsUpdate(const bool& _isUpdate);

                    /**
                     * 判断参数 IsUpdate 是否已赋值
                     * @return IsUpdate 是否已赋值
                     * 
                     */
                    bool IsUpdateHasBeenSet() const;

                private:

                    /**
                     * <p>EMR实例的HiveMetaStore节点IP</p><p>参数格式：多个使用英文分号;分隔</p><p>创建连接时必选，编辑连接时不接收该参数</p>
                     */
                    std::string m_serviceVip;
                    bool m_serviceVipHasBeenSet;

                    /**
                     * <p>EMR实例ID</p><p>创建连接时必选，编辑连接时不接收该参数</p>
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * <p>EMR实例的集群网络vpcId</p><p>创建连接时必选，编辑连接时不接收该参数</p>
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * <p>认证类型</p><p>枚举值：</p><ul><li>NONE： 无认证</li><li>KERBEROS： Kerberos认证</li></ul><p>开启Kerberos认证的EMR实例，此处需传入KERBEROS，创建连接时必选，编辑连接时非必选</p>
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * <p>EMR实例的HiveMetaStore节点IP绑定的弹性网卡Id列表</p><p>数量和顺序必须与ServiceVip字段中的多个IP对应，创建连接时必选，编辑连接时不接收该参数</p>
                     */
                    std::vector<std::string> m_eniIdList;
                    bool m_eniIdListHasBeenSet;

                    /**
                     * <p>Catalog数据目录类型</p><p>枚举值：</p><ul><li>HIVE： Hive Catalog</li></ul><p>默认值：HIVE</p><p>仅支持Hive Catalog</p>
                     */
                    std::string m_catalogType;
                    bool m_catalogTypeHasBeenSet;

                    /**
                     * <p>用于Kerberos认证的user.keytab文件的内容</p><p>入参限制：文件内容需使用Base64编码</p><p>AuthType为KERBEROS时必传</p>
                     */
                    std::string m_keyTabContent;
                    bool m_keyTabContentHasBeenSet;

                    /**
                     * <p>用于Kerberos认证的krb5.conf文件的内容</p><p>入参限制：文件内容需使用Base64编码</p><p>AuthType为KERBEROS时必传</p>
                     */
                    std::string m_kRB5ConfContent;
                    bool m_kRB5ConfContentHasBeenSet;

                    /**
                     * <p>用户的Kerberos身份凭证</p>
                     */
                    std::string m_kerberosUserPrincipal;
                    bool m_kerberosUserPrincipalHasBeenSet;

                    /**
                     * <p>HiveMetastore服务端配置的Kerberos Principal</p><p>hive-site.xml中hive.metastore.kerberos.principal的值</p>
                     */
                    std::string m_kerberosPrincipal;
                    bool m_kerberosPrincipalHasBeenSet;

                    /**
                     * <p>是否更新并重启所有关联的连接器任务</p><p>编辑连接时使用，如果不传，则根据认证类型及认证参数是否发生变化，来判断是否更新并重启所有关联的连接器任务</p>
                     */
                    bool m_isUpdate;
                    bool m_isUpdateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ICEBERGCONNECTPARAM_H_
