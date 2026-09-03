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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DELETEINFERENCESERVICEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DELETEINFERENCESERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DeleteInferenceService请求参数结构体
                */
                class DeleteInferenceServiceRequest : public AbstractModel
                {
                public:
                    DeleteInferenceServiceRequest();
                    ~DeleteInferenceServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>推理服务ID</p>
                     * @return ServiceId <p>推理服务ID</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>推理服务ID</p>
                     * @param _serviceId <p>推理服务ID</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>删除关联的 APIKeys</p>
                     * @return DeleteBoundApiKeys <p>删除关联的 APIKeys</p>
                     * 
                     */
                    bool GetDeleteBoundApiKeys() const;

                    /**
                     * 设置<p>删除关联的 APIKeys</p>
                     * @param _deleteBoundApiKeys <p>删除关联的 APIKeys</p>
                     * 
                     */
                    void SetDeleteBoundApiKeys(const bool& _deleteBoundApiKeys);

                    /**
                     * 判断参数 DeleteBoundApiKeys 是否已赋值
                     * @return DeleteBoundApiKeys 是否已赋值
                     * 
                     */
                    bool DeleteBoundApiKeysHasBeenSet() const;

                private:

                    /**
                     * <p>推理服务ID</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>删除关联的 APIKeys</p>
                     */
                    bool m_deleteBoundApiKeys;
                    bool m_deleteBoundApiKeysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DELETEINFERENCESERVICEREQUEST_H_
