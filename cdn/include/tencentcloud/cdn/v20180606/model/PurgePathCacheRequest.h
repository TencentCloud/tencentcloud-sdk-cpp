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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_PURGEPATHCACHEREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_PURGEPATHCACHEREQUEST_H_

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
                * PurgePathCache请求参数结构体
                */
                class PurgePathCacheRequest : public AbstractModel
                {
                public:
                    PurgePathCacheRequest();
                    ~PurgePathCacheRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目录列表，需要包含协议头部 http:// 或 https://
                     * @return Paths 目录列表，需要包含协议头部 http:// 或 https://
                     */
                    std::vector<std::string> GetPaths() const;

                    /**
                     * 设置目录列表，需要包含协议头部 http:// 或 https://
                     * @param Paths 目录列表，需要包含协议头部 http:// 或 https://
                     */
                    void SetPaths(const std::vector<std::string>& _paths);

                    /**
                     * 判断参数 Paths 是否已赋值
                     * @return Paths 是否已赋值
                     */
                    bool PathsHasBeenSet() const;

                    /**
                     * 获取刷新类型
flush：刷新产生更新的资源
delete：刷新全部资源
                     * @return FlushType 刷新类型
flush：刷新产生更新的资源
delete：刷新全部资源
                     */
                    std::string GetFlushType() const;

                    /**
                     * 设置刷新类型
flush：刷新产生更新的资源
delete：刷新全部资源
                     * @param FlushType 刷新类型
flush：刷新产生更新的资源
delete：刷新全部资源
                     */
                    void SetFlushType(const std::string& _flushType);

                    /**
                     * 判断参数 FlushType 是否已赋值
                     * @return FlushType 是否已赋值
                     */
                    bool FlushTypeHasBeenSet() const;

                    /**
                     * 获取是否对中文字符进行编码后刷新
                     * @return UrlEncode 是否对中文字符进行编码后刷新
                     */
                    bool GetUrlEncode() const;

                    /**
                     * 设置是否对中文字符进行编码后刷新
                     * @param UrlEncode 是否对中文字符进行编码后刷新
                     */
                    void SetUrlEncode(const bool& _urlEncode);

                    /**
                     * 判断参数 UrlEncode 是否已赋值
                     * @return UrlEncode 是否已赋值
                     */
                    bool UrlEncodeHasBeenSet() const;

                private:

                    /**
                     * 目录列表，需要包含协议头部 http:// 或 https://
                     */
                    std::vector<std::string> m_paths;
                    bool m_pathsHasBeenSet;

                    /**
                     * 刷新类型
flush：刷新产生更新的资源
delete：刷新全部资源
                     */
                    std::string m_flushType;
                    bool m_flushTypeHasBeenSet;

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

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_PURGEPATHCACHEREQUEST_H_
