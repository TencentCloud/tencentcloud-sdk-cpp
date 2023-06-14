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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_TICKETCHECKTRENDOBJ_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_TICKETCHECKTRENDOBJ_H_

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
                * 验证码票据校验趋势obj
                */
                class TicketCheckTrendObj : public AbstractModel
                {
                public:
                    TicketCheckTrendObj();
                    ~TicketCheckTrendObj() = default;
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
                     * 获取票据校验量
                     * @return TicketCount 票据校验量
                     * 
                     */
                    int64_t GetTicketCount() const;

                    /**
                     * 设置票据校验量
                     * @param _ticketCount 票据校验量
                     * 
                     */
                    void SetTicketCount(const int64_t& _ticketCount);

                    /**
                     * 判断参数 TicketCount 是否已赋值
                     * @return TicketCount 是否已赋值
                     * 
                     */
                    bool TicketCountHasBeenSet() const;

                    /**
                     * 获取票据通过量
                     * @return TicketThroughput 票据通过量
                     * 
                     */
                    int64_t GetTicketThroughput() const;

                    /**
                     * 设置票据通过量
                     * @param _ticketThroughput 票据通过量
                     * 
                     */
                    void SetTicketThroughput(const int64_t& _ticketThroughput);

                    /**
                     * 判断参数 TicketThroughput 是否已赋值
                     * @return TicketThroughput 是否已赋值
                     * 
                     */
                    bool TicketThroughputHasBeenSet() const;

                    /**
                     * 获取票据拦截量
                     * @return TicketIntercept 票据拦截量
                     * 
                     */
                    int64_t GetTicketIntercept() const;

                    /**
                     * 设置票据拦截量
                     * @param _ticketIntercept 票据拦截量
                     * 
                     */
                    void SetTicketIntercept(const int64_t& _ticketIntercept);

                    /**
                     * 判断参数 TicketIntercept 是否已赋值
                     * @return TicketIntercept 是否已赋值
                     * 
                     */
                    bool TicketInterceptHasBeenSet() const;

                private:

                    /**
                     * 时间参数
                     */
                    std::string m_ftime;
                    bool m_ftimeHasBeenSet;

                    /**
                     * 票据校验量
                     */
                    int64_t m_ticketCount;
                    bool m_ticketCountHasBeenSet;

                    /**
                     * 票据通过量
                     */
                    int64_t m_ticketThroughput;
                    bool m_ticketThroughputHasBeenSet;

                    /**
                     * 票据拦截量
                     */
                    int64_t m_ticketIntercept;
                    bool m_ticketInterceptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_TICKETCHECKTRENDOBJ_H_
