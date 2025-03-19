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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_PREVIEWKAFKARECHARGERESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_PREVIEWKAFKARECHARGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * PreviewKafkaRecharge返回参数结构体
                */
                class PreviewKafkaRechargeResponse : public AbstractModel
                {
                public:
                    PreviewKafkaRechargeResponse();
                    ~PreviewKafkaRechargeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取日志样例，PreviewType为2时返回
                     * @return LogSample 日志样例，PreviewType为2时返回
                     * 
                     */
                    std::string GetLogSample() const;

                    /**
                     * 判断参数 LogSample 是否已赋值
                     * @return LogSample 是否已赋值
                     * 
                     */
                    bool LogSampleHasBeenSet() const;

                    /**
                     * 获取日志预览结果
                     * @return LogData 日志预览结果
                     * 
                     */
                    std::string GetLogData() const;

                    /**
                     * 判断参数 LogData 是否已赋值
                     * @return LogData 是否已赋值
                     * 
                     */
                    bool LogDataHasBeenSet() const;

                private:

                    /**
                     * 日志样例，PreviewType为2时返回
                     */
                    std::string m_logSample;
                    bool m_logSampleHasBeenSet;

                    /**
                     * 日志预览结果
                     */
                    std::string m_logData;
                    bool m_logDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_PREVIEWKAFKARECHARGERESPONSE_H_
