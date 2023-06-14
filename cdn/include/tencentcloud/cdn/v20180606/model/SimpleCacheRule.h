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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SIMPLECACHERULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SIMPLECACHERULE_H_

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
                * 缓存过期规则配置
                */
                class SimpleCacheRule : public AbstractModel
                {
                public:
                    SimpleCacheRule();
                    ~SimpleCacheRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
index：首页
                     * @return CacheType 规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
index：首页
                     * 
                     */
                    std::string GetCacheType() const;

                    /**
                     * 设置规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
index：首页
                     * @param _cacheType 规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
index：首页
                     * 
                     */
                    void SetCacheType(const std::string& _cacheType);

                    /**
                     * 判断参数 CacheType 是否已赋值
                     * @return CacheType 是否已赋值
                     * 
                     */
                    bool CacheTypeHasBeenSet() const;

                    /**
                     * 获取CacheType 对应类型下的匹配内容：
all 时填充 *
file 时填充后缀名，如 jpg、txt
directory 时填充路径，如 /xxx/test
path 时填充绝对路径，如 /xxx/test.html
index 时填充 /
                     * @return CacheContents CacheType 对应类型下的匹配内容：
all 时填充 *
file 时填充后缀名，如 jpg、txt
directory 时填充路径，如 /xxx/test
path 时填充绝对路径，如 /xxx/test.html
index 时填充 /
                     * 
                     */
                    std::vector<std::string> GetCacheContents() const;

                    /**
                     * 设置CacheType 对应类型下的匹配内容：
all 时填充 *
file 时填充后缀名，如 jpg、txt
directory 时填充路径，如 /xxx/test
path 时填充绝对路径，如 /xxx/test.html
index 时填充 /
                     * @param _cacheContents CacheType 对应类型下的匹配内容：
all 时填充 *
file 时填充后缀名，如 jpg、txt
directory 时填充路径，如 /xxx/test
path 时填充绝对路径，如 /xxx/test.html
index 时填充 /
                     * 
                     */
                    void SetCacheContents(const std::vector<std::string>& _cacheContents);

                    /**
                     * 判断参数 CacheContents 是否已赋值
                     * @return CacheContents 是否已赋值
                     * 
                     */
                    bool CacheContentsHasBeenSet() const;

                    /**
                     * 获取缓存过期时间设置
单位为秒，最大可设置为 365 天
                     * @return CacheTime 缓存过期时间设置
单位为秒，最大可设置为 365 天
                     * 
                     */
                    int64_t GetCacheTime() const;

                    /**
                     * 设置缓存过期时间设置
单位为秒，最大可设置为 365 天
                     * @param _cacheTime 缓存过期时间设置
单位为秒，最大可设置为 365 天
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
                     * 规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
index：首页
                     */
                    std::string m_cacheType;
                    bool m_cacheTypeHasBeenSet;

                    /**
                     * CacheType 对应类型下的匹配内容：
all 时填充 *
file 时填充后缀名，如 jpg、txt
directory 时填充路径，如 /xxx/test
path 时填充绝对路径，如 /xxx/test.html
index 时填充 /
                     */
                    std::vector<std::string> m_cacheContents;
                    bool m_cacheContentsHasBeenSet;

                    /**
                     * 缓存过期时间设置
单位为秒，最大可设置为 365 天
                     */
                    int64_t m_cacheTime;
                    bool m_cacheTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SIMPLECACHERULE_H_
