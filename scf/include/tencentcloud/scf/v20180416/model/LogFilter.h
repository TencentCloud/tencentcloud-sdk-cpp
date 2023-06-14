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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_LOGFILTER_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_LOGFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 日志过滤条件，用于区分正确与错误日志
                */
                class LogFilter : public AbstractModel
                {
                public:
                    LogFilter();
                    ~LogFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取filter.RetCode的取值有：
not0 表示只返回错误日志，
is0 表示只返回正确日志，
TimeLimitExceeded 返回函数调用发生超时的日志，
ResourceLimitExceeded 返回函数调用发生资源超限的日志，
UserCodeException 返回函数调用发生用户代码错误的日志，
无输入则返回所有日志。
                     * @return RetCode filter.RetCode的取值有：
not0 表示只返回错误日志，
is0 表示只返回正确日志，
TimeLimitExceeded 返回函数调用发生超时的日志，
ResourceLimitExceeded 返回函数调用发生资源超限的日志，
UserCodeException 返回函数调用发生用户代码错误的日志，
无输入则返回所有日志。
                     * 
                     */
                    std::string GetRetCode() const;

                    /**
                     * 设置filter.RetCode的取值有：
not0 表示只返回错误日志，
is0 表示只返回正确日志，
TimeLimitExceeded 返回函数调用发生超时的日志，
ResourceLimitExceeded 返回函数调用发生资源超限的日志，
UserCodeException 返回函数调用发生用户代码错误的日志，
无输入则返回所有日志。
                     * @param _retCode filter.RetCode的取值有：
not0 表示只返回错误日志，
is0 表示只返回正确日志，
TimeLimitExceeded 返回函数调用发生超时的日志，
ResourceLimitExceeded 返回函数调用发生资源超限的日志，
UserCodeException 返回函数调用发生用户代码错误的日志，
无输入则返回所有日志。
                     * 
                     */
                    void SetRetCode(const std::string& _retCode);

                    /**
                     * 判断参数 RetCode 是否已赋值
                     * @return RetCode 是否已赋值
                     * 
                     */
                    bool RetCodeHasBeenSet() const;

                private:

                    /**
                     * filter.RetCode的取值有：
not0 表示只返回错误日志，
is0 表示只返回正确日志，
TimeLimitExceeded 返回函数调用发生超时的日志，
ResourceLimitExceeded 返回函数调用发生资源超限的日志，
UserCodeException 返回函数调用发生用户代码错误的日志，
无输入则返回所有日志。
                     */
                    std::string m_retCode;
                    bool m_retCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_LOGFILTER_H_
