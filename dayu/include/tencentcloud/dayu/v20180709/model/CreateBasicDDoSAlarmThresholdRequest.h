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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEBASICDDOSALARMTHRESHOLDREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEBASICDDOSALARMTHRESHOLDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * CreateBasicDDoSAlarmThreshold请求参数结构体
                */
                class CreateBasicDDoSAlarmThresholdRequest : public AbstractModel
                {
                public:
                    CreateBasicDDoSAlarmThresholdRequest();
                    ~CreateBasicDDoSAlarmThresholdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（basic表示DDoS基础防护）
                     * @return Business 大禹子产品代号（basic表示DDoS基础防护）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（basic表示DDoS基础防护）
                     * @param _business 大禹子产品代号（basic表示DDoS基础防护）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取=get表示读取告警阈值；=set表示设置告警阈值；
                     * @return Method =get表示读取告警阈值；=set表示设置告警阈值；
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置=get表示读取告警阈值；=set表示设置告警阈值；
                     * @param _method =get表示读取告警阈值；=set表示设置告警阈值；
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
                     * 获取可选，告警阈值类型，1-入流量，2-清洗流量；当Method为set时必须填写；
                     * @return AlarmType 可选，告警阈值类型，1-入流量，2-清洗流量；当Method为set时必须填写；
                     * 
                     */
                    uint64_t GetAlarmType() const;

                    /**
                     * 设置可选，告警阈值类型，1-入流量，2-清洗流量；当Method为set时必须填写；
                     * @param _alarmType 可选，告警阈值类型，1-入流量，2-清洗流量；当Method为set时必须填写；
                     * 
                     */
                    void SetAlarmType(const uint64_t& _alarmType);

                    /**
                     * 判断参数 AlarmType 是否已赋值
                     * @return AlarmType 是否已赋值
                     * 
                     */
                    bool AlarmTypeHasBeenSet() const;

                    /**
                     * 获取可选，告警阈值，当Method为set时必须填写；当设置阈值为0时表示清除告警阈值配置；
                     * @return AlarmThreshold 可选，告警阈值，当Method为set时必须填写；当设置阈值为0时表示清除告警阈值配置；
                     * 
                     */
                    uint64_t GetAlarmThreshold() const;

                    /**
                     * 设置可选，告警阈值，当Method为set时必须填写；当设置阈值为0时表示清除告警阈值配置；
                     * @param _alarmThreshold 可选，告警阈值，当Method为set时必须填写；当设置阈值为0时表示清除告警阈值配置；
                     * 
                     */
                    void SetAlarmThreshold(const uint64_t& _alarmThreshold);

                    /**
                     * 判断参数 AlarmThreshold 是否已赋值
                     * @return AlarmThreshold 是否已赋值
                     * 
                     */
                    bool AlarmThresholdHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（basic表示DDoS基础防护）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * =get表示读取告警阈值；=set表示设置告警阈值；
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 可选，告警阈值类型，1-入流量，2-清洗流量；当Method为set时必须填写；
                     */
                    uint64_t m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * 可选，告警阈值，当Method为set时必须填写；当设置阈值为0时表示清除告警阈值配置；
                     */
                    uint64_t m_alarmThreshold;
                    bool m_alarmThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEBASICDDOSALARMTHRESHOLDREQUEST_H_
