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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_PURCHASERESOURCEPOOLPACKSRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_PURCHASERESOURCEPOOLPACKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * PurchaseResourcePoolPacks返回参数结构体
                */
                class PurchaseResourcePoolPacksResponse : public AbstractModel
                {
                public:
                    PurchaseResourcePoolPacksResponse();
                    ~PurchaseResourcePoolPacksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取创建的实例资源池ID列表。形如：rpp-39kj2fsb。
                     * @return DedicatedResourcePackIdSet 创建的实例资源池ID列表。形如：rpp-39kj2fsb。
                     * 
                     */
                    std::vector<std::string> GetDedicatedResourcePackIdSet() const;

                    /**
                     * 判断参数 DedicatedResourcePackIdSet 是否已赋值
                     * @return DedicatedResourcePackIdSet 是否已赋值
                     * 
                     */
                    bool DedicatedResourcePackIdSetHasBeenSet() const;

                private:

                    /**
                     * 创建的实例资源池ID列表。形如：rpp-39kj2fsb。
                     */
                    std::vector<std::string> m_dedicatedResourcePackIdSet;
                    bool m_dedicatedResourcePackIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_PURCHASERESOURCEPOOLPACKSRESPONSE_H_
