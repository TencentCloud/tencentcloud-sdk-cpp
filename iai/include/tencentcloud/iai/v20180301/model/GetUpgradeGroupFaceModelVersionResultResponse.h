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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_GETUPGRADEGROUPFACEMODELVERSIONRESULTRESPONSE_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_GETUPGRADEGROUPFACEMODELVERSIONRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetUpgradeGroupFaceModelVersionResult返回参数结构体
                */
                class GetUpgradeGroupFaceModelVersionResultResponse : public AbstractModel
                {
                public:
                    GetUpgradeGroupFaceModelVersionResultResponse();
                    ~GetUpgradeGroupFaceModelVersionResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取人员升级任务预估结束时间。 StartTimestamp的值是自 Unix 纪元时间到人员查重任务预估结束的毫秒数。  
Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 00:00:00。 
如果为0表示这个任务已经执行完毕。
                     * @return EndTimestamp 人员升级任务预估结束时间。 StartTimestamp的值是自 Unix 纪元时间到人员查重任务预估结束的毫秒数。  
Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 00:00:00。 
如果为0表示这个任务已经执行完毕。
                     * 
                     */
                    uint64_t GetEndTimestamp() const;

                    /**
                     * 判断参数 EndTimestamp 是否已赋值
                     * @return EndTimestamp 是否已赋值
                     * 
                     */
                    bool EndTimestampHasBeenSet() const;

                    /**
                     * 获取升级任务完成进度。取值[0.0，100.0]。
                     * @return Progress 升级任务完成进度。取值[0.0，100.0]。
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取0表示升级中，1表示升级完毕，2表示回滚完毕。
                     * @return Status 0表示升级中，1表示升级完毕，2表示回滚完毕。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取升级起始时间。 
StartTime的值是自 Unix 纪元时间到Group创建时间的毫秒数。 
Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 00:00:00。 
有关更多信息，请参阅 Unix 时间。
                     * @return StartTime 升级起始时间。 
StartTime的值是自 Unix 纪元时间到Group创建时间的毫秒数。 
Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 00:00:00。 
有关更多信息，请参阅 Unix 时间。
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取当前算法模型版本。
                     * @return FromFaceModelVersion 当前算法模型版本。
                     * 
                     */
                    std::string GetFromFaceModelVersion() const;

                    /**
                     * 判断参数 FromFaceModelVersion 是否已赋值
                     * @return FromFaceModelVersion 是否已赋值
                     * 
                     */
                    bool FromFaceModelVersionHasBeenSet() const;

                    /**
                     * 获取目标算法模型版本。
                     * @return ToFaceModelVersion 目标算法模型版本。
                     * 
                     */
                    std::string GetToFaceModelVersion() const;

                    /**
                     * 判断参数 ToFaceModelVersion 是否已赋值
                     * @return ToFaceModelVersion 是否已赋值
                     * 
                     */
                    bool ToFaceModelVersionHasBeenSet() const;

                    /**
                     * 获取人员库ID。
                     * @return GroupId 人员库ID。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取无法升级的人脸Id信息，文件格式为json。半小时有效
                     * @return FailedFacesUrl 无法升级的人脸Id信息，文件格式为json。半小时有效
                     * 
                     */
                    std::string GetFailedFacesUrl() const;

                    /**
                     * 判断参数 FailedFacesUrl 是否已赋值
                     * @return FailedFacesUrl 是否已赋值
                     * 
                     */
                    bool FailedFacesUrlHasBeenSet() const;

                private:

                    /**
                     * 人员升级任务预估结束时间。 StartTimestamp的值是自 Unix 纪元时间到人员查重任务预估结束的毫秒数。  
Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 00:00:00。 
如果为0表示这个任务已经执行完毕。
                     */
                    uint64_t m_endTimestamp;
                    bool m_endTimestampHasBeenSet;

                    /**
                     * 升级任务完成进度。取值[0.0，100.0]。
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 0表示升级中，1表示升级完毕，2表示回滚完毕。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 升级起始时间。 
StartTime的值是自 Unix 纪元时间到Group创建时间的毫秒数。 
Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 00:00:00。 
有关更多信息，请参阅 Unix 时间。
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 当前算法模型版本。
                     */
                    std::string m_fromFaceModelVersion;
                    bool m_fromFaceModelVersionHasBeenSet;

                    /**
                     * 目标算法模型版本。
                     */
                    std::string m_toFaceModelVersion;
                    bool m_toFaceModelVersionHasBeenSet;

                    /**
                     * 人员库ID。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 无法升级的人脸Id信息，文件格式为json。半小时有效
                     */
                    std::string m_failedFacesUrl;
                    bool m_failedFacesUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_GETUPGRADEGROUPFACEMODELVERSIONRESULTRESPONSE_H_
