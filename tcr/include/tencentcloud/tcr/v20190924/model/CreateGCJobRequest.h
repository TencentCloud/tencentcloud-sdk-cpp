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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATEGCJOBREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATEGCJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/GCParameters.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CreateGCJob请求参数结构体
                */
                class CreateGCJobRequest : public AbstractModel
                {
                public:
                    CreateGCJobRequest();
                    ~CreateGCJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 Id
                     * @return RegistryId 实例 Id
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置实例 Id
                     * @param _registryId 实例 Id
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取GC 参数
                     * @return GCParameters GC 参数
                     * 
                     */
                    GCParameters GetGCParameters() const;

                    /**
                     * 设置GC 参数
                     * @param _gCParameters GC 参数
                     * 
                     */
                    void SetGCParameters(const GCParameters& _gCParameters);

                    /**
                     * 判断参数 GCParameters 是否已赋值
                     * @return GCParameters 是否已赋值
                     * 
                     */
                    bool GCParametersHasBeenSet() const;

                private:

                    /**
                     * 实例 Id
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * GC 参数
                     */
                    GCParameters m_gCParameters;
                    bool m_gCParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATEGCJOBREQUEST_H_
