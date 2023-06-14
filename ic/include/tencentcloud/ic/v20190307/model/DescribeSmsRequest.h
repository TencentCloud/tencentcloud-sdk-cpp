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

#ifndef TENCENTCLOUD_IC_V20190307_MODEL_DESCRIBESMSREQUEST_H_
#define TENCENTCLOUD_IC_V20190307_MODEL_DESCRIBESMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ic
    {
        namespace V20190307
        {
            namespace Model
            {
                /**
                * DescribeSms请求参数结构体
                */
                class DescribeSmsRequest : public AbstractModel
                {
                public:
                    DescribeSmsRequest();
                    ~DescribeSmsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return Sdkappid 应用ID
                     * 
                     */
                    int64_t GetSdkappid() const;

                    /**
                     * 设置应用ID
                     * @param _sdkappid 应用ID
                     * 
                     */
                    void SetSdkappid(const int64_t& _sdkappid);

                    /**
                     * 判断参数 Sdkappid 是否已赋值
                     * @return Sdkappid 是否已赋值
                     * 
                     */
                    bool SdkappidHasBeenSet() const;

                    /**
                     * 获取卡片ID
                     * @return Iccid 卡片ID
                     * 
                     */
                    std::string GetIccid() const;

                    /**
                     * 设置卡片ID
                     * @param _iccid 卡片ID
                     * 
                     */
                    void SetIccid(const std::string& _iccid);

                    /**
                     * 判断参数 Iccid 是否已赋值
                     * @return Iccid 是否已赋值
                     * 
                     */
                    bool IccidHasBeenSet() const;

                    /**
                     * 获取卡片号码
                     * @return Msisdn 卡片号码
                     * 
                     */
                    std::string GetMsisdn() const;

                    /**
                     * 设置卡片号码
                     * @param _msisdn 卡片号码
                     * 
                     */
                    void SetMsisdn(const std::string& _msisdn);

                    /**
                     * 判断参数 Msisdn 是否已赋值
                     * @return Msisdn 是否已赋值
                     * 
                     */
                    bool MsisdnHasBeenSet() const;

                    /**
                     * 获取短信类型
                     * @return SmsType 短信类型
                     * 
                     */
                    int64_t GetSmsType() const;

                    /**
                     * 设置短信类型
                     * @param _smsType 短信类型
                     * 
                     */
                    void SetSmsType(const int64_t& _smsType);

                    /**
                     * 判断参数 SmsType 是否已赋值
                     * @return SmsType 是否已赋值
                     * 
                     */
                    bool SmsTypeHasBeenSet() const;

                    /**
                     * 获取开始时间  YYYY-MM-DD HH:mm:ss
                     * @return BeginTime 开始时间  YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置开始时间  YYYY-MM-DD HH:mm:ss
                     * @param _beginTime 开始时间  YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取结束时间  YYYY-MM-DD HH:mm:ss
                     * @return EndTime 结束时间  YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间  YYYY-MM-DD HH:mm:ss
                     * @param _endTime 结束时间  YYYY-MM-DD HH:mm:ss
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
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取小于200
                     * @return Limit 小于200
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置小于200
                     * @param _limit 小于200
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    int64_t m_sdkappid;
                    bool m_sdkappidHasBeenSet;

                    /**
                     * 卡片ID
                     */
                    std::string m_iccid;
                    bool m_iccidHasBeenSet;

                    /**
                     * 卡片号码
                     */
                    std::string m_msisdn;
                    bool m_msisdnHasBeenSet;

                    /**
                     * 短信类型
                     */
                    int64_t m_smsType;
                    bool m_smsTypeHasBeenSet;

                    /**
                     * 开始时间  YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 结束时间  YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 小于200
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IC_V20190307_MODEL_DESCRIBESMSREQUEST_H_
