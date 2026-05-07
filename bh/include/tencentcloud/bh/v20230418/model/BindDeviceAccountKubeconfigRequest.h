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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_BINDDEVICEACCOUNTKUBECONFIGREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_BINDDEVICEACCOUNTKUBECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * BindDeviceAccountKubeconfig请求参数结构体
                */
                class BindDeviceAccountKubeconfigRequest : public AbstractModel
                {
                public:
                    BindDeviceAccountKubeconfigRequest();
                    ~BindDeviceAccountKubeconfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取容器账号Id
                     * @return Id 容器账号Id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置容器账号Id
                     * @param _id 容器账号Id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取容器账号凭据
                     * @return Kubeconfig 容器账号凭据
                     * 
                     */
                    std::string GetKubeconfig() const;

                    /**
                     * 设置容器账号凭据
                     * @param _kubeconfig 容器账号凭据
                     * 
                     */
                    void SetKubeconfig(const std::string& _kubeconfig);

                    /**
                     * 判断参数 Kubeconfig 是否已赋值
                     * @return Kubeconfig 是否已赋值
                     * 
                     */
                    bool KubeconfigHasBeenSet() const;

                    /**
                     * 获取托管维度。1-集群
                     * @return ManageDimension 托管维度。1-集群
                     * 
                     */
                    uint64_t GetManageDimension() const;

                    /**
                     * 设置托管维度。1-集群
                     * @param _manageDimension 托管维度。1-集群
                     * 
                     */
                    void SetManageDimension(const uint64_t& _manageDimension);

                    /**
                     * 判断参数 ManageDimension 是否已赋值
                     * @return ManageDimension 是否已赋值
                     * 
                     */
                    bool ManageDimensionHasBeenSet() const;

                private:

                    /**
                     * 容器账号Id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 容器账号凭据
                     */
                    std::string m_kubeconfig;
                    bool m_kubeconfigHasBeenSet;

                    /**
                     * 托管维度。1-集群
                     */
                    uint64_t m_manageDimension;
                    bool m_manageDimensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_BINDDEVICEACCOUNTKUBECONFIGREQUEST_H_
