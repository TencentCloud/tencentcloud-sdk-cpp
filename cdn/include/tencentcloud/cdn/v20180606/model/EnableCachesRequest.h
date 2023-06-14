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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ENABLECACHESREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ENABLECACHESREQUEST_H_

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
                * EnableCaches请求参数结构体
                */
                class EnableCachesRequest : public AbstractModel
                {
                public:
                    EnableCachesRequest();
                    ~EnableCachesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取解封 URL 列表
                     * @return Urls 解封 URL 列表
                     * 
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 设置解封 URL 列表
                     * @param _urls 解封 URL 列表
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
                     * 获取URL封禁日期
                     * @return Date URL封禁日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置URL封禁日期
                     * @param _date URL封禁日期
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                private:

                    /**
                     * 解封 URL 列表
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                    /**
                     * URL封禁日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ENABLECACHESREQUEST_H_
