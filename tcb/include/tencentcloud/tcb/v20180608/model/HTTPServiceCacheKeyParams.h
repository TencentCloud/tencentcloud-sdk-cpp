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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICECACHEKEYPARAMS_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICECACHEKEYPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 自定义缓存键参数。约束：FullURLCache=on 与 QueryStringSwitch=on 互斥
使用示例：
- 整 URL 参与缓存键：{FullURLCache: "on", QueryStringSwitch: "off"}
- URL 路径 + 仅保留 x/y：{FullURLCache: "off", QueryStringSwitch: "on", QueryStringAction: "includeCustom", QueryStringValues: ["x", "y"]}
- URL 路径 + 忽略 debug：{FullURLCache: "off", QueryStringSwitch: "on", QueryStringAction: "excludeCustom", QueryStringValues: ["debug"]}
                */
                class HTTPServiceCacheKeyParams : public AbstractModel
                {
                public:
                    HTTPServiceCacheKeyParams();
                    ~HTTPServiceCacheKeyParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>全 URL 缓存开关</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     * @return FullURLCache <p>全 URL 缓存开关</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     * 
                     */
                    std::string GetFullURLCache() const;

                    /**
                     * 设置<p>全 URL 缓存开关</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     * @param _fullURLCache <p>全 URL 缓存开关</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     * 
                     */
                    void SetFullURLCache(const std::string& _fullURLCache);

                    /**
                     * 判断参数 FullURLCache 是否已赋值
                     * @return FullURLCache 是否已赋值
                     * 
                     */
                    bool FullURLCacheHasBeenSet() const;

                    /**
                     * 获取<p>查询参数是否参与缓存键</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     * @return QueryStringSwitch <p>查询参数是否参与缓存键</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     * 
                     */
                    std::string GetQueryStringSwitch() const;

                    /**
                     * 设置<p>查询参数是否参与缓存键</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     * @param _queryStringSwitch <p>查询参数是否参与缓存键</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     * 
                     */
                    void SetQueryStringSwitch(const std::string& _queryStringSwitch);

                    /**
                     * 判断参数 QueryStringSwitch 是否已赋值
                     * @return QueryStringSwitch 是否已赋值
                     * 
                     */
                    bool QueryStringSwitchHasBeenSet() const;

                    /**
                     * 获取<p>QueryStringSwitch=on 时必填</p><p>枚举值：</p><ul><li>includeCustom： 白名单</li><li>excludeCustom： 黑名单</li></ul>
                     * @return QueryStringAction <p>QueryStringSwitch=on 时必填</p><p>枚举值：</p><ul><li>includeCustom： 白名单</li><li>excludeCustom： 黑名单</li></ul>
                     * 
                     */
                    std::string GetQueryStringAction() const;

                    /**
                     * 设置<p>QueryStringSwitch=on 时必填</p><p>枚举值：</p><ul><li>includeCustom： 白名单</li><li>excludeCustom： 黑名单</li></ul>
                     * @param _queryStringAction <p>QueryStringSwitch=on 时必填</p><p>枚举值：</p><ul><li>includeCustom： 白名单</li><li>excludeCustom： 黑名单</li></ul>
                     * 
                     */
                    void SetQueryStringAction(const std::string& _queryStringAction);

                    /**
                     * 判断参数 QueryStringAction 是否已赋值
                     * @return QueryStringAction 是否已赋值
                     * 
                     */
                    bool QueryStringActionHasBeenSet() const;

                    /**
                     * 获取<p>参数名列表</p><p>入参限制：最多 100 项，单项 1~128 字节</p>
                     * @return QueryStringValues <p>参数名列表</p><p>入参限制：最多 100 项，单项 1~128 字节</p>
                     * 
                     */
                    std::vector<std::string> GetQueryStringValues() const;

                    /**
                     * 设置<p>参数名列表</p><p>入参限制：最多 100 项，单项 1~128 字节</p>
                     * @param _queryStringValues <p>参数名列表</p><p>入参限制：最多 100 项，单项 1~128 字节</p>
                     * 
                     */
                    void SetQueryStringValues(const std::vector<std::string>& _queryStringValues);

                    /**
                     * 判断参数 QueryStringValues 是否已赋值
                     * @return QueryStringValues 是否已赋值
                     * 
                     */
                    bool QueryStringValuesHasBeenSet() const;

                private:

                    /**
                     * <p>全 URL 缓存开关</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     */
                    std::string m_fullURLCache;
                    bool m_fullURLCacheHasBeenSet;

                    /**
                     * <p>查询参数是否参与缓存键</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul>
                     */
                    std::string m_queryStringSwitch;
                    bool m_queryStringSwitchHasBeenSet;

                    /**
                     * <p>QueryStringSwitch=on 时必填</p><p>枚举值：</p><ul><li>includeCustom： 白名单</li><li>excludeCustom： 黑名单</li></ul>
                     */
                    std::string m_queryStringAction;
                    bool m_queryStringActionHasBeenSet;

                    /**
                     * <p>参数名列表</p><p>入参限制：最多 100 项，单项 1~128 字节</p>
                     */
                    std::vector<std::string> m_queryStringValues;
                    bool m_queryStringValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICECACHEKEYPARAMS_H_
