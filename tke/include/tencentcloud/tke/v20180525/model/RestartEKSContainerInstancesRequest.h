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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_RESTARTEKSCONTAINERINSTANCESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_RESTARTEKSCONTAINERINSTANCESREQUEST_H_

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
                * RestartEKSContainerInstances请求参数结构体
                */
                class RestartEKSContainerInstancesRequest : public AbstractModel
                {
                public:
                    RestartEKSContainerInstancesRequest();
                    ~RestartEKSContainerInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EKS instance ids
                     * @return EksCiIds EKS instance ids
                     * 
                     */
                    std::vector<std::string> GetEksCiIds() const;

                    /**
                     * 设置EKS instance ids
                     * @param _eksCiIds EKS instance ids
                     * 
                     */
                    void SetEksCiIds(const std::vector<std::string>& _eksCiIds);

                    /**
                     * 判断参数 EksCiIds 是否已赋值
                     * @return EksCiIds 是否已赋值
                     * 
                     */
                    bool EksCiIdsHasBeenSet() const;

                private:

                    /**
                     * EKS instance ids
                     */
                    std::vector<std::string> m_eksCiIds;
                    bool m_eksCiIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_RESTARTEKSCONTAINERINSTANCESREQUEST_H_
