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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CHECKINSTANCEREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CHECKINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CheckInstance请求参数结构体
                */
                class CheckInstanceRequest : public AbstractModel
                {
                public:
                    CheckInstanceRequest();
                    ~CheckInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待检测的实例Id
                     * @return RegistryId 待检测的实例Id
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置待检测的实例Id
                     * @param _registryId 待检测的实例Id
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                private:

                    /**
                     * 待检测的实例Id
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CHECKINSTANCEREQUEST_H_
