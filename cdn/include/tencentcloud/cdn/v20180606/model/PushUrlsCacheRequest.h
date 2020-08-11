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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_PUSHURLSCACHEREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_PUSHURLSCACHEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * PushUrlsCache请求参数结构体
                */
                class PushUrlsCacheRequest : public AbstractModel
                {
                public:
                    PushUrlsCacheRequest();
                    ~PushUrlsCacheRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取URL 列表，需要包含协议头部 http:// 或 https://
                     * @return Urls URL 列表，需要包含协议头部 http:// 或 https://
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 设置URL 列表，需要包含协议头部 http:// 或 https://
                     * @param Urls URL 列表，需要包含协议头部 http:// 或 https://
                     */
                    void SetUrls(const std::vector<std::string>& _urls);

                    /**
                     * 判断参数 Urls 是否已赋值
                     * @return Urls 是否已赋值
                     */
                    bool UrlsHasBeenSet() const;

                    /**
                     * 获取指定预热请求回源时 HTTP 请求的 User-Agent 头部
默认为 TencentCdn
                     * @return UserAgent 指定预热请求回源时 HTTP 请求的 User-Agent 头部
默认为 TencentCdn
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置指定预热请求回源时 HTTP 请求的 User-Agent 头部
默认为 TencentCdn
                     * @param UserAgent 指定预热请求回源时 HTTP 请求的 User-Agent 头部
默认为 TencentCdn
                     */
                    void SetUserAgent(const std::string& _userAgent);

                    /**
                     * 判断参数 UserAgent 是否已赋值
                     * @return UserAgent 是否已赋值
                     */
                    bool UserAgentHasBeenSet() const;

                    /**
                     * 获取预热生效区域
mainland：预热至境内节点
overseas：预热至境外节点
global：预热全球节点
不填充情况下，默认为 mainland， URL 中域名必须在对应区域启用了加速服务才能提交对应区域的预热任务
                     * @return Area 预热生效区域
mainland：预热至境内节点
overseas：预热至境外节点
global：预热全球节点
不填充情况下，默认为 mainland， URL 中域名必须在对应区域启用了加速服务才能提交对应区域的预热任务
                     */
                    std::string GetArea() const;

                    /**
                     * 设置预热生效区域
mainland：预热至境内节点
overseas：预热至境外节点
global：预热全球节点
不填充情况下，默认为 mainland， URL 中域名必须在对应区域启用了加速服务才能提交对应区域的预热任务
                     * @param Area 预热生效区域
mainland：预热至境内节点
overseas：预热至境外节点
global：预热全球节点
不填充情况下，默认为 mainland， URL 中域名必须在对应区域启用了加速服务才能提交对应区域的预热任务
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取填写"middle"或不填充时预热至中间层节点
                     * @return Layer 填写"middle"或不填充时预热至中间层节点
                     */
                    std::string GetLayer() const;

                    /**
                     * 设置填写"middle"或不填充时预热至中间层节点
                     * @param Layer 填写"middle"或不填充时预热至中间层节点
                     */
                    void SetLayer(const std::string& _layer);

                    /**
                     * 判断参数 Layer 是否已赋值
                     * @return Layer 是否已赋值
                     */
                    bool LayerHasBeenSet() const;

                private:

                    /**
                     * URL 列表，需要包含协议头部 http:// 或 https://
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                    /**
                     * 指定预热请求回源时 HTTP 请求的 User-Agent 头部
默认为 TencentCdn
                     */
                    std::string m_userAgent;
                    bool m_userAgentHasBeenSet;

                    /**
                     * 预热生效区域
mainland：预热至境内节点
overseas：预热至境外节点
global：预热全球节点
不填充情况下，默认为 mainland， URL 中域名必须在对应区域启用了加速服务才能提交对应区域的预热任务
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 填写"middle"或不填充时预热至中间层节点
                     */
                    std::string m_layer;
                    bool m_layerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_PUSHURLSCACHEREQUEST_H_
