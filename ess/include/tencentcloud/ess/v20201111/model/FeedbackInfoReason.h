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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FEEDBACKINFOREASON_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FEEDBACKINFOREASON_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 信息提取结果字段反馈错误原因
                */
                class FeedbackInfoReason : public AbstractModel
                {
                public:
                    FeedbackInfoReason();
                    ~FeedbackInfoReason() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取反馈信息提取错误原因。
`值如下`：
- 1: 提取错误(提取不精准、提取为空等)
- 2: 其他错误
                     * @return ReasonType 反馈信息提取错误原因。
`值如下`：
- 1: 提取错误(提取不精准、提取为空等)
- 2: 其他错误
                     * 
                     */
                    int64_t GetReasonType() const;

                    /**
                     * 设置反馈信息提取错误原因。
`值如下`：
- 1: 提取错误(提取不精准、提取为空等)
- 2: 其他错误
                     * @param _reasonType 反馈信息提取错误原因。
`值如下`：
- 1: 提取错误(提取不精准、提取为空等)
- 2: 其他错误
                     * 
                     */
                    void SetReasonType(const int64_t& _reasonType);

                    /**
                     * 判断参数 ReasonType 是否已赋值
                     * @return ReasonType 是否已赋值
                     * 
                     */
                    bool ReasonTypeHasBeenSet() const;

                    /**
                     * 获取反馈提取错误详细错误原因，不能超过500个字符
                     * @return ReasonContent 反馈提取错误详细错误原因，不能超过500个字符
                     * 
                     */
                    std::string GetReasonContent() const;

                    /**
                     * 设置反馈提取错误详细错误原因，不能超过500个字符
                     * @param _reasonContent 反馈提取错误详细错误原因，不能超过500个字符
                     * 
                     */
                    void SetReasonContent(const std::string& _reasonContent);

                    /**
                     * 判断参数 ReasonContent 是否已赋值
                     * @return ReasonContent 是否已赋值
                     * 
                     */
                    bool ReasonContentHasBeenSet() const;

                private:

                    /**
                     * 反馈信息提取错误原因。
`值如下`：
- 1: 提取错误(提取不精准、提取为空等)
- 2: 其他错误
                     */
                    int64_t m_reasonType;
                    bool m_reasonTypeHasBeenSet;

                    /**
                     * 反馈提取错误详细错误原因，不能超过500个字符
                     */
                    std::string m_reasonContent;
                    bool m_reasonContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FEEDBACKINFOREASON_H_
