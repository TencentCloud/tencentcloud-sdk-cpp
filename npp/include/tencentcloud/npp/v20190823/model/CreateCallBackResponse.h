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

#ifndef TENCENTCLOUD_NPP_V20190823_MODEL_CREATECALLBACKRESPONSE_H_
#define TENCENTCLOUD_NPP_V20190823_MODEL_CREATECALLBACKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Npp
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * CreateCallBack返回参数结构体
                */
                class CreateCallBackResponse : public AbstractModel
                {
                public:
                    CreateCallBackResponse();
                    ~CreateCallBackResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取话单id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CallId 话单id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCallId() const;

                    /**
                     * 判断参数 CallId 是否已赋值
                     * @return CallId 是否已赋值
                     * 
                     */
                    bool CallIdHasBeenSet() const;

                    /**
                     * 获取主叫显示系统分配的固话号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SrcDisplayNum 主叫显示系统分配的固话号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSrcDisplayNum() const;

                    /**
                     * 判断参数 SrcDisplayNum 是否已赋值
                     * @return SrcDisplayNum 是否已赋值
                     * 
                     */
                    bool SrcDisplayNumHasBeenSet() const;

                    /**
                     * 获取被叫显示系统分配的固话号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DstDisplayNum 被叫显示系统分配的固话号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDstDisplayNum() const;

                    /**
                     * 判断参数 DstDisplayNum 是否已赋值
                     * @return DstDisplayNum 是否已赋值
                     * 
                     */
                    bool DstDisplayNumHasBeenSet() const;

                    /**
                     * 获取错误码
                     * @return ErrorCode 错误码
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
                     * 话单id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_callId;
                    bool m_callIdHasBeenSet;

                    /**
                     * 主叫显示系统分配的固话号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_srcDisplayNum;
                    bool m_srcDisplayNumHasBeenSet;

                    /**
                     * 被叫显示系统分配的固话号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dstDisplayNum;
                    bool m_dstDisplayNumHasBeenSet;

                    /**
                     * 错误码
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

#endif // !TENCENTCLOUD_NPP_V20190823_MODEL_CREATECALLBACKRESPONSE_H_
