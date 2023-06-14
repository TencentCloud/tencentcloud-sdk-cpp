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
#include <tencentcloud/cdn/v20180606/model/HTTPHeader.h>


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
                     * 
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 设置URL 列表，需要包含协议头部 http:// 或 https://
                     * @param _urls URL 列表，需要包含协议头部 http:// 或 https://
                     * 
                     */
                    void SetUrls(const std::vector<std::string>& _urls);

                    /**
                     * 判断参数 Urls 是否已赋值
                     * @return Urls 是否已赋值
                     * 
                     */
                    bool UrlsHasBeenSet() const;

                    /**
                     * 获取指定预热请求回源时 HTTP 请求的 User-Agent 头部
默认为 TencentCdn
                     * @return UserAgent 指定预热请求回源时 HTTP 请求的 User-Agent 头部
默认为 TencentCdn
                     * 
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置指定预热请求回源时 HTTP 请求的 User-Agent 头部
默认为 TencentCdn
                     * @param _userAgent 指定预热请求回源时 HTTP 请求的 User-Agent 头部
默认为 TencentCdn
                     * 
                     */
                    void SetUserAgent(const std::string& _userAgent);

                    /**
                     * 判断参数 UserAgent 是否已赋值
                     * @return UserAgent 是否已赋值
                     * 
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
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置预热生效区域
mainland：预热至境内节点
overseas：预热至境外节点
global：预热全球节点
不填充情况下，默认为 mainland， URL 中域名必须在对应区域启用了加速服务才能提交对应区域的预热任务
                     * @param _area 预热生效区域
mainland：预热至境内节点
overseas：预热至境外节点
global：预热全球节点
不填充情况下，默认为 mainland， URL 中域名必须在对应区域启用了加速服务才能提交对应区域的预热任务
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取中国境内区域默认预热至中间层节点，中国境外区域默认预热至边缘节点。预热至边缘产生的边缘层流量会计入计费流量。
填写"middle"或不填充时，可指定预热至中间层节点。
                     * @return Layer 中国境内区域默认预热至中间层节点，中国境外区域默认预热至边缘节点。预热至边缘产生的边缘层流量会计入计费流量。
填写"middle"或不填充时，可指定预热至中间层节点。
                     * 
                     */
                    std::string GetLayer() const;

                    /**
                     * 设置中国境内区域默认预热至中间层节点，中国境外区域默认预热至边缘节点。预热至边缘产生的边缘层流量会计入计费流量。
填写"middle"或不填充时，可指定预热至中间层节点。
                     * @param _layer 中国境内区域默认预热至中间层节点，中国境外区域默认预热至边缘节点。预热至边缘产生的边缘层流量会计入计费流量。
填写"middle"或不填充时，可指定预热至中间层节点。
                     * 
                     */
                    void SetLayer(const std::string& _layer);

                    /**
                     * 判断参数 Layer 是否已赋值
                     * @return Layer 是否已赋值
                     * 
                     */
                    bool LayerHasBeenSet() const;

                    /**
                     * 获取是否递归解析m3u8文件中的ts分片预热
注意事项：
1. 该功能要求m3u8索引文件能直接请求获取
2. 当前只支持递归解析一级索引和子索引中的ts分片，递归深度不超过3层
3. 解析获取的ts分片会正常累加每日预热用量，当用量超出配额时，会静默处理，不再执行预热
                     * @return ParseM3U8 是否递归解析m3u8文件中的ts分片预热
注意事项：
1. 该功能要求m3u8索引文件能直接请求获取
2. 当前只支持递归解析一级索引和子索引中的ts分片，递归深度不超过3层
3. 解析获取的ts分片会正常累加每日预热用量，当用量超出配额时，会静默处理，不再执行预热
                     * 
                     */
                    bool GetParseM3U8() const;

                    /**
                     * 设置是否递归解析m3u8文件中的ts分片预热
注意事项：
1. 该功能要求m3u8索引文件能直接请求获取
2. 当前只支持递归解析一级索引和子索引中的ts分片，递归深度不超过3层
3. 解析获取的ts分片会正常累加每日预热用量，当用量超出配额时，会静默处理，不再执行预热
                     * @param _parseM3U8 是否递归解析m3u8文件中的ts分片预热
注意事项：
1. 该功能要求m3u8索引文件能直接请求获取
2. 当前只支持递归解析一级索引和子索引中的ts分片，递归深度不超过3层
3. 解析获取的ts分片会正常累加每日预热用量，当用量超出配额时，会静默处理，不再执行预热
                     * 
                     */
                    void SetParseM3U8(const bool& _parseM3U8);

                    /**
                     * 判断参数 ParseM3U8 是否已赋值
                     * @return ParseM3U8 是否已赋值
                     * 
                     */
                    bool ParseM3U8HasBeenSet() const;

                    /**
                     * 获取是否关闭Range回源
注意事项：
此功能灰度发布中，敬请期待
                     * @return DisableRange 是否关闭Range回源
注意事项：
此功能灰度发布中，敬请期待
                     * 
                     */
                    bool GetDisableRange() const;

                    /**
                     * 设置是否关闭Range回源
注意事项：
此功能灰度发布中，敬请期待
                     * @param _disableRange 是否关闭Range回源
注意事项：
此功能灰度发布中，敬请期待
                     * 
                     */
                    void SetDisableRange(const bool& _disableRange);

                    /**
                     * 判断参数 DisableRange 是否已赋值
                     * @return DisableRange 是否已赋值
                     * 
                     */
                    bool DisableRangeHasBeenSet() const;

                    /**
                     * 获取自定义 HTTP 请求头。最多定义 20 个，Name 长度不超过 128 字节，Value 长度不超过 1024 字节
                     * @return Headers 自定义 HTTP 请求头。最多定义 20 个，Name 长度不超过 128 字节，Value 长度不超过 1024 字节
                     * 
                     */
                    std::vector<HTTPHeader> GetHeaders() const;

                    /**
                     * 设置自定义 HTTP 请求头。最多定义 20 个，Name 长度不超过 128 字节，Value 长度不超过 1024 字节
                     * @param _headers 自定义 HTTP 请求头。最多定义 20 个，Name 长度不超过 128 字节，Value 长度不超过 1024 字节
                     * 
                     */
                    void SetHeaders(const std::vector<HTTPHeader>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取是否对URL进行编码
                     * @return UrlEncode 是否对URL进行编码
                     * 
                     */
                    bool GetUrlEncode() const;

                    /**
                     * 设置是否对URL进行编码
                     * @param _urlEncode 是否对URL进行编码
                     * 
                     */
                    void SetUrlEncode(const bool& _urlEncode);

                    /**
                     * 判断参数 UrlEncode 是否已赋值
                     * @return UrlEncode 是否已赋值
                     * 
                     */
                    bool UrlEncodeHasBeenSet() const;

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
                     * 中国境内区域默认预热至中间层节点，中国境外区域默认预热至边缘节点。预热至边缘产生的边缘层流量会计入计费流量。
填写"middle"或不填充时，可指定预热至中间层节点。
                     */
                    std::string m_layer;
                    bool m_layerHasBeenSet;

                    /**
                     * 是否递归解析m3u8文件中的ts分片预热
注意事项：
1. 该功能要求m3u8索引文件能直接请求获取
2. 当前只支持递归解析一级索引和子索引中的ts分片，递归深度不超过3层
3. 解析获取的ts分片会正常累加每日预热用量，当用量超出配额时，会静默处理，不再执行预热
                     */
                    bool m_parseM3U8;
                    bool m_parseM3U8HasBeenSet;

                    /**
                     * 是否关闭Range回源
注意事项：
此功能灰度发布中，敬请期待
                     */
                    bool m_disableRange;
                    bool m_disableRangeHasBeenSet;

                    /**
                     * 自定义 HTTP 请求头。最多定义 20 个，Name 长度不超过 128 字节，Value 长度不超过 1024 字节
                     */
                    std::vector<HTTPHeader> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * 是否对URL进行编码
                     */
                    bool m_urlEncode;
                    bool m_urlEncodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_PUSHURLSCACHEREQUEST_H_
