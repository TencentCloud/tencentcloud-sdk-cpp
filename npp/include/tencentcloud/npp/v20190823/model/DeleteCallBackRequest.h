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

#ifndef TENCENTCLOUD_NPP_V20190823_MODEL_DELETECALLBACKREQUEST_H_
#define TENCENTCLOUD_NPP_V20190823_MODEL_DELETECALLBACKREQUEST_H_

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
                * DeleteCallBack请求参数结构体
                */
                class DeleteCallBackRequest : public AbstractModel
                {
                public:
                    DeleteCallBackRequest();
                    ~DeleteCallBackRequest() = default;
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
                     * 获取回拨请求响应中返回的 callId
                     * @return CallId 回拨请求响应中返回的 callId
                     * 
                     */
                    std::string GetCallId() const;

                    /**
                     * 设置回拨请求响应中返回的 callId
                     * @param _callId 回拨请求响应中返回的 callId
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
                     * 获取0：不管通话状态直接拆线（默认) 1：主叫响铃以后状态不拆线 2：主叫接听以后状态不拆线 3：被叫响铃以后状态不拆线 4：被叫接听以后状态不拆线
                     * @return CancelFlag 0：不管通话状态直接拆线（默认) 1：主叫响铃以后状态不拆线 2：主叫接听以后状态不拆线 3：被叫响铃以后状态不拆线 4：被叫接听以后状态不拆线
                     * 
                     */
                    std::string GetCancelFlag() const;

                    /**
                     * 设置0：不管通话状态直接拆线（默认) 1：主叫响铃以后状态不拆线 2：主叫接听以后状态不拆线 3：被叫响铃以后状态不拆线 4：被叫接听以后状态不拆线
                     * @param _cancelFlag 0：不管通话状态直接拆线（默认) 1：主叫响铃以后状态不拆线 2：主叫接听以后状态不拆线 3：被叫响铃以后状态不拆线 4：被叫接听以后状态不拆线
                     * 
                     */
                    void SetCancelFlag(const std::string& _cancelFlag);

                    /**
                     * 判断参数 CancelFlag 是否已赋值
                     * @return CancelFlag 是否已赋值
                     * 
                     */
                    bool CancelFlagHasBeenSet() const;

                private:

                    /**
                     * 业务appid
                     */
                    std::string m_bizAppId;
                    bool m_bizAppIdHasBeenSet;

                    /**
                     * 回拨请求响应中返回的 callId
                     */
                    std::string m_callId;
                    bool m_callIdHasBeenSet;

                    /**
                     * 0：不管通话状态直接拆线（默认) 1：主叫响铃以后状态不拆线 2：主叫接听以后状态不拆线 3：被叫响铃以后状态不拆线 4：被叫接听以后状态不拆线
                     */
                    std::string m_cancelFlag;
                    bool m_cancelFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NPP_V20190823_MODEL_DELETECALLBACKREQUEST_H_
