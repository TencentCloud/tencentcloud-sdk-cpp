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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_GETPROVISIONEDCONCURRENCYCONFIGRESPONSE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_GETPROVISIONEDCONCURRENCYCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/VersionProvisionedConcurrencyInfo.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetProvisionedConcurrencyConfig返回参数结构体
                */
                class GetProvisionedConcurrencyConfigResponse : public AbstractModel
                {
                public:
                    GetProvisionedConcurrencyConfigResponse();
                    ~GetProvisionedConcurrencyConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取该函数剩余可配置的预置并发数。
                     * @return UnallocatedConcurrencyNum 该函数剩余可配置的预置并发数。
                     * 
                     */
                    uint64_t GetUnallocatedConcurrencyNum() const;

                    /**
                     * 判断参数 UnallocatedConcurrencyNum 是否已赋值
                     * @return UnallocatedConcurrencyNum 是否已赋值
                     * 
                     */
                    bool UnallocatedConcurrencyNumHasBeenSet() const;

                    /**
                     * 获取函数已预置的并发配置详情。
                     * @return Allocated 函数已预置的并发配置详情。
                     * 
                     */
                    std::vector<VersionProvisionedConcurrencyInfo> GetAllocated() const;

                    /**
                     * 判断参数 Allocated 是否已赋值
                     * @return Allocated 是否已赋值
                     * 
                     */
                    bool AllocatedHasBeenSet() const;

                private:

                    /**
                     * 该函数剩余可配置的预置并发数。
                     */
                    uint64_t m_unallocatedConcurrencyNum;
                    bool m_unallocatedConcurrencyNumHasBeenSet;

                    /**
                     * 函数已预置的并发配置详情。
                     */
                    std::vector<VersionProvisionedConcurrencyInfo> m_allocated;
                    bool m_allocatedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_GETPROVISIONEDCONCURRENCYCONFIGRESPONSE_H_
