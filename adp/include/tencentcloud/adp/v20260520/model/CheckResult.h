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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CHECKRESULT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CHECKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 通用校验结果
                */
                class CheckResult : public AbstractModel
                {
                public:
                    CheckResult();
                    ~CheckResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否通过校验</p>
                     * @return Passed <p>是否通过校验</p>
                     * 
                     */
                    bool GetPassed() const;

                    /**
                     * 设置<p>是否通过校验</p>
                     * @param _passed <p>是否通过校验</p>
                     * 
                     */
                    void SetPassed(const bool& _passed);

                    /**
                     * 判断参数 Passed 是否已赋值
                     * @return Passed 是否已赋值
                     * 
                     */
                    bool PassedHasBeenSet() const;

                    /**
                     * 获取<p>失败原因（passed=false 时填充）</p>
                     * @return Reason <p>失败原因（passed=false 时填充）</p>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置<p>失败原因（passed=false 时填充）</p>
                     * @param _reason <p>失败原因（passed=false 时填充）</p>
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * <p>是否通过校验</p>
                     */
                    bool m_passed;
                    bool m_passedHasBeenSet;

                    /**
                     * <p>失败原因（passed=false 时填充）</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CHECKRESULT_H_
