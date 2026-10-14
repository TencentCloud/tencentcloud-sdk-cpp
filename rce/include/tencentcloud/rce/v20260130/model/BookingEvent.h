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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_BOOKINGEVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_BOOKINGEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Cust.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 预约事件详情（营销保护）
                */
                class BookingEvent : public AbstractModel
                {
                public:
                    BookingEvent();
                    ~BookingEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>预约场景。例如：预订机票、预订酒店</p>
                     * @return BookingScene <p>预约场景。例如：预订机票、预订酒店</p>
                     * 
                     */
                    std::string GetBookingScene() const;

                    /**
                     * 设置<p>预约场景。例如：预订机票、预订酒店</p>
                     * @param _bookingScene <p>预约场景。例如：预订机票、预订酒店</p>
                     * 
                     */
                    void SetBookingScene(const std::string& _bookingScene);

                    /**
                     * 判断参数 BookingScene 是否已赋值
                     * @return BookingScene 是否已赋值
                     * 
                     */
                    bool BookingSceneHasBeenSet() const;

                    /**
                     * 获取<p>预约时间。要求符合ISO-8601标准的带时区的毫秒级时间，格式&quot;YYYY-MM-DDTHH:mm:ss.sssZ&quot; ，例如&quot;2025-10-19T09:11:10.145+08:00&quot;。</p>
                     * @return BookingTime <p>预约时间。要求符合ISO-8601标准的带时区的毫秒级时间，格式&quot;YYYY-MM-DDTHH:mm:ss.sssZ&quot; ，例如&quot;2025-10-19T09:11:10.145+08:00&quot;。</p>
                     * 
                     */
                    std::string GetBookingTime() const;

                    /**
                     * 设置<p>预约时间。要求符合ISO-8601标准的带时区的毫秒级时间，格式&quot;YYYY-MM-DDTHH:mm:ss.sssZ&quot; ，例如&quot;2025-10-19T09:11:10.145+08:00&quot;。</p>
                     * @param _bookingTime <p>预约时间。要求符合ISO-8601标准的带时区的毫秒级时间，格式&quot;YYYY-MM-DDTHH:mm:ss.sssZ&quot; ，例如&quot;2025-10-19T09:11:10.145+08:00&quot;。</p>
                     * 
                     */
                    void SetBookingTime(const std::string& _bookingTime);

                    /**
                     * 判断参数 BookingTime 是否已赋值
                     * @return BookingTime 是否已赋值
                     * 
                     */
                    bool BookingTimeHasBeenSet() const;

                    /**
                     * 获取<p>预约单唯一ID。</p>
                     * @return BookingId <p>预约单唯一ID。</p>
                     * 
                     */
                    std::string GetBookingId() const;

                    /**
                     * 设置<p>预约单唯一ID。</p>
                     * @param _bookingId <p>预约单唯一ID。</p>
                     * 
                     */
                    void SetBookingId(const std::string& _bookingId);

                    /**
                     * 判断参数 BookingId 是否已赋值
                     * @return BookingId 是否已赋值
                     * 
                     */
                    bool BookingIdHasBeenSet() const;

                    /**
                     * 获取<p>与RCE-PRO约定的定制化信息。为K:V 格式的对象数组。<br>示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * @return Cust <p>与RCE-PRO约定的定制化信息。为K:V 格式的对象数组。<br>示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * 
                     */
                    std::vector<Cust> GetCust() const;

                    /**
                     * 设置<p>与RCE-PRO约定的定制化信息。为K:V 格式的对象数组。<br>示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * @param _cust <p>与RCE-PRO约定的定制化信息。为K:V 格式的对象数组。<br>示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * 
                     */
                    void SetCust(const std::vector<Cust>& _cust);

                    /**
                     * 判断参数 Cust 是否已赋值
                     * @return Cust 是否已赋值
                     * 
                     */
                    bool CustHasBeenSet() const;

                private:

                    /**
                     * <p>预约场景。例如：预订机票、预订酒店</p>
                     */
                    std::string m_bookingScene;
                    bool m_bookingSceneHasBeenSet;

                    /**
                     * <p>预约时间。要求符合ISO-8601标准的带时区的毫秒级时间，格式&quot;YYYY-MM-DDTHH:mm:ss.sssZ&quot; ，例如&quot;2025-10-19T09:11:10.145+08:00&quot;。</p>
                     */
                    std::string m_bookingTime;
                    bool m_bookingTimeHasBeenSet;

                    /**
                     * <p>预约单唯一ID。</p>
                     */
                    std::string m_bookingId;
                    bool m_bookingIdHasBeenSet;

                    /**
                     * <p>与RCE-PRO约定的定制化信息。为K:V 格式的对象数组。<br>示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     */
                    std::vector<Cust> m_cust;
                    bool m_custHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_BOOKINGEVENT_H_
