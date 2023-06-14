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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_CHECKSUMMARY_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_CHECKSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 检查点汇总结果
                */
                class CheckSummary : public AbstractModel
                {
                public:
                    CheckSummary();
                    ~CheckSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检查点名字
                     * @return Name 检查点名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置检查点名字
                     * @param _name 检查点名字
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取检查点所在步骤名字
                     * @return Step 检查点所在步骤名字
                     * 
                     */
                    std::string GetStep() const;

                    /**
                     * 设置检查点所在步骤名字
                     * @param _step 检查点所在步骤名字
                     * 
                     */
                    void SetStep(const std::string& _step);

                    /**
                     * 判断参数 Step 是否已赋值
                     * @return Step 是否已赋值
                     * 
                     */
                    bool StepHasBeenSet() const;

                    /**
                     * 获取检查点成功次数
                     * @return SuccessCount 检查点成功次数
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置检查点成功次数
                     * @param _successCount 检查点成功次数
                     * 
                     */
                    void SetSuccessCount(const int64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取检查失败次数
                     * @return FailCount 检查失败次数
                     * 
                     */
                    int64_t GetFailCount() const;

                    /**
                     * 设置检查失败次数
                     * @param _failCount 检查失败次数
                     * 
                     */
                    void SetFailCount(const int64_t& _failCount);

                    /**
                     * 判断参数 FailCount 是否已赋值
                     * @return FailCount 是否已赋值
                     * 
                     */
                    bool FailCountHasBeenSet() const;

                    /**
                     * 获取错误比例
                     * @return ErrorRate 错误比例
                     * 
                     */
                    double GetErrorRate() const;

                    /**
                     * 设置错误比例
                     * @param _errorRate 错误比例
                     * 
                     */
                    void SetErrorRate(const double& _errorRate);

                    /**
                     * 判断参数 ErrorRate 是否已赋值
                     * @return ErrorRate 是否已赋值
                     * 
                     */
                    bool ErrorRateHasBeenSet() const;

                private:

                    /**
                     * 检查点名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 检查点所在步骤名字
                     */
                    std::string m_step;
                    bool m_stepHasBeenSet;

                    /**
                     * 检查点成功次数
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 检查失败次数
                     */
                    int64_t m_failCount;
                    bool m_failCountHasBeenSet;

                    /**
                     * 错误比例
                     */
                    double m_errorRate;
                    bool m_errorRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_CHECKSUMMARY_H_
