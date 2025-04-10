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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_OPERATIONTASK_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_OPERATIONTASK_H_

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
                * 运维任务信息
                */
                class OperationTask : public AbstractModel
                {
                public:
                    OperationTask();
                    ~OperationTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取运维任务主键ID
                     * @return Id 运维任务主键ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置运维任务主键ID
                     * @param _id 运维任务主键ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

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
                     * 获取创建用户
                     * @return UserName 创建用户
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置创建用户
                     * @param _userName 创建用户
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
                     * 获取运维人员姓名
                     * @return RealName 运维人员姓名
                     * 
                     */
                    std::string GetRealName() const;

                    /**
                     * 设置运维人员姓名
                     * @param _realName 运维人员姓名
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
                     * 获取任务类型，1 - 手工执行任务， 2 - 周期性任务
                     * @return Type 任务类型，1 - 手工执行任务， 2 - 周期性任务
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置任务类型，1 - 手工执行任务， 2 - 周期性任务
                     * @param _type 任务类型，1 - 手工执行任务， 2 - 周期性任务
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取周期性任务执行间隔，单位天
                     * @return Period 周期性任务执行间隔，单位天
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置周期性任务执行间隔，单位天
                     * @param _period 周期性任务执行间隔，单位天
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取执行账户
                     * @return NextTime 执行账户
                     * 
                     */
                    std::string GetNextTime() const;

                    /**
                     * 设置执行账户
                     * @param _nextTime 执行账户
                     * 
                     */
                    void SetNextTime(const std::string& _nextTime);

                    /**
                     * 判断参数 NextTime 是否已赋值
                     * @return NextTime 是否已赋值
                     * 
                     */
                    bool NextTimeHasBeenSet() const;

                    /**
                     * 获取下一次执行时间
                     * @return FirstTime 下一次执行时间
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置下一次执行时间
                     * @param _firstTime 下一次执行时间
                     * 
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     * 
                     */
                    bool FirstTimeHasBeenSet() const;

                private:

                    /**
                     * 运维任务主键ID
                     */
                    uint64_t m_id;
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
                     * 创建用户
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 运维人员姓名
                     */
                    std::string m_realName;
                    bool m_realNameHasBeenSet;

                    /**
                     * 任务类型，1 - 手工执行任务， 2 - 周期性任务
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 周期性任务执行间隔，单位天
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 执行账户
                     */
                    std::string m_nextTime;
                    bool m_nextTimeHasBeenSet;

                    /**
                     * 下一次执行时间
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_OPERATIONTASK_H_
