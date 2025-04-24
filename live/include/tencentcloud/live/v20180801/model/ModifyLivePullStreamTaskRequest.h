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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEPULLSTREAMTASKREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEPULLSTREAMTASKREQUEST_H_

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
                * ModifyLivePullStreamTask请求参数结构体
                */
                class ModifyLivePullStreamTaskRequest : public AbstractModel
                {
                public:
                    ModifyLivePullStreamTaskRequest();
                    ~ModifyLivePullStreamTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务Id。
                     * @return TaskId 任务Id。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务Id。
                     * @param _taskId 任务Id。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取操作人姓名。
                     * @return Operator 操作人姓名。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作人姓名。
                     * @param _operator 操作人姓名。
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
                     * 获取拉流源url列表。
SourceType为直播（PullLivePushLive）只可以填1个，
SourceType为点播（PullVodPushLive）可以填多个，上限30个。
                     * @return SourceUrls 拉流源url列表。
SourceType为直播（PullLivePushLive）只可以填1个，
SourceType为点播（PullVodPushLive）可以填多个，上限30个。
                     * 
                     */
                    std::vector<std::string> GetSourceUrls() const;

                    /**
                     * 设置拉流源url列表。
SourceType为直播（PullLivePushLive）只可以填1个，
SourceType为点播（PullVodPushLive）可以填多个，上限30个。
                     * @param _sourceUrls 拉流源url列表。
SourceType为直播（PullLivePushLive）只可以填1个，
SourceType为点播（PullVodPushLive）可以填多个，上限30个。
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
                     * 获取开始时间。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#I)。
                     * @return StartTime 开始时间。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#I)。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#I)。
                     * @param _startTime 开始时间。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#I)。
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
                     * 获取结束时间，注意：
1. 结束时间必须大于开始时间；
2. 结束时间和开始时间必须大于当前时间；
3. 结束时间 和 开始时间 间隔必须小于30天。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#I)。
                     * @return EndTime 结束时间，注意：
1. 结束时间必须大于开始时间；
2. 结束时间和开始时间必须大于当前时间；
3. 结束时间 和 开始时间 间隔必须小于30天。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#I)。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，注意：
1. 结束时间必须大于开始时间；
2. 结束时间和开始时间必须大于当前时间；
3. 结束时间 和 开始时间 间隔必须小于30天。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#I)。
                     * @param _endTime 结束时间，注意：
1. 结束时间必须大于开始时间；
2. 结束时间和开始时间必须大于当前时间；
3. 结束时间 和 开始时间 间隔必须小于30天。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#I)。
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
                     * 获取点播拉流转推循环次数。
-1：无限循环，直到任务结束。
0：不循环。
>0：具体循环次数。次数和时间以先结束的为准。
注意：拉流源为点播，该配置生效。
                     * @return VodLoopTimes 点播拉流转推循环次数。
-1：无限循环，直到任务结束。
0：不循环。
>0：具体循环次数。次数和时间以先结束的为准。
注意：拉流源为点播，该配置生效。
                     * 
                     */
                    int64_t GetVodLoopTimes() const;

                    /**
                     * 设置点播拉流转推循环次数。
-1：无限循环，直到任务结束。
0：不循环。
>0：具体循环次数。次数和时间以先结束的为准。
注意：拉流源为点播，该配置生效。
                     * @param _vodLoopTimes 点播拉流转推循环次数。
-1：无限循环，直到任务结束。
0：不循环。
>0：具体循环次数。次数和时间以先结束的为准。
注意：拉流源为点播，该配置生效。
                     * 
                     */
                    void SetVodLoopTimes(const int64_t& _vodLoopTimes);

                    /**
                     * 判断参数 VodLoopTimes 是否已赋值
                     * @return VodLoopTimes 是否已赋值
                     * 
                     */
                    bool VodLoopTimesHasBeenSet() const;

                    /**
                     * 获取点播更新SourceUrls后的播放方式：
ImmediateNewSource：立即从更新的拉流源开始播放；
ContinueBreakPoint：从上次断流url源的断点处继续，结束后再使用新的拉流源。
注意：拉流源为点播，该配置生效。
                     * @return VodRefreshType 点播更新SourceUrls后的播放方式：
ImmediateNewSource：立即从更新的拉流源开始播放；
ContinueBreakPoint：从上次断流url源的断点处继续，结束后再使用新的拉流源。
注意：拉流源为点播，该配置生效。
                     * 
                     */
                    std::string GetVodRefreshType() const;

                    /**
                     * 设置点播更新SourceUrls后的播放方式：
ImmediateNewSource：立即从更新的拉流源开始播放；
ContinueBreakPoint：从上次断流url源的断点处继续，结束后再使用新的拉流源。
注意：拉流源为点播，该配置生效。
                     * @param _vodRefreshType 点播更新SourceUrls后的播放方式：
ImmediateNewSource：立即从更新的拉流源开始播放；
ContinueBreakPoint：从上次断流url源的断点处继续，结束后再使用新的拉流源。
注意：拉流源为点播，该配置生效。
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
                     * 获取任务状态：
enable - 启用，
pause - 暂停。
                     * @return Status 任务状态：
enable - 启用，
pause - 暂停。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态：
enable - 启用，
pause - 暂停。
                     * @param _status 任务状态：
enable - 启用，
pause - 暂停。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取选择需要回调的事件（不填则回调全部）：
TaskStart：任务启动回调，
TaskExit：任务停止回调，
VodSourceFileStart：从点播源文件开始拉流回调，
VodSourceFileFinish：从点播源文件拉流结束回调，
ResetTaskConfig：任务更新回调。
                     * @return CallbackEvents 选择需要回调的事件（不填则回调全部）：
TaskStart：任务启动回调，
TaskExit：任务停止回调，
VodSourceFileStart：从点播源文件开始拉流回调，
VodSourceFileFinish：从点播源文件拉流结束回调，
ResetTaskConfig：任务更新回调。
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
                     * @param _callbackEvents 选择需要回调的事件（不填则回调全部）：
TaskStart：任务启动回调，
TaskExit：任务停止回调，
VodSourceFileStart：从点播源文件开始拉流回调，
VodSourceFileFinish：从点播源文件拉流结束回调，
ResetTaskConfig：任务更新回调。
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
                     * 获取自定义回调地址。
相关事件会回调到该地址。
                     * @return CallbackUrl 自定义回调地址。
相关事件会回调到该地址。
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置自定义回调地址。
相关事件会回调到该地址。
                     * @param _callbackUrl 自定义回调地址。
相关事件会回调到该地址。
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
                     * 获取指定播放文件索引。
注意： 从1开始，不大于SourceUrls中文件个数。
                     * @return FileIndex 指定播放文件索引。
注意： 从1开始，不大于SourceUrls中文件个数。
                     * 
                     */
                    int64_t GetFileIndex() const;

                    /**
                     * 设置指定播放文件索引。
注意： 从1开始，不大于SourceUrls中文件个数。
                     * @param _fileIndex 指定播放文件索引。
注意： 从1开始，不大于SourceUrls中文件个数。
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
                     * 获取指定任务 ID 修改任务。

注意：该自定义任务 ID 只有在创建任务时指定了，才可在此处修改时使用。否则请使用系统返回的任务 ID。
                     * @return SpecifyTaskId 指定任务 ID 修改任务。

注意：该自定义任务 ID 只有在创建任务时指定了，才可在此处修改时使用。否则请使用系统返回的任务 ID。
                     * 
                     */
                    std::string GetSpecifyTaskId() const;

                    /**
                     * 设置指定任务 ID 修改任务。

注意：该自定义任务 ID 只有在创建任务时指定了，才可在此处修改时使用。否则请使用系统返回的任务 ID。
                     * @param _specifyTaskId 指定任务 ID 修改任务。

注意：该自定义任务 ID 只有在创建任务时指定了，才可在此处修改时使用。否则请使用系统返回的任务 ID。
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
                     * 获取目标 Url。
换目标地址，会断流重推到新地址。
                     * @return ToUrl 目标 Url。
换目标地址，会断流重推到新地址。
                     * 
                     */
                    std::string GetToUrl() const;

                    /**
                     * 设置目标 Url。
换目标地址，会断流重推到新地址。
                     * @param _toUrl 目标 Url。
换目标地址，会断流重推到新地址。
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
                     * 获取任务备注。
                     * @return Comment 任务备注。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置任务备注。
                     * @param _comment 任务备注。
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
                     * 获取备源的类型：
PullLivePushLive -直播，
PullVodPushLive -点播。
注意：
1. 仅当主源类型为直播源时，备源才会生效。
2. 将该参数置为空，则可将任务去除备源信息。
3. 主直播源拉流中断时，自动使用备源进行拉流。
4. 如果备源为点播文件时，则每次轮播完点播文件就检查主源是否恢复，如果主源恢复则自动切回到主源，否则继续拉备源。
                     * @return BackupSourceType 备源的类型：
PullLivePushLive -直播，
PullVodPushLive -点播。
注意：
1. 仅当主源类型为直播源时，备源才会生效。
2. 将该参数置为空，则可将任务去除备源信息。
3. 主直播源拉流中断时，自动使用备源进行拉流。
4. 如果备源为点播文件时，则每次轮播完点播文件就检查主源是否恢复，如果主源恢复则自动切回到主源，否则继续拉备源。
                     * 
                     */
                    std::string GetBackupSourceType() const;

                    /**
                     * 设置备源的类型：
PullLivePushLive -直播，
PullVodPushLive -点播。
注意：
1. 仅当主源类型为直播源时，备源才会生效。
2. 将该参数置为空，则可将任务去除备源信息。
3. 主直播源拉流中断时，自动使用备源进行拉流。
4. 如果备源为点播文件时，则每次轮播完点播文件就检查主源是否恢复，如果主源恢复则自动切回到主源，否则继续拉备源。
                     * @param _backupSourceType 备源的类型：
PullLivePushLive -直播，
PullVodPushLive -点播。
注意：
1. 仅当主源类型为直播源时，备源才会生效。
2. 将该参数置为空，则可将任务去除备源信息。
3. 主直播源拉流中断时，自动使用备源进行拉流。
4. 如果备源为点播文件时，则每次轮播完点播文件就检查主源是否恢复，如果主源恢复则自动切回到主源，否则继续拉备源。
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
3. 支持的水印图片格式：png，jpg等。
4. 轮播任务修改水印后，轮播到下一个文件时新水印生效。
5. 直播源任务修改水印后，水印立即生效。
6. 清除水印时，需携带该水印列表参数，内容为空数组。
7. 暂不支持动图水印。
                     * @return WatermarkList 水印信息列表。
注意：
1. 最多支持4个不同位置的水印。
2. 水印图片 URL 请使用合法外网可访问地址。
3. 支持的水印图片格式：png，jpg等。
4. 轮播任务修改水印后，轮播到下一个文件时新水印生效。
5. 直播源任务修改水印后，水印立即生效。
6. 清除水印时，需携带该水印列表参数，内容为空数组。
7. 暂不支持动图水印。
                     * 
                     */
                    std::vector<PullPushWatermarkInfo> GetWatermarkList() const;

                    /**
                     * 设置水印信息列表。
注意：
1. 最多支持4个不同位置的水印。
2. 水印图片 URL 请使用合法外网可访问地址。
3. 支持的水印图片格式：png，jpg等。
4. 轮播任务修改水印后，轮播到下一个文件时新水印生效。
5. 直播源任务修改水印后，水印立即生效。
6. 清除水印时，需携带该水印列表参数，内容为空数组。
7. 暂不支持动图水印。
                     * @param _watermarkList 水印信息列表。
注意：
1. 最多支持4个不同位置的水印。
2. 水印图片 URL 请使用合法外网可访问地址。
3. 支持的水印图片格式：png，jpg等。
4. 轮播任务修改水印后，轮播到下一个文件时新水印生效。
5. 直播源任务修改水印后，水印立即生效。
6. 清除水印时，需携带该水印列表参数，内容为空数组。
7. 暂不支持动图水印。
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
                     * 获取新的目标地址。传空值，则取消该地址的推流。
传入新值，则替换原有地址。
                     * @return BackupToUrl 新的目标地址。传空值，则取消该地址的推流。
传入新值，则替换原有地址。
                     * 
                     */
                    std::string GetBackupToUrl() const;

                    /**
                     * 设置新的目标地址。传空值，则取消该地址的推流。
传入新值，则替换原有地址。
                     * @param _backupToUrl 新的目标地址。传空值，则取消该地址的推流。
传入新值，则替换原有地址。
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
                     * 获取点播垫片文件地址。注意：用于在主源拉不到时自动兜底到垫片文件，切到垫片文件后，每次播完垫片会尝试拉主源，如果主源恢复则自动切回主源。可根据需要的轮询检查时长来传入对应时长的垫片文件。
                     * @return BackupVodUrl 点播垫片文件地址。注意：用于在主源拉不到时自动兜底到垫片文件，切到垫片文件后，每次播完垫片会尝试拉主源，如果主源恢复则自动切回主源。可根据需要的轮询检查时长来传入对应时长的垫片文件。
                     * 
                     */
                    std::string GetBackupVodUrl() const;

                    /**
                     * 设置点播垫片文件地址。注意：用于在主源拉不到时自动兜底到垫片文件，切到垫片文件后，每次播完垫片会尝试拉主源，如果主源恢复则自动切回主源。可根据需要的轮询检查时长来传入对应时长的垫片文件。
                     * @param _backupVodUrl 点播垫片文件地址。注意：用于在主源拉不到时自动兜底到垫片文件，切到垫片文件后，每次播完垫片会尝试拉主源，如果主源恢复则自动切回主源。可根据需要的轮询检查时长来传入对应时长的垫片文件。
                     * 
                     */
                    void SetBackupVodUrl(const std::string& _backupVodUrl);

                    /**
                     * 判断参数 BackupVodUrl 是否已赋值
                     * @return BackupVodUrl 是否已赋值
                     * 
                     */
                    bool BackupVodUrlHasBeenSet() const;

                private:

                    /**
                     * 任务Id。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 操作人姓名。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 拉流源url列表。
SourceType为直播（PullLivePushLive）只可以填1个，
SourceType为点播（PullVodPushLive）可以填多个，上限30个。
                     */
                    std::vector<std::string> m_sourceUrls;
                    bool m_sourceUrlsHasBeenSet;

                    /**
                     * 开始时间。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#I)。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，注意：
1. 结束时间必须大于开始时间；
2. 结束时间和开始时间必须大于当前时间；
3. 结束时间 和 开始时间 间隔必须小于30天。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#I)。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 点播拉流转推循环次数。
-1：无限循环，直到任务结束。
0：不循环。
>0：具体循环次数。次数和时间以先结束的为准。
注意：拉流源为点播，该配置生效。
                     */
                    int64_t m_vodLoopTimes;
                    bool m_vodLoopTimesHasBeenSet;

                    /**
                     * 点播更新SourceUrls后的播放方式：
ImmediateNewSource：立即从更新的拉流源开始播放；
ContinueBreakPoint：从上次断流url源的断点处继续，结束后再使用新的拉流源。
注意：拉流源为点播，该配置生效。
                     */
                    std::string m_vodRefreshType;
                    bool m_vodRefreshTypeHasBeenSet;

                    /**
                     * 任务状态：
enable - 启用，
pause - 暂停。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 选择需要回调的事件（不填则回调全部）：
TaskStart：任务启动回调，
TaskExit：任务停止回调，
VodSourceFileStart：从点播源文件开始拉流回调，
VodSourceFileFinish：从点播源文件拉流结束回调，
ResetTaskConfig：任务更新回调。
                     */
                    std::vector<std::string> m_callbackEvents;
                    bool m_callbackEventsHasBeenSet;

                    /**
                     * 自定义回调地址。
相关事件会回调到该地址。
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 指定播放文件索引。
注意： 从1开始，不大于SourceUrls中文件个数。
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
                     * 指定任务 ID 修改任务。

注意：该自定义任务 ID 只有在创建任务时指定了，才可在此处修改时使用。否则请使用系统返回的任务 ID。
                     */
                    std::string m_specifyTaskId;
                    bool m_specifyTaskIdHasBeenSet;

                    /**
                     * 目标 Url。
换目标地址，会断流重推到新地址。
                     */
                    std::string m_toUrl;
                    bool m_toUrlHasBeenSet;

                    /**
                     * 任务备注。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 备源的类型：
PullLivePushLive -直播，
PullVodPushLive -点播。
注意：
1. 仅当主源类型为直播源时，备源才会生效。
2. 将该参数置为空，则可将任务去除备源信息。
3. 主直播源拉流中断时，自动使用备源进行拉流。
4. 如果备源为点播文件时，则每次轮播完点播文件就检查主源是否恢复，如果主源恢复则自动切回到主源，否则继续拉备源。
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
3. 支持的水印图片格式：png，jpg等。
4. 轮播任务修改水印后，轮播到下一个文件时新水印生效。
5. 直播源任务修改水印后，水印立即生效。
6. 清除水印时，需携带该水印列表参数，内容为空数组。
7. 暂不支持动图水印。
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
                     * 新的目标地址。传空值，则取消该地址的推流。
传入新值，则替换原有地址。
                     */
                    std::string m_backupToUrl;
                    bool m_backupToUrlHasBeenSet;

                    /**
                     * 点播垫片文件地址。注意：用于在主源拉不到时自动兜底到垫片文件，切到垫片文件后，每次播完垫片会尝试拉主源，如果主源恢复则自动切回主源。可根据需要的轮询检查时长来传入对应时长的垫片文件。
                     */
                    std::string m_backupVodUrl;
                    bool m_backupVodUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEPULLSTREAMTASKREQUEST_H_
