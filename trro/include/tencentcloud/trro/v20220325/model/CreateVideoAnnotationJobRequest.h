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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_CREATEVIDEOANNOTATIONJOBREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_CREATEVIDEOANNOTATIONJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trro/v20220325/model/S3SourceInfo.h>
#include <tencentcloud/trro/v20220325/model/AnnotationContext.h>
#include <tencentcloud/trro/v20220325/model/ProcessParams.h>
#include <tencentcloud/trro/v20220325/model/OutputInfo.h>
#include <tencentcloud/trro/v20220325/model/CallbackInfo.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * CreateVideoAnnotationJob请求参数结构体
                */
                class CreateVideoAnnotationJobRequest : public AbstractModel
                {
                public:
                    CreateVideoAnnotationJobRequest();
                    ~CreateVideoAnnotationJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>输入源类型：1 S3 兼容存储，2 HTTP URL</p><p>枚举值：</p><ul><li>1： S3 兼容存储</li><li>2： HTTP URL</li></ul>
                     * @return InputType <p>输入源类型：1 S3 兼容存储，2 HTTP URL</p><p>枚举值：</p><ul><li>1： S3 兼容存储</li><li>2： HTTP URL</li></ul>
                     * 
                     */
                    int64_t GetInputType() const;

                    /**
                     * 设置<p>输入源类型：1 S3 兼容存储，2 HTTP URL</p><p>枚举值：</p><ul><li>1： S3 兼容存储</li><li>2： HTTP URL</li></ul>
                     * @param _inputType <p>输入源类型：1 S3 兼容存储，2 HTTP URL</p><p>枚举值：</p><ul><li>1： S3 兼容存储</li><li>2： HTTP URL</li></ul>
                     * 
                     */
                    void SetInputType(const int64_t& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     * 
                     */
                    bool InputTypeHasBeenSet() const;

                    /**
                     * 获取<p>标注模式（当前仅开放精标注）</p><p>枚举值：</p><ul><li>3： 精标注</li></ul>
                     * @return AnnotationType <p>标注模式（当前仅开放精标注）</p><p>枚举值：</p><ul><li>3： 精标注</li></ul>
                     * 
                     */
                    int64_t GetAnnotationType() const;

                    /**
                     * 设置<p>标注模式（当前仅开放精标注）</p><p>枚举值：</p><ul><li>3： 精标注</li></ul>
                     * @param _annotationType <p>标注模式（当前仅开放精标注）</p><p>枚举值：</p><ul><li>3： 精标注</li></ul>
                     * 
                     */
                    void SetAnnotationType(const int64_t& _annotationType);

                    /**
                     * 判断参数 AnnotationType 是否已赋值
                     * @return AnnotationType 是否已赋值
                     * 
                     */
                    bool AnnotationTypeHasBeenSet() const;

                    /**
                     * 获取<p>S3 存储输入源信息，InputType=1 时必填</p>
                     * @return S3SourceInfo <p>S3 存储输入源信息，InputType=1 时必填</p>
                     * 
                     */
                    S3SourceInfo GetS3SourceInfo() const;

                    /**
                     * 设置<p>S3 存储输入源信息，InputType=1 时必填</p>
                     * @param _s3SourceInfo <p>S3 存储输入源信息，InputType=1 时必填</p>
                     * 
                     */
                    void SetS3SourceInfo(const S3SourceInfo& _s3SourceInfo);

                    /**
                     * 判断参数 S3SourceInfo 是否已赋值
                     * @return S3SourceInfo 是否已赋值
                     * 
                     */
                    bool S3SourceInfoHasBeenSet() const;

                    /**
                     * 获取<p>视频 HTTP URL。InputType=2 时必填。格式如 https://example.com/video.mp4</p>
                     * @return HttpUrl <p>视频 HTTP URL。InputType=2 时必填。格式如 https://example.com/video.mp4</p>
                     * 
                     */
                    std::string GetHttpUrl() const;

                    /**
                     * 设置<p>视频 HTTP URL。InputType=2 时必填。格式如 https://example.com/video.mp4</p>
                     * @param _httpUrl <p>视频 HTTP URL。InputType=2 时必填。格式如 https://example.com/video.mp4</p>
                     * 
                     */
                    void SetHttpUrl(const std::string& _httpUrl);

                    /**
                     * 判断参数 HttpUrl 是否已赋值
                     * @return HttpUrl 是否已赋值
                     * 
                     */
                    bool HttpUrlHasBeenSet() const;

                    /**
                     * 获取<p>标注上下文信息</p>
                     * @return AnnotationContext <p>标注上下文信息</p>
                     * 
                     */
                    AnnotationContext GetAnnotationContext() const;

                    /**
                     * 设置<p>标注上下文信息</p>
                     * @param _annotationContext <p>标注上下文信息</p>
                     * 
                     */
                    void SetAnnotationContext(const AnnotationContext& _annotationContext);

                    /**
                     * 判断参数 AnnotationContext 是否已赋值
                     * @return AnnotationContext 是否已赋值
                     * 
                     */
                    bool AnnotationContextHasBeenSet() const;

                    /**
                     * 获取<p>标注处理参数，预留字段，当前无效</p>
                     * @return ProcessParams <p>标注处理参数，预留字段，当前无效</p>
                     * 
                     */
                    ProcessParams GetProcessParams() const;

                    /**
                     * 设置<p>标注处理参数，预留字段，当前无效</p>
                     * @param _processParams <p>标注处理参数，预留字段，当前无效</p>
                     * 
                     */
                    void SetProcessParams(const ProcessParams& _processParams);

                    /**
                     * 判断参数 ProcessParams 是否已赋值
                     * @return ProcessParams 是否已赋值
                     * 
                     */
                    bool ProcessParamsHasBeenSet() const;

                    /**
                     * 获取<p>结果输出信息</p>
                     * @return OutputInfo <p>结果输出信息</p>
                     * 
                     */
                    OutputInfo GetOutputInfo() const;

                    /**
                     * 设置<p>结果输出信息</p>
                     * @param _outputInfo <p>结果输出信息</p>
                     * 
                     */
                    void SetOutputInfo(const OutputInfo& _outputInfo);

                    /**
                     * 判断参数 OutputInfo 是否已赋值
                     * @return OutputInfo 是否已赋值
                     * 
                     */
                    bool OutputInfoHasBeenSet() const;

                    /**
                     * 获取<p>回调信息，配置后当处理项状态从处理中变为其他状态时，服务端会向回调地址发送请求（退避重试三次，不保证回调一定送达，需保证目标地址接收服务有效），建议接收方做好幂等处理。回调请求格式如下：<br><strong>请求头</strong></p><table><thead><tr><th>名称</th><th>值</th></tr></thead><tbody><tr><td>X-Annotation-Signature</td><td>hex(HMAC-SHA256(请求体原始字节, CallbackInfo.Secret))</td></tr></tbody></table><p><strong>请求体</strong>（application/json）</p><table><thead><tr><th>参数名</th><th>类型</th><th>必选</th><th>描述</th></tr></thead><tbody><tr><td>JobId</td><td>string</td><td>是</td><td>任务 ID</td></tr><tr><td>TaskId</td><td>string</td><td>是</td><td>处理项 ID</td></tr><tr><td>FileName</td><td>string</td><td>是</td><td>视频文件名</td></tr><tr><td>Status</td><td>int</td><td>是</td><td>触发本次回调的处理项状态：3 超时，4 异常，5 待确认，6 成功</td></tr><tr><td>StatusChangedAt</td><td>int</td><td>是</td><td>状态变更时间，Unix 时间戳（秒）</td></tr><tr><td>RawResult</td><td>string</td><td>否</td><td>当前生效的结果 JSON 原文：成功=标注产物；待确认=原始标注；确认后=确认版内容。超时/异常无内容</td></tr></tbody></table>
                     * @return CallbackInfo <p>回调信息，配置后当处理项状态从处理中变为其他状态时，服务端会向回调地址发送请求（退避重试三次，不保证回调一定送达，需保证目标地址接收服务有效），建议接收方做好幂等处理。回调请求格式如下：<br><strong>请求头</strong></p><table><thead><tr><th>名称</th><th>值</th></tr></thead><tbody><tr><td>X-Annotation-Signature</td><td>hex(HMAC-SHA256(请求体原始字节, CallbackInfo.Secret))</td></tr></tbody></table><p><strong>请求体</strong>（application/json）</p><table><thead><tr><th>参数名</th><th>类型</th><th>必选</th><th>描述</th></tr></thead><tbody><tr><td>JobId</td><td>string</td><td>是</td><td>任务 ID</td></tr><tr><td>TaskId</td><td>string</td><td>是</td><td>处理项 ID</td></tr><tr><td>FileName</td><td>string</td><td>是</td><td>视频文件名</td></tr><tr><td>Status</td><td>int</td><td>是</td><td>触发本次回调的处理项状态：3 超时，4 异常，5 待确认，6 成功</td></tr><tr><td>StatusChangedAt</td><td>int</td><td>是</td><td>状态变更时间，Unix 时间戳（秒）</td></tr><tr><td>RawResult</td><td>string</td><td>否</td><td>当前生效的结果 JSON 原文：成功=标注产物；待确认=原始标注；确认后=确认版内容。超时/异常无内容</td></tr></tbody></table>
                     * 
                     */
                    CallbackInfo GetCallbackInfo() const;

                    /**
                     * 设置<p>回调信息，配置后当处理项状态从处理中变为其他状态时，服务端会向回调地址发送请求（退避重试三次，不保证回调一定送达，需保证目标地址接收服务有效），建议接收方做好幂等处理。回调请求格式如下：<br><strong>请求头</strong></p><table><thead><tr><th>名称</th><th>值</th></tr></thead><tbody><tr><td>X-Annotation-Signature</td><td>hex(HMAC-SHA256(请求体原始字节, CallbackInfo.Secret))</td></tr></tbody></table><p><strong>请求体</strong>（application/json）</p><table><thead><tr><th>参数名</th><th>类型</th><th>必选</th><th>描述</th></tr></thead><tbody><tr><td>JobId</td><td>string</td><td>是</td><td>任务 ID</td></tr><tr><td>TaskId</td><td>string</td><td>是</td><td>处理项 ID</td></tr><tr><td>FileName</td><td>string</td><td>是</td><td>视频文件名</td></tr><tr><td>Status</td><td>int</td><td>是</td><td>触发本次回调的处理项状态：3 超时，4 异常，5 待确认，6 成功</td></tr><tr><td>StatusChangedAt</td><td>int</td><td>是</td><td>状态变更时间，Unix 时间戳（秒）</td></tr><tr><td>RawResult</td><td>string</td><td>否</td><td>当前生效的结果 JSON 原文：成功=标注产物；待确认=原始标注；确认后=确认版内容。超时/异常无内容</td></tr></tbody></table>
                     * @param _callbackInfo <p>回调信息，配置后当处理项状态从处理中变为其他状态时，服务端会向回调地址发送请求（退避重试三次，不保证回调一定送达，需保证目标地址接收服务有效），建议接收方做好幂等处理。回调请求格式如下：<br><strong>请求头</strong></p><table><thead><tr><th>名称</th><th>值</th></tr></thead><tbody><tr><td>X-Annotation-Signature</td><td>hex(HMAC-SHA256(请求体原始字节, CallbackInfo.Secret))</td></tr></tbody></table><p><strong>请求体</strong>（application/json）</p><table><thead><tr><th>参数名</th><th>类型</th><th>必选</th><th>描述</th></tr></thead><tbody><tr><td>JobId</td><td>string</td><td>是</td><td>任务 ID</td></tr><tr><td>TaskId</td><td>string</td><td>是</td><td>处理项 ID</td></tr><tr><td>FileName</td><td>string</td><td>是</td><td>视频文件名</td></tr><tr><td>Status</td><td>int</td><td>是</td><td>触发本次回调的处理项状态：3 超时，4 异常，5 待确认，6 成功</td></tr><tr><td>StatusChangedAt</td><td>int</td><td>是</td><td>状态变更时间，Unix 时间戳（秒）</td></tr><tr><td>RawResult</td><td>string</td><td>否</td><td>当前生效的结果 JSON 原文：成功=标注产物；待确认=原始标注；确认后=确认版内容。超时/异常无内容</td></tr></tbody></table>
                     * 
                     */
                    void SetCallbackInfo(const CallbackInfo& _callbackInfo);

                    /**
                     * 判断参数 CallbackInfo 是否已赋值
                     * @return CallbackInfo 是否已赋值
                     * 
                     */
                    bool CallbackInfoHasBeenSet() const;

                private:

                    /**
                     * <p>输入源类型：1 S3 兼容存储，2 HTTP URL</p><p>枚举值：</p><ul><li>1： S3 兼容存储</li><li>2： HTTP URL</li></ul>
                     */
                    int64_t m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * <p>标注模式（当前仅开放精标注）</p><p>枚举值：</p><ul><li>3： 精标注</li></ul>
                     */
                    int64_t m_annotationType;
                    bool m_annotationTypeHasBeenSet;

                    /**
                     * <p>S3 存储输入源信息，InputType=1 时必填</p>
                     */
                    S3SourceInfo m_s3SourceInfo;
                    bool m_s3SourceInfoHasBeenSet;

                    /**
                     * <p>视频 HTTP URL。InputType=2 时必填。格式如 https://example.com/video.mp4</p>
                     */
                    std::string m_httpUrl;
                    bool m_httpUrlHasBeenSet;

                    /**
                     * <p>标注上下文信息</p>
                     */
                    AnnotationContext m_annotationContext;
                    bool m_annotationContextHasBeenSet;

                    /**
                     * <p>标注处理参数，预留字段，当前无效</p>
                     */
                    ProcessParams m_processParams;
                    bool m_processParamsHasBeenSet;

                    /**
                     * <p>结果输出信息</p>
                     */
                    OutputInfo m_outputInfo;
                    bool m_outputInfoHasBeenSet;

                    /**
                     * <p>回调信息，配置后当处理项状态从处理中变为其他状态时，服务端会向回调地址发送请求（退避重试三次，不保证回调一定送达，需保证目标地址接收服务有效），建议接收方做好幂等处理。回调请求格式如下：<br><strong>请求头</strong></p><table><thead><tr><th>名称</th><th>值</th></tr></thead><tbody><tr><td>X-Annotation-Signature</td><td>hex(HMAC-SHA256(请求体原始字节, CallbackInfo.Secret))</td></tr></tbody></table><p><strong>请求体</strong>（application/json）</p><table><thead><tr><th>参数名</th><th>类型</th><th>必选</th><th>描述</th></tr></thead><tbody><tr><td>JobId</td><td>string</td><td>是</td><td>任务 ID</td></tr><tr><td>TaskId</td><td>string</td><td>是</td><td>处理项 ID</td></tr><tr><td>FileName</td><td>string</td><td>是</td><td>视频文件名</td></tr><tr><td>Status</td><td>int</td><td>是</td><td>触发本次回调的处理项状态：3 超时，4 异常，5 待确认，6 成功</td></tr><tr><td>StatusChangedAt</td><td>int</td><td>是</td><td>状态变更时间，Unix 时间戳（秒）</td></tr><tr><td>RawResult</td><td>string</td><td>否</td><td>当前生效的结果 JSON 原文：成功=标注产物；待确认=原始标注；确认后=确认版内容。超时/异常无内容</td></tr></tbody></table>
                     */
                    CallbackInfo m_callbackInfo;
                    bool m_callbackInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_CREATEVIDEOANNOTATIONJOBREQUEST_H_
