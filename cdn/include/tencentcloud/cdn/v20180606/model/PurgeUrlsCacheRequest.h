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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_PURGEURLSCACHEREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_PURGEURLSCACHEREQUEST_H_

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
                * PurgeUrlsCache请求参数结构体
                */
                class PurgeUrlsCacheRequest : public AbstractModel
                {
                public:
                    PurgeUrlsCacheRequest();
                    ~PurgeUrlsCacheRequest() = default;
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
                     * 获取刷新区域
无此参数时，默认刷新加速域名所在加速区域
填充 mainland 时，仅刷新中国境内加速节点上缓存内容
填充 overseas 时，仅刷新中国境外加速节点上缓存内容
指定刷新区域时，需要与域名加速区域匹配
                     * @return Area 刷新区域
无此参数时，默认刷新加速域名所在加速区域
填充 mainland 时，仅刷新中国境内加速节点上缓存内容
填充 overseas 时，仅刷新中国境外加速节点上缓存内容
指定刷新区域时，需要与域名加速区域匹配
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置刷新区域
无此参数时，默认刷新加速域名所在加速区域
填充 mainland 时，仅刷新中国境内加速节点上缓存内容
填充 overseas 时，仅刷新中国境外加速节点上缓存内容
指定刷新区域时，需要与域名加速区域匹配
                     * @param _area 刷新区域
无此参数时，默认刷新加速域名所在加速区域
填充 mainland 时，仅刷新中国境内加速节点上缓存内容
填充 overseas 时，仅刷新中国境外加速节点上缓存内容
指定刷新区域时，需要与域名加速区域匹配
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
                     * 获取是否对中文字符进行编码后刷新
                     * @return UrlEncode 是否对中文字符进行编码后刷新
                     * 
                     */
                    bool GetUrlEncode() const;

                    /**
                     * 设置是否对中文字符进行编码后刷新
                     * @param _urlEncode 是否对中文字符进行编码后刷新
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
                     * 刷新区域
无此参数时，默认刷新加速域名所在加速区域
填充 mainland 时，仅刷新中国境内加速节点上缓存内容
填充 overseas 时，仅刷新中国境外加速节点上缓存内容
指定刷新区域时，需要与域名加速区域匹配
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 是否对中文字符进行编码后刷新
                     */
                    bool m_urlEncode;
                    bool m_urlEncodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_PURGEURLSCACHEREQUEST_H_
