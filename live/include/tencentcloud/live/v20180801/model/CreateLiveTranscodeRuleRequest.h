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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVETRANSCODERULEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVETRANSCODERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * CreateLiveTranscodeRule请求参数结构体
                */
                class CreateLiveTranscodeRuleRequest : public AbstractModel
                {
                public:
                    CreateLiveTranscodeRuleRequest();
                    ~CreateLiveTranscodeRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取播放域名。
                     * @return DomainName 播放域名。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置播放域名。
                     * @param _domainName 播放域名。
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取推流路径，与推流和播放地址中的AppName保持一致。如果只绑定域名，则此处填""。
                     * @return AppName 推流路径，与推流和播放地址中的AppName保持一致。如果只绑定域名，则此处填""。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置推流路径，与推流和播放地址中的AppName保持一致。如果只绑定域名，则此处填""。
                     * @param _appName 推流路径，与推流和播放地址中的AppName保持一致。如果只绑定域名，则此处填""。
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取流名称。已废弃该字段，请传入空字符串。
                     * @return StreamName 流名称。已废弃该字段，请传入空字符串。
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置流名称。已废弃该字段，请传入空字符串。
                     * @param _streamName 流名称。已废弃该字段，请传入空字符串。
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取指定已有的模板Id。
                     * @return TemplateId 指定已有的模板Id。
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置指定已有的模板Id。
                     * @param _templateId 指定已有的模板Id。
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * 播放域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 推流路径，与推流和播放地址中的AppName保持一致。如果只绑定域名，则此处填""。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 流名称。已废弃该字段，请传入空字符串。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 指定已有的模板Id。
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVETRANSCODERULEREQUEST_H_
