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

#ifndef TENCENTCLOUD_NPP_V20190823_MODEL_DESCRIBECALLBACKCDRREQUEST_H_
#define TENCENTCLOUD_NPP_V20190823_MODEL_DESCRIBECALLBACKCDRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Npp
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DescribeCallBackCdr请求参数结构体
                */
                class DescribeCallBackCdrRequest : public AbstractModel
                {
                public:
                    DescribeCallBackCdrRequest();
                    ~DescribeCallBackCdrRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务appid
                     * @return BizAppId 业务appid
                     * 
                     */
                    std::string GetBizAppId() const;

                    /**
                     * 设置业务appid
                     * @param _bizAppId 业务appid
                     * 
                     */
                    void SetBizAppId(const std::string& _bizAppId);

                    /**
                     * 判断参数 BizAppId 是否已赋值
                     * @return BizAppId 是否已赋值
                     * 
                     */
                    bool BizAppIdHasBeenSet() const;

                    /**
                     * 获取回拨请求响应中返回的 callId，按 callId 查询该话单详细信息
                     * @return CallId 回拨请求响应中返回的 callId，按 callId 查询该话单详细信息
                     * 
                     */
                    std::string GetCallId() const;

                    /**
                     * 设置回拨请求响应中返回的 callId，按 callId 查询该话单详细信息
                     * @param _callId 回拨请求响应中返回的 callId，按 callId 查询该话单详细信息
                     * 
                     */
                    void SetCallId(const std::string& _callId);

                    /**
                     * 判断参数 CallId 是否已赋值
                     * @return CallId 是否已赋值
                     * 
                     */
                    bool CallIdHasBeenSet() const;

                    /**
                     * 获取查询主叫用户产生的呼叫话单，如填空表示拉取这个时间段所有话单
                     * @return Src 查询主叫用户产生的呼叫话单，如填空表示拉取这个时间段所有话单
                     * 
                     */
                    std::string GetSrc() const;

                    /**
                     * 设置查询主叫用户产生的呼叫话单，如填空表示拉取这个时间段所有话单
                     * @param _src 查询主叫用户产生的呼叫话单，如填空表示拉取这个时间段所有话单
                     * 
                     */
                    void SetSrc(const std::string& _src);

                    /**
                     * 判断参数 Src 是否已赋值
                     * @return Src 是否已赋值
                     * 
                     */
                    bool SrcHasBeenSet() const;

                    /**
                     * 获取话单开始时间戳
                     * @return StartTimeStamp 话单开始时间戳
                     * 
                     */
                    std::string GetStartTimeStamp() const;

                    /**
                     * 设置话单开始时间戳
                     * @param _startTimeStamp 话单开始时间戳
                     * 
                     */
                    void SetStartTimeStamp(const std::string& _startTimeStamp);

                    /**
                     * 判断参数 StartTimeStamp 是否已赋值
                     * @return StartTimeStamp 是否已赋值
                     * 
                     */
                    bool StartTimeStampHasBeenSet() const;

                    /**
                     * 获取话单结束时间戳
                     * @return EndTimeStamp 话单结束时间戳
                     * 
                     */
                    std::string GetEndTimeStamp() const;

                    /**
                     * 设置话单结束时间戳
                     * @param _endTimeStamp 话单结束时间戳
                     * 
                     */
                    void SetEndTimeStamp(const std::string& _endTimeStamp);

                    /**
                     * 判断参数 EndTimeStamp 是否已赋值
                     * @return EndTimeStamp 是否已赋值
                     * 
                     */
                    bool EndTimeStampHasBeenSet() const;

                private:

                    /**
                     * 业务appid
                     */
                    std::string m_bizAppId;
                    bool m_bizAppIdHasBeenSet;

                    /**
                     * 回拨请求响应中返回的 callId，按 callId 查询该话单详细信息
                     */
                    std::string m_callId;
                    bool m_callIdHasBeenSet;

                    /**
                     * 查询主叫用户产生的呼叫话单，如填空表示拉取这个时间段所有话单
                     */
                    std::string m_src;
                    bool m_srcHasBeenSet;

                    /**
                     * 话单开始时间戳
                     */
                    std::string m_startTimeStamp;
                    bool m_startTimeStampHasBeenSet;

                    /**
                     * 话单结束时间戳
                     */
                    std::string m_endTimeStamp;
                    bool m_endTimeStampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NPP_V20190823_MODEL_DESCRIBECALLBACKCDRREQUEST_H_
