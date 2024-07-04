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
                     * 获取需要裁剪的腾讯云点播 HLS 视频 URL。
                     * @return Url 需要裁剪的腾讯云点播 HLS 视频 URL。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置需要裁剪的腾讯云点播 HLS 视频 URL。
                     * @param _url 需要裁剪的腾讯云点播 HLS 视频 URL。
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
                     * 获取<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
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
                     * 获取裁剪的开始偏移时间，单位秒。默认 0，即从视频开头开始裁剪。负数表示距离视频结束多少秒开始裁剪。例如 -10 表示从倒数第 10 秒开始裁剪。
                     * @return StartTimeOffset 裁剪的开始偏移时间，单位秒。默认 0，即从视频开头开始裁剪。负数表示距离视频结束多少秒开始裁剪。例如 -10 表示从倒数第 10 秒开始裁剪。
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置裁剪的开始偏移时间，单位秒。默认 0，即从视频开头开始裁剪。负数表示距离视频结束多少秒开始裁剪。例如 -10 表示从倒数第 10 秒开始裁剪。
                     * @param _startTimeOffset 裁剪的开始偏移时间，单位秒。默认 0，即从视频开头开始裁剪。负数表示距离视频结束多少秒开始裁剪。例如 -10 表示从倒数第 10 秒开始裁剪。
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
                     * 获取裁剪的结束偏移时间，单位秒。默认 0，即裁剪到视频尾部。负数表示距离视频结束多少秒结束裁剪。例如 -10 表示到倒数第 10 秒结束裁剪。
                     * @return EndTimeOffset 裁剪的结束偏移时间，单位秒。默认 0，即裁剪到视频尾部。负数表示距离视频结束多少秒结束裁剪。例如 -10 表示到倒数第 10 秒结束裁剪。
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置裁剪的结束偏移时间，单位秒。默认 0，即裁剪到视频尾部。负数表示距离视频结束多少秒结束裁剪。例如 -10 表示到倒数第 10 秒结束裁剪。
                     * @param _endTimeOffset 裁剪的结束偏移时间，单位秒。默认 0，即裁剪到视频尾部。负数表示距离视频结束多少秒结束裁剪。例如 -10 表示到倒数第 10 秒结束裁剪。
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
                     * 获取是否固化。0 不固化，1 固化。默认不固化。
                     * @return IsPersistence 是否固化。0 不固化，1 固化。默认不固化。
                     * 
                     */
                    int64_t GetIsPersistence() const;

                    /**
                     * 设置是否固化。0 不固化，1 固化。默认不固化。
                     * @param _isPersistence 是否固化。0 不固化，1 固化。默认不固化。
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
                     * 获取剪辑固化后的视频存储过期时间。格式参照 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。填“9999-12-31T23:59:59Z”表示永不过期。过期后该媒体文件及其相关资源（转码结果、雪碧图等）将被永久删除。仅 IsPersistence 为 1 时有效，默认剪辑固化的视频永不过期。
                     * @return ExpireTime 剪辑固化后的视频存储过期时间。格式参照 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。填“9999-12-31T23:59:59Z”表示永不过期。过期后该媒体文件及其相关资源（转码结果、雪碧图等）将被永久删除。仅 IsPersistence 为 1 时有效，默认剪辑固化的视频永不过期。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置剪辑固化后的视频存储过期时间。格式参照 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。填“9999-12-31T23:59:59Z”表示永不过期。过期后该媒体文件及其相关资源（转码结果、雪碧图等）将被永久删除。仅 IsPersistence 为 1 时有效，默认剪辑固化的视频永不过期。
                     * @param _expireTime 剪辑固化后的视频存储过期时间。格式参照 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。填“9999-12-31T23:59:59Z”表示永不过期。过期后该媒体文件及其相关资源（转码结果、雪碧图等）将被永久删除。仅 IsPersistence 为 1 时有效，默认剪辑固化的视频永不过期。
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
                     * 获取剪辑固化后的视频点播任务流处理，详见[上传指定任务流](https://cloud.tencent.com/document/product/266/9759)。仅 IsPersistence 为 1 且 Precision 为 Rough 时有效。
                     * @return Procedure 剪辑固化后的视频点播任务流处理，详见[上传指定任务流](https://cloud.tencent.com/document/product/266/9759)。仅 IsPersistence 为 1 且 Precision 为 Rough 时有效。
                     * 
                     */
                    std::string GetProcedure() const;

                    /**
                     * 设置剪辑固化后的视频点播任务流处理，详见[上传指定任务流](https://cloud.tencent.com/document/product/266/9759)。仅 IsPersistence 为 1 且 Precision 为 Rough 时有效。
                     * @param _procedure 剪辑固化后的视频点播任务流处理，详见[上传指定任务流](https://cloud.tencent.com/document/product/266/9759)。仅 IsPersistence 为 1 且 Precision 为 Rough 时有效。
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
                     * 获取分类ID，用于对媒体进行分类管理，可通过 [创建分类](/document/product/266/7812) 接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
仅 IsPersistence 为 1 时有效。
                     * @return ClassId 分类ID，用于对媒体进行分类管理，可通过 [创建分类](/document/product/266/7812) 接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
仅 IsPersistence 为 1 时有效。
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置分类ID，用于对媒体进行分类管理，可通过 [创建分类](/document/product/266/7812) 接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
仅 IsPersistence 为 1 时有效。
                     * @param _classId 分类ID，用于对媒体进行分类管理，可通过 [创建分类](/document/product/266/7812) 接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
仅 IsPersistence 为 1 时有效。
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
                     * 获取来源上下文，用于透传用户请求信息，[上传完成回调](/document/product/266/7830) 将返回该字段值，最长 250 个字符。仅 IsPersistence 为 1 时有效。
                     * @return SourceContext 来源上下文，用于透传用户请求信息，[上传完成回调](/document/product/266/7830) 将返回该字段值，最长 250 个字符。仅 IsPersistence 为 1 时有效。
                     * 
                     */
                    std::string GetSourceContext() const;

                    /**
                     * 设置来源上下文，用于透传用户请求信息，[上传完成回调](/document/product/266/7830) 将返回该字段值，最长 250 个字符。仅 IsPersistence 为 1 时有效。
                     * @param _sourceContext 来源上下文，用于透传用户请求信息，[上传完成回调](/document/product/266/7830) 将返回该字段值，最长 250 个字符。仅 IsPersistence 为 1 时有效。
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
                     * 获取会话上下文，用于透传用户请求信息，当指定 Procedure 参数后，[任务流状态变更回调](/document/product/266/9636) 将返回该字段值，最长 1000 个字符。仅 IsPersistence 为 1 时有效。
                     * @return SessionContext 会话上下文，用于透传用户请求信息，当指定 Procedure 参数后，[任务流状态变更回调](/document/product/266/9636) 将返回该字段值，最长 1000 个字符。仅 IsPersistence 为 1 时有效。
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置会话上下文，用于透传用户请求信息，当指定 Procedure 参数后，[任务流状态变更回调](/document/product/266/9636) 将返回该字段值，最长 1000 个字符。仅 IsPersistence 为 1 时有效。
                     * @param _sessionContext 会话上下文，用于透传用户请求信息，当指定 Procedure 参数后，[任务流状态变更回调](/document/product/266/9636) 将返回该字段值，最长 1000 个字符。仅 IsPersistence 为 1 时有效。
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
                     * 获取裁剪精度，取值有：<li>Rough: 粗略裁剪，最小剪辑精度是单个 ts 分片；</li><li>Precise: 精确裁剪，做到按照剪辑时间点的毫秒级精确剪辑。</li> 默认取值 Rough。
                     * @return Precision 裁剪精度，取值有：<li>Rough: 粗略裁剪，最小剪辑精度是单个 ts 分片；</li><li>Precise: 精确裁剪，做到按照剪辑时间点的毫秒级精确剪辑。</li> 默认取值 Rough。
                     * 
                     */
                    std::string GetPrecision() const;

                    /**
                     * 设置裁剪精度，取值有：<li>Rough: 粗略裁剪，最小剪辑精度是单个 ts 分片；</li><li>Precise: 精确裁剪，做到按照剪辑时间点的毫秒级精确剪辑。</li> 默认取值 Rough。
                     * @param _precision 裁剪精度，取值有：<li>Rough: 粗略裁剪，最小剪辑精度是单个 ts 分片；</li><li>Precise: 精确裁剪，做到按照剪辑时间点的毫秒级精确剪辑。</li> 默认取值 Rough。
                     * 
                     */
                    void SetPrecision(const std::string& _precision);

                    /**
                     * 判断参数 Precision 是否已赋值
                     * @return Precision 是否已赋值
                     * 
                     */
                    bool PrecisionHasBeenSet() const;

                    /**
                     * 获取输出视频类型，取值有：<li>hls: 输出 hls 文件；</li><li>mp4：输出 mp4 文件，MP4 文件的大小不超过5G，时长小于2小时。仅当 Precision 选择 Precise 且 IsPersistence  选择0时有效，即只有非固化的精确剪辑时支持输出 MP4。</li>默认取值 hls。
                     * @return OutputMediaType 输出视频类型，取值有：<li>hls: 输出 hls 文件；</li><li>mp4：输出 mp4 文件，MP4 文件的大小不超过5G，时长小于2小时。仅当 Precision 选择 Precise 且 IsPersistence  选择0时有效，即只有非固化的精确剪辑时支持输出 MP4。</li>默认取值 hls。
                     * 
                     */
                    std::string GetOutputMediaType() const;

                    /**
                     * 设置输出视频类型，取值有：<li>hls: 输出 hls 文件；</li><li>mp4：输出 mp4 文件，MP4 文件的大小不超过5G，时长小于2小时。仅当 Precision 选择 Precise 且 IsPersistence  选择0时有效，即只有非固化的精确剪辑时支持输出 MP4。</li>默认取值 hls。
                     * @param _outputMediaType 输出视频类型，取值有：<li>hls: 输出 hls 文件；</li><li>mp4：输出 mp4 文件，MP4 文件的大小不超过5G，时长小于2小时。仅当 Precision 选择 Precise 且 IsPersistence  选择0时有效，即只有非固化的精确剪辑时支持输出 MP4。</li>默认取值 hls。
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
                     * 获取保留字段，特殊用途时使用。 示例值：""
                     * @return ExtInfo 保留字段，特殊用途时使用。 示例值：""
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置保留字段，特殊用途时使用。 示例值：""
                     * @param _extInfo 保留字段，特殊用途时使用。 示例值：""
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
                     * 需要裁剪的腾讯云点播 HLS 视频 URL。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 裁剪的开始偏移时间，单位秒。默认 0，即从视频开头开始裁剪。负数表示距离视频结束多少秒开始裁剪。例如 -10 表示从倒数第 10 秒开始裁剪。
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * 裁剪的结束偏移时间，单位秒。默认 0，即裁剪到视频尾部。负数表示距离视频结束多少秒结束裁剪。例如 -10 表示到倒数第 10 秒结束裁剪。
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * 是否固化。0 不固化，1 固化。默认不固化。
                     */
                    int64_t m_isPersistence;
                    bool m_isPersistenceHasBeenSet;

                    /**
                     * 剪辑固化后的视频存储过期时间。格式参照 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。填“9999-12-31T23:59:59Z”表示永不过期。过期后该媒体文件及其相关资源（转码结果、雪碧图等）将被永久删除。仅 IsPersistence 为 1 时有效，默认剪辑固化的视频永不过期。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 剪辑固化后的视频点播任务流处理，详见[上传指定任务流](https://cloud.tencent.com/document/product/266/9759)。仅 IsPersistence 为 1 且 Precision 为 Rough 时有效。
                     */
                    std::string m_procedure;
                    bool m_procedureHasBeenSet;

                    /**
                     * 分类ID，用于对媒体进行分类管理，可通过 [创建分类](/document/product/266/7812) 接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
仅 IsPersistence 为 1 时有效。
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * 来源上下文，用于透传用户请求信息，[上传完成回调](/document/product/266/7830) 将返回该字段值，最长 250 个字符。仅 IsPersistence 为 1 时有效。
                     */
                    std::string m_sourceContext;
                    bool m_sourceContextHasBeenSet;

                    /**
                     * 会话上下文，用于透传用户请求信息，当指定 Procedure 参数后，[任务流状态变更回调](/document/product/266/9636) 将返回该字段值，最长 1000 个字符。仅 IsPersistence 为 1 时有效。
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * 裁剪精度，取值有：<li>Rough: 粗略裁剪，最小剪辑精度是单个 ts 分片；</li><li>Precise: 精确裁剪，做到按照剪辑时间点的毫秒级精确剪辑。</li> 默认取值 Rough。
                     */
                    std::string m_precision;
                    bool m_precisionHasBeenSet;

                    /**
                     * 输出视频类型，取值有：<li>hls: 输出 hls 文件；</li><li>mp4：输出 mp4 文件，MP4 文件的大小不超过5G，时长小于2小时。仅当 Precision 选择 Precise 且 IsPersistence  选择0时有效，即只有非固化的精确剪辑时支持输出 MP4。</li>默认取值 hls。
                     */
                    std::string m_outputMediaType;
                    bool m_outputMediaTypeHasBeenSet;

                    /**
                     * 保留字段，特殊用途时使用。 示例值：""
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SIMPLEHLSCLIPREQUEST_H_
