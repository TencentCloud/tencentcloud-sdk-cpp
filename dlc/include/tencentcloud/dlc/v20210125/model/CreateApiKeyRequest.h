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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEAPIKEYREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEAPIKEYREQUEST_H_

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
                * CreateApiKey请求参数结构体
                */
                class CreateApiKeyRequest : public AbstractModel
                {
                public:
                    CreateApiKeyRequest();
                    ~CreateApiKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>API Key 名称</p>
                     * @return Name <p>API Key 名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>API Key 名称</p>
                     * @param _name <p>API Key 名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>绑定的推理服务ID（可选，为空表示创建后不绑定任何服务）</p>
                     * @return ServiceId <p>绑定的推理服务ID（可选，为空表示创建后不绑定任何服务）</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>绑定的推理服务ID（可选，为空表示创建后不绑定任何服务）</p>
                     * @param _serviceId <p>绑定的推理服务ID（可选，为空表示创建后不绑定任何服务）</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                private:

                    /**
                     * <p>API Key 名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>绑定的推理服务ID（可选，为空表示创建后不绑定任何服务）</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEAPIKEYREQUEST_H_
