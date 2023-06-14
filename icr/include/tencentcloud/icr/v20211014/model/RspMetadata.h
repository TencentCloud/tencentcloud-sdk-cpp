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

#ifndef TENCENTCLOUD_ICR_V20211014_MODEL_RSPMETADATA_H_
#define TENCENTCLOUD_ICR_V20211014_MODEL_RSPMETADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Icr
    {
        namespace V20211014
        {
            namespace Model
            {
                /**
                * 回包的meta data
                */
                class RspMetadata : public AbstractModel
                {
                public:
                    RspMetadata();
                    ~RspMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取无
                     * @return Code 无
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置无
                     * @param _code 无
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取无
                     * @return Message 无
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置无
                     * @param _message 无
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取无
                     * @return SessionID 无
                     * 
                     */
                    std::string GetSessionID() const;

                    /**
                     * 设置无
                     * @param _sessionID 无
                     * 
                     */
                    void SetSessionID(const std::string& _sessionID);

                    /**
                     * 判断参数 SessionID 是否已赋值
                     * @return SessionID 是否已赋值
                     * 
                     */
                    bool SessionIDHasBeenSet() const;

                    /**
                     * 获取无
                     * @return SessionDelta 无
                     * 
                     */
                    std::string GetSessionDelta() const;

                    /**
                     * 设置无
                     * @param _sessionDelta 无
                     * 
                     */
                    void SetSessionDelta(const std::string& _sessionDelta);

                    /**
                     * 判断参数 SessionDelta 是否已赋值
                     * @return SessionDelta 是否已赋值
                     * 
                     */
                    bool SessionDeltaHasBeenSet() const;

                private:

                    /**
                     * 无
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_sessionID;
                    bool m_sessionIDHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_sessionDelta;
                    bool m_sessionDeltaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ICR_V20211014_MODEL_RSPMETADATA_H_
