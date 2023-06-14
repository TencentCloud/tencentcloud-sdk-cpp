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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_REQUESTTRENDOBJ_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_REQUESTTRENDOBJ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 验证码请求趋势图obj
                */
                class RequestTrendObj : public AbstractModel
                {
                public:
                    RequestTrendObj();
                    ~RequestTrendObj() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间参数
                     * @return Ftime 时间参数
                     * 
                     */
                    std::string GetFtime() const;

                    /**
                     * 设置时间参数
                     * @param _ftime 时间参数
                     * 
                     */
                    void SetFtime(const std::string& _ftime);

                    /**
                     * 判断参数 Ftime 是否已赋值
                     * @return Ftime 是否已赋值
                     * 
                     */
                    bool FtimeHasBeenSet() const;

                    /**
                     * 获取请求量
                     * @return RequestAction 请求量
                     * 
                     */
                    int64_t GetRequestAction() const;

                    /**
                     * 设置请求量
                     * @param _requestAction 请求量
                     * 
                     */
                    void SetRequestAction(const int64_t& _requestAction);

                    /**
                     * 判断参数 RequestAction 是否已赋值
                     * @return RequestAction 是否已赋值
                     * 
                     */
                    bool RequestActionHasBeenSet() const;

                    /**
                     * 获取验证量
                     * @return RequestVerify 验证量
                     * 
                     */
                    int64_t GetRequestVerify() const;

                    /**
                     * 设置验证量
                     * @param _requestVerify 验证量
                     * 
                     */
                    void SetRequestVerify(const int64_t& _requestVerify);

                    /**
                     * 判断参数 RequestVerify 是否已赋值
                     * @return RequestVerify 是否已赋值
                     * 
                     */
                    bool RequestVerifyHasBeenSet() const;

                    /**
                     * 获取通过量
                     * @return RequestThroughput 通过量
                     * 
                     */
                    int64_t GetRequestThroughput() const;

                    /**
                     * 设置通过量
                     * @param _requestThroughput 通过量
                     * 
                     */
                    void SetRequestThroughput(const int64_t& _requestThroughput);

                    /**
                     * 判断参数 RequestThroughput 是否已赋值
                     * @return RequestThroughput 是否已赋值
                     * 
                     */
                    bool RequestThroughputHasBeenSet() const;

                    /**
                     * 获取拦截量
                     * @return RequestIntercept 拦截量
                     * 
                     */
                    uint64_t GetRequestIntercept() const;

                    /**
                     * 设置拦截量
                     * @param _requestIntercept 拦截量
                     * 
                     */
                    void SetRequestIntercept(const uint64_t& _requestIntercept);

                    /**
                     * 判断参数 RequestIntercept 是否已赋值
                     * @return RequestIntercept 是否已赋值
                     * 
                     */
                    bool RequestInterceptHasBeenSet() const;

                private:

                    /**
                     * 时间参数
                     */
                    std::string m_ftime;
                    bool m_ftimeHasBeenSet;

                    /**
                     * 请求量
                     */
                    int64_t m_requestAction;
                    bool m_requestActionHasBeenSet;

                    /**
                     * 验证量
                     */
                    int64_t m_requestVerify;
                    bool m_requestVerifyHasBeenSet;

                    /**
                     * 通过量
                     */
                    int64_t m_requestThroughput;
                    bool m_requestThroughputHasBeenSet;

                    /**
                     * 拦截量
                     */
                    uint64_t m_requestIntercept;
                    bool m_requestInterceptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_REQUESTTRENDOBJ_H_
