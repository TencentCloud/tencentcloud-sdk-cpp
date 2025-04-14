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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_TASKRESULT_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_TASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 运维父任务执行结果
                */
                class TaskResult : public AbstractModel
                {
                public:
                    TaskResult();
                    ~TaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取运维任务结果日志ID
                     * @return Id 运维任务结果日志ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置运维任务结果日志ID
                     * @param _id 运维任务结果日志ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取运维任务ID
                     * @return OperationId 运维任务ID
                     * 
                     */
                    std::string GetOperationId() const;

                    /**
                     * 设置运维任务ID
                     * @param _operationId 运维任务ID
                     * 
                     */
                    void SetOperationId(const std::string& _operationId);

                    /**
                     * 判断参数 OperationId 是否已赋值
                     * @return OperationId 是否已赋值
                     * 
                     */
                    bool OperationIdHasBeenSet() const;

                    /**
                     * 获取运维任务名称
                     * @return Name 运维任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置运维任务名称
                     * @param _name 运维任务名称
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
                     * 获取执行任务来源IP
                     * @return FromIp 执行任务来源IP
                     * 
                     */
                    std::string GetFromIp() const;

                    /**
                     * 设置执行任务来源IP
                     * @param _fromIp 执行任务来源IP
                     * 
                     */
                    void SetFromIp(const std::string& _fromIp);

                    /**
                     * 判断参数 FromIp 是否已赋值
                     * @return FromIp 是否已赋值
                     * 
                     */
                    bool FromIpHasBeenSet() const;

                    /**
                     * 获取运维任务所属用户
                     * @return UserName 运维任务所属用户
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置运维任务所属用户
                     * @param _userName 运维任务所属用户
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取运维任务所属用户的姓名
                     * @return RealName 运维任务所属用户的姓名
                     * 
                     */
                    std::string GetRealName() const;

                    /**
                     * 设置运维任务所属用户的姓名
                     * @param _realName 运维任务所属用户的姓名
                     * 
                     */
                    void SetRealName(const std::string& _realName);

                    /**
                     * 判断参数 RealName 是否已赋值
                     * @return RealName 是否已赋值
                     * 
                     */
                    bool RealNameHasBeenSet() const;

                    /**
                     * 获取运维任务执行状态 1 - 执行中，2 - 成功，3 - 失败，4 - 部分失败
                     * @return Status 运维任务执行状态 1 - 执行中，2 - 成功，3 - 失败，4 - 部分失败
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置运维任务执行状态 1 - 执行中，2 - 成功，3 - 失败，4 - 部分失败
                     * @param _status 运维任务执行状态 1 - 执行中，2 - 成功，3 - 失败，4 - 部分失败
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取运维任务开始时间
                     * @return StartTime 运维任务开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置运维任务开始时间
                     * @param _startTime 运维任务开始时间
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
                     * 获取运维任务结束时间
                     * @return EndTime 运维任务结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置运维任务结束时间
                     * @param _endTime 运维任务结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 运维任务结果日志ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 运维任务ID
                     */
                    std::string m_operationId;
                    bool m_operationIdHasBeenSet;

                    /**
                     * 运维任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 执行任务来源IP
                     */
                    std::string m_fromIp;
                    bool m_fromIpHasBeenSet;

                    /**
                     * 运维任务所属用户
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 运维任务所属用户的姓名
                     */
                    std::string m_realName;
                    bool m_realNameHasBeenSet;

                    /**
                     * 运维任务执行状态 1 - 执行中，2 - 成功，3 - 失败，4 - 部分失败
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 运维任务开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 运维任务结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_TASKRESULT_H_
