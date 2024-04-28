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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_RESETSESSIONREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_RESETSESSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ResetSession请求参数结构体
                */
                class ResetSessionRequest : public AbstractModel
                {
                public:
                    ResetSessionRequest();
                    ~ResetSessionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取会话ID
                     * @return SessionId 会话ID
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置会话ID
                     * @param _sessionId 会话ID
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取是否仅清空会话关联
                     * @return IsOnlyEmptyTheDialog 是否仅清空会话关联
                     * 
                     */
                    bool GetIsOnlyEmptyTheDialog() const;

                    /**
                     * 设置是否仅清空会话关联
                     * @param _isOnlyEmptyTheDialog 是否仅清空会话关联
                     * 
                     */
                    void SetIsOnlyEmptyTheDialog(const bool& _isOnlyEmptyTheDialog);

                    /**
                     * 判断参数 IsOnlyEmptyTheDialog 是否已赋值
                     * @return IsOnlyEmptyTheDialog 是否已赋值
                     * 
                     */
                    bool IsOnlyEmptyTheDialogHasBeenSet() const;

                private:

                    /**
                     * 会话ID
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 是否仅清空会话关联
                     */
                    bool m_isOnlyEmptyTheDialog;
                    bool m_isOnlyEmptyTheDialogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_RESETSESSIONREQUEST_H_
