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
#include <tencentcloud/live/v20180801/model/PullPushWatermarkInfo.h>


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
PullVodPushLive -点播，
PullPicPushLive -图片。
                     * @return SourceType 拉流源的类型：
PullLivePushLive -直播，
PullVodPushLive -点播，
PullPicPushLive -图片。
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置拉流源的类型：
PullLivePushLive -直播，
PullVodPushLive -点播，
PullPicPushLive -图片。
                     * @param _sourceType 拉流源的类型：
PullLivePushLive -直播，
PullVodPushLive -点播，
PullPicPushLive -图片。
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取拉流源 url 列表。
SourceType 为直播（PullLivePushLive）只可以填1个，
SourceType 为点播（PullVodPushLive）可以填多个，上限30个。
当前支持的文件格式：flv，mp4，hls。
当前支持的拉流协议：http，https，rtmp，rtmps，rtsp，srt。
注意：
1. 建议优先使用 flv 文件，对于 mp4 未交织好的文件轮播推流易产生卡顿以及因为频繁拉取导致源产生大量源出口带宽成本，可通过点播转码进行重新交织后再轮播，或提前创建任务并开启本地模式。
2. 拒绝内网域名等攻击性拉流地址，如有使用，则做账号封禁处理。
3. 源文件请保持时间戳正常交织递增，避免因源文件异常影响推流及播放。
4. 视频编码格式仅支持: H264, H265。
5. 音频编码格式仅支持: AAC。
6. 点播源请使用小文件，尽量时长保持在1小时内，较大文件打开和续播耗时较久，耗时超过15秒会有无法正常转推风险。
7. 避免使用低频存储的文件，该类文件因低频存储，拉取时容易出现慢速，影响拉转推质量。
                     * @return SourceUrls 拉流源 url 列表。
SourceType 为直播（PullLivePushLive）只可以填1个，
SourceType 为点播（PullVodPushLive）可以填多个，上限30个。
当前支持的文件格式：flv，mp4，hls。
当前支持的拉流协议：http，https，rtmp，rtmps，rtsp，srt。
注意：
1. 建议优先使用 flv 文件，对于 mp4 未交织好的文件轮播推流易产生卡顿以及因为频繁拉取导致源产生大量源出口带宽成本，可通过点播转码进行重新交织后再轮播，或提前创建任务并开启本地模式。
2. 拒绝内网域名等攻击性拉流地址，如有使用，则做账号封禁处理。
3. 源文件请保持时间戳正常交织递增，避免因源文件异常影响推流及播放。
4. 视频编码格式仅支持: H264, H265。
5. 音频编码格式仅支持: AAC。
6. 点播源请使用小文件，尽量时长保持在1小时内，较大文件打开和续播耗时较久，耗时超过15秒会有无法正常转推风险。
7. 避免使用低频存储的文件，该类文件因低频存储，拉取时容易出现慢速，影响拉转推质量。
                     * 
                     */
                    std::vector<std::string> GetSourceUrls() const;

                    /**
                     * 设置拉流源 url 列表。
SourceType 为直播（PullLivePushLive）只可以填1个，
SourceType 为点播（PullVodPushLive）可以填多个，上限30个。
当前支持的文件格式：flv，mp4，hls。
当前支持的拉流协议：http，https，rtmp，rtmps，rtsp，srt。
注意：
1. 建议优先使用 flv 文件，对于 mp4 未交织好的文件轮播推流易产生卡顿以及因为频繁拉取导致源产生大量源出口带宽成本，可通过点播转码进行重新交织后再轮播，或提前创建任务并开启本地模式。
2. 拒绝内网域名等攻击性拉流地址，如有使用，则做账号封禁处理。
3. 源文件请保持时间戳正常交织递增，避免因源文件异常影响推流及播放。
4. 视频编码格式仅支持: H264, H265。
5. 音频编码格式仅支持: AAC。
6. 点播源请使用小文件，尽量时长保持在1小时内，较大文件打开和续播耗时较久，耗时超过15秒会有无法正常转推风险。
7. 避免使用低频存储的文件，该类文件因低频存储，拉取时容易出现慢速，影响拉转推质量。
                     * @param _sourceUrls 拉流源 url 列表。
SourceType 为直播（PullLivePushLive）只可以填1个，
SourceType 为点播（PullVodPushLive）可以填多个，上限30个。
当前支持的文件格式：flv，mp4，hls。
当前支持的拉流协议：http，https，rtmp，rtmps，rtsp，srt。
注意：
1. 建议优先使用 flv 文件，对于 mp4 未交织好的文件轮播推流易产生卡顿以及因为频繁拉取导致源产生大量源出口带宽成本，可通过点播转码进行重新交织后再轮播，或提前创建任务并开启本地模式。
2. 拒绝内网域名等攻击性拉流地址，如有使用，则做账号封禁处理。
3. 源文件请保持时间戳正常交织递增，避免因源文件异常影响推流及播放。
4. 视频编码格式仅支持: H264, H265。
5. 音频编码格式仅支持: AAC。
6. 点播源请使用小文件，尽量时长保持在1小时内，较大文件打开和续播耗时较久，耗时超过15秒会有无法正常转推风险。
7. 避免使用低频存储的文件，该类文件因低频存储，拉取时容易出现慢速，影响拉转推质量。
                     * 
                     */
                    void SetSourceUrls(const std::vector<std::string>& _sourceUrls);

                    /**
                     * 判断参数 SourceUrls 是否已赋值
                     * @return SourceUrls 是否已赋值
                     * 
                     */
                    bool SourceUrlsHasBeenSet() const;

                    /**
                     * 获取推流域名。
将拉取过来的流推到该域名。
注意：如果目标地址为非云直播，且样式不同于云直播，请使用 ToUrl 传入完整推流地址，详细用法请参考 ToUrl 参数说明。
                     * @return DomainName 推流域名。
将拉取过来的流推到该域名。
注意：如果目标地址为非云直播，且样式不同于云直播，请使用 ToUrl 传入完整推流地址，详细用法请参考 ToUrl 参数说明。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置推流域名。
将拉取过来的流推到该域名。
注意：如果目标地址为非云直播，且样式不同于云直播，请使用 ToUrl 传入完整推流地址，详细用法请参考 ToUrl 参数说明。
                     * @param _domainName 推流域名。
将拉取过来的流推到该域名。
注意：如果目标地址为非云直播，且样式不同于云直播，请使用 ToUrl 传入完整推流地址，详细用法请参考 ToUrl 参数说明。
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取推流路径。
将拉取过来的流推到该路径。
                     * @return AppName 推流路径。
将拉取过来的流推到该路径。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置推流路径。
将拉取过来的流推到该路径。
                     * @param _appName 推流路径。
将拉取过来的流推到该路径。
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取推流名称。
将拉取过来的流推到该流名称。
                     * @return StreamName 推流名称。
将拉取过来的流推到该流名称。
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置推流名称。
将拉取过来的流推到该流名称。
                     * @param _streamName 推流名称。
将拉取过来的流推到该流名称。
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取开始时间。
使用 UTC 格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时。
                     * @return StartTime 开始时间。
使用 UTC 格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间。
使用 UTC 格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时。
                     * @param _startTime 开始时间。
使用 UTC 格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间，注意：1. 结束时间必须大于开始时间；2. 结束时间必须大于当前时间；3. 结束时间 和 开始时间 间隔必须小于30天。使用 UTC 格式时间，例如：2019-01-08T10:00:00Z。注意：北京时间值为 UTC 时间值 + 8 小时。
                     * @return EndTime 结束时间，注意：1. 结束时间必须大于开始时间；2. 结束时间必须大于当前时间；3. 结束时间 和 开始时间 间隔必须小于30天。使用 UTC 格式时间，例如：2019-01-08T10:00:00Z。注意：北京时间值为 UTC 时间值 + 8 小时。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，注意：1. 结束时间必须大于开始时间；2. 结束时间必须大于当前时间；3. 结束时间 和 开始时间 间隔必须小于30天。使用 UTC 格式时间，例如：2019-01-08T10:00:00Z。注意：北京时间值为 UTC 时间值 + 8 小时。
                     * @param _endTime 结束时间，注意：1. 结束时间必须大于开始时间；2. 结束时间必须大于当前时间；3. 结束时间 和 开始时间 间隔必须小于30天。使用 UTC 格式时间，例如：2019-01-08T10:00:00Z。注意：北京时间值为 UTC 时间值 + 8 小时。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取任务操作人备注。
                     * @return Operator 任务操作人备注。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置任务操作人备注。
                     * @param _operator 任务操作人备注。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
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
                     * 
                     */
                    std::string GetPushArgs() const;

                    /**
                     * 设置推流参数。
推流时携带自定义参数。
示例：
bak=1&test=2 。
                     * @param _pushArgs 推流参数。
推流时携带自定义参数。
示例：
bak=1&test=2 。
                     * 
                     */
                    void SetPushArgs(const std::string& _pushArgs);

                    /**
                     * 判断参数 PushArgs 是否已赋值
                     * @return PushArgs 是否已赋值
                     * 
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
                     * 
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
                     * @param _callbackEvents 选择需要回调的事件（不填则回调全部）：
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
                     * 
                     */
                    void SetCallbackEvents(const std::vector<std::string>& _callbackEvents);

                    /**
                     * 判断参数 CallbackEvents 是否已赋值
                     * @return CallbackEvents 是否已赋值
                     * 
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
                     * 
                     */
                    std::string GetVodLoopTimes() const;

                    /**
                     * 设置点播拉流转推循环次数。默认：-1。
-1：无限循环，直到任务结束。
0：不循环。
>0：具体循环次数。次数和时间以先结束的为准。
注意：该配置仅对拉流源为点播时生效。
                     * @param _vodLoopTimes 点播拉流转推循环次数。默认：-1。
-1：无限循环，直到任务结束。
0：不循环。
>0：具体循环次数。次数和时间以先结束的为准。
注意：该配置仅对拉流源为点播时生效。
                     * 
                     */
                    void SetVodLoopTimes(const std::string& _vodLoopTimes);

                    /**
                     * 判断参数 VodLoopTimes 是否已赋值
                     * @return VodLoopTimes 是否已赋值
                     * 
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
                     * 
                     */
                    std::string GetVodRefreshType() const;

                    /**
                     * 设置点播更新SourceUrls后的播放方式：
ImmediateNewSource：立即播放新的拉流源内容；
ContinueBreakPoint：播放完当前正在播放的点播 url 后再使用新的拉流源播放。（旧拉流源未播放的点播 url 不会再播放）

注意：该配置生效仅对变更前拉流源为点播时生效。
                     * @param _vodRefreshType 点播更新SourceUrls后的播放方式：
ImmediateNewSource：立即播放新的拉流源内容；
ContinueBreakPoint：播放完当前正在播放的点播 url 后再使用新的拉流源播放。（旧拉流源未播放的点播 url 不会再播放）

注意：该配置生效仅对变更前拉流源为点播时生效。
                     * 
                     */
                    void SetVodRefreshType(const std::string& _vodRefreshType);

                    /**
                     * 判断参数 VodRefreshType 是否已赋值
                     * @return VodRefreshType 是否已赋值
                     * 
                     */
                    bool VodRefreshTypeHasBeenSet() const;

                    /**
                     * 获取自定义回调地址。
拉流转推任务相关事件会回调到该地址。
回调事件使用方法请查看：
https://cloud.tencent.com/document/product/267/32744
https://cloud.tencent.com/document/product/267/56208
                     * @return CallbackUrl 自定义回调地址。
拉流转推任务相关事件会回调到该地址。
回调事件使用方法请查看：
https://cloud.tencent.com/document/product/267/32744
https://cloud.tencent.com/document/product/267/56208
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置自定义回调地址。
拉流转推任务相关事件会回调到该地址。
回调事件使用方法请查看：
https://cloud.tencent.com/document/product/267/32744
https://cloud.tencent.com/document/product/267/56208
                     * @param _callbackUrl 自定义回调地址。
拉流转推任务相关事件会回调到该地址。
回调事件使用方法请查看：
https://cloud.tencent.com/document/product/267/32744
https://cloud.tencent.com/document/product/267/56208
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取其他参数。
示例: ignore_region  用于忽略传入地域, 内部按负载分配。
                     * @return ExtraCmd 其他参数。
示例: ignore_region  用于忽略传入地域, 内部按负载分配。
                     * 
                     */
                    std::string GetExtraCmd() const;

                    /**
                     * 设置其他参数。
示例: ignore_region  用于忽略传入地域, 内部按负载分配。
                     * @param _extraCmd 其他参数。
示例: ignore_region  用于忽略传入地域, 内部按负载分配。
                     * 
                     */
                    void SetExtraCmd(const std::string& _extraCmd);

                    /**
                     * 判断参数 ExtraCmd 是否已赋值
                     * @return ExtraCmd 是否已赋值
                     * 
                     */
                    bool ExtraCmdHasBeenSet() const;

                    /**
                     * 获取自定义任务 ID。
注：
1. 该自定义 ID 为可选参数，如果传入，请确保该账号下传入的 ID 唯一。
2. 该自定义 ID 用于防止重复发起请求时产生重复任务。后面也可以用 SpecifyTaskId 来修改或删除任务。
                     * @return SpecifyTaskId 自定义任务 ID。
注：
1. 该自定义 ID 为可选参数，如果传入，请确保该账号下传入的 ID 唯一。
2. 该自定义 ID 用于防止重复发起请求时产生重复任务。后面也可以用 SpecifyTaskId 来修改或删除任务。
                     * 
                     */
                    std::string GetSpecifyTaskId() const;

                    /**
                     * 设置自定义任务 ID。
注：
1. 该自定义 ID 为可选参数，如果传入，请确保该账号下传入的 ID 唯一。
2. 该自定义 ID 用于防止重复发起请求时产生重复任务。后面也可以用 SpecifyTaskId 来修改或删除任务。
                     * @param _specifyTaskId 自定义任务 ID。
注：
1. 该自定义 ID 为可选参数，如果传入，请确保该账号下传入的 ID 唯一。
2. 该自定义 ID 用于防止重复发起请求时产生重复任务。后面也可以用 SpecifyTaskId 来修改或删除任务。
                     * 
                     */
                    void SetSpecifyTaskId(const std::string& _specifyTaskId);

                    /**
                     * 判断参数 SpecifyTaskId 是否已赋值
                     * @return SpecifyTaskId 是否已赋值
                     * 
                     */
                    bool SpecifyTaskIdHasBeenSet() const;

                    /**
                     * 获取任务描述，限制 512 字节。
                     * @return Comment 任务描述，限制 512 字节。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置任务描述，限制 512 字节。
                     * @param _comment 任务描述，限制 512 字节。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取完整目标 URL 地址。
用法注意：如果使用该参数来传完整目标地址，则 DomainName, AppName, StreamName 需要传入空字符串，任务将会使用该 ToUrl 参数指定的目标地址。

使用该方式传入目标地址支持的协议有：
rtmp、rtmps、rtsp、rtp、srt。

注意：签名时间需要超过任务结束时间，避免因签名过期造成任务失败。
                     * @return ToUrl 完整目标 URL 地址。
用法注意：如果使用该参数来传完整目标地址，则 DomainName, AppName, StreamName 需要传入空字符串，任务将会使用该 ToUrl 参数指定的目标地址。

使用该方式传入目标地址支持的协议有：
rtmp、rtmps、rtsp、rtp、srt。

注意：签名时间需要超过任务结束时间，避免因签名过期造成任务失败。
                     * 
                     */
                    std::string GetToUrl() const;

                    /**
                     * 设置完整目标 URL 地址。
用法注意：如果使用该参数来传完整目标地址，则 DomainName, AppName, StreamName 需要传入空字符串，任务将会使用该 ToUrl 参数指定的目标地址。

使用该方式传入目标地址支持的协议有：
rtmp、rtmps、rtsp、rtp、srt。

注意：签名时间需要超过任务结束时间，避免因签名过期造成任务失败。
                     * @param _toUrl 完整目标 URL 地址。
用法注意：如果使用该参数来传完整目标地址，则 DomainName, AppName, StreamName 需要传入空字符串，任务将会使用该 ToUrl 参数指定的目标地址。

使用该方式传入目标地址支持的协议有：
rtmp、rtmps、rtsp、rtp、srt。

注意：签名时间需要超过任务结束时间，避免因签名过期造成任务失败。
                     * 
                     */
                    void SetToUrl(const std::string& _toUrl);

                    /**
                     * 判断参数 ToUrl 是否已赋值
                     * @return ToUrl 是否已赋值
                     * 
                     */
                    bool ToUrlHasBeenSet() const;

                    /**
                     * 获取指定播放文件索引。
注意： 1. 从1开始，不大于SourceUrls中文件个数。
2. 该偏移仅在首次轮播时有效。
3. 提前创建的任务指定的偏移最长有效期为24小时，24小时后未开始的任务偏移失效。
                     * @return FileIndex 指定播放文件索引。
注意： 1. 从1开始，不大于SourceUrls中文件个数。
2. 该偏移仅在首次轮播时有效。
3. 提前创建的任务指定的偏移最长有效期为24小时，24小时后未开始的任务偏移失效。
                     * 
                     */
                    int64_t GetFileIndex() const;

                    /**
                     * 设置指定播放文件索引。
注意： 1. 从1开始，不大于SourceUrls中文件个数。
2. 该偏移仅在首次轮播时有效。
3. 提前创建的任务指定的偏移最长有效期为24小时，24小时后未开始的任务偏移失效。
                     * @param _fileIndex 指定播放文件索引。
注意： 1. 从1开始，不大于SourceUrls中文件个数。
2. 该偏移仅在首次轮播时有效。
3. 提前创建的任务指定的偏移最长有效期为24小时，24小时后未开始的任务偏移失效。
                     * 
                     */
                    void SetFileIndex(const int64_t& _fileIndex);

                    /**
                     * 判断参数 FileIndex 是否已赋值
                     * @return FileIndex 是否已赋值
                     * 
                     */
                    bool FileIndexHasBeenSet() const;

                    /**
                     * 获取指定播放文件偏移。
注意：
1. 单位：秒，配合FileIndex使用。
                     * @return OffsetTime 指定播放文件偏移。
注意：
1. 单位：秒，配合FileIndex使用。
                     * 
                     */
                    int64_t GetOffsetTime() const;

                    /**
                     * 设置指定播放文件偏移。
注意：
1. 单位：秒，配合FileIndex使用。
                     * @param _offsetTime 指定播放文件偏移。
注意：
1. 单位：秒，配合FileIndex使用。
                     * 
                     */
                    void SetOffsetTime(const int64_t& _offsetTime);

                    /**
                     * 判断参数 OffsetTime 是否已赋值
                     * @return OffsetTime 是否已赋值
                     * 
                     */
                    bool OffsetTimeHasBeenSet() const;

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
                     * 
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
                     * @param _backupSourceType 备源的类型：
PullLivePushLive -直播，
PullVodPushLive -点播。
注意：
1. 仅当主源类型为直播源时，备源才会生效。
2. 主直播源拉流中断时，自动使用备源进行拉流。
3. 如果备源为点播文件时，则每次轮播完点播文件就检查主源是否恢复，如果主源恢复则自动切回到主源，否则继续拉备源。
                     * 
                     */
                    void SetBackupSourceType(const std::string& _backupSourceType);

                    /**
                     * 判断参数 BackupSourceType 是否已赋值
                     * @return BackupSourceType 是否已赋值
                     * 
                     */
                    bool BackupSourceTypeHasBeenSet() const;

                    /**
                     * 获取备源 URL。
只允许填一个备源 URL
                     * @return BackupSourceUrl 备源 URL。
只允许填一个备源 URL
                     * 
                     */
                    std::string GetBackupSourceUrl() const;

                    /**
                     * 设置备源 URL。
只允许填一个备源 URL
                     * @param _backupSourceUrl 备源 URL。
只允许填一个备源 URL
                     * 
                     */
                    void SetBackupSourceUrl(const std::string& _backupSourceUrl);

                    /**
                     * 判断参数 BackupSourceUrl 是否已赋值
                     * @return BackupSourceUrl 是否已赋值
                     * 
                     */
                    bool BackupSourceUrlHasBeenSet() const;

                    /**
                     * 获取水印信息列表。
注意：
1. 最多支持4个不同位置的水印。
2. 水印图片 URL 请使用合法外网可访问地址。
3. 支持的水印图片格式：png，jpg，gif 等。
                     * @return WatermarkList 水印信息列表。
注意：
1. 最多支持4个不同位置的水印。
2. 水印图片 URL 请使用合法外网可访问地址。
3. 支持的水印图片格式：png，jpg，gif 等。
                     * 
                     */
                    std::vector<PullPushWatermarkInfo> GetWatermarkList() const;

                    /**
                     * 设置水印信息列表。
注意：
1. 最多支持4个不同位置的水印。
2. 水印图片 URL 请使用合法外网可访问地址。
3. 支持的水印图片格式：png，jpg，gif 等。
                     * @param _watermarkList 水印信息列表。
注意：
1. 最多支持4个不同位置的水印。
2. 水印图片 URL 请使用合法外网可访问地址。
3. 支持的水印图片格式：png，jpg，gif 等。
                     * 
                     */
                    void SetWatermarkList(const std::vector<PullPushWatermarkInfo>& _watermarkList);

                    /**
                     * 判断参数 WatermarkList 是否已赋值
                     * @return WatermarkList 是否已赋值
                     * 
                     */
                    bool WatermarkListHasBeenSet() const;

                    /**
                     * 获取点播源是否启用本地推流模式，默认0，不启用。
0 - 不启用。
1 - 启用。
注意：启用本地模式后，会将源列表中的 MP4 文件进行本地下载，优先使用本地已下载文件进行推流，提高点播源推流稳定性。使用本地下载文件推流时，会产生增值费用。
                     * @return VodLocalMode 点播源是否启用本地推流模式，默认0，不启用。
0 - 不启用。
1 - 启用。
注意：启用本地模式后，会将源列表中的 MP4 文件进行本地下载，优先使用本地已下载文件进行推流，提高点播源推流稳定性。使用本地下载文件推流时，会产生增值费用。
                     * 
                     */
                    int64_t GetVodLocalMode() const;

                    /**
                     * 设置点播源是否启用本地推流模式，默认0，不启用。
0 - 不启用。
1 - 启用。
注意：启用本地模式后，会将源列表中的 MP4 文件进行本地下载，优先使用本地已下载文件进行推流，提高点播源推流稳定性。使用本地下载文件推流时，会产生增值费用。
                     * @param _vodLocalMode 点播源是否启用本地推流模式，默认0，不启用。
0 - 不启用。
1 - 启用。
注意：启用本地模式后，会将源列表中的 MP4 文件进行本地下载，优先使用本地已下载文件进行推流，提高点播源推流稳定性。使用本地下载文件推流时，会产生增值费用。
                     * 
                     */
                    void SetVodLocalMode(const int64_t& _vodLocalMode);

                    /**
                     * 判断参数 VodLocalMode 是否已赋值
                     * @return VodLocalMode 是否已赋值
                     * 
                     */
                    bool VodLocalModeHasBeenSet() const;

                    /**
                     * 获取录制模板 ID。
                     * @return RecordTemplateId 录制模板 ID。
                     * 
                     */
                    std::string GetRecordTemplateId() const;

                    /**
                     * 设置录制模板 ID。
                     * @param _recordTemplateId 录制模板 ID。
                     * 
                     */
                    void SetRecordTemplateId(const std::string& _recordTemplateId);

                    /**
                     * 判断参数 RecordTemplateId 是否已赋值
                     * @return RecordTemplateId 是否已赋值
                     * 
                     */
                    bool RecordTemplateIdHasBeenSet() const;

                    /**
                     * 获取新的目标地址，用于任务同时推两路场景。
                     * @return BackupToUrl 新的目标地址，用于任务同时推两路场景。
                     * 
                     */
                    std::string GetBackupToUrl() const;

                    /**
                     * 设置新的目标地址，用于任务同时推两路场景。
                     * @param _backupToUrl 新的目标地址，用于任务同时推两路场景。
                     * 
                     */
                    void SetBackupToUrl(const std::string& _backupToUrl);

                    /**
                     * 判断参数 BackupToUrl 是否已赋值
                     * @return BackupToUrl 是否已赋值
                     * 
                     */
                    bool BackupToUrlHasBeenSet() const;

                    /**
                     * 获取直播转码模板，使用云直播的转码功能进行转码后再转推出去。转码模板需在云直播控制台创建。
                     * @return TranscodeTemplateName 直播转码模板，使用云直播的转码功能进行转码后再转推出去。转码模板需在云直播控制台创建。
                     * 
                     */
                    std::string GetTranscodeTemplateName() const;

                    /**
                     * 设置直播转码模板，使用云直播的转码功能进行转码后再转推出去。转码模板需在云直播控制台创建。
                     * @param _transcodeTemplateName 直播转码模板，使用云直播的转码功能进行转码后再转推出去。转码模板需在云直播控制台创建。
                     * 
                     */
                    void SetTranscodeTemplateName(const std::string& _transcodeTemplateName);

                    /**
                     * 判断参数 TranscodeTemplateName 是否已赋值
                     * @return TranscodeTemplateName 是否已赋值
                     * 
                     */
                    bool TranscodeTemplateNameHasBeenSet() const;

                private:

                    /**
                     * 拉流源的类型：
PullLivePushLive -直播，
PullVodPushLive -点播，
PullPicPushLive -图片。
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
1. 建议优先使用 flv 文件，对于 mp4 未交织好的文件轮播推流易产生卡顿以及因为频繁拉取导致源产生大量源出口带宽成本，可通过点播转码进行重新交织后再轮播，或提前创建任务并开启本地模式。
2. 拒绝内网域名等攻击性拉流地址，如有使用，则做账号封禁处理。
3. 源文件请保持时间戳正常交织递增，避免因源文件异常影响推流及播放。
4. 视频编码格式仅支持: H264, H265。
5. 音频编码格式仅支持: AAC。
6. 点播源请使用小文件，尽量时长保持在1小时内，较大文件打开和续播耗时较久，耗时超过15秒会有无法正常转推风险。
7. 避免使用低频存储的文件，该类文件因低频存储，拉取时容易出现慢速，影响拉转推质量。
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
注意：北京时间值为 UTC 时间值 + 8 小时。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，注意：1. 结束时间必须大于开始时间；2. 结束时间必须大于当前时间；3. 结束时间 和 开始时间 间隔必须小于30天。使用 UTC 格式时间，例如：2019-01-08T10:00:00Z。注意：北京时间值为 UTC 时间值 + 8 小时。
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
回调事件使用方法请查看：
https://cloud.tencent.com/document/product/267/32744
https://cloud.tencent.com/document/product/267/56208
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
                     * 自定义任务 ID。
注：
1. 该自定义 ID 为可选参数，如果传入，请确保该账号下传入的 ID 唯一。
2. 该自定义 ID 用于防止重复发起请求时产生重复任务。后面也可以用 SpecifyTaskId 来修改或删除任务。
                     */
                    std::string m_specifyTaskId;
                    bool m_specifyTaskIdHasBeenSet;

                    /**
                     * 任务描述，限制 512 字节。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 完整目标 URL 地址。
用法注意：如果使用该参数来传完整目标地址，则 DomainName, AppName, StreamName 需要传入空字符串，任务将会使用该 ToUrl 参数指定的目标地址。

使用该方式传入目标地址支持的协议有：
rtmp、rtmps、rtsp、rtp、srt。

注意：签名时间需要超过任务结束时间，避免因签名过期造成任务失败。
                     */
                    std::string m_toUrl;
                    bool m_toUrlHasBeenSet;

                    /**
                     * 指定播放文件索引。
注意： 1. 从1开始，不大于SourceUrls中文件个数。
2. 该偏移仅在首次轮播时有效。
3. 提前创建的任务指定的偏移最长有效期为24小时，24小时后未开始的任务偏移失效。
                     */
                    int64_t m_fileIndex;
                    bool m_fileIndexHasBeenSet;

                    /**
                     * 指定播放文件偏移。
注意：
1. 单位：秒，配合FileIndex使用。
                     */
                    int64_t m_offsetTime;
                    bool m_offsetTimeHasBeenSet;

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

                    /**
                     * 水印信息列表。
注意：
1. 最多支持4个不同位置的水印。
2. 水印图片 URL 请使用合法外网可访问地址。
3. 支持的水印图片格式：png，jpg，gif 等。
                     */
                    std::vector<PullPushWatermarkInfo> m_watermarkList;
                    bool m_watermarkListHasBeenSet;

                    /**
                     * 点播源是否启用本地推流模式，默认0，不启用。
0 - 不启用。
1 - 启用。
注意：启用本地模式后，会将源列表中的 MP4 文件进行本地下载，优先使用本地已下载文件进行推流，提高点播源推流稳定性。使用本地下载文件推流时，会产生增值费用。
                     */
                    int64_t m_vodLocalMode;
                    bool m_vodLocalModeHasBeenSet;

                    /**
                     * 录制模板 ID。
                     */
                    std::string m_recordTemplateId;
                    bool m_recordTemplateIdHasBeenSet;

                    /**
                     * 新的目标地址，用于任务同时推两路场景。
                     */
                    std::string m_backupToUrl;
                    bool m_backupToUrlHasBeenSet;

                    /**
                     * 直播转码模板，使用云直播的转码功能进行转码后再转推出去。转码模板需在云直播控制台创建。
                     */
                    std::string m_transcodeTemplateName;
                    bool m_transcodeTemplateNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVEPULLSTREAMTASKREQUEST_H_
