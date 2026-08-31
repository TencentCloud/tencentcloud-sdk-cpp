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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBESENDRECORDLISTREQUEST_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBESENDRECORDLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * DescribeSendRecordList请求参数结构体
                */
                class DescribeSendRecordListRequest : public AbstractModel
                {
                public:
                    DescribeSendRecordListRequest();
                    ~DescribeSendRecordListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>下发的手机号码，依据 E.164 标准为：+[国家（或地区）码][手机号] ，示例如：+8613601238015， 其中前面有一个+号 ，86为国家码，13601238015为手机号。</p>
                     * @return PhoneNumber <p>下发的手机号码，依据 E.164 标准为：+[国家（或地区）码][手机号] ，示例如：+8613601238015， 其中前面有一个+号 ，86为国家码，13601238015为手机号。</p>
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置<p>下发的手机号码，依据 E.164 标准为：+[国家（或地区）码][手机号] ，示例如：+8613601238015， 其中前面有一个+号 ，86为国家码，13601238015为手机号。</p>
                     * @param _phoneNumber <p>下发的手机号码，依据 E.164 标准为：+[国家（或地区）码][手机号] ，示例如：+8613601238015， 其中前面有一个+号 ，86为国家码，13601238015为手机号。</p>
                     * 
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     * 
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取<p>短信 SdkAppId 在 <a href="https://console.cloud.tencent.com/smsv2/app-manage">短信控制台</a>  添加应用后生成的实际 SdkAppId。</p>
                     * @return SmsSdkAppId <p>短信 SdkAppId 在 <a href="https://console.cloud.tencent.com/smsv2/app-manage">短信控制台</a>  添加应用后生成的实际 SdkAppId。</p>
                     * 
                     */
                    std::string GetSmsSdkAppId() const;

                    /**
                     * 设置<p>短信 SdkAppId 在 <a href="https://console.cloud.tencent.com/smsv2/app-manage">短信控制台</a>  添加应用后生成的实际 SdkAppId。</p>
                     * @param _smsSdkAppId <p>短信 SdkAppId 在 <a href="https://console.cloud.tencent.com/smsv2/app-manage">短信控制台</a>  添加应用后生成的实际 SdkAppId。</p>
                     * 
                     */
                    void SetSmsSdkAppId(const std::string& _smsSdkAppId);

                    /**
                     * 判断参数 SmsSdkAppId 是否已赋值
                     * @return SmsSdkAppId 是否已赋值
                     * 
                     */
                    bool SmsSdkAppIdHasBeenSet() const;

                    /**
                     * 获取<p>查询起始时间，以短信发送时间为准，UNIX 时间戳（单位：秒）。注：最早可查询当前时间前 72 小时的数据。</p><p>单位：秒</p>
                     * @return BeginTime <p>查询起始时间，以短信发送时间为准，UNIX 时间戳（单位：秒）。注：最早可查询当前时间前 72 小时的数据。</p><p>单位：秒</p>
                     * 
                     */
                    uint64_t GetBeginTime() const;

                    /**
                     * 设置<p>查询起始时间，以短信发送时间为准，UNIX 时间戳（单位：秒）。注：最早可查询当前时间前 72 小时的数据。</p><p>单位：秒</p>
                     * @param _beginTime <p>查询起始时间，以短信发送时间为准，UNIX 时间戳（单位：秒）。注：最早可查询当前时间前 72 小时的数据。</p><p>单位：秒</p>
                     * 
                     */
                    void SetBeginTime(const uint64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>查询截止时间，以短信发送时间为准，UNIX 时间戳（时间：秒）。注：不可以超过当前时间。</p><p>单位：秒</p><p>默认值：腾讯云服务当前时间</p>
                     * @return EndTime <p>查询截止时间，以短信发送时间为准，UNIX 时间戳（时间：秒）。注：不可以超过当前时间。</p><p>单位：秒</p><p>默认值：腾讯云服务当前时间</p>
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置<p>查询截止时间，以短信发送时间为准，UNIX 时间戳（时间：秒）。注：不可以超过当前时间。</p><p>单位：秒</p><p>默认值：腾讯云服务当前时间</p>
                     * @param _endTime <p>查询截止时间，以短信发送时间为准，UNIX 时间戳（时间：秒）。注：不可以超过当前时间。</p><p>单位：秒</p><p>默认值：腾讯云服务当前时间</p>
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>单次查询最大条数。</p><p>取值范围：[1, 50]</p><p>默认值：20</p>
                     * @return Limit <p>单次查询最大条数。</p><p>取值范围：[1, 50]</p><p>默认值：20</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>单次查询最大条数。</p><p>取值范围：[1, 50]</p><p>默认值：20</p>
                     * @param _limit <p>单次查询最大条数。</p><p>取值范围：[1, 50]</p><p>默认值：20</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>偏移量。 </p><p>取值范围：[0, 1000]</p><p>默认值：0</p><p>注：查询范围内超过 1000 条记录将被截断，最大查询 1000 条，查询记录按发送时间降序。</p>
                     * @return Offset <p>偏移量。 </p><p>取值范围：[0, 1000]</p><p>默认值：0</p><p>注：查询范围内超过 1000 条记录将被截断，最大查询 1000 条，查询记录按发送时间降序。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量。 </p><p>取值范围：[0, 1000]</p><p>默认值：0</p><p>注：查询范围内超过 1000 条记录将被截断，最大查询 1000 条，查询记录按发送时间降序。</p>
                     * @param _offset <p>偏移量。 </p><p>取值范围：[0, 1000]</p><p>默认值：0</p><p>注：查询范围内超过 1000 条记录将被截断，最大查询 1000 条，查询记录按发送时间降序。</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>下发的手机号码，依据 E.164 标准为：+[国家（或地区）码][手机号] ，示例如：+8613601238015， 其中前面有一个+号 ，86为国家码，13601238015为手机号。</p>
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * <p>短信 SdkAppId 在 <a href="https://console.cloud.tencent.com/smsv2/app-manage">短信控制台</a>  添加应用后生成的实际 SdkAppId。</p>
                     */
                    std::string m_smsSdkAppId;
                    bool m_smsSdkAppIdHasBeenSet;

                    /**
                     * <p>查询起始时间，以短信发送时间为准，UNIX 时间戳（单位：秒）。注：最早可查询当前时间前 72 小时的数据。</p><p>单位：秒</p>
                     */
                    uint64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>查询截止时间，以短信发送时间为准，UNIX 时间戳（时间：秒）。注：不可以超过当前时间。</p><p>单位：秒</p><p>默认值：腾讯云服务当前时间</p>
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>单次查询最大条数。</p><p>取值范围：[1, 50]</p><p>默认值：20</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量。 </p><p>取值范围：[0, 1000]</p><p>默认值：0</p><p>注：查询范围内超过 1000 条记录将被截断，最大查询 1000 条，查询记录按发送时间降序。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBESENDRECORDLISTREQUEST_H_
