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

#ifndef TENCENTCLOUD_NPP_V20190823_MODEL_DESCRIBECALLBACKSTATUSRESPONSE_H_
#define TENCENTCLOUD_NPP_V20190823_MODEL_DESCRIBECALLBACKSTATUSRESPONSE_H_

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
                * DescribeCallBackStatus返回参数结构体
                */
                class DescribeCallBackStatusResponse : public AbstractModel
                {
                public:
                    DescribeCallBackStatusResponse();
                    ~DescribeCallBackStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取错误码
                     * @return ErrorCode 错误码
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return Msg 错误信息
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取业务appid
                     * @return AppId 业务appid
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取回拨请求响应中返回的 callId
                     * @return CallId 回拨请求响应中返回的 callId
                     * 
                     */
                    std::string GetCallId() const;

                    /**
                     * 判断参数 CallId 是否已赋值
                     * @return CallId 是否已赋值
                     * 
                     */
                    bool CallIdHasBeenSet() const;

                    /**
                     * 获取主叫号码
                     * @return Src 主叫号码
                     * 
                     */
                    std::string GetSrc() const;

                    /**
                     * 判断参数 Src 是否已赋值
                     * @return Src 是否已赋值
                     * 
                     */
                    bool SrcHasBeenSet() const;

                    /**
                     * 获取被叫号码
                     * @return Dst 被叫号码
                     * 
                     */
                    std::string GetDst() const;

                    /**
                     * 判断参数 Dst 是否已赋值
                     * @return Dst 是否已赋值
                     * 
                     */
                    bool DstHasBeenSet() const;

                    /**
                     * 获取通话最后状态：0：未知状态 1：主叫响铃中 2：主叫接听 3：被叫响铃中 4：正常通话中 5：通话结束
                     * @return CallStatus 通话最后状态：0：未知状态 1：主叫响铃中 2：主叫接听 3：被叫响铃中 4：正常通话中 5：通话结束
                     * 
                     */
                    std::string GetCallStatus() const;

                    /**
                     * 判断参数 CallStatus 是否已赋值
                     * @return CallStatus 是否已赋值
                     * 
                     */
                    bool CallStatusHasBeenSet() const;

                private:

                    /**
                     * 错误码
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * 业务appid
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 回拨请求响应中返回的 callId
                     */
                    std::string m_callId;
                    bool m_callIdHasBeenSet;

                    /**
                     * 主叫号码
                     */
                    std::string m_src;
                    bool m_srcHasBeenSet;

                    /**
                     * 被叫号码
                     */
                    std::string m_dst;
                    bool m_dstHasBeenSet;

                    /**
                     * 通话最后状态：0：未知状态 1：主叫响铃中 2：主叫接听 3：被叫响铃中 4：正常通话中 5：通话结束
                     */
                    std::string m_callStatus;
                    bool m_callStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NPP_V20190823_MODEL_DESCRIBECALLBACKSTATUSRESPONSE_H_
