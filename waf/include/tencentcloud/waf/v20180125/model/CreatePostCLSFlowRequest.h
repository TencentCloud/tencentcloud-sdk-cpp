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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CREATEPOSTCLSFLOWREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CREATEPOSTCLSFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * CreatePostCLSFlow请求参数结构体
                */
                class CreatePostCLSFlowRequest : public AbstractModel
                {
                public:
                    CreatePostCLSFlowRequest();
                    ~CreatePostCLSFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取投递的CLS所在区域，默认为ap-shanghai
                     * @return CLSRegion 投递的CLS所在区域，默认为ap-shanghai
                     * 
                     */
                    std::string GetCLSRegion() const;

                    /**
                     * 设置投递的CLS所在区域，默认为ap-shanghai
                     * @param _cLSRegion 投递的CLS所在区域，默认为ap-shanghai
                     * 
                     */
                    void SetCLSRegion(const std::string& _cLSRegion);

                    /**
                     * 判断参数 CLSRegion 是否已赋值
                     * @return CLSRegion 是否已赋值
                     * 
                     */
                    bool CLSRegionHasBeenSet() const;

                    /**
                     * 获取投递的CLS所在日志集合名称，默认为 waf_post_logset
                     * @return LogsetName 投递的CLS所在日志集合名称，默认为 waf_post_logset
                     * 
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 设置投递的CLS所在日志集合名称，默认为 waf_post_logset
                     * @param _logsetName 投递的CLS所在日志集合名称，默认为 waf_post_logset
                     * 
                     */
                    void SetLogsetName(const std::string& _logsetName);

                    /**
                     * 判断参数 LogsetName 是否已赋值
                     * @return LogsetName 是否已赋值
                     * 
                     */
                    bool LogsetNameHasBeenSet() const;

                    /**
                     * 获取1-访问日志，2-攻击日志，默认为访问日志。
                     * @return LogType 1-访问日志，2-攻击日志，默认为访问日志。
                     * 
                     */
                    int64_t GetLogType() const;

                    /**
                     * 设置1-访问日志，2-攻击日志，默认为访问日志。
                     * @param _logType 1-访问日志，2-攻击日志，默认为访问日志。
                     * 
                     */
                    void SetLogType(const int64_t& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取投递的CLS所在日志主题的名称，默认为 waf_post_logtopic
                     * @return LogTopicName 投递的CLS所在日志主题的名称，默认为 waf_post_logtopic
                     * 
                     */
                    std::string GetLogTopicName() const;

                    /**
                     * 设置投递的CLS所在日志主题的名称，默认为 waf_post_logtopic
                     * @param _logTopicName 投递的CLS所在日志主题的名称，默认为 waf_post_logtopic
                     * 
                     */
                    void SetLogTopicName(const std::string& _logTopicName);

                    /**
                     * 判断参数 LogTopicName 是否已赋值
                     * @return LogTopicName 是否已赋值
                     * 
                     */
                    bool LogTopicNameHasBeenSet() const;

                private:

                    /**
                     * 投递的CLS所在区域，默认为ap-shanghai
                     */
                    std::string m_cLSRegion;
                    bool m_cLSRegionHasBeenSet;

                    /**
                     * 投递的CLS所在日志集合名称，默认为 waf_post_logset
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                    /**
                     * 1-访问日志，2-攻击日志，默认为访问日志。
                     */
                    int64_t m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 投递的CLS所在日志主题的名称，默认为 waf_post_logtopic
                     */
                    std::string m_logTopicName;
                    bool m_logTopicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CREATEPOSTCLSFLOWREQUEST_H_
