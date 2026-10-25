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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_REDIRECTCONFIG_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_REDIRECTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 重定向配置
                */
                class RedirectConfig : public AbstractModel
                {
                public:
                    RedirectConfig();
                    ~RedirectConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>重定向状态码</p><p>枚举值：</p><ul><li>301： 永久重定向</li><li>302： 临时重定向</li><li>303： 查看其他位置</li><li>307： 临时重定向（保留请求方法）</li><li>308： 永久重定向（保留请求方法）</li></ul>
                     * @return StatusCode <p>重定向状态码</p><p>枚举值：</p><ul><li>301： 永久重定向</li><li>302： 临时重定向</li><li>303： 查看其他位置</li><li>307： 临时重定向（保留请求方法）</li><li>308： 永久重定向（保留请求方法）</li></ul>
                     * 
                     */
                    uint64_t GetStatusCode() const;

                    /**
                     * 设置<p>重定向状态码</p><p>枚举值：</p><ul><li>301： 永久重定向</li><li>302： 临时重定向</li><li>303： 查看其他位置</li><li>307： 临时重定向（保留请求方法）</li><li>308： 永久重定向（保留请求方法）</li></ul>
                     * @param _statusCode <p>重定向状态码</p><p>枚举值：</p><ul><li>301： 永久重定向</li><li>302： 临时重定向</li><li>303： 查看其他位置</li><li>307： 临时重定向（保留请求方法）</li><li>308： 永久重定向（保留请求方法）</li></ul>
                     * 
                     */
                    void SetStatusCode(const uint64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取<p>目标地址，填写为空表示关闭重定向。不支持路径填写。</p>
                     * @return TargetUrl <p>目标地址，填写为空表示关闭重定向。不支持路径填写。</p>
                     * 
                     */
                    std::string GetTargetUrl() const;

                    /**
                     * 设置<p>目标地址，填写为空表示关闭重定向。不支持路径填写。</p>
                     * @param _targetUrl <p>目标地址，填写为空表示关闭重定向。不支持路径填写。</p>
                     * 
                     */
                    void SetTargetUrl(const std::string& _targetUrl);

                    /**
                     * 判断参数 TargetUrl 是否已赋值
                     * @return TargetUrl 是否已赋值
                     * 
                     */
                    bool TargetUrlHasBeenSet() const;

                private:

                    /**
                     * <p>重定向状态码</p><p>枚举值：</p><ul><li>301： 永久重定向</li><li>302： 临时重定向</li><li>303： 查看其他位置</li><li>307： 临时重定向（保留请求方法）</li><li>308： 永久重定向（保留请求方法）</li></ul>
                     */
                    uint64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * <p>目标地址，填写为空表示关闭重定向。不支持路径填写。</p>
                     */
                    std::string m_targetUrl;
                    bool m_targetUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_REDIRECTCONFIG_H_
