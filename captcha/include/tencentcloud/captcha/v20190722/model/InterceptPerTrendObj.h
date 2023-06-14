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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_INTERCEPTPERTRENDOBJ_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_INTERCEPTPERTRENDOBJ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 拦截率趋势obj
                */
                class InterceptPerTrendObj : public AbstractModel
                {
                public:
                    InterceptPerTrendObj();
                    ~InterceptPerTrendObj() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间参数
                     * @return Ftime 时间参数
                     * 
                     */
                    std::string GetFtime() const;

                    /**
                     * 设置时间参数
                     * @param _ftime 时间参数
                     * 
                     */
                    void SetFtime(const std::string& _ftime);

                    /**
                     * 判断参数 Ftime 是否已赋值
                     * @return Ftime 是否已赋值
                     * 
                     */
                    bool FtimeHasBeenSet() const;

                    /**
                     * 获取拦截率
                     * @return RequestInterceptPer 拦截率
                     * 
                     */
                    double GetRequestInterceptPer() const;

                    /**
                     * 设置拦截率
                     * @param _requestInterceptPer 拦截率
                     * 
                     */
                    void SetRequestInterceptPer(const double& _requestInterceptPer);

                    /**
                     * 判断参数 RequestInterceptPer 是否已赋值
                     * @return RequestInterceptPer 是否已赋值
                     * 
                     */
                    bool RequestInterceptPerHasBeenSet() const;

                    /**
                     * 获取答案拦截率
                     * @return AnswerInterceptPer 答案拦截率
                     * 
                     */
                    double GetAnswerInterceptPer() const;

                    /**
                     * 设置答案拦截率
                     * @param _answerInterceptPer 答案拦截率
                     * 
                     */
                    void SetAnswerInterceptPer(const double& _answerInterceptPer);

                    /**
                     * 判断参数 AnswerInterceptPer 是否已赋值
                     * @return AnswerInterceptPer 是否已赋值
                     * 
                     */
                    bool AnswerInterceptPerHasBeenSet() const;

                    /**
                     * 获取策略拦截率
                     * @return PolicyInterceptPer 策略拦截率
                     * 
                     */
                    double GetPolicyInterceptPer() const;

                    /**
                     * 设置策略拦截率
                     * @param _policyInterceptPer 策略拦截率
                     * 
                     */
                    void SetPolicyInterceptPer(const double& _policyInterceptPer);

                    /**
                     * 判断参数 PolicyInterceptPer 是否已赋值
                     * @return PolicyInterceptPer 是否已赋值
                     * 
                     */
                    bool PolicyInterceptPerHasBeenSet() const;

                private:

                    /**
                     * 时间参数
                     */
                    std::string m_ftime;
                    bool m_ftimeHasBeenSet;

                    /**
                     * 拦截率
                     */
                    double m_requestInterceptPer;
                    bool m_requestInterceptPerHasBeenSet;

                    /**
                     * 答案拦截率
                     */
                    double m_answerInterceptPer;
                    bool m_answerInterceptPerHasBeenSet;

                    /**
                     * 策略拦截率
                     */
                    double m_policyInterceptPer;
                    bool m_policyInterceptPerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_INTERCEPTPERTRENDOBJ_H_
