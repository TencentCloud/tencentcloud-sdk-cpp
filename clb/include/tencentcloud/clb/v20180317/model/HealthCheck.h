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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_HEALTHCHECK_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_HEALTHCHECK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 健康检查信息
                */
                class HealthCheck : public AbstractModel
                {
                public:
                    HealthCheck();
                    ~HealthCheck() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启健康检查：1（开启）、0（关闭）。
                     * @return HealthSwitch 是否开启健康检查：1（开启）、0（关闭）。
                     */
                    int64_t GetHealthSwitch() const;

                    /**
                     * 设置是否开启健康检查：1（开启）、0（关闭）。
                     * @param HealthSwitch 是否开启健康检查：1（开启）、0（关闭）。
                     */
                    void SetHealthSwitch(const int64_t& _healthSwitch);

                    /**
                     * 判断参数 HealthSwitch 是否已赋值
                     * @return HealthSwitch 是否已赋值
                     */
                    bool HealthSwitchHasBeenSet() const;

                    /**
                     * 获取健康检查的响应超时时间，可选值：2~60，默认值：2，单位：秒。响应超时时间要小于检查间隔时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeOut 健康检查的响应超时时间，可选值：2~60，默认值：2，单位：秒。响应超时时间要小于检查间隔时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTimeOut() const;

                    /**
                     * 设置健康检查的响应超时时间，可选值：2~60，默认值：2，单位：秒。响应超时时间要小于检查间隔时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TimeOut 健康检查的响应超时时间，可选值：2~60，默认值：2，单位：秒。响应超时时间要小于检查间隔时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTimeOut(const int64_t& _timeOut);

                    /**
                     * 判断参数 TimeOut 是否已赋值
                     * @return TimeOut 是否已赋值
                     */
                    bool TimeOutHasBeenSet() const;

                    /**
                     * 获取健康检查探测间隔时间，默认值：5，可选值：5~300，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntervalTime 健康检查探测间隔时间，默认值：5，可选值：5~300，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetIntervalTime() const;

                    /**
                     * 设置健康检查探测间隔时间，默认值：5，可选值：5~300，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IntervalTime 健康检查探测间隔时间，默认值：5，可选值：5~300，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIntervalTime(const int64_t& _intervalTime);

                    /**
                     * 判断参数 IntervalTime 是否已赋值
                     * @return IntervalTime 是否已赋值
                     */
                    bool IntervalTimeHasBeenSet() const;

                    /**
                     * 获取健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2~10，单位：次。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthNum 健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2~10，单位：次。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetHealthNum() const;

                    /**
                     * 设置健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2~10，单位：次。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HealthNum 健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2~10，单位：次。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHealthNum(const int64_t& _healthNum);

                    /**
                     * 判断参数 HealthNum 是否已赋值
                     * @return HealthNum 是否已赋值
                     */
                    bool HealthNumHasBeenSet() const;

                    /**
                     * 获取不健康阈值，默认值：3，表示当连续探测三次不健康则表示该转发异常，可选值：2~10，单位：次。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnHealthNum 不健康阈值，默认值：3，表示当连续探测三次不健康则表示该转发异常，可选值：2~10，单位：次。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetUnHealthNum() const;

                    /**
                     * 设置不健康阈值，默认值：3，表示当连续探测三次不健康则表示该转发异常，可选值：2~10，单位：次。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UnHealthNum 不健康阈值，默认值：3，表示当连续探测三次不健康则表示该转发异常，可选值：2~10，单位：次。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUnHealthNum(const int64_t& _unHealthNum);

                    /**
                     * 判断参数 UnHealthNum 是否已赋值
                     * @return UnHealthNum 是否已赋值
                     */
                    bool UnHealthNumHasBeenSet() const;

                    /**
                     * 获取健康检查状态码（仅适用于HTTP/HTTPS转发规则）。可选值：1~31，默认 31。
1 表示探测后返回值 1xx 表示健康，2 表示返回 2xx 表示健康，4 表示返回 3xx 表示健康，8 表示返回 4xx 表示健康，16 表示返回 5xx 表示健康。若希望多种码都表示健康，则将相应的值相加。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpCode 健康检查状态码（仅适用于HTTP/HTTPS转发规则）。可选值：1~31，默认 31。
1 表示探测后返回值 1xx 表示健康，2 表示返回 2xx 表示健康，4 表示返回 3xx 表示健康，8 表示返回 4xx 表示健康，16 表示返回 5xx 表示健康。若希望多种码都表示健康，则将相应的值相加。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetHttpCode() const;

                    /**
                     * 设置健康检查状态码（仅适用于HTTP/HTTPS转发规则）。可选值：1~31，默认 31。
1 表示探测后返回值 1xx 表示健康，2 表示返回 2xx 表示健康，4 表示返回 3xx 表示健康，8 表示返回 4xx 表示健康，16 表示返回 5xx 表示健康。若希望多种码都表示健康，则将相应的值相加。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HttpCode 健康检查状态码（仅适用于HTTP/HTTPS转发规则）。可选值：1~31，默认 31。
1 表示探测后返回值 1xx 表示健康，2 表示返回 2xx 表示健康，4 表示返回 3xx 表示健康，8 表示返回 4xx 表示健康，16 表示返回 5xx 表示健康。若希望多种码都表示健康，则将相应的值相加。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHttpCode(const int64_t& _httpCode);

                    /**
                     * 判断参数 HttpCode 是否已赋值
                     * @return HttpCode 是否已赋值
                     */
                    bool HttpCodeHasBeenSet() const;

                    /**
                     * 获取健康检查路径（仅适用于HTTP/HTTPS转发规则）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpCheckPath 健康检查路径（仅适用于HTTP/HTTPS转发规则）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHttpCheckPath() const;

                    /**
                     * 设置健康检查路径（仅适用于HTTP/HTTPS转发规则）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HttpCheckPath 健康检查路径（仅适用于HTTP/HTTPS转发规则）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHttpCheckPath(const std::string& _httpCheckPath);

                    /**
                     * 判断参数 HttpCheckPath 是否已赋值
                     * @return HttpCheckPath 是否已赋值
                     */
                    bool HttpCheckPathHasBeenSet() const;

                    /**
                     * 获取健康检查域名（仅适用于HTTP/HTTPS转发规则）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpCheckDomain 健康检查域名（仅适用于HTTP/HTTPS转发规则）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHttpCheckDomain() const;

                    /**
                     * 设置健康检查域名（仅适用于HTTP/HTTPS转发规则）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HttpCheckDomain 健康检查域名（仅适用于HTTP/HTTPS转发规则）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHttpCheckDomain(const std::string& _httpCheckDomain);

                    /**
                     * 判断参数 HttpCheckDomain 是否已赋值
                     * @return HttpCheckDomain 是否已赋值
                     */
                    bool HttpCheckDomainHasBeenSet() const;

                    /**
                     * 获取健康检查方法（仅适用于HTTP/HTTPS转发规则），取值为HEAD或GET。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpCheckMethod 健康检查方法（仅适用于HTTP/HTTPS转发规则），取值为HEAD或GET。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHttpCheckMethod() const;

                    /**
                     * 设置健康检查方法（仅适用于HTTP/HTTPS转发规则），取值为HEAD或GET。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HttpCheckMethod 健康检查方法（仅适用于HTTP/HTTPS转发规则），取值为HEAD或GET。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHttpCheckMethod(const std::string& _httpCheckMethod);

                    /**
                     * 判断参数 HttpCheckMethod 是否已赋值
                     * @return HttpCheckMethod 是否已赋值
                     */
                    bool HttpCheckMethodHasBeenSet() const;

                private:

                    /**
                     * 是否开启健康检查：1（开启）、0（关闭）。
                     */
                    int64_t m_healthSwitch;
                    bool m_healthSwitchHasBeenSet;

                    /**
                     * 健康检查的响应超时时间，可选值：2~60，默认值：2，单位：秒。响应超时时间要小于检查间隔时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeOut;
                    bool m_timeOutHasBeenSet;

                    /**
                     * 健康检查探测间隔时间，默认值：5，可选值：5~300，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * 健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2~10，单位：次。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_healthNum;
                    bool m_healthNumHasBeenSet;

                    /**
                     * 不健康阈值，默认值：3，表示当连续探测三次不健康则表示该转发异常，可选值：2~10，单位：次。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_unHealthNum;
                    bool m_unHealthNumHasBeenSet;

                    /**
                     * 健康检查状态码（仅适用于HTTP/HTTPS转发规则）。可选值：1~31，默认 31。
1 表示探测后返回值 1xx 表示健康，2 表示返回 2xx 表示健康，4 表示返回 3xx 表示健康，8 表示返回 4xx 表示健康，16 表示返回 5xx 表示健康。若希望多种码都表示健康，则将相应的值相加。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_httpCode;
                    bool m_httpCodeHasBeenSet;

                    /**
                     * 健康检查路径（仅适用于HTTP/HTTPS转发规则）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpCheckPath;
                    bool m_httpCheckPathHasBeenSet;

                    /**
                     * 健康检查域名（仅适用于HTTP/HTTPS转发规则）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpCheckDomain;
                    bool m_httpCheckDomainHasBeenSet;

                    /**
                     * 健康检查方法（仅适用于HTTP/HTTPS转发规则），取值为HEAD或GET。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpCheckMethod;
                    bool m_httpCheckMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_HEALTHCHECK_H_
