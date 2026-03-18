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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_GETPROVIDERSRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_GETPROVIDERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/Provider.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * GetProviders返回参数结构体
                */
                class GetProvidersResponse : public AbstractModel
                {
                public:
                    GetProvidersResponse();
                    ~GetProvidersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取三方认证源列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 三方认证源列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Provider> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 三方认证源列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Provider> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_GETPROVIDERSRESPONSE_H_
