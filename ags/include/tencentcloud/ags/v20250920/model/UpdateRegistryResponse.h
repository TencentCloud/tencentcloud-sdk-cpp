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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_UPDATEREGISTRYRESPONSE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_UPDATEREGISTRYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/CloudRegistry.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * UpdateRegistry返回参数结构体
                */
                class UpdateRegistryResponse : public AbstractModel
                {
                public:
                    UpdateRegistryResponse();
                    ~UpdateRegistryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>更新后的 Registry 详情。</p>
                     * @return Registry <p>更新后的 Registry 详情。</p>
                     * 
                     */
                    CloudRegistry GetRegistry() const;

                    /**
                     * 判断参数 Registry 是否已赋值
                     * @return Registry 是否已赋值
                     * 
                     */
                    bool RegistryHasBeenSet() const;

                private:

                    /**
                     * <p>更新后的 Registry 详情。</p>
                     */
                    CloudRegistry m_registry;
                    bool m_registryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_UPDATEREGISTRYRESPONSE_H_
