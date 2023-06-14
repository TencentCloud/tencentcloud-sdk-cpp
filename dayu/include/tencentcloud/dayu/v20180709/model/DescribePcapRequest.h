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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEPCAPREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEPCAPREQUEST_H_

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
                * DescribePcap请求参数结构体
                */
                class DescribePcapRequest : public AbstractModel
                {
                public:
                    DescribePcapRequest();
                    ~DescribePcapRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * @return Business 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * @param _business 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
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
                     * 获取资源实例ID
                     * @return Id 资源实例ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源实例ID
                     * @param _id 资源实例ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取攻击事件的开始时间，格式为"2018-08-28 07:00:00"
                     * @return StartTime 攻击事件的开始时间，格式为"2018-08-28 07:00:00"
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置攻击事件的开始时间，格式为"2018-08-28 07:00:00"
                     * @param _startTime 攻击事件的开始时间，格式为"2018-08-28 07:00:00"
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取攻击事件的结束时间，格式为"2018-08-28 07:02:00"
                     * @return EndTime 攻击事件的结束时间，格式为"2018-08-28 07:02:00"
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置攻击事件的结束时间，格式为"2018-08-28 07:02:00"
                     * @param _endTime 攻击事件的结束时间，格式为"2018-08-28 07:02:00"
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取资源的IP，只有当Business为net时才需要填写资源实例下的IP；
                     * @return Ip 资源的IP，只有当Business为net时才需要填写资源实例下的IP；
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置资源的IP，只有当Business为net时才需要填写资源实例下的IP；
                     * @param _ip 资源的IP，只有当Business为net时才需要填写资源实例下的IP；
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 资源实例ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 攻击事件的开始时间，格式为"2018-08-28 07:00:00"
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 攻击事件的结束时间，格式为"2018-08-28 07:02:00"
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 资源的IP，只有当Business为net时才需要填写资源实例下的IP；
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEPCAPREQUEST_H_
