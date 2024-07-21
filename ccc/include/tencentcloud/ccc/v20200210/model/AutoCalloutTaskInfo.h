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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AUTOCALLOUTTASKINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AUTOCALLOUTTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 自动外呼任务列表项
                */
                class AutoCalloutTaskInfo : public AbstractModel
                {
                public:
                    AutoCalloutTaskInfo();
                    ~AutoCalloutTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务名
                     * @return Name 任务名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务名
                     * @param _name 任务名
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
                     * 获取被叫数量
                     * @return CalleeCount 被叫数量
                     * 
                     */
                    uint64_t GetCalleeCount() const;

                    /**
                     * 设置被叫数量
                     * @param _calleeCount 被叫数量
                     * 
                     */
                    void SetCalleeCount(const uint64_t& _calleeCount);

                    /**
                     * 判断参数 CalleeCount 是否已赋值
                     * @return CalleeCount 是否已赋值
                     * 
                     */
                    bool CalleeCountHasBeenSet() const;

                    /**
                     * 获取主叫号码列表
                     * @return Callers 主叫号码列表
                     * 
                     */
                    std::vector<std::string> GetCallers() const;

                    /**
                     * 设置主叫号码列表
                     * @param _callers 主叫号码列表
                     * 
                     */
                    void SetCallers(const std::vector<std::string>& _callers);

                    /**
                     * 判断参数 Callers 是否已赋值
                     * @return Callers 是否已赋值
                     * 
                     */
                    bool CallersHasBeenSet() const;

                    /**
                     * 获取起始时间戳
                     * @return NotBefore 起始时间戳
                     * 
                     */
                    int64_t GetNotBefore() const;

                    /**
                     * 设置起始时间戳
                     * @param _notBefore 起始时间戳
                     * 
                     */
                    void SetNotBefore(const int64_t& _notBefore);

                    /**
                     * 判断参数 NotBefore 是否已赋值
                     * @return NotBefore 是否已赋值
                     * 
                     */
                    bool NotBeforeHasBeenSet() const;

                    /**
                     * 获取结束时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotAfter 结束时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNotAfter() const;

                    /**
                     * 设置结束时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notAfter 结束时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNotAfter(const int64_t& _notAfter);

                    /**
                     * 判断参数 NotAfter 是否已赋值
                     * @return NotAfter 是否已赋值
                     * 
                     */
                    bool NotAfterHasBeenSet() const;

                    /**
                     * 获取任务使用的IvrId
                     * @return IvrId 任务使用的IvrId
                     * 
                     */
                    uint64_t GetIvrId() const;

                    /**
                     * 设置任务使用的IvrId
                     * @param _ivrId 任务使用的IvrId
                     * 
                     */
                    void SetIvrId(const uint64_t& _ivrId);

                    /**
                     * 判断参数 IvrId 是否已赋值
                     * @return IvrId 是否已赋值
                     * 
                     */
                    bool IvrIdHasBeenSet() const;

                    /**
                     * 获取任务状态：
0初始：任务创建，呼叫未开始
1运行中
2 已完成：任务中所有呼叫完成
3结束中：任务到期，但仍有部分呼叫未结束
4已结束：任务到期终止
                     * @return State 任务状态：
0初始：任务创建，呼叫未开始
1运行中
2 已完成：任务中所有呼叫完成
3结束中：任务到期，但仍有部分呼叫未结束
4已结束：任务到期终止
                     * 
                     */
                    uint64_t GetState() const;

                    /**
                     * 设置任务状态：
0初始：任务创建，呼叫未开始
1运行中
2 已完成：任务中所有呼叫完成
3结束中：任务到期，但仍有部分呼叫未结束
4已结束：任务到期终止
                     * @param _state 任务状态：
0初始：任务创建，呼叫未开始
1运行中
2 已完成：任务中所有呼叫完成
3结束中：任务到期，但仍有部分呼叫未结束
4已结束：任务到期终止
                     * 
                     */
                    void SetState(const uint64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取任务Id
                     * @return TaskId 任务Id
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置任务Id
                     * @param _taskId 任务Id
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 任务名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 被叫数量
                     */
                    uint64_t m_calleeCount;
                    bool m_calleeCountHasBeenSet;

                    /**
                     * 主叫号码列表
                     */
                    std::vector<std::string> m_callers;
                    bool m_callersHasBeenSet;

                    /**
                     * 起始时间戳
                     */
                    int64_t m_notBefore;
                    bool m_notBeforeHasBeenSet;

                    /**
                     * 结束时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_notAfter;
                    bool m_notAfterHasBeenSet;

                    /**
                     * 任务使用的IvrId
                     */
                    uint64_t m_ivrId;
                    bool m_ivrIdHasBeenSet;

                    /**
                     * 任务状态：
0初始：任务创建，呼叫未开始
1运行中
2 已完成：任务中所有呼叫完成
3结束中：任务到期，但仍有部分呼叫未结束
4已结束：任务到期终止
                     */
                    uint64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 任务Id
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AUTOCALLOUTTASKINFO_H_
