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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SCREENINSTANCEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SCREENINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 实例统计信息展示
                */
                class ScreenInstanceInfo : public AbstractModel
                {
                public:
                    ScreenInstanceInfo();
                    ~ScreenInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取统计标示 0：全部、1：当前天、2：昨天
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CountTag 统计标示 0：全部、1：当前天、2：昨天
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCountTag() const;

                    /**
                     * 设置统计标示 0：全部、1：当前天、2：昨天
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _countTag 统计标示 0：全部、1：当前天、2：昨天
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCountTag(const uint64_t& _countTag);

                    /**
                     * 判断参数 CountTag 是否已赋值
                     * @return CountTag 是否已赋值
                     * 
                     */
                    bool CountTagHasBeenSet() const;

                    /**
                     * 获取总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalNum 总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalNum() const;

                    /**
                     * 设置总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalNum 总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalNum(const uint64_t& _totalNum);

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取运行中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningNum 运行中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRunningNum() const;

                    /**
                     * 设置运行中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runningNum 运行中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunningNum(const uint64_t& _runningNum);

                    /**
                     * 判断参数 RunningNum 是否已赋值
                     * @return RunningNum 是否已赋值
                     * 
                     */
                    bool RunningNumHasBeenSet() const;

                    /**
                     * 获取等待运行
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WaitRunningNum 等待运行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWaitRunningNum() const;

                    /**
                     * 设置等待运行
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _waitRunningNum 等待运行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWaitRunningNum(const uint64_t& _waitRunningNum);

                    /**
                     * 判断参数 WaitRunningNum 是否已赋值
                     * @return WaitRunningNum 是否已赋值
                     * 
                     */
                    bool WaitRunningNumHasBeenSet() const;

                    /**
                     * 获取等待上游
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyNum 等待上游
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDependencyNum() const;

                    /**
                     * 设置等待上游
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependencyNum 等待上游
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDependencyNum(const uint64_t& _dependencyNum);

                    /**
                     * 判断参数 DependencyNum 是否已赋值
                     * @return DependencyNum 是否已赋值
                     * 
                     */
                    bool DependencyNumHasBeenSet() const;

                    /**
                     * 获取等待事件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WaitEventNum 等待事件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWaitEventNum() const;

                    /**
                     * 设置等待事件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _waitEventNum 等待事件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWaitEventNum(const std::string& _waitEventNum);

                    /**
                     * 判断参数 WaitEventNum 是否已赋值
                     * @return WaitEventNum 是否已赋值
                     * 
                     */
                    bool WaitEventNumHasBeenSet() const;

                    /**
                     * 获取正在终止
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StoppingNum 正在终止
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStoppingNum() const;

                    /**
                     * 设置正在终止
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stoppingNum 正在终止
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStoppingNum(const uint64_t& _stoppingNum);

                    /**
                     * 判断参数 StoppingNum 是否已赋值
                     * @return StoppingNum 是否已赋值
                     * 
                     */
                    bool StoppingNumHasBeenSet() const;

                    /**
                     * 获取成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SucceedNum 成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSucceedNum() const;

                    /**
                     * 设置成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _succeedNum 成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSucceedNum(const uint64_t& _succeedNum);

                    /**
                     * 判断参数 SucceedNum 是否已赋值
                     * @return SucceedNum 是否已赋值
                     * 
                     */
                    bool SucceedNumHasBeenSet() const;

                    /**
                     * 获取失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailedNum 失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFailedNum() const;

                    /**
                     * 设置失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failedNum 失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailedNum(const uint64_t& _failedNum);

                    /**
                     * 判断参数 FailedNum 是否已赋值
                     * @return FailedNum 是否已赋值
                     * 
                     */
                    bool FailedNumHasBeenSet() const;

                    /**
                     * 获取跳过运行总数
                     * @return SkipRunningNum 跳过运行总数
                     * 
                     */
                    int64_t GetSkipRunningNum() const;

                    /**
                     * 设置跳过运行总数
                     * @param _skipRunningNum 跳过运行总数
                     * 
                     */
                    void SetSkipRunningNum(const int64_t& _skipRunningNum);

                    /**
                     * 判断参数 SkipRunningNum 是否已赋值
                     * @return SkipRunningNum 是否已赋值
                     * 
                     */
                    bool SkipRunningNumHasBeenSet() const;

                private:

                    /**
                     * 统计标示 0：全部、1：当前天、2：昨天
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_countTag;
                    bool m_countTagHasBeenSet;

                    /**
                     * 总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * 运行中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_runningNum;
                    bool m_runningNumHasBeenSet;

                    /**
                     * 等待运行
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_waitRunningNum;
                    bool m_waitRunningNumHasBeenSet;

                    /**
                     * 等待上游
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_dependencyNum;
                    bool m_dependencyNumHasBeenSet;

                    /**
                     * 等待事件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_waitEventNum;
                    bool m_waitEventNumHasBeenSet;

                    /**
                     * 正在终止
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_stoppingNum;
                    bool m_stoppingNumHasBeenSet;

                    /**
                     * 成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_succeedNum;
                    bool m_succeedNumHasBeenSet;

                    /**
                     * 失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_failedNum;
                    bool m_failedNumHasBeenSet;

                    /**
                     * 跳过运行总数
                     */
                    int64_t m_skipRunningNum;
                    bool m_skipRunningNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SCREENINSTANCEINFO_H_
