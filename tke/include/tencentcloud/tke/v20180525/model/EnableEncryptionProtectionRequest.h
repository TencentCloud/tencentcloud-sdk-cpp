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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ENABLEENCRYPTIONPROTECTIONREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ENABLEENCRYPTIONPROTECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/KMSConfiguration.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * EnableEncryptionProtection请求参数结构体
                */
                class EnableEncryptionProtectionRequest : public AbstractModel
                {
                public:
                    EnableEncryptionProtectionRequest();
                    ~EnableEncryptionProtectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取kms加密配置
                     * @return KMSConfiguration kms加密配置
                     * 
                     */
                    KMSConfiguration GetKMSConfiguration() const;

                    /**
                     * 设置kms加密配置
                     * @param _kMSConfiguration kms加密配置
                     * 
                     */
                    void SetKMSConfiguration(const KMSConfiguration& _kMSConfiguration);

                    /**
                     * 判断参数 KMSConfiguration 是否已赋值
                     * @return KMSConfiguration 是否已赋值
                     * 
                     */
                    bool KMSConfigurationHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * kms加密配置
                     */
                    KMSConfiguration m_kMSConfiguration;
                    bool m_kMSConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ENABLEENCRYPTIONPROTECTIONREQUEST_H_
