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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SPARKAPPLICATIONSLIST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SPARKAPPLICATIONSLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * spark任务列表
                */
                class SparkApplicationsList : public AbstractModel
                {
                public:
                    SparkApplicationsList();
                    ~SparkApplicationsList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用id
                     * @return ID 应用id
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置应用id
                     * @param _iD 应用id
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取应用名称
                     * @return Name 应用名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置应用名称
                     * @param _name 应用名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取用户
                     * @return User 用户
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置用户
                     * @param _user 用户
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取起始时间
                     * @return StartTime 起始时间
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置起始时间
                     * @param _startTime 起始时间
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取持续时间
                     * @return Duration 持续时间
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置持续时间
                     * @param _duration 持续时间
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return State 状态
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置状态
                     * @param _state 状态
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return ApplicationType 类型
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置类型
                     * @param _applicationType 类型
                     * 
                     */
                    void SetApplicationType(const std::string& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取核数*秒
                     * @return CoreSeconds 核数*秒
                     * 
                     */
                    int64_t GetCoreSeconds() const;

                    /**
                     * 设置核数*秒
                     * @param _coreSeconds 核数*秒
                     * 
                     */
                    void SetCoreSeconds(const int64_t& _coreSeconds);

                    /**
                     * 判断参数 CoreSeconds 是否已赋值
                     * @return CoreSeconds 是否已赋值
                     * 
                     */
                    bool CoreSecondsHasBeenSet() const;

                    /**
                     * 获取内存MB*秒
                     * @return MemorySeconds 内存MB*秒
                     * 
                     */
                    std::string GetMemorySeconds() const;

                    /**
                     * 设置内存MB*秒
                     * @param _memorySeconds 内存MB*秒
                     * 
                     */
                    void SetMemorySeconds(const std::string& _memorySeconds);

                    /**
                     * 判断参数 MemorySeconds 是否已赋值
                     * @return MemorySeconds 是否已赋值
                     * 
                     */
                    bool MemorySecondsHasBeenSet() const;

                    /**
                     * 获取洞察结果
                     * @return Insight 洞察结果
                     * 
                     */
                    std::string GetInsight() const;

                    /**
                     * 设置洞察结果
                     * @param _insight 洞察结果
                     * 
                     */
                    void SetInsight(const std::string& _insight);

                    /**
                     * 判断参数 Insight 是否已赋值
                     * @return Insight 是否已赋值
                     * 
                     */
                    bool InsightHasBeenSet() const;

                private:

                    /**
                     * 应用id
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 应用名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 用户
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 起始时间
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 持续时间
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 类型
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * 核数*秒
                     */
                    int64_t m_coreSeconds;
                    bool m_coreSecondsHasBeenSet;

                    /**
                     * 内存MB*秒
                     */
                    std::string m_memorySeconds;
                    bool m_memorySecondsHasBeenSet;

                    /**
                     * 洞察结果
                     */
                    std::string m_insight;
                    bool m_insightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SPARKAPPLICATIONSLIST_H_
