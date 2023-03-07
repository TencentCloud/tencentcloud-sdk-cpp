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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCUSTOMERSCREDITRESPONSE_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCUSTOMERSCREDITRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCustomersCreditData.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * QueryCustomersCredit返回参数结构体
                */
                class QueryCustomersCreditResponse : public AbstractModel
                {
                public:
                    QueryCustomersCreditResponse();
                    ~QueryCustomersCreditResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询客户列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 查询客户列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QueryCustomersCreditData> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取客户数量
                     * @return Total 客户数量
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 查询客户列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QueryCustomersCreditData> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 客户数量
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCUSTOMERSCREDITRESPONSE_H_
