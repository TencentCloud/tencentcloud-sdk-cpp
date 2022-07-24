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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVEPULLSTREAMTASKREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVEPULLSTREAMTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * CreateLivePullStreamTask请求参数结构体
                */
                class CreateLivePullStreamTaskRequest : public AbstractModel
                {
                public:
                    CreateLivePullStreamTaskRequest();
                    ~CreateLivePullStreamTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取拉流源的类型：
PullLivePushLive -直播，
PullVodPushLive -点播。
                     * @return SourceType 拉流源的类型：
PullLivePushLive -直播，
PullVodPushLive -点播。
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置拉流源的类型：
PullLivePushLive -直播，
PullVodPushLive -点播。
                     * @param SourceType 拉流源的类型：
PullLivePushLive -直播，
PullVodPushLive -点播。
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取拉流源 url 列表。
SourceType 为直播（PullLivePushLive）只可以填1个，
SourceType 为点播（PullVodPushLive）可以填多个，上限30个。
当前支持的文件格式：flv，mp4，hls。
当前支持的拉流协议：http，https，rtmp，rtmps，rtsp，srt。
注意：
1. 建议优先使用 flv 文件，对于 mp4 未交织好的文件轮播推流易产生卡顿，可通过点播转码进行重新交织后再轮播。
2. 拒绝内网域名等攻击性拉流地址，如有使用，则做账号封禁处理。
3. 源文件请保持时间戳正常交织递增，避免因源文件异常影响推流及播放。
4. 视频编码格式仅支持: H264, H265。
5. 音频编码格式仅支持: AAC。
6. 点播源请使用小文件，尽量时长保持在1小时内，较大文件打开和续播耗时较久，耗时超过15秒会有无法正常转推风险。
                     * @return SourceUrls 拉流源 url 列表。
SourceType 为直播（PullLivePushLive）只可以填1个，
SourceType 为点播（PullVodPushLive）可以填多个，上限30个。
当前支持的文件格式：flv，mp4，hls。
当前支持的拉流协议：http，https，rtmp，rtmps，rtsp，srt。
注意：
1. 建议优先使用 flv 文件，对于 mp4 未交织好的文件轮播推流易产生卡顿，可通过点播转码进行重新交织后再轮播。
2. 拒绝内网域名等攻击性拉流地址，如有使用，则做账号封禁处理。
3. 源文件请保持时间戳正常交织递增，避免因源文件异常影响推流及播放。
4. 视频编码格式仅支持: H264, H265。
5. 音频编码格式仅支持: AAC。
6. 点播源请使用小文件，尽量时长保持在1小时内，较大文件打开和续播耗时较久，耗时超过15秒会有无法正常转推风险。
                     */
                    std::vector<std::string> GetSourceUrls() const;

                    /**
                     * 设置拉流源 url 列表。
SourceType 为直播（PullLivePushLive）只可以填1个，
SourceType 为点播（PullVodPushLive）可以填多个，上限30个。
当前支持的文件格式：flv，mp4，hls。
当前支持的拉流协议：http，https，rtmp，rtmps，rtsp，srt。
注意：
1. 建议优先使用 flv 文件，对于 mp4 未交织好的文件轮播推流易产生卡顿，可通过点播转码进行重新交织后再轮播。
2. 拒绝内网域名等攻击性拉流地址，如有使用，则做账号封禁处理。
3. 源文件请保持时间戳正常交织递增，避免因源文件异常影响推流及播放。
4. 视频编码格式仅支持: H264, H265。
5. 音频编码格式仅支持: AAC。
6. 点播源请使用小文件，尽量时长保持在1小时内，较大文件打开和续播耗时较久，耗时超过15秒会有无法正常转推风险。
                     * @param SourceUrls 拉流源 url 列表。
SourceType 为直播（PullLivePushLive）只可以填1个，
SourceType 为点播（PullVodPushLive）可以填多个，上限30个。
当前支持的文件格式：flv，mp4，hls。
当前支持的拉流协议：http，https，rtmp，rtmps，rtsp，srt。
注意：
1. 建议优先使用 flv 文件，对于 mp4 未交织好的文件轮播推流易产生卡顿，可通过点播转码进行重新交织后再轮播。
2. 拒绝内网域名等攻击性拉流地址，如有使用，则做账号封禁处理。
3. 源文件请保持时间戳正常交织递增，避免因源文件异常影响推流及播放。
4. 视频编码格式仅支持: H264, H265。
5. 音频编码格式仅支持: AAC。
6. 点播源请使用小文件，尽量时长保持在1小时内，较大文件打开和续播耗时较久，耗时超过15秒会有无法正常转推风险。
                     */
                    void SetSourceUrls(const std::vector<std::string>& _sourceUrls);

                    /**
                     * 判断参数 SourceUrls 是否已赋值
                     * @return SourceUrls 是否已赋值
                     */
                    bool SourceUrlsHasBeenSet() const;

                    /**
                     * 获取推流域名。
将拉取过来的流推到该域名。
注意：如果目标地址为非云直播，且样式不同于云直播，请使用 ToUrl 传入完整推流地址，详细用法请参考 ToUrl 参数说明。
                     * @return DomainName 推流域名。
将拉取过来的流推到该域名。
注意：如果目标地址为非云直播，且样式不同于云直播，请使用 ToUrl 传入完整推流地址，详细用法请参考 ToUrl 参数说明。
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置推流域名。
将拉取过来的流推到该域名。
注意：如果目标地址为非云直播，且样式不同于云直播，请使用 ToUrl 传入完整推流地址，详细用法请参考 ToUrl 参数说明。
                     * @param DomainName 推流域名。
将拉取过来的流推到该域名。
注意：如果目标地址为非云直播，且样式不同于云直播，请使用 ToUrl 传入完整推流地址，详细用法请参考 ToUrl 参数说明。
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取推流路径。
将拉取过来的流推到该路径。
                     * @return AppName 推流路径。
将拉取过来的流推到该路径。
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置推流路径。
将拉取过来的流推到该路径。
                     * @param AppName 推流路径。
将拉取过来的流推到该路径。
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取推流名称。
将拉取过来的流推到该流名称。
                     * @return StreamName 推流名称。
将拉取过来的流推到该流名称。
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置推流名称。
将拉取过来的流推到该流名称。
                     * @param StreamName 推流名称。
将拉取过来的流推到该流名称。
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取开始时间。
使用 UTC 格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return StartTime 开始时间。
使用 UTC 格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间。
使用 UTC 格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param StartTime 开始时间。
使用 UTC 格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间，注意：
1. 结束时间必须大于开始时间；
2. 结束时间和开始时间必须大于当前时间；
3. 结束时间 和 开始时间 间隔必须小于七天。
使用 UTC 格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return EndTime 结束时间，注意：
1. 结束时间必须大于开始时间；
2. 结束时间和开始时间必须大于当前时间；
3. 结束时间 和 开始时间 间隔必须小于七天。
使用 UTC 格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，注意：
1. 结束时间必须大于开始时间；
2. 结束时间和开始时间必须大于当前时间；
3. 结束时间 和 开始时间 间隔必须小于七天。
使用 UTC 格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param EndTime 结束时间，注意：
1. 结束时间必须大于开始时间；
2. 结束时间和开始时间必须大于当前时间；
3. 结束时间 和 开始时间 间隔必须小于七天。
使用 UTC 格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取任务操作人备注。
                     * @return Operator 任务操作人备注。
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置任务操作人备注。
                     * @param Operator 任务操作人备注。
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取推流参数。
推流时携带自定义参数。
示例：
bak=1&test=2 。
                     * @return PushArgs 推流参数。
推流时携带自定义参数。
示例：
bak=1&test=2 。
                     */
                    std::string GetPushArgs() const;

                    /**
                     * 设置推流参数。
推流时携带自定义参数。
示例：
bak=1&test=2 。
                     * @param PushArgs 推流参数。
推流时携带自定义参数。
示例：
bak=1&test=2 。
                     */
                    void SetPushArgs(const std::string& _pushArgs);

                    /**
                     * 判断参数 PushArgs 是否已赋值
                     * @return PushArgs 是否已赋值
                     */
                    bool PushArgsHasBeenSet() const;

                    /**
                     * 获取选择需要回调的事件（不填则回调全部）：
TaskStart：任务启动回调，
TaskExit：任务停止回调，
VodSourceFileStart：从点播源文件开始拉流回调，
VodSourceFileFinish：从点播源文件拉流结束回调，
ResetTaskConfig：任务更新回调。

TaskAlarm: 用于告警事件通知，AlarmType 示例:
PullFileUnstable - 文件拉取不稳定，
PushStreamUnstable - 推流不稳定，
PullFileFailed - 文件拉取出错，
PushStreamFailed - 推流出现失败，
FileEndEarly - 文件提前结束。
                     * @return CallbackEvents 选择需要回调的事件（不填则回调全部）：
TaskStart：任务启动回调，
TaskExit：任务停止回调，
VodSourceFileStart：从点播源文件开始拉流回调，
VodSourceFileFinish：从点播源文件拉流结束回调，
ResetTaskConfig：任务更新回调。

TaskAlarm: 用于告警事件通知，AlarmType 示例:
PullFileUnstable - 文件拉取不稳定，
PushStreamUnstable - 推流不稳定，
PullFileFailed - 文件拉取出错，
PushStreamFailed - 推流出现失败，
FileEndEarly - 文件提前结束。
                     */
                    std::vector<std::string> GetCallbackEvents() const;

                    /**
                     * 设置选择需要回调的事件（不填则回调全部）：
TaskStart：任务启动回调，
TaskExit：任务停止回调，
VodSourceFileStart：从点播源文件开始拉流回调，
VodSourceFileFinish：从点播源文件拉流结束回调，
ResetTaskConfig：任务更新回调。

TaskAlarm: 用于告警事件通知，AlarmType 示例:
PullFileUnstable - 文件拉取不稳定，
PushStreamUnstable - 推流不稳定，
PullFileFailed - 文件拉取出错，
PushStreamFailed - 推流出现失败，
FileEndEarly - 文件提前结束。
                     * @param CallbackEvents 选择需要回调的事件（不填则回调全部）：
TaskStart：任务启动回调，
TaskExit：任务停止回调，
VodSourceFileStart：从点播源文件开始拉流回调，
VodSourceFileFinish：从点播源文件拉流结束回调，
ResetTaskConfig：任务更新回调。

TaskAlarm: 用于告警事件通知，AlarmType 示例:
PullFileUnstable - 文件拉取不稳定，
PushStreamUnstable - 推流不稳定，
PullFileFailed - 文件拉取出错，
PushStreamFailed - 推流出现失败，
FileEndEarly - 文件提前结束。
                     */
                    void SetCallbackEvents(const std::vector<std::string>& _callbackEvents);

                    /**
                     * 判断参数 CallbackEvents 是否已赋值
                     * @return CallbackEvents 是否已赋值
                     */
                    bool CallbackEventsHasBeenSet() const;

                    /**
                     * 获取点播拉流转推循环次数。默认：-1。
-1：无限循环，直到任务结束。
0：不循环。
>0：具体循环次数。次数和时间以先结束的为准。
注意：该配置仅对拉流源为点播时生效。
                     * @return VodLoopTimes 点播拉流转推循环次数。默认：-1。
-1：无限循环，直到任务结束。
0：不循环。
>0：具体循环次数。次数和时间以先结束的为准。
注意：该配置仅对拉流源为点播时生效。
                     */
                    std::string GetVodLoopTimes() const;

                    /**
                     * 设置点播拉流转推循环次数。默认：-1。
-1：无限循环，直到任务结束。
0：不循环。
>0：具体循环次数。次数和时间以先结束的为准。
注意：该配置仅对拉流源为点播时生效。
                     * @param VodLoopTimes 点播拉流转推循环次数。默认：-1。
-1：无限循环，直到任务结束。
0：不循环。
>0：具体循环次数。次数和时间以先结束的为准。
注意：该配置仅对拉流源为点播时生效。
                     */
                    void SetVodLoopTimes(const std::string& _vodLoopTimes);

                    /**
                     * 判断参数 VodLoopTimes 是否已赋值
                     * @return VodLoopTimes 是否已赋值
                     */
                    bool VodLoopTimesHasBeenSet() const;

                    /**
                     * 获取点播更新SourceUrls后的播放方式：
ImmediateNewSource：立即播放新的拉流源内容；
ContinueBreakPoint：播放完当前正在播放的点播 url 后再使用新的拉流源播放。（旧拉流源未播放的点播 url 不会再播放）

注意：该配置生效仅对变更前拉流源为点播时生效。
                     * @return VodRefreshType 点播更新SourceUrls后的播放方式：
ImmediateNewSource：立即播放新的拉流源内容；
ContinueBreakPoint：播放完当前正在播放的点播 url 后再使用新的拉流源播放。（旧拉流源未播放的点播 url 不会再播放）

注意：该配置生效仅对变更前拉流源为点播时生效。
                     */
                    std::string GetVodRefreshType() const;

                    /**
                     * 设置点播更新SourceUrls后的播放方式：
ImmediateNewSource：立即播放新的拉流源内容；
ContinueBreakPoint：播放完当前正在播放的点播 url 后再使用新的拉流源播放。（旧拉流源未播放的点播 url 不会再播放）

注意：该配置生效仅对变更前拉流源为点播时生效。
                     * @param VodRefreshType 点播更新SourceUrls后的播放方式：
ImmediateNewSource：立即播放新的拉流源内容；
ContinueBreakPoint：播放完当前正在播放的点播 url 后再使用新的拉流源播放。（旧拉流源未播放的点播 url 不会再播放）

注意：该配置生效仅对变更前拉流源为点播时生效。
                     */
                    void SetVodRefreshType(const std::string& _vodRefreshType);

                    /**
                     * 判断参数 VodRefreshType 是否已赋值
                     * @return VodRefreshType 是否已赋值
                     */
                    bool VodRefreshTypeHasBeenSet() const;

                    /**
                     * 获取自定义回调地址。
拉流转推任务相关事件会回调到该地址。
                     * @return CallbackUrl 自定义回调地址。
拉流转推任务相关事件会回调到该地址。
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置自定义回调地址。
拉流转推任务相关事件会回调到该地址。
                     * @param CallbackUrl 自定义回调地址。
拉流转推任务相关事件会回调到该地址。
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取其他参数。
示例: ignore_region  用于忽略传入地域, 内部按负载分配。
                     * @return ExtraCmd 其他参数。
示例: ignore_region  用于忽略传入地域, 内部按负载分配。
                     */
                    std::string GetExtraCmd() const;

                    /**
                     * 设置其他参数。
示例: ignore_region  用于忽略传入地域, 内部按负载分配。
                     * @param ExtraCmd 其他参数。
示例: ignore_region  用于忽略传入地域, 内部按负载分配。
                     */
                    void SetExtraCmd(const std::string& _extraCmd);

                    /**
                     * 判断参数 ExtraCmd 是否已赋值
                     * @return ExtraCmd 是否已赋值
                     */
                    bool ExtraCmdHasBeenSet() const;

                    /**
                     * 获取任务描述，限制 512 字节。
                     * @return Comment 任务描述，限制 512 字节。
                     */
                    std::string GetComment() const;

                    /**
                     * 设置任务描述，限制 512 字节。
                     * @param Comment 任务描述，限制 512 字节。
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取完整目标 URL 地址。
用法注意：如果使用该参数来传完整目标地址，则 DomainName, AppName, StreamName 需要传入空值，任务将会使用该 ToUrl 参数指定的目标地址。

注意：签名时间需要超过任务结束时间，避免因签名过期造成任务失败。
                     * @return ToUrl 完整目标 URL 地址。
用法注意：如果使用该参数来传完整目标地址，则 DomainName, AppName, StreamName 需要传入空值，任务将会使用该 ToUrl 参数指定的目标地址。

注意：签名时间需要超过任务结束时间，避免因签名过期造成任务失败。
                     */
                    std::string GetToUrl() const;

                    /**
                     * 设置完整目标 URL 地址。
用法注意：如果使用该参数来传完整目标地址，则 DomainName, AppName, StreamName 需要传入空值，任务将会使用该 ToUrl 参数指定的目标地址。

注意：签名时间需要超过任务结束时间，避免因签名过期造成任务失败。
                     * @param ToUrl 完整目标 URL 地址。
用法注意：如果使用该参数来传完整目标地址，则 DomainName, AppName, StreamName 需要传入空值，任务将会使用该 ToUrl 参数指定的目标地址。

注意：签名时间需要超过任务结束时间，避免因签名过期造成任务失败。
                     */
                    void SetToUrl(const std::string& _toUrl);

                    /**
                     * 判断参数 ToUrl 是否已赋值
                     * @return ToUrl 是否已赋值
                     */
                    bool ToUrlHasBeenSet() const;

                    /**
                     * 获取备源的类型：
PullLivePushLive -直播，
PullVodPushLive -点播。
注意：
1. 仅当主源类型为直播源时，备源才会生效。
2. 主直播源拉流中断时，自动使用备源进行拉流。
3. 如果备源为点播文件时，则每次轮播完点播文件就检查主源是否恢复，如果主源恢复则自动切回到主源，否则继续拉备源。
                     * @return BackupSourceType 备源的类型：
PullLivePushLive -直播，
PullVodPushLive -点播。
注意：
1. 仅当主源类型为直播源时，备源才会生效。
2. 主直播源拉流中断时，自动使用备源进行拉流。
3. 如果备源为点播文件时，则每次轮播完点播文件就检查主源是否恢复，如果主源恢复则自动切回到主源，否则继续拉备源。
                     */
                    std::string GetBackupSourceType() const;

                    /**
                     * 设置备源的类型：
PullLivePushLive -直播，
PullVodPushLive -点播。
注意：
1. 仅当主源类型为直播源时，备源才会生效。
2. 主直播源拉流中断时，自动使用备源进行拉流。
3. 如果备源为点播文件时，则每次轮播完点播文件就检查主源是否恢复，如果主源恢复则自动切回到主源，否则继续拉备源。
                     * @param BackupSourceType 备源的类型：
PullLivePushLive -直播，
PullVodPushLive -点播。
注意：
1. 仅当主源类型为直播源时，备源才会生效。
2. 主直播源拉流中断时，自动使用备源进行拉流。
3. 如果备源为点播文件时，则每次轮播完点播文件就检查主源是否恢复，如果主源恢复则自动切回到主源，否则继续拉备源。
                     */
                    void SetBackupSourceType(const std::string& _backupSourceType);

                    /**
                     * 判断参数 BackupSourceType 是否已赋值
                     * @return BackupSourceType 是否已赋值
                     */
                    bool BackupSourceTypeHasBeenSet() const;

                    /**
                     * 获取备源 URL。
只允许填一个备源 URL
                     * @return BackupSourceUrl 备源 URL。
只允许填一个备源 URL
                     */
                    std::string GetBackupSourceUrl() const;

                    /**
                     * 设置备源 URL。
只允许填一个备源 URL
                     * @param BackupSourceUrl 备源 URL。
只允许填一个备源 URL
                     */
                    void SetBackupSourceUrl(const std::string& _backupSourceUrl);

                    /**
                     * 判断参数 BackupSourceUrl 是否已赋值
                     * @return BackupSourceUrl 是否已赋值
                     */
                    bool BackupSourceUrlHasBeenSet() const;

                private:

                    /**
                     * 拉流源的类型：
PullLivePushLive -直播，
PullVodPushLive -点播。
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 拉流源 url 列表。
SourceType 为直播（PullLivePushLive）只可以填1个，
SourceType 为点播（PullVodPushLive）可以填多个，上限30个。
当前支持的文件格式：flv，mp4，hls。
当前支持的拉流协议：http，https，rtmp，rtmps，rtsp，srt。
注意：
1. 建议优先使用 flv 文件，对于 mp4 未交织好的文件轮播推流易产生卡顿，可通过点播转码进行重新交织后再轮播。
2. 拒绝内网域名等攻击性拉流地址，如有使用，则做账号封禁处理。
3. 源文件请保持时间戳正常交织递增，避免因源文件异常影响推流及播放。
4. 视频编码格式仅支持: H264, H265。
5. 音频编码格式仅支持: AAC。
6. 点播源请使用小文件，尽量时长保持在1小时内，较大文件打开和续播耗时较久，耗时超过15秒会有无法正常转推风险。
                     */
                    std::vector<std::string> m_sourceUrls;
                    bool m_sourceUrlsHasBeenSet;

                    /**
                     * 推流域名。
将拉取过来的流推到该域名。
注意：如果目标地址为非云直播，且样式不同于云直播，请使用 ToUrl 传入完整推流地址，详细用法请参考 ToUrl 参数说明。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 推流路径。
将拉取过来的流推到该路径。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 推流名称。
将拉取过来的流推到该流名称。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 开始时间。
使用 UTC 格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，注意：
1. 结束时间必须大于开始时间；
2. 结束时间和开始时间必须大于当前时间；
3. 结束时间 和 开始时间 间隔必须小于七天。
使用 UTC 格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务操作人备注。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 推流参数。
推流时携带自定义参数。
示例：
bak=1&test=2 。
                     */
                    std::string m_pushArgs;
                    bool m_pushArgsHasBeenSet;

                    /**
                     * 选择需要回调的事件（不填则回调全部）：
TaskStart：任务启动回调，
TaskExit：任务停止回调，
VodSourceFileStart：从点播源文件开始拉流回调，
VodSourceFileFinish：从点播源文件拉流结束回调，
ResetTaskConfig：任务更新回调。

TaskAlarm: 用于告警事件通知，AlarmType 示例:
PullFileUnstable - 文件拉取不稳定，
PushStreamUnstable - 推流不稳定，
PullFileFailed - 文件拉取出错，
PushStreamFailed - 推流出现失败，
FileEndEarly - 文件提前结束。
                     */
                    std::vector<std::string> m_callbackEvents;
                    bool m_callbackEventsHasBeenSet;

                    /**
                     * 点播拉流转推循环次数。默认：-1。
-1：无限循环，直到任务结束。
0：不循环。
>0：具体循环次数。次数和时间以先结束的为准。
注意：该配置仅对拉流源为点播时生效。
                     */
                    std::string m_vodLoopTimes;
                    bool m_vodLoopTimesHasBeenSet;

                    /**
                     * 点播更新SourceUrls后的播放方式：
ImmediateNewSource：立即播放新的拉流源内容；
ContinueBreakPoint：播放完当前正在播放的点播 url 后再使用新的拉流源播放。（旧拉流源未播放的点播 url 不会再播放）

注意：该配置生效仅对变更前拉流源为点播时生效。
                     */
                    std::string m_vodRefreshType;
                    bool m_vodRefreshTypeHasBeenSet;

                    /**
                     * 自定义回调地址。
拉流转推任务相关事件会回调到该地址。
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 其他参数。
示例: ignore_region  用于忽略传入地域, 内部按负载分配。
                     */
                    std::string m_extraCmd;
                    bool m_extraCmdHasBeenSet;

                    /**
                     * 任务描述，限制 512 字节。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 完整目标 URL 地址。
用法注意：如果使用该参数来传完整目标地址，则 DomainName, AppName, StreamName 需要传入空值，任务将会使用该 ToUrl 参数指定的目标地址。

注意：签名时间需要超过任务结束时间，避免因签名过期造成任务失败。
                     */
                    std::string m_toUrl;
                    bool m_toUrlHasBeenSet;

                    /**
                     * 备源的类型：
PullLivePushLive -直播，
PullVodPushLive -点播。
注意：
1. 仅当主源类型为直播源时，备源才会生效。
2. 主直播源拉流中断时，自动使用备源进行拉流。
3. 如果备源为点播文件时，则每次轮播完点播文件就检查主源是否恢复，如果主源恢复则自动切回到主源，否则继续拉备源。
                     */
                    std::string m_backupSourceType;
                    bool m_backupSourceTypeHasBeenSet;

                    /**
                     * 备源 URL。
只允许填一个备源 URL
                     */
                    std::string m_backupSourceUrl;
                    bool m_backupSourceUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVEPULLSTREAMTASKREQUEST_H_
