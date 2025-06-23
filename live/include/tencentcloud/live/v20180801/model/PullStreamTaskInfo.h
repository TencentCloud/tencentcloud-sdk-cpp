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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_PULLSTREAMTASKINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_PULLSTREAMTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/RecentPullInfo.h>
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
                * 直播拉流任务信息。
                */
                class PullStreamTaskInfo : public AbstractModel
                {
                public:
                    PullStreamTaskInfo();
                    ~PullStreamTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取拉流任务Id。
                     * @return TaskId 拉流任务Id。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置拉流任务Id。
                     * @param _taskId 拉流任务Id。
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
                     * 获取拉流源url列表。
SourceType为直播（PullLiveToLive）只可以填1个，
SourceType为点播（PullVodToLive）可以填多个，上限10个。
                     * @return SourceUrls 拉流源url列表。
SourceType为直播（PullLiveToLive）只可以填1个，
SourceType为点播（PullVodToLive）可以填多个，上限10个。
                     * 
                     */
                    std::vector<std::string> GetSourceUrls() const;

                    /**
                     * 设置拉流源url列表。
SourceType为直播（PullLiveToLive）只可以填1个，
SourceType为点播（PullVodToLive）可以填多个，上限10个。
                     * @param _sourceUrls 拉流源url列表。
SourceType为直播（PullLiveToLive）只可以填1个，
SourceType为点播（PullVodToLive）可以填多个，上限10个。
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
将拉到的源推到该域名。
                     * @return DomainName 推流域名。
将拉到的源推到该域名。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置推流域名。
将拉到的源推到该域名。
                     * @param _domainName 推流域名。
将拉到的源推到该域名。
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
将拉到的源推到该路径。
                     * @return AppName 推流路径。
将拉到的源推到该路径。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置推流路径。
将拉到的源推到该路径。
                     * @param _appName 推流路径。
将拉到的源推到该路径。
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
                     * 获取流名称。
将拉到的源推到该流名称。
                     * @return StreamName 流名称。
将拉到的源推到该流名称。
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置流名称。
将拉到的源推到该流名称。
                     * @param _streamName 流名称。
将拉到的源推到该流名称。
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
                     * 获取推流参数。
推流携带的自定义参数。
                     * @return PushArgs 推流参数。
推流携带的自定义参数。
                     * 
                     */
                    std::string GetPushArgs() const;

                    /**
                     * 设置推流参数。
推流携带的自定义参数。
                     * @param _pushArgs 推流参数。
推流携带的自定义参数。
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
                     * 获取开始时间。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return StartTime 开始时间。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _startTime 开始时间。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
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
3. 结束时间 和 开始时间 间隔必须小于七天。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return EndTime 结束时间，注意：
1. 结束时间必须大于开始时间；
2. 结束时间和开始时间必须大于当前时间；
3. 结束时间 和 开始时间 间隔必须小于七天。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，注意：
1. 结束时间必须大于开始时间；
2. 结束时间和开始时间必须大于当前时间；
3. 结束时间 和 开始时间 间隔必须小于七天。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _endTime 结束时间，注意：
1. 结束时间必须大于开始时间；
2. 结束时间和开始时间必须大于当前时间；
3. 结束时间 和 开始时间 间隔必须小于七天。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
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
                     * 获取任务创建所在地域：
ap-beijing - 华北地区(北京)，
ap-shanghai -华东地区(上海)，
ap-guangzhou -华南地区(广州)，
ap-mumbai - 印度，
ap-hongkong - 香港，
eu-frankfurt - 德国，
ap-seoul - 韩国，
ap-bangkok - 泰国，
ap-singapore - 新加坡，
na-siliconvalley - 美西，
na-ashburn - 美东，
ap-tokyo - 日本。
                     * @return Region 任务创建所在地域：
ap-beijing - 华北地区(北京)，
ap-shanghai -华东地区(上海)，
ap-guangzhou -华南地区(广州)，
ap-mumbai - 印度，
ap-hongkong - 香港，
eu-frankfurt - 德国，
ap-seoul - 韩国，
ap-bangkok - 泰国，
ap-singapore - 新加坡，
na-siliconvalley - 美西，
na-ashburn - 美东，
ap-tokyo - 日本。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置任务创建所在地域：
ap-beijing - 华北地区(北京)，
ap-shanghai -华东地区(上海)，
ap-guangzhou -华南地区(广州)，
ap-mumbai - 印度，
ap-hongkong - 香港，
eu-frankfurt - 德国，
ap-seoul - 韩国，
ap-bangkok - 泰国，
ap-singapore - 新加坡，
na-siliconvalley - 美西，
na-ashburn - 美东，
ap-tokyo - 日本。
                     * @param _region 任务创建所在地域：
ap-beijing - 华北地区(北京)，
ap-shanghai -华东地区(上海)，
ap-guangzhou -华南地区(广州)，
ap-mumbai - 印度，
ap-hongkong - 香港，
eu-frankfurt - 德国，
ap-seoul - 韩国，
ap-bangkok - 泰国，
ap-singapore - 新加坡，
na-siliconvalley - 美西，
na-ashburn - 美东，
ap-tokyo - 日本。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

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
                     * 获取任务创建时间。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return CreateTime 任务创建时间。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _createTime 任务创建时间。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取任务更新时间。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return UpdateTime 任务更新时间。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置任务更新时间。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _updateTime 任务更新时间。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取创建任务的操作者。
                     * @return CreateBy 创建任务的操作者。
                     * 
                     */
                    std::string GetCreateBy() const;

                    /**
                     * 设置创建任务的操作者。
                     * @param _createBy 创建任务的操作者。
                     * 
                     */
                    void SetCreateBy(const std::string& _createBy);

                    /**
                     * 判断参数 CreateBy 是否已赋值
                     * @return CreateBy 是否已赋值
                     * 
                     */
                    bool CreateByHasBeenSet() const;

                    /**
                     * 获取最后更新任务的操作者。
                     * @return UpdateBy 最后更新任务的操作者。
                     * 
                     */
                    std::string GetUpdateBy() const;

                    /**
                     * 设置最后更新任务的操作者。
                     * @param _updateBy 最后更新任务的操作者。
                     * 
                     */
                    void SetUpdateBy(const std::string& _updateBy);

                    /**
                     * 判断参数 UpdateBy 是否已赋值
                     * @return UpdateBy 是否已赋值
                     * 
                     */
                    bool UpdateByHasBeenSet() const;

                    /**
                     * 获取回调地址。
                     * @return CallbackUrl 回调地址。
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调地址。
                     * @param _callbackUrl 回调地址。
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
                     * 获取选择需要回调的事件：
TaskStart：任务启动回调，
TaskExit：任务停止回调，
VodSourceFileStart：从点播源文件开始拉流回调，
VodSourceFileFinish：从点播源文件拉流结束回调，
ResetTaskConfig：任务更新回调。
                     * @return CallbackEvents 选择需要回调的事件：
TaskStart：任务启动回调，
TaskExit：任务停止回调，
VodSourceFileStart：从点播源文件开始拉流回调，
VodSourceFileFinish：从点播源文件拉流结束回调，
ResetTaskConfig：任务更新回调。
                     * 
                     */
                    std::vector<std::string> GetCallbackEvents() const;

                    /**
                     * 设置选择需要回调的事件：
TaskStart：任务启动回调，
TaskExit：任务停止回调，
VodSourceFileStart：从点播源文件开始拉流回调，
VodSourceFileFinish：从点播源文件拉流结束回调，
ResetTaskConfig：任务更新回调。
                     * @param _callbackEvents 选择需要回调的事件：
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
                     * 获取注意：该信息暂不返回。
最后一次回调信息。
                     * @return CallbackInfo 注意：该信息暂不返回。
最后一次回调信息。
                     * 
                     */
                    std::string GetCallbackInfo() const;

                    /**
                     * 设置注意：该信息暂不返回。
最后一次回调信息。
                     * @param _callbackInfo 注意：该信息暂不返回。
最后一次回调信息。
                     * 
                     */
                    void SetCallbackInfo(const std::string& _callbackInfo);

                    /**
                     * 判断参数 CallbackInfo 是否已赋值
                     * @return CallbackInfo 是否已赋值
                     * 
                     */
                    bool CallbackInfoHasBeenSet() const;

                    /**
                     * 获取注意：该信息暂不返回。
错误信息。
                     * @return ErrorInfo 注意：该信息暂不返回。
错误信息。
                     * 
                     */
                    std::string GetErrorInfo() const;

                    /**
                     * 设置注意：该信息暂不返回。
错误信息。
                     * @param _errorInfo 注意：该信息暂不返回。
错误信息。
                     * 
                     */
                    void SetErrorInfo(const std::string& _errorInfo);

                    /**
                     * 判断参数 ErrorInfo 是否已赋值
                     * @return ErrorInfo 是否已赋值
                     * 
                     */
                    bool ErrorInfoHasBeenSet() const;

                    /**
                     * 获取状态。
enable：生效中。
pause：暂停中。
                     * @return Status 状态。
enable：生效中。
pause：暂停中。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态。
enable：生效中。
pause：暂停中。
                     * @param _status 状态。
enable：生效中。
pause：暂停中。
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
                     * 获取注意：该信息仅在查询单个任务时返回。
任务最新拉流信息。
包含：源 url，偏移时间，上报时间。
                     * @return RecentPullInfo 注意：该信息仅在查询单个任务时返回。
任务最新拉流信息。
包含：源 url，偏移时间，上报时间。
                     * 
                     */
                    RecentPullInfo GetRecentPullInfo() const;

                    /**
                     * 设置注意：该信息仅在查询单个任务时返回。
任务最新拉流信息。
包含：源 url，偏移时间，上报时间。
                     * @param _recentPullInfo 注意：该信息仅在查询单个任务时返回。
任务最新拉流信息。
包含：源 url，偏移时间，上报时间。
                     * 
                     */
                    void SetRecentPullInfo(const RecentPullInfo& _recentPullInfo);

                    /**
                     * 判断参数 RecentPullInfo 是否已赋值
                     * @return RecentPullInfo 是否已赋值
                     * 
                     */
                    bool RecentPullInfoHasBeenSet() const;

                    /**
                     * 获取任务备注信息。
                     * @return Comment 任务备注信息。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置任务备注信息。
                     * @param _comment 任务备注信息。
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
                     * 获取备源类型：
PullLivePushLive -直播，
PullVodPushLive -点播。
                     * @return BackupSourceType 备源类型：
PullLivePushLive -直播，
PullVodPushLive -点播。
                     * 
                     */
                    std::string GetBackupSourceType() const;

                    /**
                     * 设置备源类型：
PullLivePushLive -直播，
PullVodPushLive -点播。
                     * @param _backupSourceType 备源类型：
PullLivePushLive -直播，
PullVodPushLive -点播。
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
                     * 获取备源URL。
                     * @return BackupSourceUrl 备源URL。
                     * 
                     */
                    std::string GetBackupSourceUrl() const;

                    /**
                     * 设置备源URL。
                     * @param _backupSourceUrl 备源URL。
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
                     * @return WatermarkList 水印信息列表。
                     * 
                     */
                    std::vector<PullPushWatermarkInfo> GetWatermarkList() const;

                    /**
                     * 设置水印信息列表。
                     * @param _watermarkList 水印信息列表。
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
                     * @return VodLocalMode 点播源是否启用本地推流模式，默认0，不启用。
0 - 不启用。
1 - 启用。
                     * 
                     */
                    int64_t GetVodLocalMode() const;

                    /**
                     * 设置点播源是否启用本地推流模式，默认0，不启用。
0 - 不启用。
1 - 启用。
                     * @param _vodLocalMode 点播源是否启用本地推流模式，默认0，不启用。
0 - 不启用。
1 - 启用。
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
                     * 获取新增的推流地址。用于单任务推两路场景。
                     * @return BackupToUrl 新增的推流地址。用于单任务推两路场景。
                     * 
                     */
                    std::string GetBackupToUrl() const;

                    /**
                     * 设置新增的推流地址。用于单任务推两路场景。
                     * @param _backupToUrl 新增的推流地址。用于单任务推两路场景。
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
                     * 获取直播转码模板。
                     * @return TranscodeTemplateName 直播转码模板。
                     * 
                     */
                    std::string GetTranscodeTemplateName() const;

                    /**
                     * 设置直播转码模板。
                     * @param _transcodeTemplateName 直播转码模板。
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
                     * 拉流任务Id。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 拉流源的类型：
PullLivePushLive -直播，
PullVodPushLive -点播，
PullPicPushLive -图片。
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 拉流源url列表。
SourceType为直播（PullLiveToLive）只可以填1个，
SourceType为点播（PullVodToLive）可以填多个，上限10个。
                     */
                    std::vector<std::string> m_sourceUrls;
                    bool m_sourceUrlsHasBeenSet;

                    /**
                     * 推流域名。
将拉到的源推到该域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 推流路径。
将拉到的源推到该路径。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 流名称。
将拉到的源推到该流名称。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 推流参数。
推流携带的自定义参数。
                     */
                    std::string m_pushArgs;
                    bool m_pushArgsHasBeenSet;

                    /**
                     * 开始时间。
使用UTC格式时间，
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
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务创建所在地域：
ap-beijing - 华北地区(北京)，
ap-shanghai -华东地区(上海)，
ap-guangzhou -华南地区(广州)，
ap-mumbai - 印度，
ap-hongkong - 香港，
eu-frankfurt - 德国，
ap-seoul - 韩国，
ap-bangkok - 泰国，
ap-singapore - 新加坡，
na-siliconvalley - 美西，
na-ashburn - 美东，
ap-tokyo - 日本。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

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
                     * 任务创建时间。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务更新时间。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 创建任务的操作者。
                     */
                    std::string m_createBy;
                    bool m_createByHasBeenSet;

                    /**
                     * 最后更新任务的操作者。
                     */
                    std::string m_updateBy;
                    bool m_updateByHasBeenSet;

                    /**
                     * 回调地址。
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 选择需要回调的事件：
TaskStart：任务启动回调，
TaskExit：任务停止回调，
VodSourceFileStart：从点播源文件开始拉流回调，
VodSourceFileFinish：从点播源文件拉流结束回调，
ResetTaskConfig：任务更新回调。
                     */
                    std::vector<std::string> m_callbackEvents;
                    bool m_callbackEventsHasBeenSet;

                    /**
                     * 注意：该信息暂不返回。
最后一次回调信息。
                     */
                    std::string m_callbackInfo;
                    bool m_callbackInfoHasBeenSet;

                    /**
                     * 注意：该信息暂不返回。
错误信息。
                     */
                    std::string m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                    /**
                     * 状态。
enable：生效中。
pause：暂停中。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 注意：该信息仅在查询单个任务时返回。
任务最新拉流信息。
包含：源 url，偏移时间，上报时间。
                     */
                    RecentPullInfo m_recentPullInfo;
                    bool m_recentPullInfoHasBeenSet;

                    /**
                     * 任务备注信息。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 备源类型：
PullLivePushLive -直播，
PullVodPushLive -点播。
                     */
                    std::string m_backupSourceType;
                    bool m_backupSourceTypeHasBeenSet;

                    /**
                     * 备源URL。
                     */
                    std::string m_backupSourceUrl;
                    bool m_backupSourceUrlHasBeenSet;

                    /**
                     * 水印信息列表。
                     */
                    std::vector<PullPushWatermarkInfo> m_watermarkList;
                    bool m_watermarkListHasBeenSet;

                    /**
                     * 点播源是否启用本地推流模式，默认0，不启用。
0 - 不启用。
1 - 启用。
                     */
                    int64_t m_vodLocalMode;
                    bool m_vodLocalModeHasBeenSet;

                    /**
                     * 录制模板 ID。
                     */
                    std::string m_recordTemplateId;
                    bool m_recordTemplateIdHasBeenSet;

                    /**
                     * 新增的推流地址。用于单任务推两路场景。
                     */
                    std::string m_backupToUrl;
                    bool m_backupToUrlHasBeenSet;

                    /**
                     * 直播转码模板。
                     */
                    std::string m_transcodeTemplateName;
                    bool m_transcodeTemplateNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_PULLSTREAMTASKINFO_H_
