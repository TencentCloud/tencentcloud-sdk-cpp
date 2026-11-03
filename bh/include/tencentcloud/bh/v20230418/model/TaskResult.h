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
                     * 获取<p>运维任务结果日志ID</p>
                     * @return Id <p>运维任务结果日志ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>运维任务结果日志ID</p>
                     * @param _id <p>运维任务结果日志ID</p>
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
                     * 获取<p>运维任务ID</p>
                     * @return OperationId <p>运维任务ID</p>
                     * 
                     */
                    std::string GetOperationId() const;

                    /**
                     * 设置<p>运维任务ID</p>
                     * @param _operationId <p>运维任务ID</p>
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
                     * 获取<p>运维任务名称</p>
                     * @return Name <p>运维任务名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>运维任务名称</p>
                     * @param _name <p>运维任务名称</p>
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
                     * 获取<p>执行任务来源IP</p>
                     * @return FromIp <p>执行任务来源IP</p>
                     * 
                     */
                    std::string GetFromIp() const;

                    /**
                     * 设置<p>执行任务来源IP</p>
                     * @param _fromIp <p>执行任务来源IP</p>
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
                     * 获取<p>运维任务所属用户</p>
                     * @return UserName <p>运维任务所属用户</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>运维任务所属用户</p>
                     * @param _userName <p>运维任务所属用户</p>
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
                     * 获取<p>运维任务所属用户的姓名</p>
                     * @return RealName <p>运维任务所属用户的姓名</p>
                     * 
                     */
                    std::string GetRealName() const;

                    /**
                     * 设置<p>运维任务所属用户的姓名</p>
                     * @param _realName <p>运维任务所属用户的姓名</p>
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
                     * 获取<p>运维任务执行状态 1 - 执行中，2 - 成功，3 - 失败，4 - 部分失败</p>
                     * @return Status <p>运维任务执行状态 1 - 执行中，2 - 成功，3 - 失败，4 - 部分失败</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>运维任务执行状态 1 - 执行中，2 - 成功，3 - 失败，4 - 部分失败</p>
                     * @param _status <p>运维任务执行状态 1 - 执行中，2 - 成功，3 - 失败，4 - 部分失败</p>
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
                     * 获取<p>运维任务开始时间</p>
                     * @return StartTime <p>运维任务开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>运维任务开始时间</p>
                     * @param _startTime <p>运维任务开始时间</p>
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
                     * 获取<p>运维任务结束时间</p>
                     * @return EndTime <p>运维任务结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>运维任务结束时间</p>
                     * @param _endTime <p>运维任务结束时间</p>
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
                     * 获取<p>任务类别</p><p>枚举值：</p><ul><li>0： Linux 类型任务（默认类型）</li><li>1： Windows 类型任务</li></ul><p>默认值：0</p>
                     * @return Category <p>任务类别</p><p>枚举值：</p><ul><li>0： Linux 类型任务（默认类型）</li><li>1： Windows 类型任务</li></ul><p>默认值：0</p>
                     * 
                     */
                    int64_t GetCategory() const;

                    /**
                     * 设置<p>任务类别</p><p>枚举值：</p><ul><li>0： Linux 类型任务（默认类型）</li><li>1： Windows 类型任务</li></ul><p>默认值：0</p>
                     * @param _category <p>任务类别</p><p>枚举值：</p><ul><li>0： Linux 类型任务（默认类型）</li><li>1： Windows 类型任务</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetCategory(const int64_t& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                private:

                    /**
                     * <p>运维任务结果日志ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>运维任务ID</p>
                     */
                    std::string m_operationId;
                    bool m_operationIdHasBeenSet;

                    /**
                     * <p>运维任务名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>执行任务来源IP</p>
                     */
                    std::string m_fromIp;
                    bool m_fromIpHasBeenSet;

                    /**
                     * <p>运维任务所属用户</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>运维任务所属用户的姓名</p>
                     */
                    std::string m_realName;
                    bool m_realNameHasBeenSet;

                    /**
                     * <p>运维任务执行状态 1 - 执行中，2 - 成功，3 - 失败，4 - 部分失败</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>运维任务开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>运维任务结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>任务类别</p><p>枚举值：</p><ul><li>0： Linux 类型任务（默认类型）</li><li>1： Windows 类型任务</li></ul><p>默认值：0</p>
                     */
                    int64_t m_category;
                    bool m_categoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_TASKRESULT_H_
