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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBESUPPORTEDRUNTIMEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBESUPPORTEDRUNTIMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeSupportedRuntime请求参数结构体
                */
                class DescribeSupportedRuntimeRequest : public AbstractModel
                {
                public:
                    DescribeSupportedRuntimeRequest();
                    ~DescribeSupportedRuntimeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取K8S版本
                     * @return K8sVersion K8S版本
                     * 
                     */
                    std::string GetK8sVersion() const;

                    /**
                     * 设置K8S版本
                     * @param _k8sVersion K8S版本
                     * 
                     */
                    void SetK8sVersion(const std::string& _k8sVersion);

                    /**
                     * 判断参数 K8sVersion 是否已赋值
                     * @return K8sVersion 是否已赋值
                     * 
                     */
                    bool K8sVersionHasBeenSet() const;

                private:

                    /**
                     * K8S版本
                     */
                    std::string m_k8sVersion;
                    bool m_k8sVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBESUPPORTEDRUNTIMEREQUEST_H_
