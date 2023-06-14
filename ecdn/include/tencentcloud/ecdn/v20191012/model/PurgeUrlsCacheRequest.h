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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_PURGEURLSCACHEREQUEST_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_PURGEURLSCACHEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
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
                     * 获取要刷新的Url列表，必须包含协议头部。
                     * @return Urls 要刷新的Url列表，必须包含协议头部。
                     * 
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 设置要刷新的Url列表，必须包含协议头部。
                     * @param _urls 要刷新的Url列表，必须包含协议头部。
                     * 
                     */
                    void SetUrls(const std::vector<std::string>& _urls);

                    /**
                     * 判断参数 Urls 是否已赋值
                     * @return Urls 是否已赋值
                     * 
                     */
                    bool UrlsHasBeenSet() const;

                private:

                    /**
                     * 要刷新的Url列表，必须包含协议头部。
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_PURGEURLSCACHEREQUEST_H_
