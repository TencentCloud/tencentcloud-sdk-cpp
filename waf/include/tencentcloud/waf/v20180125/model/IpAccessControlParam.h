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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_IPACCESSCONTROLPARAM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_IPACCESSCONTROLPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/JobDateTime.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * IP黑白名单参数结构体，主要用于IP黑白名单的导入。
                */
                class IpAccessControlParam : public AbstractModel
                {
                public:
                    IpAccessControlParam();
                    ~IpAccessControlParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP列表
                     * @return IpList IP列表
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置IP列表
                     * @param _ipList IP列表
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                    /**
                     * 获取valid_ts为有效日期，值为秒级时间戳（（如1680570420代表2023-04-04 09:07:00））
                     * @return ValidTs valid_ts为有效日期，值为秒级时间戳（（如1680570420代表2023-04-04 09:07:00））
                     * 
                     */
                    uint64_t GetValidTs() const;

                    /**
                     * 设置valid_ts为有效日期，值为秒级时间戳（（如1680570420代表2023-04-04 09:07:00））
                     * @param _validTs valid_ts为有效日期，值为秒级时间戳（（如1680570420代表2023-04-04 09:07:00））
                     * 
                     */
                    void SetValidTs(const uint64_t& _validTs);

                    /**
                     * 判断参数 ValidTs 是否已赋值
                     * @return ValidTs 是否已赋值
                     * 
                     */
                    bool ValidTsHasBeenSet() const;

                    /**
                     * 获取42为黑名单，40为白名单
                     * @return ActionType 42为黑名单，40为白名单
                     * 
                     */
                    int64_t GetActionType() const;

                    /**
                     * 设置42为黑名单，40为白名单
                     * @param _actionType 42为黑名单，40为白名单
                     * 
                     */
                    void SetActionType(const int64_t& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Note 备注
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置备注
                     * @param _note 备注
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取任务类型（TimedJob/CronJob）
                     * @return JobType 任务类型（TimedJob/CronJob）
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置任务类型（TimedJob/CronJob）
                     * @param _jobType 任务类型（TimedJob/CronJob）
                     * 
                     */
                    void SetJobType(const std::string& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取任务时间配置
                     * @return JobDateTime 任务时间配置
                     * 
                     */
                    JobDateTime GetJobDateTime() const;

                    /**
                     * 设置任务时间配置
                     * @param _jobDateTime 任务时间配置
                     * 
                     */
                    void SetJobDateTime(const JobDateTime& _jobDateTime);

                    /**
                     * 判断参数 JobDateTime 是否已赋值
                     * @return JobDateTime 是否已赋值
                     * 
                     */
                    bool JobDateTimeHasBeenSet() const;

                    /**
                     * 获取生效状态
                     * @return ValidStatus 生效状态
                     * 
                     */
                    int64_t GetValidStatus() const;

                    /**
                     * 设置生效状态
                     * @param _validStatus 生效状态
                     * 
                     */
                    void SetValidStatus(const int64_t& _validStatus);

                    /**
                     * 判断参数 ValidStatus 是否已赋值
                     * @return ValidStatus 是否已赋值
                     * 
                     */
                    bool ValidStatusHasBeenSet() const;

                private:

                    /**
                     * IP列表
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * valid_ts为有效日期，值为秒级时间戳（（如1680570420代表2023-04-04 09:07:00））
                     */
                    uint64_t m_validTs;
                    bool m_validTsHasBeenSet;

                    /**
                     * 42为黑名单，40为白名单
                     */
                    int64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * 任务类型（TimedJob/CronJob）
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * 任务时间配置
                     */
                    JobDateTime m_jobDateTime;
                    bool m_jobDateTimeHasBeenSet;

                    /**
                     * 生效状态
                     */
                    int64_t m_validStatus;
                    bool m_validStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_IPACCESSCONTROLPARAM_H_
