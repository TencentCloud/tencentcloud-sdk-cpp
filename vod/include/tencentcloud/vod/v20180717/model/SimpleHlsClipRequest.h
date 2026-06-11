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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SIMPLEHLSCLIPREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SIMPLEHLSCLIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * SimpleHlsClip请求参数结构体
                */
                class SimpleHlsClipRequest : public AbstractModel
                {
                public:
                    SimpleHlsClipRequest();
                    ~SimpleHlsClipRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>需要裁剪的腾讯云点播 HLS 视频 URL。</p>
                     * @return Url <p>需要裁剪的腾讯云点播 HLS 视频 URL。</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>需要裁剪的腾讯云点播 HLS 视频 URL。</p>
                     * @param _url <p>需要裁剪的腾讯云点播 HLS 视频 URL。</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>裁剪的开始偏移时间，单位秒。默认 0，即从视频开头开始裁剪。负数表示距离视频结束多少秒开始裁剪。例如 -10 表示从倒数第 10 秒开始裁剪。</p>
                     * @return StartTimeOffset <p>裁剪的开始偏移时间，单位秒。默认 0，即从视频开头开始裁剪。负数表示距离视频结束多少秒开始裁剪。例如 -10 表示从倒数第 10 秒开始裁剪。</p>
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置<p>裁剪的开始偏移时间，单位秒。默认 0，即从视频开头开始裁剪。负数表示距离视频结束多少秒开始裁剪。例如 -10 表示从倒数第 10 秒开始裁剪。</p>
                     * @param _startTimeOffset <p>裁剪的开始偏移时间，单位秒。默认 0，即从视频开头开始裁剪。负数表示距离视频结束多少秒开始裁剪。例如 -10 表示从倒数第 10 秒开始裁剪。</p>
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取<p>裁剪的结束偏移时间，单位秒。默认 0，即裁剪到视频尾部。负数表示距离视频结束多少秒结束裁剪。例如 -10 表示到倒数第 10 秒结束裁剪。</p>
                     * @return EndTimeOffset <p>裁剪的结束偏移时间，单位秒。默认 0，即裁剪到视频尾部。负数表示距离视频结束多少秒结束裁剪。例如 -10 表示到倒数第 10 秒结束裁剪。</p>
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置<p>裁剪的结束偏移时间，单位秒。默认 0，即裁剪到视频尾部。负数表示距离视频结束多少秒结束裁剪。例如 -10 表示到倒数第 10 秒结束裁剪。</p>
                     * @param _endTimeOffset <p>裁剪的结束偏移时间，单位秒。默认 0，即裁剪到视频尾部。负数表示距离视频结束多少秒结束裁剪。例如 -10 表示到倒数第 10 秒结束裁剪。</p>
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取<p>是否固化。0 不固化，1 固化。默认不固化。</p>
                     * @return IsPersistence <p>是否固化。0 不固化，1 固化。默认不固化。</p>
                     * 
                     */
                    int64_t GetIsPersistence() const;

                    /**
                     * 设置<p>是否固化。0 不固化，1 固化。默认不固化。</p>
                     * @param _isPersistence <p>是否固化。0 不固化，1 固化。默认不固化。</p>
                     * 
                     */
                    void SetIsPersistence(const int64_t& _isPersistence);

                    /**
                     * 判断参数 IsPersistence 是否已赋值
                     * @return IsPersistence 是否已赋值
                     * 
                     */
                    bool IsPersistenceHasBeenSet() const;

                    /**
                     * 获取<p>剪辑固化后的视频存储过期时间。格式参照 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。填“9999-12-31T23:59:59Z”表示永不过期。过期后该媒体文件及其相关资源（转码结果、雪碧图等）将被永久删除。仅 IsPersistence 为 1 时有效，默认剪辑固化的视频永不过期。</p>
                     * @return ExpireTime <p>剪辑固化后的视频存储过期时间。格式参照 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。填“9999-12-31T23:59:59Z”表示永不过期。过期后该媒体文件及其相关资源（转码结果、雪碧图等）将被永久删除。仅 IsPersistence 为 1 时有效，默认剪辑固化的视频永不过期。</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>剪辑固化后的视频存储过期时间。格式参照 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。填“9999-12-31T23:59:59Z”表示永不过期。过期后该媒体文件及其相关资源（转码结果、雪碧图等）将被永久删除。仅 IsPersistence 为 1 时有效，默认剪辑固化的视频永不过期。</p>
                     * @param _expireTime <p>剪辑固化后的视频存储过期时间。格式参照 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。填“9999-12-31T23:59:59Z”表示永不过期。过期后该媒体文件及其相关资源（转码结果、雪碧图等）将被永久删除。仅 IsPersistence 为 1 时有效，默认剪辑固化的视频永不过期。</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>剪辑固化后的视频点播任务流处理，详见<a href="https://cloud.tencent.com/document/product/266/9759">上传指定任务流</a>。仅 IsPersistence 为 1 时有效。</p>
                     * @return Procedure <p>剪辑固化后的视频点播任务流处理，详见<a href="https://cloud.tencent.com/document/product/266/9759">上传指定任务流</a>。仅 IsPersistence 为 1 时有效。</p>
                     * 
                     */
                    std::string GetProcedure() const;

                    /**
                     * 设置<p>剪辑固化后的视频点播任务流处理，详见<a href="https://cloud.tencent.com/document/product/266/9759">上传指定任务流</a>。仅 IsPersistence 为 1 时有效。</p>
                     * @param _procedure <p>剪辑固化后的视频点播任务流处理，详见<a href="https://cloud.tencent.com/document/product/266/9759">上传指定任务流</a>。仅 IsPersistence 为 1 时有效。</p>
                     * 
                     */
                    void SetProcedure(const std::string& _procedure);

                    /**
                     * 判断参数 Procedure 是否已赋值
                     * @return Procedure 是否已赋值
                     * 
                     */
                    bool ProcedureHasBeenSet() const;

                    /**
                     * 获取<p>分类ID，用于对媒体进行分类管理，可通过 <a href="/document/product/266/31772">创建分类</a> 接口，创建分类，获得分类 ID。</p><li>默认值：0，表示其他分类。</li>仅 IsPersistence 为 1 时有效。
                     * @return ClassId <p>分类ID，用于对媒体进行分类管理，可通过 <a href="/document/product/266/31772">创建分类</a> 接口，创建分类，获得分类 ID。</p><li>默认值：0，表示其他分类。</li>仅 IsPersistence 为 1 时有效。
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置<p>分类ID，用于对媒体进行分类管理，可通过 <a href="/document/product/266/31772">创建分类</a> 接口，创建分类，获得分类 ID。</p><li>默认值：0，表示其他分类。</li>仅 IsPersistence 为 1 时有效。
                     * @param _classId <p>分类ID，用于对媒体进行分类管理，可通过 <a href="/document/product/266/31772">创建分类</a> 接口，创建分类，获得分类 ID。</p><li>默认值：0，表示其他分类。</li>仅 IsPersistence 为 1 时有效。
                     * 
                     */
                    void SetClassId(const int64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     * 
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取<p>来源上下文，用于透传用户请求信息，<a href="/document/product/266/7830">上传完成回调</a> 将返回该字段值，最长 250 个字符。仅 IsPersistence 为 1 时有效。</p>
                     * @return SourceContext <p>来源上下文，用于透传用户请求信息，<a href="/document/product/266/7830">上传完成回调</a> 将返回该字段值，最长 250 个字符。仅 IsPersistence 为 1 时有效。</p>
                     * 
                     */
                    std::string GetSourceContext() const;

                    /**
                     * 设置<p>来源上下文，用于透传用户请求信息，<a href="/document/product/266/7830">上传完成回调</a> 将返回该字段值，最长 250 个字符。仅 IsPersistence 为 1 时有效。</p>
                     * @param _sourceContext <p>来源上下文，用于透传用户请求信息，<a href="/document/product/266/7830">上传完成回调</a> 将返回该字段值，最长 250 个字符。仅 IsPersistence 为 1 时有效。</p>
                     * 
                     */
                    void SetSourceContext(const std::string& _sourceContext);

                    /**
                     * 判断参数 SourceContext 是否已赋值
                     * @return SourceContext 是否已赋值
                     * 
                     */
                    bool SourceContextHasBeenSet() const;

                    /**
                     * 获取<p>会话上下文，用于透传用户请求信息，当指定 Procedure 参数后，<a href="/document/product/266/9636">任务流状态变更回调</a> 将返回该字段值，最长 1000 个字符。仅 IsPersistence 为 1 时有效。</p>
                     * @return SessionContext <p>会话上下文，用于透传用户请求信息，当指定 Procedure 参数后，<a href="/document/product/266/9636">任务流状态变更回调</a> 将返回该字段值，最长 1000 个字符。仅 IsPersistence 为 1 时有效。</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>会话上下文，用于透传用户请求信息，当指定 Procedure 参数后，<a href="/document/product/266/9636">任务流状态变更回调</a> 将返回该字段值，最长 1000 个字符。仅 IsPersistence 为 1 时有效。</p>
                     * @param _sessionContext <p>会话上下文，用于透传用户请求信息，当指定 Procedure 参数后，<a href="/document/product/266/9636">任务流状态变更回调</a> 将返回该字段值，最长 1000 个字符。仅 IsPersistence 为 1 时有效。</p>
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取<p>该字段已废弃。</p>
                     * @return Precision <p>该字段已废弃。</p>
                     * @deprecated
                     */
                    std::string GetPrecision() const;

                    /**
                     * 设置<p>该字段已废弃。</p>
                     * @param _precision <p>该字段已废弃。</p>
                     * @deprecated
                     */
                    void SetPrecision(const std::string& _precision);

                    /**
                     * 判断参数 Precision 是否已赋值
                     * @return Precision 是否已赋值
                     * @deprecated
                     */
                    bool PrecisionHasBeenSet() const;

                    /**
                     * 获取<p>输出视频类型，取值有：<li>hls: 输出 hls 文件。</li>默认取值 hls。</p>
                     * @return OutputMediaType <p>输出视频类型，取值有：<li>hls: 输出 hls 文件。</li>默认取值 hls。</p>
                     * 
                     */
                    std::string GetOutputMediaType() const;

                    /**
                     * 设置<p>输出视频类型，取值有：<li>hls: 输出 hls 文件。</li>默认取值 hls。</p>
                     * @param _outputMediaType <p>输出视频类型，取值有：<li>hls: 输出 hls 文件。</li>默认取值 hls。</p>
                     * 
                     */
                    void SetOutputMediaType(const std::string& _outputMediaType);

                    /**
                     * 判断参数 OutputMediaType 是否已赋值
                     * @return OutputMediaType 是否已赋值
                     * 
                     */
                    bool OutputMediaTypeHasBeenSet() const;

                    /**
                     * 获取<p>保留字段，特殊用途时使用。 示例值：&quot;&quot;</p>
                     * @return ExtInfo <p>保留字段，特殊用途时使用。 示例值：&quot;&quot;</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>保留字段，特殊用途时使用。 示例值：&quot;&quot;</p>
                     * @param _extInfo <p>保留字段，特殊用途时使用。 示例值：&quot;&quot;</p>
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * <p>需要裁剪的腾讯云点播 HLS 视频 URL。</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>裁剪的开始偏移时间，单位秒。默认 0，即从视频开头开始裁剪。负数表示距离视频结束多少秒开始裁剪。例如 -10 表示从倒数第 10 秒开始裁剪。</p>
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * <p>裁剪的结束偏移时间，单位秒。默认 0，即裁剪到视频尾部。负数表示距离视频结束多少秒结束裁剪。例如 -10 表示到倒数第 10 秒结束裁剪。</p>
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * <p>是否固化。0 不固化，1 固化。默认不固化。</p>
                     */
                    int64_t m_isPersistence;
                    bool m_isPersistenceHasBeenSet;

                    /**
                     * <p>剪辑固化后的视频存储过期时间。格式参照 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。填“9999-12-31T23:59:59Z”表示永不过期。过期后该媒体文件及其相关资源（转码结果、雪碧图等）将被永久删除。仅 IsPersistence 为 1 时有效，默认剪辑固化的视频永不过期。</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>剪辑固化后的视频点播任务流处理，详见<a href="https://cloud.tencent.com/document/product/266/9759">上传指定任务流</a>。仅 IsPersistence 为 1 时有效。</p>
                     */
                    std::string m_procedure;
                    bool m_procedureHasBeenSet;

                    /**
                     * <p>分类ID，用于对媒体进行分类管理，可通过 <a href="/document/product/266/31772">创建分类</a> 接口，创建分类，获得分类 ID。</p><li>默认值：0，表示其他分类。</li>仅 IsPersistence 为 1 时有效。
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * <p>来源上下文，用于透传用户请求信息，<a href="/document/product/266/7830">上传完成回调</a> 将返回该字段值，最长 250 个字符。仅 IsPersistence 为 1 时有效。</p>
                     */
                    std::string m_sourceContext;
                    bool m_sourceContextHasBeenSet;

                    /**
                     * <p>会话上下文，用于透传用户请求信息，当指定 Procedure 参数后，<a href="/document/product/266/9636">任务流状态变更回调</a> 将返回该字段值，最长 1000 个字符。仅 IsPersistence 为 1 时有效。</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>该字段已废弃。</p>
                     */
                    std::string m_precision;
                    bool m_precisionHasBeenSet;

                    /**
                     * <p>输出视频类型，取值有：<li>hls: 输出 hls 文件。</li>默认取值 hls。</p>
                     */
                    std::string m_outputMediaType;
                    bool m_outputMediaTypeHasBeenSet;

                    /**
                     * <p>保留字段，特殊用途时使用。 示例值：&quot;&quot;</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SIMPLEHLSCLIPREQUEST_H_
