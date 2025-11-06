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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_SETSTAFFSTATUSRSPITEM_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_SETSTAFFSTATUSRSPITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 设置 staff 状态应答 item
                */
                class SetStaffStatusRspItem : public AbstractModel
                {
                public:
                    SetStaffStatusRspItem();
                    ~SetStaffStatusRspItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取座席账号
                     * @return StaffUserId 座席账号
                     * 
                     */
                    std::string GetStaffUserId() const;

                    /**
                     * 设置座席账号
                     * @param _staffUserId 座席账号
                     * 
                     */
                    void SetStaffUserId(const std::string& _staffUserId);

                    /**
                     * 判断参数 StaffUserId 是否已赋值
                     * @return StaffUserId 是否已赋值
                     * 
                     */
                    bool StaffUserIdHasBeenSet() const;

                    /**
                     * 获取错误码，参考协议整体错误码
                     * @return ErrorCode 错误码，参考协议整体错误码
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 设置错误码，参考协议整体错误码
                     * @param _errorCode 错误码，参考协议整体错误码
                     * 
                     */
                    void SetErrorCode(const std::string& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return ErrorMessage 错误信息
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置错误信息
                     * @param _errorMessage 错误信息
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取当前状态
                     * @return Status 当前状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置当前状态
                     * @param _status 当前状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取当前状态如果是小休，这里是原因
                     * @return Reason 当前状态如果是小休，这里是原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置当前状态如果是小休，这里是原因
                     * @param _reason 当前状态如果是小休，这里是原因
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取之前状态
                     * @return PreviousStatus 之前状态
                     * 
                     */
                    std::string GetPreviousStatus() const;

                    /**
                     * 设置之前状态
                     * @param _previousStatus 之前状态
                     * 
                     */
                    void SetPreviousStatus(const std::string& _previousStatus);

                    /**
                     * 判断参数 PreviousStatus 是否已赋值
                     * @return PreviousStatus 是否已赋值
                     * 
                     */
                    bool PreviousStatusHasBeenSet() const;

                    /**
                     * 获取之前状态如果是小休，这里是原因
                     * @return PreviousReason 之前状态如果是小休，这里是原因
                     * 
                     */
                    std::string GetPreviousReason() const;

                    /**
                     * 设置之前状态如果是小休，这里是原因
                     * @param _previousReason 之前状态如果是小休，这里是原因
                     * 
                     */
                    void SetPreviousReason(const std::string& _previousReason);

                    /**
                     * 判断参数 PreviousReason 是否已赋值
                     * @return PreviousReason 是否已赋值
                     * 
                     */
                    bool PreviousReasonHasBeenSet() const;

                private:

                    /**
                     * 座席账号
                     */
                    std::string m_staffUserId;
                    bool m_staffUserIdHasBeenSet;

                    /**
                     * 错误码，参考协议整体错误码
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 当前状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 当前状态如果是小休，这里是原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 之前状态
                     */
                    std::string m_previousStatus;
                    bool m_previousStatusHasBeenSet;

                    /**
                     * 之前状态如果是小休，这里是原因
                     */
                    std::string m_previousReason;
                    bool m_previousReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_SETSTAFFSTATUSRSPITEM_H_
