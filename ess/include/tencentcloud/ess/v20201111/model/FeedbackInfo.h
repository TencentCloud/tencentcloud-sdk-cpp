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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FEEDBACKINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FEEDBACKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/FeedbackInfoReason.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 信息提取结果字段反馈
                */
                class FeedbackInfo : public AbstractModel
                {
                public:
                    FeedbackInfo();
                    ~FeedbackInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合同信息提取结果反馈。
`值如下`：
- 0:  未反馈
- 1: 信息提取正确
- 2: 信息提取有错误
                     * @return Result 合同信息提取结果反馈。
`值如下`：
- 0:  未反馈
- 1: 信息提取正确
- 2: 信息提取有错误
                     * 
                     */
                    int64_t GetResult() const;

                    /**
                     * 设置合同信息提取结果反馈。
`值如下`：
- 0:  未反馈
- 1: 信息提取正确
- 2: 信息提取有错误
                     * @param _result 合同信息提取结果反馈。
`值如下`：
- 0:  未反馈
- 1: 信息提取正确
- 2: 信息提取有错误
                     * 
                     */
                    void SetResult(const int64_t& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取信息提取错误原因，当Result为2时需要填写此信息
                     * @return Reason 信息提取错误原因，当Result为2时需要填写此信息
                     * 
                     */
                    FeedbackInfoReason GetReason() const;

                    /**
                     * 设置信息提取错误原因，当Result为2时需要填写此信息
                     * @param _reason 信息提取错误原因，当Result为2时需要填写此信息
                     * 
                     */
                    void SetReason(const FeedbackInfoReason& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * 合同信息提取结果反馈。
`值如下`：
- 0:  未反馈
- 1: 信息提取正确
- 2: 信息提取有错误
                     */
                    int64_t m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 信息提取错误原因，当Result为2时需要填写此信息
                     */
                    FeedbackInfoReason m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FEEDBACKINFO_H_
