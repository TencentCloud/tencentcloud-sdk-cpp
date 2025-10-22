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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATESECURITYAPIRESOURCERESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATESECURITYAPIRESOURCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateSecurityAPIResource返回参数结构体
                */
                class CreateSecurityAPIResourceResponse : public AbstractModel
                {
                public:
                    CreateSecurityAPIResourceResponse();
                    ~CreateSecurityAPIResourceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取API 资源 ID 列表。
                     * @return APIResourceIds API 资源 ID 列表。
                     * 
                     */
                    std::vector<std::string> GetAPIResourceIds() const;

                    /**
                     * 判断参数 APIResourceIds 是否已赋值
                     * @return APIResourceIds 是否已赋值
                     * 
                     */
                    bool APIResourceIdsHasBeenSet() const;

                private:

                    /**
                     * API 资源 ID 列表。
                     */
                    std::vector<std::string> m_aPIResourceIds;
                    bool m_aPIResourceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATESECURITYAPIRESOURCERESPONSE_H_
