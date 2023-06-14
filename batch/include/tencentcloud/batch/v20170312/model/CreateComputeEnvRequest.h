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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_CREATECOMPUTEENVREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_CREATECOMPUTEENVREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/NamedComputeEnv.h>
#include <tencentcloud/batch/v20170312/model/Placement.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateComputeEnv请求参数结构体
                */
                class CreateComputeEnvRequest : public AbstractModel
                {
                public:
                    CreateComputeEnvRequest();
                    ~CreateComputeEnvRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取计算环境信息
                     * @return ComputeEnv 计算环境信息
                     * 
                     */
                    NamedComputeEnv GetComputeEnv() const;

                    /**
                     * 设置计算环境信息
                     * @param _computeEnv 计算环境信息
                     * 
                     */
                    void SetComputeEnv(const NamedComputeEnv& _computeEnv);

                    /**
                     * 判断参数 ComputeEnv 是否已赋值
                     * @return ComputeEnv 是否已赋值
                     * 
                     */
                    bool ComputeEnvHasBeenSet() const;

                    /**
                     * 获取位置信息
                     * @return Placement 位置信息
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置位置信息
                     * @param _placement 位置信息
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取用于保证请求幂等性的字符串。该字符串由用户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * @return ClientToken 用于保证请求幂等性的字符串。该字符串由用户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置用于保证请求幂等性的字符串。该字符串由用户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * @param _clientToken 用于保证请求幂等性的字符串。该字符串由用户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * 计算环境信息
                     */
                    NamedComputeEnv m_computeEnv;
                    bool m_computeEnvHasBeenSet;

                    /**
                     * 位置信息
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 用于保证请求幂等性的字符串。该字符串由用户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_CREATECOMPUTEENVREQUEST_H_
