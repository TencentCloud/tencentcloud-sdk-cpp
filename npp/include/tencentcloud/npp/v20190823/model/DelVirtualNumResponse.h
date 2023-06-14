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

#ifndef TENCENTCLOUD_NPP_V20190823_MODEL_DELVIRTUALNUMRESPONSE_H_
#define TENCENTCLOUD_NPP_V20190823_MODEL_DELVIRTUALNUMRESPONSE_H_

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
                * DelVirtualNum返回参数结构体
                */
                class DelVirtualNumResponse : public AbstractModel
                {
                public:
                    DelVirtualNumResponse();
                    ~DelVirtualNumResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


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
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Msg 错误信息
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
                     * 获取绑定 ID，该 ID 全局唯一
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BindId 绑定 ID，该 ID 全局唯一
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBindId() const;

                    /**
                     * 判断参数 BindId 是否已赋值
                     * @return BindId 是否已赋值
                     * 
                     */
                    bool BindIdHasBeenSet() const;

                    /**
                     * 获取中间号还剩引用计数，如果计数为 0 会解绑
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RefLeftNum 中间号还剩引用计数，如果计数为 0 会解绑
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRefLeftNum() const;

                    /**
                     * 判断参数 RefLeftNum 是否已赋值
                     * @return RefLeftNum 是否已赋值
                     * 
                     */
                    bool RefLeftNumHasBeenSet() const;

                private:

                    /**
                     * 错误码
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * 绑定 ID，该 ID 全局唯一
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bindId;
                    bool m_bindIdHasBeenSet;

                    /**
                     * 中间号还剩引用计数，如果计数为 0 会解绑
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_refLeftNum;
                    bool m_refLeftNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NPP_V20190823_MODEL_DELVIRTUALNUMRESPONSE_H_
