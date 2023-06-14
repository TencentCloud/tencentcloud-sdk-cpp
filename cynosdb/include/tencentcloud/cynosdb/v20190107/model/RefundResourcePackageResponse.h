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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REFUNDRESOURCEPACKAGERESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REFUNDRESOURCEPACKAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * RefundResourcePackage返回参数结构体
                */
                class RefundResourcePackageResponse : public AbstractModel
                {
                public:
                    RefundResourcePackageResponse();
                    ~RefundResourcePackageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取每个物品对应一个dealName，业务需要根据dealName保证发货接口幂等
                     * @return DealNames 每个物品对应一个dealName，业务需要根据dealName保证发货接口幂等
                     * 
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 判断参数 DealNames 是否已赋值
                     * @return DealNames 是否已赋值
                     * 
                     */
                    bool DealNamesHasBeenSet() const;

                private:

                    /**
                     * 每个物品对应一个dealName，业务需要根据dealName保证发货接口幂等
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REFUNDRESOURCEPACKAGERESPONSE_H_
