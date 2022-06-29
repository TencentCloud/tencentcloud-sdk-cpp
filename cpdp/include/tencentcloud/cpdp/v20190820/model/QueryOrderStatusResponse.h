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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYORDERSTATUSRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYORDERSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/QueryOrderStatusResult.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryOrderStatus返回参数结构体
                */
                class QueryOrderStatusResponse : public AbstractModel
                {
                public:
                    QueryOrderStatusResponse();
                    ~QueryOrderStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取业务系统返回码，0表示成功，其他表示失败。
                     * @return ErrCode 业务系统返回码，0表示成功，其他表示失败。
                     */
                    std::string GetErrCode() const;

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取业务系统返回消息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrMessage 业务系统返回消息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetErrMessage() const;

                    /**
                     * 判断参数 ErrMessage 是否已赋值
                     * @return ErrMessage 是否已赋值
                     */
                    bool ErrMessageHasBeenSet() const;

                    /**
                     * 获取查询订单付款状态结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result 查询订单付款状态结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QueryOrderStatusResult GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 业务系统返回码，0表示成功，其他表示失败。
                     */
                    std::string m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 业务系统返回消息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errMessage;
                    bool m_errMessageHasBeenSet;

                    /**
                     * 查询订单付款状态结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QueryOrderStatusResult m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYORDERSTATUSRESPONSE_H_
