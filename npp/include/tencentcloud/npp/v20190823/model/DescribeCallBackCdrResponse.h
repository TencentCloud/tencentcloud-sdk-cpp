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

#ifndef TENCENTCLOUD_NPP_V20190823_MODEL_DESCRIBECALLBACKCDRRESPONSE_H_
#define TENCENTCLOUD_NPP_V20190823_MODEL_DESCRIBECALLBACKCDRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/npp/v20190823/model/CallBackCdr.h>


namespace TencentCloud
{
    namespace Npp
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DescribeCallBackCdr返回参数结构体
                */
                class DescribeCallBackCdrResponse : public AbstractModel
                {
                public:
                    DescribeCallBackCdrResponse();
                    ~DescribeCallBackCdrResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取话单列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cdr 话单列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CallBackCdr> GetCdr() const;

                    /**
                     * 判断参数 Cdr 是否已赋值
                     * @return Cdr 是否已赋值
                     * 
                     */
                    bool CdrHasBeenSet() const;

                    /**
                     * 获取偏移
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Offset 偏移
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorCode 错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取错误原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Msg 错误原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                private:

                    /**
                     * 话单列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CallBackCdr> m_cdr;
                    bool m_cdrHasBeenSet;

                    /**
                     * 偏移
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 错误码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 错误原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NPP_V20190823_MODEL_DESCRIBECALLBACKCDRRESPONSE_H_
