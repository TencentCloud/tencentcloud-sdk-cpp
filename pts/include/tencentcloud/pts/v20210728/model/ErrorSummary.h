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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_ERRORSUMMARY_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_ERRORSUMMARY_H_

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
                * 错误信息汇总
                */
                class ErrorSummary : public AbstractModel
                {
                public:
                    ErrorSummary();
                    ~ErrorSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取状态码
                     * @return Status 状态码
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态码
                     * @param _status 状态码
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取结果码
                     * @return Result 结果码
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置结果码
                     * @param _result 结果码
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取错误出现次数
                     * @return Count 错误出现次数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置错误出现次数
                     * @param _count 错误出现次数
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取错误率
                     * @return Rate 错误率
                     * 
                     */
                    double GetRate() const;

                    /**
                     * 设置错误率
                     * @param _rate 错误率
                     * 
                     */
                    void SetRate(const double& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return Message 错误信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置错误信息
                     * @param _message 错误信息
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
                     * 获取请求协议类型
                     * @return Proto 请求协议类型
                     * 
                     */
                    std::string GetProto() const;

                    /**
                     * 设置请求协议类型
                     * @param _proto 请求协议类型
                     * 
                     */
                    void SetProto(const std::string& _proto);

                    /**
                     * 判断参数 Proto 是否已赋值
                     * @return Proto 是否已赋值
                     * 
                     */
                    bool ProtoHasBeenSet() const;

                private:

                    /**
                     * 状态码
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 结果码
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 错误出现次数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 错误率
                     */
                    double m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 请求协议类型
                     */
                    std::string m_proto;
                    bool m_protoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_ERRORSUMMARY_H_
