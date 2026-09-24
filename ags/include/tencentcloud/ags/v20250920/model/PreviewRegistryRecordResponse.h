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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_PREVIEWREGISTRYRECORDRESPONSE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_PREVIEWREGISTRYRECORDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * PreviewRegistryRecord返回参数结构体
                */
                class PreviewRegistryRecordResponse : public AbstractModel
                {
                public:
                    PreviewRegistryRecordResponse();
                    ~PreviewRegistryRecordResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>只读元数据预览结果对象（JSON 字符串形式）。字段：StatusCode（远端 HTTP 状态码，必返）、Body（远端响应体截断字符串，必返）、HasUpdate（Boolean，必返；远端内容按 Sync 相同的规范化规则处理后是否与请求 Version 配置不同；Error 非空时固定返回 false，此时不表示远端没有变化）、Error（调用错误信息，可选）。</p>
                     * @return PreviewResult <p>只读元数据预览结果对象（JSON 字符串形式）。字段：StatusCode（远端 HTTP 状态码，必返）、Body（远端响应体截断字符串，必返）、HasUpdate（Boolean，必返；远端内容按 Sync 相同的规范化规则处理后是否与请求 Version 配置不同；Error 非空时固定返回 false，此时不表示远端没有变化）、Error（调用错误信息，可选）。</p>
                     * 
                     */
                    std::string GetPreviewResult() const;

                    /**
                     * 判断参数 PreviewResult 是否已赋值
                     * @return PreviewResult 是否已赋值
                     * 
                     */
                    bool PreviewResultHasBeenSet() const;

                    /**
                     * 获取<p>实际预览的 Version ID（由 VersionId / Label 解析得到）。</p>
                     * @return ResolvedVersionId <p>实际预览的 Version ID（由 VersionId / Label 解析得到）。</p>
                     * 
                     */
                    std::string GetResolvedVersionId() const;

                    /**
                     * 判断参数 ResolvedVersionId 是否已赋值
                     * @return ResolvedVersionId 是否已赋值
                     * 
                     */
                    bool ResolvedVersionIdHasBeenSet() const;

                private:

                    /**
                     * <p>只读元数据预览结果对象（JSON 字符串形式）。字段：StatusCode（远端 HTTP 状态码，必返）、Body（远端响应体截断字符串，必返）、HasUpdate（Boolean，必返；远端内容按 Sync 相同的规范化规则处理后是否与请求 Version 配置不同；Error 非空时固定返回 false，此时不表示远端没有变化）、Error（调用错误信息，可选）。</p>
                     */
                    std::string m_previewResult;
                    bool m_previewResultHasBeenSet;

                    /**
                     * <p>实际预览的 Version ID（由 VersionId / Label 解析得到）。</p>
                     */
                    std::string m_resolvedVersionId;
                    bool m_resolvedVersionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_PREVIEWREGISTRYRECORDRESPONSE_H_
