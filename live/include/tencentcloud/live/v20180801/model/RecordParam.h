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
                     * 获取录制间隔。
单位秒，默认：1800。
取值范围：30-7200。
此参数对 HLS 无效，当录制 HLS 时从推流到断流生成一个文件。
                     * @return RecordInterval 录制间隔。
单位秒，默认：1800。
取值范围：30-7200。
此参数对 HLS 无效，当录制 HLS 时从推流到断流生成一个文件。
                     * 
                     */
                    int64_t GetRecordInterval() const;

                    /**
                     * 设置录制间隔。
单位秒，默认：1800。
取值范围：30-7200。
此参数对 HLS 无效，当录制 HLS 时从推流到断流生成一个文件。
                     * @param _recordInterval 录制间隔。
单位秒，默认：1800。
取值范围：30-7200。
此参数对 HLS 无效，当录制 HLS 时从推流到断流生成一个文件。
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
                     * 获取录制存储时长。
单位秒，取值范围： 0 - 1500天。
0：表示永久存储。
                     * @return StorageTime 录制存储时长。
单位秒，取值范围： 0 - 1500天。
0：表示永久存储。
                     * 
                     */
                    int64_t GetStorageTime() const;

                    /**
                     * 设置录制存储时长。
单位秒，取值范围： 0 - 1500天。
0：表示永久存储。
                     * @param _storageTime 录制存储时长。
单位秒，取值范围： 0 - 1500天。
0：表示永久存储。
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
                     * 获取是否开启当前格式录制，默认值为0，0：否， 1：是。
                     * @return Enable 是否开启当前格式录制，默认值为0，0：否， 1：是。
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置是否开启当前格式录制，默认值为0，0：否， 1：是。
                     * @param _enable 是否开启当前格式录制，默认值为0，0：否， 1：是。
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
                     * 获取点播子应用 ID。
                     * @return VodSubAppId 点播子应用 ID。
                     * 
                     */
                    int64_t GetVodSubAppId() const;

                    /**
                     * 设置点播子应用 ID。
                     * @param _vodSubAppId 点播子应用 ID。
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
                     * 获取录制文件名。
支持的特殊占位符有：
{StreamID}: 流ID
{StartYear}: 开始时间-年
{StartMonth}: 开始时间-月
{StartDay}: 开始时间-日
{StartHour}: 开始时间-小时
{StartMinute}: 开始时间-分钟
{StartSecond}: 开始时间-秒
{StartMillisecond}: 开始时间-毫秒
{EndYear}: 结束时间-年
{EndMonth}: 结束时间-月
{EndDay}: 结束时间-日
{EndHour}: 结束时间-小时
{EndMinute}: 结束时间-分钟
{EndSecond}: 结束时间-秒
{EndMillisecond}: 结束时间-毫秒

若未设置默认录制文件名为{StreamID}_{StartYear}-{StartMonth}-{StartDay}-{StartHour}-{StartMinute}-{StartSecond}_{EndYear}-{EndMonth}-{EndDay}-{EndHour}-{EndMinute}-{EndSecond}
                     * @return VodFileName 录制文件名。
支持的特殊占位符有：
{StreamID}: 流ID
{StartYear}: 开始时间-年
{StartMonth}: 开始时间-月
{StartDay}: 开始时间-日
{StartHour}: 开始时间-小时
{StartMinute}: 开始时间-分钟
{StartSecond}: 开始时间-秒
{StartMillisecond}: 开始时间-毫秒
{EndYear}: 结束时间-年
{EndMonth}: 结束时间-月
{EndDay}: 结束时间-日
{EndHour}: 结束时间-小时
{EndMinute}: 结束时间-分钟
{EndSecond}: 结束时间-秒
{EndMillisecond}: 结束时间-毫秒

若未设置默认录制文件名为{StreamID}_{StartYear}-{StartMonth}-{StartDay}-{StartHour}-{StartMinute}-{StartSecond}_{EndYear}-{EndMonth}-{EndDay}-{EndHour}-{EndMinute}-{EndSecond}
                     * 
                     */
                    std::string GetVodFileName() const;

                    /**
                     * 设置录制文件名。
支持的特殊占位符有：
{StreamID}: 流ID
{StartYear}: 开始时间-年
{StartMonth}: 开始时间-月
{StartDay}: 开始时间-日
{StartHour}: 开始时间-小时
{StartMinute}: 开始时间-分钟
{StartSecond}: 开始时间-秒
{StartMillisecond}: 开始时间-毫秒
{EndYear}: 结束时间-年
{EndMonth}: 结束时间-月
{EndDay}: 结束时间-日
{EndHour}: 结束时间-小时
{EndMinute}: 结束时间-分钟
{EndSecond}: 结束时间-秒
{EndMillisecond}: 结束时间-毫秒

若未设置默认录制文件名为{StreamID}_{StartYear}-{StartMonth}-{StartDay}-{StartHour}-{StartMinute}-{StartSecond}_{EndYear}-{EndMonth}-{EndDay}-{EndHour}-{EndMinute}-{EndSecond}
                     * @param _vodFileName 录制文件名。
支持的特殊占位符有：
{StreamID}: 流ID
{StartYear}: 开始时间-年
{StartMonth}: 开始时间-月
{StartDay}: 开始时间-日
{StartHour}: 开始时间-小时
{StartMinute}: 开始时间-分钟
{StartSecond}: 开始时间-秒
{StartMillisecond}: 开始时间-毫秒
{EndYear}: 结束时间-年
{EndMonth}: 结束时间-月
{EndDay}: 结束时间-日
{EndHour}: 结束时间-小时
{EndMinute}: 结束时间-分钟
{EndSecond}: 结束时间-秒
{EndMillisecond}: 结束时间-毫秒

若未设置默认录制文件名为{StreamID}_{StartYear}-{StartMonth}-{StartDay}-{StartHour}-{StartMinute}-{StartSecond}_{EndYear}-{EndMonth}-{EndDay}-{EndHour}-{EndMinute}-{EndSecond}
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
                     * 获取任务流
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Procedure 任务流
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcedure() const;

                    /**
                     * 设置任务流
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _procedure 任务流
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
                     * 获取视频存储策略。
normal：标准存储。
cold：低频存储。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageMode 视频存储策略。
normal：标准存储。
cold：低频存储。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorageMode() const;

                    /**
                     * 设置视频存储策略。
normal：标准存储。
cold：低频存储。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageMode 视频存储策略。
normal：标准存储。
cold：低频存储。
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
                     * 获取点播应用分类
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassId 点播应用分类
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置点播应用分类
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _classId 点播应用分类
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
                     * 获取存储至 cos 的 bucket 桶名称。
注：CosBucketName参数值不能包含-[appid] 部分。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosBucketName 存储至 cos 的 bucket 桶名称。
注：CosBucketName参数值不能包含-[appid] 部分。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置存储至 cos 的 bucket 桶名称。
注：CosBucketName参数值不能包含-[appid] 部分。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosBucketName 存储至 cos 的 bucket 桶名称。
注：CosBucketName参数值不能包含-[appid] 部分。
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
                     * 获取存储至 cos 的 bucket 区域。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosBucketRegion 存储至 cos 的 bucket 区域。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosBucketRegion() const;

                    /**
                     * 设置存储至 cos 的 bucket 区域。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosBucketRegion 存储至 cos 的 bucket 区域。
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
                     * 获取存储至 cos 的 bucket 路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosBucketPath 存储至 cos 的 bucket 路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosBucketPath() const;

                    /**
                     * 设置存储至 cos 的 bucket 路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosBucketPath 存储至 cos 的 bucket 路径。
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
                     * 录制间隔。
单位秒，默认：1800。
取值范围：30-7200。
此参数对 HLS 无效，当录制 HLS 时从推流到断流生成一个文件。
                     */
                    int64_t m_recordInterval;
                    bool m_recordIntervalHasBeenSet;

                    /**
                     * 录制存储时长。
单位秒，取值范围： 0 - 1500天。
0：表示永久存储。
                     */
                    int64_t m_storageTime;
                    bool m_storageTimeHasBeenSet;

                    /**
                     * 是否开启当前格式录制，默认值为0，0：否， 1：是。
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 点播子应用 ID。
                     */
                    int64_t m_vodSubAppId;
                    bool m_vodSubAppIdHasBeenSet;

                    /**
                     * 录制文件名。
支持的特殊占位符有：
{StreamID}: 流ID
{StartYear}: 开始时间-年
{StartMonth}: 开始时间-月
{StartDay}: 开始时间-日
{StartHour}: 开始时间-小时
{StartMinute}: 开始时间-分钟
{StartSecond}: 开始时间-秒
{StartMillisecond}: 开始时间-毫秒
{EndYear}: 结束时间-年
{EndMonth}: 结束时间-月
{EndDay}: 结束时间-日
{EndHour}: 结束时间-小时
{EndMinute}: 结束时间-分钟
{EndSecond}: 结束时间-秒
{EndMillisecond}: 结束时间-毫秒

若未设置默认录制文件名为{StreamID}_{StartYear}-{StartMonth}-{StartDay}-{StartHour}-{StartMinute}-{StartSecond}_{EndYear}-{EndMonth}-{EndDay}-{EndHour}-{EndMinute}-{EndSecond}
                     */
                    std::string m_vodFileName;
                    bool m_vodFileNameHasBeenSet;

                    /**
                     * 任务流
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_procedure;
                    bool m_procedureHasBeenSet;

                    /**
                     * 视频存储策略。
normal：标准存储。
cold：低频存储。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * 点播应用分类
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * 存储至 cos 的 bucket 桶名称。
注：CosBucketName参数值不能包含-[appid] 部分。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * 存储至 cos 的 bucket 区域。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosBucketRegion;
                    bool m_cosBucketRegionHasBeenSet;

                    /**
                     * 存储至 cos 的 bucket 路径。
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
