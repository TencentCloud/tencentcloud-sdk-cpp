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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_SUBNETALLOCATIONPOLICY_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_SUBNETALLOCATIONPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/SubnetAllocation.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 子网资源分配策略，精确控制各子网之间的资源分配比例。
                */
                class SubnetAllocationPolicy : public AbstractModel
                {
                public:
                    SubnetAllocationPolicy();
                    ~SubnetAllocationPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>子网分配列表</p>
                     * @return Allocations <p>子网分配列表</p>
                     * 
                     */
                    std::vector<SubnetAllocation> GetAllocations() const;

                    /**
                     * 设置<p>子网分配列表</p>
                     * @param _allocations <p>子网分配列表</p>
                     * 
                     */
                    void SetAllocations(const std::vector<SubnetAllocation>& _allocations);

                    /**
                     * 判断参数 Allocations 是否已赋值
                     * @return Allocations 是否已赋值
                     * 
                     */
                    bool AllocationsHasBeenSet() const;

                private:

                    /**
                     * <p>子网分配列表</p>
                     */
                    std::vector<SubnetAllocation> m_allocations;
                    bool m_allocationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_SUBNETALLOCATIONPOLICY_H_
