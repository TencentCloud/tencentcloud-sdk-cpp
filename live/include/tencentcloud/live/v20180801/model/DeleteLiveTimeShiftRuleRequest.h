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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVETIMESHIFTRULEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVETIMESHIFTRULEREQUEST_H_

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
                * DeleteLiveTimeShiftRule请求参数结构体
                */
                class DeleteLiveTimeShiftRuleRequest : public AbstractModel
                {
                public:
                    DeleteLiveTimeShiftRuleRequest();
                    ~DeleteLiveTimeShiftRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取推流域名。
域名+AppName+StreamName唯一标识单个时移规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。
                     * @return DomainName 推流域名。
域名+AppName+StreamName唯一标识单个时移规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置推流域名。
域名+AppName+StreamName唯一标识单个时移规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。
                     * @param _domainName 推流域名。
域名+AppName+StreamName唯一标识单个时移规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。
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
                     * 获取推流路径，与推流和播放地址中的AppName保持一致，默认为 live。
域名+AppName+StreamName唯一标识单个时移规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。
                     * @return AppName 推流路径，与推流和播放地址中的AppName保持一致，默认为 live。
域名+AppName+StreamName唯一标识单个时移规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置推流路径，与推流和播放地址中的AppName保持一致，默认为 live。
域名+AppName+StreamName唯一标识单个时移规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。
                     * @param _appName 推流路径，与推流和播放地址中的AppName保持一致，默认为 live。
域名+AppName+StreamName唯一标识单个时移规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。
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
                     * 获取流名称。
域名+AppName+StreamName唯一标识单个时移规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。
                     * @return StreamName 流名称。
域名+AppName+StreamName唯一标识单个时移规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置流名称。
域名+AppName+StreamName唯一标识单个时移规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。
                     * @param _streamName 流名称。
域名+AppName+StreamName唯一标识单个时移规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。
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
                     * 推流域名。
域名+AppName+StreamName唯一标识单个时移规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 推流路径，与推流和播放地址中的AppName保持一致，默认为 live。
域名+AppName+StreamName唯一标识单个时移规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 流名称。
域名+AppName+StreamName唯一标识单个时移规则，如需删除需要强匹配，例如AppName为空也需要传空字符串进行强匹配。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVETIMESHIFTRULEREQUEST_H_
