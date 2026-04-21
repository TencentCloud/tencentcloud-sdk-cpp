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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_OPENCLAWSERVICEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_OPENCLAWSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * OpenClawService请求参数结构体
                */
                class OpenClawServiceRequest : public AbstractModel
                {
                public:
                    OpenClawServiceRequest();
                    ~OpenClawServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>标签类型</p><p>枚举值：</p><ul><li>OpenClaw： OpenClaw类型</li><li>ClawPro： ClawPro类型</li></ul>
                     * @return Tag <p>标签类型</p><p>枚举值：</p><ul><li>OpenClaw： OpenClaw类型</li><li>ClawPro： ClawPro类型</li></ul>
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置<p>标签类型</p><p>枚举值：</p><ul><li>OpenClaw： OpenClaw类型</li><li>ClawPro： ClawPro类型</li></ul>
                     * @param _tag <p>标签类型</p><p>枚举值：</p><ul><li>OpenClaw： OpenClaw类型</li><li>ClawPro： ClawPro类型</li></ul>
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取<p>是否创建 trace 主题，默认为 false</p><p>枚举值：</p><ul><li>true： 创建trace 主题</li><li>false： 不创建trace 主题</li></ul>
                     * @return EnableTrace <p>是否创建 trace 主题，默认为 false</p><p>枚举值：</p><ul><li>true： 创建trace 主题</li><li>false： 不创建trace 主题</li></ul>
                     * 
                     */
                    bool GetEnableTrace() const;

                    /**
                     * 设置<p>是否创建 trace 主题，默认为 false</p><p>枚举值：</p><ul><li>true： 创建trace 主题</li><li>false： 不创建trace 主题</li></ul>
                     * @param _enableTrace <p>是否创建 trace 主题，默认为 false</p><p>枚举值：</p><ul><li>true： 创建trace 主题</li><li>false： 不创建trace 主题</li></ul>
                     * 
                     */
                    void SetEnableTrace(const bool& _enableTrace);

                    /**
                     * 判断参数 EnableTrace 是否已赋值
                     * @return EnableTrace 是否已赋值
                     * 
                     */
                    bool EnableTraceHasBeenSet() const;

                private:

                    /**
                     * <p>标签类型</p><p>枚举值：</p><ul><li>OpenClaw： OpenClaw类型</li><li>ClawPro： ClawPro类型</li></ul>
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>是否创建 trace 主题，默认为 false</p><p>枚举值：</p><ul><li>true： 创建trace 主题</li><li>false： 不创建trace 主题</li></ul>
                     */
                    bool m_enableTrace;
                    bool m_enableTraceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_OPENCLAWSERVICEREQUEST_H_
