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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_GETRESERVEDCONCURRENCYCONFIGRESPONSE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_GETRESERVEDCONCURRENCYCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetReservedConcurrencyConfig返回参数结构体
                */
                class GetReservedConcurrencyConfigResponse : public AbstractModel
                {
                public:
                    GetReservedConcurrencyConfigResponse();
                    ~GetReservedConcurrencyConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取该函数的最大独占配额。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReservedMem 该函数的最大独占配额。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetReservedMem() const;

                    /**
                     * 判断参数 ReservedMem 是否已赋值
                     * @return ReservedMem 是否已赋值
                     * 
                     */
                    bool ReservedMemHasBeenSet() const;

                private:

                    /**
                     * 该函数的最大独占配额。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_reservedMem;
                    bool m_reservedMemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_GETRESERVEDCONCURRENCYCONFIGRESPONSE_H_
