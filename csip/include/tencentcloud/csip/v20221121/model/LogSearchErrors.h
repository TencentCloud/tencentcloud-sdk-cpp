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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_LOGSEARCHERRORS_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_LOGSEARCHERRORS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 日志检索错误信息
                */
                class LogSearchErrors : public AbstractModel
                {
                public:
                    LogSearchErrors();
                    ~LogSearchErrors() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>主题</p>
                     * @return TopicId <p>主题</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>主题</p>
                     * @param _topicId <p>主题</p>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>错误信息</p>
                     * @return ErrorMsg <p>错误信息</p>
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置<p>错误信息</p>
                     * @param _errorMsg <p>错误信息</p>
                     * 
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取<p>错误信息</p>
                     * @return ErrorCodeStr <p>错误信息</p>
                     * 
                     */
                    std::string GetErrorCodeStr() const;

                    /**
                     * 设置<p>错误信息</p>
                     * @param _errorCodeStr <p>错误信息</p>
                     * 
                     */
                    void SetErrorCodeStr(const std::string& _errorCodeStr);

                    /**
                     * 判断参数 ErrorCodeStr 是否已赋值
                     * @return ErrorCodeStr 是否已赋值
                     * 
                     */
                    bool ErrorCodeStrHasBeenSet() const;

                private:

                    /**
                     * <p>主题</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>错误信息</p>
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * <p>错误信息</p>
                     */
                    std::string m_errorCodeStr;
                    bool m_errorCodeStrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_LOGSEARCHERRORS_H_
