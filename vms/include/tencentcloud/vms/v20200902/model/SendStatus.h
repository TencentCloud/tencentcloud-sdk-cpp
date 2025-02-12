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

#ifndef TENCENTCLOUD_VMS_V20200902_MODEL_SENDSTATUS_H_
#define TENCENTCLOUD_VMS_V20200902_MODEL_SENDSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vms
    {
        namespace V20200902
        {
            namespace Model
            {
                /**
                * 语音验证码发送状态
                */
                class SendStatus : public AbstractModel
                {
                public:
                    SendStatus();
                    ~SendStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标识本次发送 ID，标识一次下发记录。
                     * @return CallId 标识本次发送 ID，标识一次下发记录。
                     * 
                     */
                    std::string GetCallId() const;

                    /**
                     * 设置标识本次发送 ID，标识一次下发记录。
                     * @param _callId 标识本次发送 ID，标识一次下发记录。
                     * 
                     */
                    void SetCallId(const std::string& _callId);

                    /**
                     * 判断参数 CallId 是否已赋值
                     * @return CallId 是否已赋值
                     * 
                     */
                    bool CallIdHasBeenSet() const;

                    /**
                     * 获取用户的 session 内容，腾讯 server 回包中会原样返回。
                     * @return SessionContext 用户的 session 内容，腾讯 server 回包中会原样返回。
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置用户的 session 内容，腾讯 server 回包中会原样返回。
                     * @param _sessionContext 用户的 session 内容，腾讯 server 回包中会原样返回。
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                private:

                    /**
                     * 标识本次发送 ID，标识一次下发记录。
                     */
                    std::string m_callId;
                    bool m_callIdHasBeenSet;

                    /**
                     * 用户的 session 内容，腾讯 server 回包中会原样返回。
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VMS_V20200902_MODEL_SENDSTATUS_H_
