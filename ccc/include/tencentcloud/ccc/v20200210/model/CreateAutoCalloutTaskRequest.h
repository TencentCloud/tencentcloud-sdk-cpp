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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAUTOCALLOUTTASKREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAUTOCALLOUTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * CreateAutoCalloutTask请求参数结构体
                */
                class CreateAutoCalloutTaskRequest : public AbstractModel
                {
                public:
                    CreateAutoCalloutTaskRequest();
                    ~CreateAutoCalloutTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取呼叫中心实例Id
                     * @return SdkAppId 呼叫中心实例Id
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置呼叫中心实例Id
                     * @param SdkAppId 呼叫中心实例Id
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取任务起始时间戳，Unix 秒级时间戳
                     * @return NotBefore 任务起始时间戳，Unix 秒级时间戳
                     */
                    int64_t GetNotBefore() const;

                    /**
                     * 设置任务起始时间戳，Unix 秒级时间戳
                     * @param NotBefore 任务起始时间戳，Unix 秒级时间戳
                     */
                    void SetNotBefore(const int64_t& _notBefore);

                    /**
                     * 判断参数 NotBefore 是否已赋值
                     * @return NotBefore 是否已赋值
                     */
                    bool NotBeforeHasBeenSet() const;

                    /**
                     * 获取被叫号码列表
                     * @return Callees 被叫号码列表
                     */
                    std::vector<std::string> GetCallees() const;

                    /**
                     * 设置被叫号码列表
                     * @param Callees 被叫号码列表
                     */
                    void SetCallees(const std::vector<std::string>& _callees);

                    /**
                     * 判断参数 Callees 是否已赋值
                     * @return Callees 是否已赋值
                     */
                    bool CalleesHasBeenSet() const;

                    /**
                     * 获取主叫号码列表
                     * @return Callers 主叫号码列表
                     */
                    std::vector<std::string> GetCallers() const;

                    /**
                     * 设置主叫号码列表
                     * @param Callers 主叫号码列表
                     */
                    void SetCallers(const std::vector<std::string>& _callers);

                    /**
                     * 判断参数 Callers 是否已赋值
                     * @return Callers 是否已赋值
                     */
                    bool CallersHasBeenSet() const;

                    /**
                     * 获取呼叫使用的Ivr
                     * @return IvrId 呼叫使用的Ivr
                     */
                    uint64_t GetIvrId() const;

                    /**
                     * 设置呼叫使用的Ivr
                     * @param IvrId 呼叫使用的Ivr
                     */
                    void SetIvrId(const uint64_t& _ivrId);

                    /**
                     * 判断参数 IvrId 是否已赋值
                     * @return IvrId 是否已赋值
                     */
                    bool IvrIdHasBeenSet() const;

                    /**
                     * 获取任务名
                     * @return Name 任务名
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务名
                     * @param Name 任务名
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取任务描述
                     * @return Description 任务描述
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置任务描述
                     * @param Description 任务描述
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取任务停止时间戳，Unix 秒级时间戳
                     * @return NotAfter 任务停止时间戳，Unix 秒级时间戳
                     */
                    int64_t GetNotAfter() const;

                    /**
                     * 设置任务停止时间戳，Unix 秒级时间戳
                     * @param NotAfter 任务停止时间戳，Unix 秒级时间戳
                     */
                    void SetNotAfter(const int64_t& _notAfter);

                    /**
                     * 判断参数 NotAfter 是否已赋值
                     * @return NotAfter 是否已赋值
                     */
                    bool NotAfterHasBeenSet() const;

                    /**
                     * 获取最大尝试次数
                     * @return Tries 最大尝试次数
                     */
                    uint64_t GetTries() const;

                    /**
                     * 设置最大尝试次数
                     * @param Tries 最大尝试次数
                     */
                    void SetTries(const uint64_t& _tries);

                    /**
                     * 判断参数 Tries 是否已赋值
                     * @return Tries 是否已赋值
                     */
                    bool TriesHasBeenSet() const;

                private:

                    /**
                     * 呼叫中心实例Id
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 任务起始时间戳，Unix 秒级时间戳
                     */
                    int64_t m_notBefore;
                    bool m_notBeforeHasBeenSet;

                    /**
                     * 被叫号码列表
                     */
                    std::vector<std::string> m_callees;
                    bool m_calleesHasBeenSet;

                    /**
                     * 主叫号码列表
                     */
                    std::vector<std::string> m_callers;
                    bool m_callersHasBeenSet;

                    /**
                     * 呼叫使用的Ivr
                     */
                    uint64_t m_ivrId;
                    bool m_ivrIdHasBeenSet;

                    /**
                     * 任务名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 任务描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 任务停止时间戳，Unix 秒级时间戳
                     */
                    int64_t m_notAfter;
                    bool m_notAfterHasBeenSet;

                    /**
                     * 最大尝试次数
                     */
                    uint64_t m_tries;
                    bool m_triesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAUTOCALLOUTTASKREQUEST_H_
