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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OPENSSLREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OPENSSLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * OpenSSL请求参数结构体
                */
                class OpenSSLRequest : public AbstractModel
                {
                public:
                    OpenSSLRequest();
                    ~OpenSSLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>证书类型</p><p>枚举值：</p><ul><li>platform： 云端证书</li><li>custom： 自定义证书</li></ul><p>默认值：platform</p>
                     * @return CertType <p>证书类型</p><p>枚举值：</p><ul><li>platform： 云端证书</li><li>custom： 自定义证书</li></ul><p>默认值：platform</p>
                     * 
                     */
                    std::string GetCertType() const;

                    /**
                     * 设置<p>证书类型</p><p>枚举值：</p><ul><li>platform： 云端证书</li><li>custom： 自定义证书</li></ul><p>默认值：platform</p>
                     * @param _certType <p>证书类型</p><p>枚举值：</p><ul><li>platform： 云端证书</li><li>custom： 自定义证书</li></ul><p>默认值：platform</p>
                     * 
                     */
                    void SetCertType(const std::string& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取<p>证书ID，CertType=custom 时必传</p>
                     * @return CertId <p>证书ID，CertType=custom 时必传</p>
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置<p>证书ID，CertType=custom 时必传</p>
                     * @param _certId <p>证书ID，CertType=custom 时必传</p>
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>证书类型</p><p>枚举值：</p><ul><li>platform： 云端证书</li><li>custom： 自定义证书</li></ul><p>默认值：platform</p>
                     */
                    std::string m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * <p>证书ID，CertType=custom 时必传</p>
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OPENSSLREQUEST_H_
