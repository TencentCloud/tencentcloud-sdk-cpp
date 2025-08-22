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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_CLEAREMBEDTOKENRESPONSE_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_CLEAREMBEDTOKENRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/ErrorInfo.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * ClearEmbedToken返回参数结构体
                */
                class ClearEmbedTokenResponse : public AbstractModel
                {
                public:
                    ClearEmbedTokenResponse();
                    ~ClearEmbedTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义错误信息对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorInfo 自定义错误信息对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ErrorInfo GetErrorInfo() const;

                    /**
                     * 判断参数 ErrorInfo 是否已赋值
                     * @return ErrorInfo 是否已赋值
                     * 
                     */
                    bool ErrorInfoHasBeenSet() const;

                    /**
                     * 获取额外消息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Extra 额外消息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取提示消息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Msg 提示消息
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

                    /**
                     * 获取结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 自定义错误信息对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ErrorInfo m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                    /**
                     * 额外消息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * 提示消息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * 结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_CLEAREMBEDTOKENRESPONSE_H_
