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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVESMARTERASERULEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVESMARTERASERULEREQUEST_H_

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
                * DeleteLiveSmartEraseRule请求参数结构体
                */
                class DeleteLiveSmartEraseRuleRequest : public AbstractModel
                {
                public:
                    DeleteLiveSmartEraseRuleRequest();
                    ~DeleteLiveSmartEraseRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>直播智能擦除模板id。</p>
                     * @return TemplateId <p>直播智能擦除模板id。</p>
                     * 
                     */
                    uint64_t GetTemplateId() const;

                    /**
                     * 设置<p>直播智能擦除模板id。</p>
                     * @param _templateId <p>直播智能擦除模板id。</p>
                     * 
                     */
                    void SetTemplateId(const uint64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>推流域名。<br>域名+AppName+StreamName唯一标识单个转码规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。</p>
                     * @return DomainName <p>推流域名。<br>域名+AppName+StreamName唯一标识单个转码规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。</p>
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置<p>推流域名。<br>域名+AppName+StreamName唯一标识单个转码规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。</p>
                     * @param _domainName <p>推流域名。<br>域名+AppName+StreamName唯一标识单个转码规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。</p>
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
                     * 获取<p>，与推流和播放地址中的AppName保持一致，默认为 live。域名+AppName+StreamName唯一标识单个转码规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。推流路径</p>
                     * @return AppName <p>，与推流和播放地址中的AppName保持一致，默认为 live。域名+AppName+StreamName唯一标识单个转码规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。推流路径</p>
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置<p>，与推流和播放地址中的AppName保持一致，默认为 live。域名+AppName+StreamName唯一标识单个转码规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。推流路径</p>
                     * @param _appName <p>，与推流和播放地址中的AppName保持一致，默认为 live。域名+AppName+StreamName唯一标识单个转码规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。推流路径</p>
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
                     * 获取<p>流名称。<br>域名+AppName+StreamName唯一标识单个转码规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。</p>
                     * @return StreamName <p>流名称。<br>域名+AppName+StreamName唯一标识单个转码规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。</p>
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置<p>流名称。<br>域名+AppName+StreamName唯一标识单个转码规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。</p>
                     * @param _streamName <p>流名称。<br>域名+AppName+StreamName唯一标识单个转码规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。</p>
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                private:

                    /**
                     * <p>直播智能擦除模板id。</p>
                     */
                    uint64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>推流域名。<br>域名+AppName+StreamName唯一标识单个转码规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。</p>
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * <p>，与推流和播放地址中的AppName保持一致，默认为 live。域名+AppName+StreamName唯一标识单个转码规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。推流路径</p>
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * <p>流名称。<br>域名+AppName+StreamName唯一标识单个转码规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。</p>
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVESMARTERASERULEREQUEST_H_
