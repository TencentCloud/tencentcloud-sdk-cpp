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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_RECORDPARAM_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_RECORDPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 录制模板参数。
                */
                class RecordParam : public AbstractModel
                {
                public:
                    RecordParam();
                    ~RecordParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>录制间隔。<br>单位秒，默认：1800。<br>FLV、MP4取值范围： 60-43200， AAC取值范围： 60-7200 。<br>此参数对 HLS 无效，当录制 HLS 时从推流到断流生成一个文件。</p>
                     * @return RecordInterval <p>录制间隔。<br>单位秒，默认：1800。<br>FLV、MP4取值范围： 60-43200， AAC取值范围： 60-7200 。<br>此参数对 HLS 无效，当录制 HLS 时从推流到断流生成一个文件。</p>
                     * 
                     */
                    int64_t GetRecordInterval() const;

                    /**
                     * 设置<p>录制间隔。<br>单位秒，默认：1800。<br>FLV、MP4取值范围： 60-43200， AAC取值范围： 60-7200 。<br>此参数对 HLS 无效，当录制 HLS 时从推流到断流生成一个文件。</p>
                     * @param _recordInterval <p>录制间隔。<br>单位秒，默认：1800。<br>FLV、MP4取值范围： 60-43200， AAC取值范围： 60-7200 。<br>此参数对 HLS 无效，当录制 HLS 时从推流到断流生成一个文件。</p>
                     * 
                     */
                    void SetRecordInterval(const int64_t& _recordInterval);

                    /**
                     * 判断参数 RecordInterval 是否已赋值
                     * @return RecordInterval 是否已赋值
                     * 
                     */
                    bool RecordIntervalHasBeenSet() const;

                    /**
                     * 获取<p>录制存储时长。<br>单位秒，取值范围： 0 - 1500天。<br>0：表示永久存储。<br>注：此参数只对录制到VOD有效。</p>
                     * @return StorageTime <p>录制存储时长。<br>单位秒，取值范围： 0 - 1500天。<br>0：表示永久存储。<br>注：此参数只对录制到VOD有效。</p>
                     * 
                     */
                    int64_t GetStorageTime() const;

                    /**
                     * 设置<p>录制存储时长。<br>单位秒，取值范围： 0 - 1500天。<br>0：表示永久存储。<br>注：此参数只对录制到VOD有效。</p>
                     * @param _storageTime <p>录制存储时长。<br>单位秒，取值范围： 0 - 1500天。<br>0：表示永久存储。<br>注：此参数只对录制到VOD有效。</p>
                     * 
                     */
                    void SetStorageTime(const int64_t& _storageTime);

                    /**
                     * 判断参数 StorageTime 是否已赋值
                     * @return StorageTime 是否已赋值
                     * 
                     */
                    bool StorageTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启当前格式录制，默认值为0，0：否， 1：是。</p>
                     * @return Enable <p>是否开启当前格式录制，默认值为0，0：否， 1：是。</p>
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置<p>是否开启当前格式录制，默认值为0，0：否， 1：是。</p>
                     * @param _enable <p>是否开启当前格式录制，默认值为0，0：否， 1：是。</p>
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>点播子应用 ID。</p>
                     * @return VodSubAppId <p>点播子应用 ID。</p>
                     * 
                     */
                    int64_t GetVodSubAppId() const;

                    /**
                     * 设置<p>点播子应用 ID。</p>
                     * @param _vodSubAppId <p>点播子应用 ID。</p>
                     * 
                     */
                    void SetVodSubAppId(const int64_t& _vodSubAppId);

                    /**
                     * 判断参数 VodSubAppId 是否已赋值
                     * @return VodSubAppId 是否已赋值
                     * 
                     */
                    bool VodSubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>录制文件名。<br>支持的特殊占位符有：<br>{StreamID}: 流ID<br>{StartYear}: 开始时间-年<br>{StartMonth}: 开始时间-月<br>{StartDay}: 开始时间-日<br>{StartHour}: 开始时间-小时<br>{StartMinute}: 开始时间-分钟<br>{StartSecond}: 开始时间-秒<br>{StartMillisecond}: 开始时间-毫秒<br>{EndYear}: 结束时间-年<br>{EndMonth}: 结束时间-月<br>{EndDay}: 结束时间-日<br>{EndHour}: 结束时间-小时<br>{EndMinute}: 结束时间-分钟<br>{EndSecond}: 结束时间-秒<br>{EndMillisecond}: 结束时间-毫秒</p><p>若未设置默认录制文件名为{StreamID}_{StartYear}-{StartMonth}-{StartDay}-{StartHour}-{StartMinute}-{StartSecond}_{EndYear}-{EndMonth}-{EndDay}-{EndHour}-{EndMinute}-{EndSecond}</p>
                     * @return VodFileName <p>录制文件名。<br>支持的特殊占位符有：<br>{StreamID}: 流ID<br>{StartYear}: 开始时间-年<br>{StartMonth}: 开始时间-月<br>{StartDay}: 开始时间-日<br>{StartHour}: 开始时间-小时<br>{StartMinute}: 开始时间-分钟<br>{StartSecond}: 开始时间-秒<br>{StartMillisecond}: 开始时间-毫秒<br>{EndYear}: 结束时间-年<br>{EndMonth}: 结束时间-月<br>{EndDay}: 结束时间-日<br>{EndHour}: 结束时间-小时<br>{EndMinute}: 结束时间-分钟<br>{EndSecond}: 结束时间-秒<br>{EndMillisecond}: 结束时间-毫秒</p><p>若未设置默认录制文件名为{StreamID}_{StartYear}-{StartMonth}-{StartDay}-{StartHour}-{StartMinute}-{StartSecond}_{EndYear}-{EndMonth}-{EndDay}-{EndHour}-{EndMinute}-{EndSecond}</p>
                     * 
                     */
                    std::string GetVodFileName() const;

                    /**
                     * 设置<p>录制文件名。<br>支持的特殊占位符有：<br>{StreamID}: 流ID<br>{StartYear}: 开始时间-年<br>{StartMonth}: 开始时间-月<br>{StartDay}: 开始时间-日<br>{StartHour}: 开始时间-小时<br>{StartMinute}: 开始时间-分钟<br>{StartSecond}: 开始时间-秒<br>{StartMillisecond}: 开始时间-毫秒<br>{EndYear}: 结束时间-年<br>{EndMonth}: 结束时间-月<br>{EndDay}: 结束时间-日<br>{EndHour}: 结束时间-小时<br>{EndMinute}: 结束时间-分钟<br>{EndSecond}: 结束时间-秒<br>{EndMillisecond}: 结束时间-毫秒</p><p>若未设置默认录制文件名为{StreamID}_{StartYear}-{StartMonth}-{StartDay}-{StartHour}-{StartMinute}-{StartSecond}_{EndYear}-{EndMonth}-{EndDay}-{EndHour}-{EndMinute}-{EndSecond}</p>
                     * @param _vodFileName <p>录制文件名。<br>支持的特殊占位符有：<br>{StreamID}: 流ID<br>{StartYear}: 开始时间-年<br>{StartMonth}: 开始时间-月<br>{StartDay}: 开始时间-日<br>{StartHour}: 开始时间-小时<br>{StartMinute}: 开始时间-分钟<br>{StartSecond}: 开始时间-秒<br>{StartMillisecond}: 开始时间-毫秒<br>{EndYear}: 结束时间-年<br>{EndMonth}: 结束时间-月<br>{EndDay}: 结束时间-日<br>{EndHour}: 结束时间-小时<br>{EndMinute}: 结束时间-分钟<br>{EndSecond}: 结束时间-秒<br>{EndMillisecond}: 结束时间-毫秒</p><p>若未设置默认录制文件名为{StreamID}_{StartYear}-{StartMonth}-{StartDay}-{StartHour}-{StartMinute}-{StartSecond}_{EndYear}-{EndMonth}-{EndDay}-{EndHour}-{EndMinute}-{EndSecond}</p>
                     * 
                     */
                    void SetVodFileName(const std::string& _vodFileName);

                    /**
                     * 判断参数 VodFileName 是否已赋值
                     * @return VodFileName 是否已赋值
                     * 
                     */
                    bool VodFileNameHasBeenSet() const;

                    /**
                     * 获取<p>任务流</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Procedure <p>任务流</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcedure() const;

                    /**
                     * 设置<p>任务流</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _procedure <p>任务流</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>视频存储策略。<br>normal：标准存储。<br>cold：低频存储。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageMode <p>视频存储策略。<br>normal：标准存储。<br>cold：低频存储。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorageMode() const;

                    /**
                     * 设置<p>视频存储策略。<br>normal：标准存储。<br>cold：低频存储。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageMode <p>视频存储策略。<br>normal：标准存储。<br>cold：低频存储。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageMode(const std::string& _storageMode);

                    /**
                     * 判断参数 StorageMode 是否已赋值
                     * @return StorageMode 是否已赋值
                     * 
                     */
                    bool StorageModeHasBeenSet() const;

                    /**
                     * 获取<p>点播应用分类</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassId <p>点播应用分类</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置<p>点播应用分类</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _classId <p>点播应用分类</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>存储至 cos 的 bucket 桶名称。<br>注：CosBucketName参数值不能包含-[appid] 部分。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosBucketName <p>存储至 cos 的 bucket 桶名称。<br>注：CosBucketName参数值不能包含-[appid] 部分。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置<p>存储至 cos 的 bucket 桶名称。<br>注：CosBucketName参数值不能包含-[appid] 部分。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosBucketName <p>存储至 cos 的 bucket 桶名称。<br>注：CosBucketName参数值不能包含-[appid] 部分。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosBucketName(const std::string& _cosBucketName);

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     * 
                     */
                    bool CosBucketNameHasBeenSet() const;

                    /**
                     * 获取<p>存储至 cos 的 bucket 区域。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosBucketRegion <p>存储至 cos 的 bucket 区域。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosBucketRegion() const;

                    /**
                     * 设置<p>存储至 cos 的 bucket 区域。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosBucketRegion <p>存储至 cos 的 bucket 区域。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosBucketRegion(const std::string& _cosBucketRegion);

                    /**
                     * 判断参数 CosBucketRegion 是否已赋值
                     * @return CosBucketRegion 是否已赋值
                     * 
                     */
                    bool CosBucketRegionHasBeenSet() const;

                    /**
                     * 获取<p>存储至 cos 的 bucket 路径。<br>注意：若为输入参数，则该参数必填，且必须以斜杠（/）开头，建议至少包含 {StartYear}、{StartMonth}、{StartDay}、{StartHour}、{StartMinute}、{StartSecond} 或 {RandomID} 任意一种，否则可能出现录制文件名重复造成文件相互覆盖；若为返回参数，则此字段可能返回 null，表示取不到有效值。<br>示例值：/{RecordSource}/{Domain}/{AppName}/{StreamID}/{RecordId}-{RandomID}/{StartYear}-{StartMonth}-{StartDay}-{StartHour}-{StartMinute}-{StartSecond}</p><p>支持的特殊占位符有：<br>{RecordSource}：区分录制内容，若录制原始流、水印流则为“origin”，录制转码流时，代表转码模板ID<br>{StreamID}: 流ID<br>{RecordId}：录制任务ID，断流前后该值可能重复；<br>{RandomID}：随机数，断流前后该值不同；<br>{StartYear}: 开始时间-年<br>{StartMonth}: 开始时间-月<br>{StartDay}: 开始时间-日<br>{StartHour}: 开始时间-小时<br>{StartMinute}: 开始时间-分钟<br>{StartSecond}: 开始时间-秒<br>{StartMillisecond}: 开始时间-毫秒<br>{EndYear}: 结束时间-年<br>{EndMonth}: 结束时间-月<br>{EndDay}: 结束时间-日<br>{EndHour}: 结束时间-小时<br>{EndMinute}: 结束时间-分钟<br>{EndSecond}: 结束时间-秒<br>{EndMillisecond}: 结束时间-毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosBucketPath <p>存储至 cos 的 bucket 路径。<br>注意：若为输入参数，则该参数必填，且必须以斜杠（/）开头，建议至少包含 {StartYear}、{StartMonth}、{StartDay}、{StartHour}、{StartMinute}、{StartSecond} 或 {RandomID} 任意一种，否则可能出现录制文件名重复造成文件相互覆盖；若为返回参数，则此字段可能返回 null，表示取不到有效值。<br>示例值：/{RecordSource}/{Domain}/{AppName}/{StreamID}/{RecordId}-{RandomID}/{StartYear}-{StartMonth}-{StartDay}-{StartHour}-{StartMinute}-{StartSecond}</p><p>支持的特殊占位符有：<br>{RecordSource}：区分录制内容，若录制原始流、水印流则为“origin”，录制转码流时，代表转码模板ID<br>{StreamID}: 流ID<br>{RecordId}：录制任务ID，断流前后该值可能重复；<br>{RandomID}：随机数，断流前后该值不同；<br>{StartYear}: 开始时间-年<br>{StartMonth}: 开始时间-月<br>{StartDay}: 开始时间-日<br>{StartHour}: 开始时间-小时<br>{StartMinute}: 开始时间-分钟<br>{StartSecond}: 开始时间-秒<br>{StartMillisecond}: 开始时间-毫秒<br>{EndYear}: 结束时间-年<br>{EndMonth}: 结束时间-月<br>{EndDay}: 结束时间-日<br>{EndHour}: 结束时间-小时<br>{EndMinute}: 结束时间-分钟<br>{EndSecond}: 结束时间-秒<br>{EndMillisecond}: 结束时间-毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosBucketPath() const;

                    /**
                     * 设置<p>存储至 cos 的 bucket 路径。<br>注意：若为输入参数，则该参数必填，且必须以斜杠（/）开头，建议至少包含 {StartYear}、{StartMonth}、{StartDay}、{StartHour}、{StartMinute}、{StartSecond} 或 {RandomID} 任意一种，否则可能出现录制文件名重复造成文件相互覆盖；若为返回参数，则此字段可能返回 null，表示取不到有效值。<br>示例值：/{RecordSource}/{Domain}/{AppName}/{StreamID}/{RecordId}-{RandomID}/{StartYear}-{StartMonth}-{StartDay}-{StartHour}-{StartMinute}-{StartSecond}</p><p>支持的特殊占位符有：<br>{RecordSource}：区分录制内容，若录制原始流、水印流则为“origin”，录制转码流时，代表转码模板ID<br>{StreamID}: 流ID<br>{RecordId}：录制任务ID，断流前后该值可能重复；<br>{RandomID}：随机数，断流前后该值不同；<br>{StartYear}: 开始时间-年<br>{StartMonth}: 开始时间-月<br>{StartDay}: 开始时间-日<br>{StartHour}: 开始时间-小时<br>{StartMinute}: 开始时间-分钟<br>{StartSecond}: 开始时间-秒<br>{StartMillisecond}: 开始时间-毫秒<br>{EndYear}: 结束时间-年<br>{EndMonth}: 结束时间-月<br>{EndDay}: 结束时间-日<br>{EndHour}: 结束时间-小时<br>{EndMinute}: 结束时间-分钟<br>{EndSecond}: 结束时间-秒<br>{EndMillisecond}: 结束时间-毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosBucketPath <p>存储至 cos 的 bucket 路径。<br>注意：若为输入参数，则该参数必填，且必须以斜杠（/）开头，建议至少包含 {StartYear}、{StartMonth}、{StartDay}、{StartHour}、{StartMinute}、{StartSecond} 或 {RandomID} 任意一种，否则可能出现录制文件名重复造成文件相互覆盖；若为返回参数，则此字段可能返回 null，表示取不到有效值。<br>示例值：/{RecordSource}/{Domain}/{AppName}/{StreamID}/{RecordId}-{RandomID}/{StartYear}-{StartMonth}-{StartDay}-{StartHour}-{StartMinute}-{StartSecond}</p><p>支持的特殊占位符有：<br>{RecordSource}：区分录制内容，若录制原始流、水印流则为“origin”，录制转码流时，代表转码模板ID<br>{StreamID}: 流ID<br>{RecordId}：录制任务ID，断流前后该值可能重复；<br>{RandomID}：随机数，断流前后该值不同；<br>{StartYear}: 开始时间-年<br>{StartMonth}: 开始时间-月<br>{StartDay}: 开始时间-日<br>{StartHour}: 开始时间-小时<br>{StartMinute}: 开始时间-分钟<br>{StartSecond}: 开始时间-秒<br>{StartMillisecond}: 开始时间-毫秒<br>{EndYear}: 结束时间-年<br>{EndMonth}: 结束时间-月<br>{EndDay}: 结束时间-日<br>{EndHour}: 结束时间-小时<br>{EndMinute}: 结束时间-分钟<br>{EndSecond}: 结束时间-秒<br>{EndMillisecond}: 结束时间-毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosBucketPath(const std::string& _cosBucketPath);

                    /**
                     * 判断参数 CosBucketPath 是否已赋值
                     * @return CosBucketPath 是否已赋值
                     * 
                     */
                    bool CosBucketPathHasBeenSet() const;

                private:

                    /**
                     * <p>录制间隔。<br>单位秒，默认：1800。<br>FLV、MP4取值范围： 60-43200， AAC取值范围： 60-7200 。<br>此参数对 HLS 无效，当录制 HLS 时从推流到断流生成一个文件。</p>
                     */
                    int64_t m_recordInterval;
                    bool m_recordIntervalHasBeenSet;

                    /**
                     * <p>录制存储时长。<br>单位秒，取值范围： 0 - 1500天。<br>0：表示永久存储。<br>注：此参数只对录制到VOD有效。</p>
                     */
                    int64_t m_storageTime;
                    bool m_storageTimeHasBeenSet;

                    /**
                     * <p>是否开启当前格式录制，默认值为0，0：否， 1：是。</p>
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>点播子应用 ID。</p>
                     */
                    int64_t m_vodSubAppId;
                    bool m_vodSubAppIdHasBeenSet;

                    /**
                     * <p>录制文件名。<br>支持的特殊占位符有：<br>{StreamID}: 流ID<br>{StartYear}: 开始时间-年<br>{StartMonth}: 开始时间-月<br>{StartDay}: 开始时间-日<br>{StartHour}: 开始时间-小时<br>{StartMinute}: 开始时间-分钟<br>{StartSecond}: 开始时间-秒<br>{StartMillisecond}: 开始时间-毫秒<br>{EndYear}: 结束时间-年<br>{EndMonth}: 结束时间-月<br>{EndDay}: 结束时间-日<br>{EndHour}: 结束时间-小时<br>{EndMinute}: 结束时间-分钟<br>{EndSecond}: 结束时间-秒<br>{EndMillisecond}: 结束时间-毫秒</p><p>若未设置默认录制文件名为{StreamID}_{StartYear}-{StartMonth}-{StartDay}-{StartHour}-{StartMinute}-{StartSecond}_{EndYear}-{EndMonth}-{EndDay}-{EndHour}-{EndMinute}-{EndSecond}</p>
                     */
                    std::string m_vodFileName;
                    bool m_vodFileNameHasBeenSet;

                    /**
                     * <p>任务流</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_procedure;
                    bool m_procedureHasBeenSet;

                    /**
                     * <p>视频存储策略。<br>normal：标准存储。<br>cold：低频存储。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * <p>点播应用分类</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * <p>存储至 cos 的 bucket 桶名称。<br>注：CosBucketName参数值不能包含-[appid] 部分。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * <p>存储至 cos 的 bucket 区域。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosBucketRegion;
                    bool m_cosBucketRegionHasBeenSet;

                    /**
                     * <p>存储至 cos 的 bucket 路径。<br>注意：若为输入参数，则该参数必填，且必须以斜杠（/）开头，建议至少包含 {StartYear}、{StartMonth}、{StartDay}、{StartHour}、{StartMinute}、{StartSecond} 或 {RandomID} 任意一种，否则可能出现录制文件名重复造成文件相互覆盖；若为返回参数，则此字段可能返回 null，表示取不到有效值。<br>示例值：/{RecordSource}/{Domain}/{AppName}/{StreamID}/{RecordId}-{RandomID}/{StartYear}-{StartMonth}-{StartDay}-{StartHour}-{StartMinute}-{StartSecond}</p><p>支持的特殊占位符有：<br>{RecordSource}：区分录制内容，若录制原始流、水印流则为“origin”，录制转码流时，代表转码模板ID<br>{StreamID}: 流ID<br>{RecordId}：录制任务ID，断流前后该值可能重复；<br>{RandomID}：随机数，断流前后该值不同；<br>{StartYear}: 开始时间-年<br>{StartMonth}: 开始时间-月<br>{StartDay}: 开始时间-日<br>{StartHour}: 开始时间-小时<br>{StartMinute}: 开始时间-分钟<br>{StartSecond}: 开始时间-秒<br>{StartMillisecond}: 开始时间-毫秒<br>{EndYear}: 结束时间-年<br>{EndMonth}: 结束时间-月<br>{EndDay}: 结束时间-日<br>{EndHour}: 结束时间-小时<br>{EndMinute}: 结束时间-分钟<br>{EndSecond}: 结束时间-秒<br>{EndMillisecond}: 结束时间-毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosBucketPath;
                    bool m_cosBucketPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_RECORDPARAM_H_
