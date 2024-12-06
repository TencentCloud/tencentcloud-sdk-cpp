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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_REQUESTSUMMARY_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_REQUESTSUMMARY_H_

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
                * 压测请求明细
                */
                class RequestSummary : public AbstractModel
                {
                public:
                    RequestSummary();
                    ~RequestSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取请求URL
                     * @return Service 请求URL
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置请求URL
                     * @param _service 请求URL
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取请求方法
                     * @return Method 请求方法
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置请求方法
                     * @param _method 请求方法
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取请求次数
                     * @return Count 请求次数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置请求次数
                     * @param _count 请求次数
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
                     * 获取请求响应平均耗时，单位秒
                     * @return Average 请求响应平均耗时，单位秒
                     * 
                     */
                    double GetAverage() const;

                    /**
                     * 设置请求响应平均耗时，单位秒
                     * @param _average 请求响应平均耗时，单位秒
                     * 
                     */
                    void SetAverage(const double& _average);

                    /**
                     * 判断参数 Average 是否已赋值
                     * @return Average 是否已赋值
                     * 
                     */
                    bool AverageHasBeenSet() const;

                    /**
                     * 获取请求p90耗时，单位秒
                     * @return P90 请求p90耗时，单位秒
                     * 
                     */
                    double GetP90() const;

                    /**
                     * 设置请求p90耗时，单位秒
                     * @param _p90 请求p90耗时，单位秒
                     * 
                     */
                    void SetP90(const double& _p90);

                    /**
                     * 判断参数 P90 是否已赋值
                     * @return P90 是否已赋值
                     * 
                     */
                    bool P90HasBeenSet() const;

                    /**
                     * 获取请求p95耗时，单位秒
                     * @return P95 请求p95耗时，单位秒
                     * 
                     */
                    double GetP95() const;

                    /**
                     * 设置请求p95耗时，单位秒
                     * @param _p95 请求p95耗时，单位秒
                     * 
                     */
                    void SetP95(const double& _p95);

                    /**
                     * 判断参数 P95 是否已赋值
                     * @return P95 是否已赋值
                     * 
                     */
                    bool P95HasBeenSet() const;

                    /**
                     * 获取请求最小耗时，单位秒
                     * @return Min 请求最小耗时，单位秒
                     * 
                     */
                    double GetMin() const;

                    /**
                     * 设置请求最小耗时，单位秒
                     * @param _min 请求最小耗时，单位秒
                     * 
                     */
                    void SetMin(const double& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取请求最大耗时，单位秒
                     * @return Max 请求最大耗时，单位秒
                     * 
                     */
                    double GetMax() const;

                    /**
                     * 设置请求最大耗时，单位秒
                     * @param _max 请求最大耗时，单位秒
                     * 
                     */
                    void SetMax(const double& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取请求错误率
                     * @return ErrorPercentage 请求错误率
                     * 
                     */
                    double GetErrorPercentage() const;

                    /**
                     * 设置请求错误率
                     * @param _errorPercentage 请求错误率
                     * 
                     */
                    void SetErrorPercentage(const double& _errorPercentage);

                    /**
                     * 判断参数 ErrorPercentage 是否已赋值
                     * @return ErrorPercentage 是否已赋值
                     * 
                     */
                    bool ErrorPercentageHasBeenSet() const;

                    /**
                     * 获取请求p99耗时，单位秒
                     * @return P99 请求p99耗时，单位秒
                     * 
                     */
                    double GetP99() const;

                    /**
                     * 设置请求p99耗时，单位秒
                     * @param _p99 请求p99耗时，单位秒
                     * 
                     */
                    void SetP99(const double& _p99);

                    /**
                     * 判断参数 P99 是否已赋值
                     * @return P99 是否已赋值
                     * 
                     */
                    bool P99HasBeenSet() const;

                    /**
                     * 获取响应状态码
                     * @return Status 响应状态码
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置响应状态码
                     * @param _status 响应状态码
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
                     * 获取响应详情
                     * @return Result 响应详情
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置响应详情
                     * @param _result 响应详情
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
                     * 获取平均rps, 单位req/s
                     * @return RPS 平均rps, 单位req/s
                     * 
                     */
                    double GetRPS() const;

                    /**
                     * 设置平均rps, 单位req/s
                     * @param _rPS 平均rps, 单位req/s
                     * 
                     */
                    void SetRPS(const double& _rPS);

                    /**
                     * 判断参数 RPS 是否已赋值
                     * @return RPS 是否已赋值
                     * 
                     */
                    bool RPSHasBeenSet() const;

                private:

                    /**
                     * 请求URL
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * 请求方法
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 请求次数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 请求响应平均耗时，单位秒
                     */
                    double m_average;
                    bool m_averageHasBeenSet;

                    /**
                     * 请求p90耗时，单位秒
                     */
                    double m_p90;
                    bool m_p90HasBeenSet;

                    /**
                     * 请求p95耗时，单位秒
                     */
                    double m_p95;
                    bool m_p95HasBeenSet;

                    /**
                     * 请求最小耗时，单位秒
                     */
                    double m_min;
                    bool m_minHasBeenSet;

                    /**
                     * 请求最大耗时，单位秒
                     */
                    double m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * 请求错误率
                     */
                    double m_errorPercentage;
                    bool m_errorPercentageHasBeenSet;

                    /**
                     * 请求p99耗时，单位秒
                     */
                    double m_p99;
                    bool m_p99HasBeenSet;

                    /**
                     * 响应状态码
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 响应详情
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 平均rps, 单位req/s
                     */
                    double m_rPS;
                    bool m_rPSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_REQUESTSUMMARY_H_
