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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEREGISTRYREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEREGISTRYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DescribeRegistry请求参数结构体
                */
                class DescribeRegistryRequest : public AbstractModel
                {
                public:
                    DescribeRegistryRequest();
                    ~DescribeRegistryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Registry ID。</p>
                     * @return RegistryId <p>Registry ID。</p>
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置<p>Registry ID。</p>
                     * @param _registryId <p>Registry ID。</p>
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
                     * <p>Registry ID。</p>
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEREGISTRYREQUEST_H_
