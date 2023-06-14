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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_UPGRADEJOBINFO_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_UPGRADEJOBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 人员库升级任务信息
                */
                class UpgradeJobInfo : public AbstractModel
                {
                public:
                    UpgradeJobInfo();
                    ~UpgradeJobInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人员库升级任务ID，用于查询、获取升级的进度和结果。
                     * @return JobId 人员库升级任务ID，用于查询、获取升级的进度和结果。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置人员库升级任务ID，用于查询、获取升级的进度和结果。
                     * @param _jobId 人员库升级任务ID，用于查询、获取升级的进度和结果。
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取人员库ID。
                     * @return GroupId 人员库ID。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置人员库ID。
                     * @param _groupId 人员库ID。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取当前算法模型版本。
                     * @return FromFaceModelVersion 当前算法模型版本。
                     * 
                     */
                    std::string GetFromFaceModelVersion() const;

                    /**
                     * 设置当前算法模型版本。
                     * @param _fromFaceModelVersion 当前算法模型版本。
                     * 
                     */
                    void SetFromFaceModelVersion(const std::string& _fromFaceModelVersion);

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
                     * 设置目标算法模型版本。
                     * @param _toFaceModelVersion 目标算法模型版本。
                     * 
                     */
                    void SetToFaceModelVersion(const std::string& _toFaceModelVersion);

                    /**
                     * 判断参数 ToFaceModelVersion 是否已赋值
                     * @return ToFaceModelVersion 是否已赋值
                     * 
                     */
                    bool ToFaceModelVersionHasBeenSet() const;

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
                     * 设置升级起始时间。 
StartTime的值是自 Unix 纪元时间到Group创建时间的毫秒数。 
Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 00:00:00。 
有关更多信息，请参阅 Unix 时间。
                     * @param _startTime 升级起始时间。 
StartTime的值是自 Unix 纪元时间到Group创建时间的毫秒数。 
Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 00:00:00。 
有关更多信息，请参阅 Unix 时间。
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取0表示升级中，1表示升级完毕，2表示回滚完毕。
                     * @return Status 0表示升级中，1表示升级完毕，2表示回滚完毕。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0表示升级中，1表示升级完毕，2表示回滚完毕。
                     * @param _status 0表示升级中，1表示升级完毕，2表示回滚完毕。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 人员库升级任务ID，用于查询、获取升级的进度和结果。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 人员库ID。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

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
                     * 升级起始时间。 
StartTime的值是自 Unix 纪元时间到Group创建时间的毫秒数。 
Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 00:00:00。 
有关更多信息，请参阅 Unix 时间。
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 0表示升级中，1表示升级完毕，2表示回滚完毕。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_UPGRADEJOBINFO_H_
