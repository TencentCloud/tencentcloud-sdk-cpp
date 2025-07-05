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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_STATUSCODECACHERULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_STATUSCODECACHERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 状态码缓存过期时间规则配置
                */
                class StatusCodeCacheRule : public AbstractModel
                {
                public:
                    StatusCodeCacheRule();
                    ~StatusCodeCacheRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取http 状态码
支持 403、404 状态码
                     * @return StatusCode http 状态码
支持 403、404 状态码
                     * 
                     */
                    std::string GetStatusCode() const;

                    /**
                     * 设置http 状态码
支持 403、404 状态码
                     * @param _statusCode http 状态码
支持 403、404 状态码
                     * 
                     */
                    void SetStatusCode(const std::string& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取状态码缓存过期时间，单位秒
                     * @return CacheTime 状态码缓存过期时间，单位秒
                     * 
                     */
                    int64_t GetCacheTime() const;

                    /**
                     * 设置状态码缓存过期时间，单位秒
                     * @param _cacheTime 状态码缓存过期时间，单位秒
                     * 
                     */
                    void SetCacheTime(const int64_t& _cacheTime);

                    /**
                     * 判断参数 CacheTime 是否已赋值
                     * @return CacheTime 是否已赋值
                     * 
                     */
                    bool CacheTimeHasBeenSet() const;

                private:

                    /**
                     * http 状态码
支持 403、404 状态码
                     */
                    std::string m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * 状态码缓存过期时间，单位秒
                     */
                    int64_t m_cacheTime;
                    bool m_cacheTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_STATUSCODECACHERULE_H_
