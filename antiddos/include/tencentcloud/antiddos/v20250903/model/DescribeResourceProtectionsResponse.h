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

#ifndef TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_DESCRIBERESOURCEPROTECTIONSRESPONSE_H_
#define TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_DESCRIBERESOURCEPROTECTIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20250903/model/ResourceProtection.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20250903
        {
            namespace Model
            {
                /**
                * DescribeResourceProtections返回参数结构体
                */
                class DescribeResourceProtectionsResponse : public AbstractModel
                {
                public:
                    DescribeResourceProtectionsResponse();
                    ~DescribeResourceProtectionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>防护资源对应的防护实例列表。资源未绑定任何防护实例时，返回空数组。</p>
                     * @return ResourceProtections <p>防护资源对应的防护实例列表。资源未绑定任何防护实例时，返回空数组。</p>
                     * 
                     */
                    std::vector<ResourceProtection> GetResourceProtections() const;

                    /**
                     * 判断参数 ResourceProtections 是否已赋值
                     * @return ResourceProtections 是否已赋值
                     * 
                     */
                    bool ResourceProtectionsHasBeenSet() const;

                private:

                    /**
                     * <p>防护资源对应的防护实例列表。资源未绑定任何防护实例时，返回空数组。</p>
                     */
                    std::vector<ResourceProtection> m_resourceProtections;
                    bool m_resourceProtectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_DESCRIBERESOURCEPROTECTIONSRESPONSE_H_
