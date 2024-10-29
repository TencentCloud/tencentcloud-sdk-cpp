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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCURECORDPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCURECORDPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/McuStorageParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 转推录制参数
                */
                class McuRecordParams : public AbstractModel
                {
                public:
                    McuRecordParams();
                    ~McuRecordParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转推录制模式， 
0/不填: 暂不支持，行为未定义；
1: 不开启录制；
2: 开启录制（使用控制台自动录制模板参数，参考：[跳转文档](https://cloud.tencent.com/document/product/647/111748#.E5.BD.95.E5.88.B6.E6.8E.A7.E5.88.B6.E6.96.B9.E6.A1.88)）；
3: 开启录制（使用API指定参数）。
                     * @return UniRecord 转推录制模式， 
0/不填: 暂不支持，行为未定义；
1: 不开启录制；
2: 开启录制（使用控制台自动录制模板参数，参考：[跳转文档](https://cloud.tencent.com/document/product/647/111748#.E5.BD.95.E5.88.B6.E6.8E.A7.E5.88.B6.E6.96.B9.E6.A1.88)）；
3: 开启录制（使用API指定参数）。
                     * 
                     */
                    uint64_t GetUniRecord() const;

                    /**
                     * 设置转推录制模式， 
0/不填: 暂不支持，行为未定义；
1: 不开启录制；
2: 开启录制（使用控制台自动录制模板参数，参考：[跳转文档](https://cloud.tencent.com/document/product/647/111748#.E5.BD.95.E5.88.B6.E6.8E.A7.E5.88.B6.E6.96.B9.E6.A1.88)）；
3: 开启录制（使用API指定参数）。
                     * @param _uniRecord 转推录制模式， 
0/不填: 暂不支持，行为未定义；
1: 不开启录制；
2: 开启录制（使用控制台自动录制模板参数，参考：[跳转文档](https://cloud.tencent.com/document/product/647/111748#.E5.BD.95.E5.88.B6.E6.8E.A7.E5.88.B6.E6.96.B9.E6.A1.88)）；
3: 开启录制（使用API指定参数）。
                     * 
                     */
                    void SetUniRecord(const uint64_t& _uniRecord);

                    /**
                     * 判断参数 UniRecord 是否已赋值
                     * @return UniRecord 是否已赋值
                     * 
                     */
                    bool UniRecordHasBeenSet() const;

                    /**
                     * 获取录制任务 key，标识一个录制任务；您可以通过该参数，将多个转推任务录制成一个文件。不指定该参数时，只录制当前转推任务。
【限制长度为128字节，只允许包含大小写英文字母（a-zA-Z）、数字（0-9）及下划线(_)和连词符(-)】
                     * @return RecordKey 录制任务 key，标识一个录制任务；您可以通过该参数，将多个转推任务录制成一个文件。不指定该参数时，只录制当前转推任务。
【限制长度为128字节，只允许包含大小写英文字母（a-zA-Z）、数字（0-9）及下划线(_)和连词符(-)】
                     * 
                     */
                    std::string GetRecordKey() const;

                    /**
                     * 设置录制任务 key，标识一个录制任务；您可以通过该参数，将多个转推任务录制成一个文件。不指定该参数时，只录制当前转推任务。
【限制长度为128字节，只允许包含大小写英文字母（a-zA-Z）、数字（0-9）及下划线(_)和连词符(-)】
                     * @param _recordKey 录制任务 key，标识一个录制任务；您可以通过该参数，将多个转推任务录制成一个文件。不指定该参数时，只录制当前转推任务。
【限制长度为128字节，只允许包含大小写英文字母（a-zA-Z）、数字（0-9）及下划线(_)和连词符(-)】
                     * 
                     */
                    void SetRecordKey(const std::string& _recordKey);

                    /**
                     * 判断参数 RecordKey 是否已赋值
                     * @return RecordKey 是否已赋值
                     * 
                     */
                    bool RecordKeyHasBeenSet() const;

                    /**
                     * 获取【仅当UniRecord=3时此参数有效】
续录等待时间，对应录制模板“续录等待时长”，单位：秒。该值需大于等于 5，且小于等于 86400(24小时)，默认值为 30。启用续录时，录制任务空闲超过RecordWaitTime的时长，自动结束。
                     * @return RecordWaitTime 【仅当UniRecord=3时此参数有效】
续录等待时间，对应录制模板“续录等待时长”，单位：秒。该值需大于等于 5，且小于等于 86400(24小时)，默认值为 30。启用续录时，录制任务空闲超过RecordWaitTime的时长，自动结束。
                     * 
                     */
                    uint64_t GetRecordWaitTime() const;

                    /**
                     * 设置【仅当UniRecord=3时此参数有效】
续录等待时间，对应录制模板“续录等待时长”，单位：秒。该值需大于等于 5，且小于等于 86400(24小时)，默认值为 30。启用续录时，录制任务空闲超过RecordWaitTime的时长，自动结束。
                     * @param _recordWaitTime 【仅当UniRecord=3时此参数有效】
续录等待时间，对应录制模板“续录等待时长”，单位：秒。该值需大于等于 5，且小于等于 86400(24小时)，默认值为 30。启用续录时，录制任务空闲超过RecordWaitTime的时长，自动结束。
                     * 
                     */
                    void SetRecordWaitTime(const uint64_t& _recordWaitTime);

                    /**
                     * 判断参数 RecordWaitTime 是否已赋值
                     * @return RecordWaitTime 是否已赋值
                     * 
                     */
                    bool RecordWaitTimeHasBeenSet() const;

                    /**
                     * 获取【仅当UniRecord=3时此参数有效】
录制输出文件格式列表，对应录制模板“文件格式”，支持“hls”、"mp4"、"aac"三种格式，默认值为"mp4"。其中"mp4"和"aac"格式，不能同时指定。
只录制 mp4格式，示例值：["mp4"]。同时录制mp4 和 HLS 格式，示例值：["mp4","hls"]。
                     * @return RecordFormat 【仅当UniRecord=3时此参数有效】
录制输出文件格式列表，对应录制模板“文件格式”，支持“hls”、"mp4"、"aac"三种格式，默认值为"mp4"。其中"mp4"和"aac"格式，不能同时指定。
只录制 mp4格式，示例值：["mp4"]。同时录制mp4 和 HLS 格式，示例值：["mp4","hls"]。
                     * 
                     */
                    std::vector<std::string> GetRecordFormat() const;

                    /**
                     * 设置【仅当UniRecord=3时此参数有效】
录制输出文件格式列表，对应录制模板“文件格式”，支持“hls”、"mp4"、"aac"三种格式，默认值为"mp4"。其中"mp4"和"aac"格式，不能同时指定。
只录制 mp4格式，示例值：["mp4"]。同时录制mp4 和 HLS 格式，示例值：["mp4","hls"]。
                     * @param _recordFormat 【仅当UniRecord=3时此参数有效】
录制输出文件格式列表，对应录制模板“文件格式”，支持“hls”、"mp4"、"aac"三种格式，默认值为"mp4"。其中"mp4"和"aac"格式，不能同时指定。
只录制 mp4格式，示例值：["mp4"]。同时录制mp4 和 HLS 格式，示例值：["mp4","hls"]。
                     * 
                     */
                    void SetRecordFormat(const std::vector<std::string>& _recordFormat);

                    /**
                     * 判断参数 RecordFormat 是否已赋值
                     * @return RecordFormat 是否已赋值
                     * 
                     */
                    bool RecordFormatHasBeenSet() const;

                    /**
                     * 获取【仅当UniRecord=3时此参数有效】
单个文件录制时长，对应录制模板“单个录制文件时长”，单位：分钟。该值需大于等于 1，且小于等于 1440(24小时)，默认值为 1440。只对"mp4"或"aac"格式生效。实际单文件录制时长还受单文件大小不超过 2G 限制，超过2G则强制拆分。
                     * @return MaxMediaFileDuration 【仅当UniRecord=3时此参数有效】
单个文件录制时长，对应录制模板“单个录制文件时长”，单位：分钟。该值需大于等于 1，且小于等于 1440(24小时)，默认值为 1440。只对"mp4"或"aac"格式生效。实际单文件录制时长还受单文件大小不超过 2G 限制，超过2G则强制拆分。
                     * 
                     */
                    uint64_t GetMaxMediaFileDuration() const;

                    /**
                     * 设置【仅当UniRecord=3时此参数有效】
单个文件录制时长，对应录制模板“单个录制文件时长”，单位：分钟。该值需大于等于 1，且小于等于 1440(24小时)，默认值为 1440。只对"mp4"或"aac"格式生效。实际单文件录制时长还受单文件大小不超过 2G 限制，超过2G则强制拆分。
                     * @param _maxMediaFileDuration 【仅当UniRecord=3时此参数有效】
单个文件录制时长，对应录制模板“单个录制文件时长”，单位：分钟。该值需大于等于 1，且小于等于 1440(24小时)，默认值为 1440。只对"mp4"或"aac"格式生效。实际单文件录制时长还受单文件大小不超过 2G 限制，超过2G则强制拆分。
                     * 
                     */
                    void SetMaxMediaFileDuration(const uint64_t& _maxMediaFileDuration);

                    /**
                     * 判断参数 MaxMediaFileDuration 是否已赋值
                     * @return MaxMediaFileDuration 是否已赋值
                     * 
                     */
                    bool MaxMediaFileDurationHasBeenSet() const;

                    /**
                     * 获取【仅当UniRecord=3时此参数有效】
录制的音视频类型，对应录制模板“录制格式”，0:音视频，1：纯音频，2：纯视频。最终录制文件内容是录制指定类型和转推内容的交集。
                     * @return StreamType 【仅当UniRecord=3时此参数有效】
录制的音视频类型，对应录制模板“录制格式”，0:音视频，1：纯音频，2：纯视频。最终录制文件内容是录制指定类型和转推内容的交集。
                     * 
                     */
                    uint64_t GetStreamType() const;

                    /**
                     * 设置【仅当UniRecord=3时此参数有效】
录制的音视频类型，对应录制模板“录制格式”，0:音视频，1：纯音频，2：纯视频。最终录制文件内容是录制指定类型和转推内容的交集。
                     * @param _streamType 【仅当UniRecord=3时此参数有效】
录制的音视频类型，对应录制模板“录制格式”，0:音视频，1：纯音频，2：纯视频。最终录制文件内容是录制指定类型和转推内容的交集。
                     * 
                     */
                    void SetStreamType(const uint64_t& _streamType);

                    /**
                     * 判断参数 StreamType 是否已赋值
                     * @return StreamType 是否已赋值
                     * 
                     */
                    bool StreamTypeHasBeenSet() const;

                    /**
                     * 获取录制文件名前缀，不超过64字符。只有存储为vod时生效。
【限制长度为64字节，只允许包含大小写英文字母（a-zA-Z）、数字（0-9）及下划线(_)和连词符(-)】
                     * @return UserDefineRecordPrefix 录制文件名前缀，不超过64字符。只有存储为vod时生效。
【限制长度为64字节，只允许包含大小写英文字母（a-zA-Z）、数字（0-9）及下划线(_)和连词符(-)】
                     * 
                     */
                    std::string GetUserDefineRecordPrefix() const;

                    /**
                     * 设置录制文件名前缀，不超过64字符。只有存储为vod时生效。
【限制长度为64字节，只允许包含大小写英文字母（a-zA-Z）、数字（0-9）及下划线(_)和连词符(-)】
                     * @param _userDefineRecordPrefix 录制文件名前缀，不超过64字符。只有存储为vod时生效。
【限制长度为64字节，只允许包含大小写英文字母（a-zA-Z）、数字（0-9）及下划线(_)和连词符(-)】
                     * 
                     */
                    void SetUserDefineRecordPrefix(const std::string& _userDefineRecordPrefix);

                    /**
                     * 判断参数 UserDefineRecordPrefix 是否已赋值
                     * @return UserDefineRecordPrefix 是否已赋值
                     * 
                     */
                    bool UserDefineRecordPrefixHasBeenSet() const;

                    /**
                     * 获取【仅当UniRecord=3时此参数有效】
录制文件存储参数，对应控制台“存储位置”及相关参数。目前支持云点播VOD和对象存储COS两种存储方式，只能填写一种。
                     * @return McuStorageParams 【仅当UniRecord=3时此参数有效】
录制文件存储参数，对应控制台“存储位置”及相关参数。目前支持云点播VOD和对象存储COS两种存储方式，只能填写一种。
                     * 
                     */
                    McuStorageParams GetMcuStorageParams() const;

                    /**
                     * 设置【仅当UniRecord=3时此参数有效】
录制文件存储参数，对应控制台“存储位置”及相关参数。目前支持云点播VOD和对象存储COS两种存储方式，只能填写一种。
                     * @param _mcuStorageParams 【仅当UniRecord=3时此参数有效】
录制文件存储参数，对应控制台“存储位置”及相关参数。目前支持云点播VOD和对象存储COS两种存储方式，只能填写一种。
                     * 
                     */
                    void SetMcuStorageParams(const McuStorageParams& _mcuStorageParams);

                    /**
                     * 判断参数 McuStorageParams 是否已赋值
                     * @return McuStorageParams 是否已赋值
                     * 
                     */
                    bool McuStorageParamsHasBeenSet() const;

                private:

                    /**
                     * 转推录制模式， 
0/不填: 暂不支持，行为未定义；
1: 不开启录制；
2: 开启录制（使用控制台自动录制模板参数，参考：[跳转文档](https://cloud.tencent.com/document/product/647/111748#.E5.BD.95.E5.88.B6.E6.8E.A7.E5.88.B6.E6.96.B9.E6.A1.88)）；
3: 开启录制（使用API指定参数）。
                     */
                    uint64_t m_uniRecord;
                    bool m_uniRecordHasBeenSet;

                    /**
                     * 录制任务 key，标识一个录制任务；您可以通过该参数，将多个转推任务录制成一个文件。不指定该参数时，只录制当前转推任务。
【限制长度为128字节，只允许包含大小写英文字母（a-zA-Z）、数字（0-9）及下划线(_)和连词符(-)】
                     */
                    std::string m_recordKey;
                    bool m_recordKeyHasBeenSet;

                    /**
                     * 【仅当UniRecord=3时此参数有效】
续录等待时间，对应录制模板“续录等待时长”，单位：秒。该值需大于等于 5，且小于等于 86400(24小时)，默认值为 30。启用续录时，录制任务空闲超过RecordWaitTime的时长，自动结束。
                     */
                    uint64_t m_recordWaitTime;
                    bool m_recordWaitTimeHasBeenSet;

                    /**
                     * 【仅当UniRecord=3时此参数有效】
录制输出文件格式列表，对应录制模板“文件格式”，支持“hls”、"mp4"、"aac"三种格式，默认值为"mp4"。其中"mp4"和"aac"格式，不能同时指定。
只录制 mp4格式，示例值：["mp4"]。同时录制mp4 和 HLS 格式，示例值：["mp4","hls"]。
                     */
                    std::vector<std::string> m_recordFormat;
                    bool m_recordFormatHasBeenSet;

                    /**
                     * 【仅当UniRecord=3时此参数有效】
单个文件录制时长，对应录制模板“单个录制文件时长”，单位：分钟。该值需大于等于 1，且小于等于 1440(24小时)，默认值为 1440。只对"mp4"或"aac"格式生效。实际单文件录制时长还受单文件大小不超过 2G 限制，超过2G则强制拆分。
                     */
                    uint64_t m_maxMediaFileDuration;
                    bool m_maxMediaFileDurationHasBeenSet;

                    /**
                     * 【仅当UniRecord=3时此参数有效】
录制的音视频类型，对应录制模板“录制格式”，0:音视频，1：纯音频，2：纯视频。最终录制文件内容是录制指定类型和转推内容的交集。
                     */
                    uint64_t m_streamType;
                    bool m_streamTypeHasBeenSet;

                    /**
                     * 录制文件名前缀，不超过64字符。只有存储为vod时生效。
【限制长度为64字节，只允许包含大小写英文字母（a-zA-Z）、数字（0-9）及下划线(_)和连词符(-)】
                     */
                    std::string m_userDefineRecordPrefix;
                    bool m_userDefineRecordPrefixHasBeenSet;

                    /**
                     * 【仅当UniRecord=3时此参数有效】
录制文件存储参数，对应控制台“存储位置”及相关参数。目前支持云点播VOD和对象存储COS两种存储方式，只能填写一种。
                     */
                    McuStorageParams m_mcuStorageParams;
                    bool m_mcuStorageParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCURECORDPARAMS_H_
