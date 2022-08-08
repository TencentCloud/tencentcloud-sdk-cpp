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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOG_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOG_H_

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
                * 实例日志实体
                */
                class InstanceLog : public AbstractModel
                {
                public:
                    InstanceLog();
                    ~InstanceLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param TaskId 任务ID
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取数据时间
                     * @return CurRunDate 数据时间
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置数据时间
                     * @param CurRunDate 数据时间
                     */
                    void SetCurRunDate(const std::string& _curRunDate);

                    /**
                     * 判断参数 CurRunDate 是否已赋值
                     * @return CurRunDate 是否已赋值
                     */
                    bool CurRunDateHasBeenSet() const;

                    /**
                     * 获取尝试运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tries 尝试运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTries() const;

                    /**
                     * 设置尝试运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tries 尝试运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTries(const std::string& _tries);

                    /**
                     * 判断参数 Tries 是否已赋值
                     * @return Tries 是否已赋值
                     */
                    bool TriesHasBeenSet() const;

                    /**
                     * 获取日志更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdate 日志更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLastUpdate() const;

                    /**
                     * 设置日志更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LastUpdate 日志更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLastUpdate(const std::string& _lastUpdate);

                    /**
                     * 判断参数 LastUpdate 是否已赋值
                     * @return LastUpdate 是否已赋值
                     */
                    bool LastUpdateHasBeenSet() const;

                    /**
                     * 获取日志所在节点
                     * @return BrokerIp 日志所在节点
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置日志所在节点
                     * @param BrokerIp 日志所在节点
                     */
                    void SetBrokerIp(const std::string& _brokerIp);

                    /**
                     * 判断参数 BrokerIp 是否已赋值
                     * @return BrokerIp 是否已赋值
                     */
                    bool BrokerIpHasBeenSet() const;

                    /**
                     * 获取文件名  含全路径
                     * @return OriginFileName 文件名  含全路径
                     */
                    std::string GetOriginFileName() const;

                    /**
                     * 设置文件名  含全路径
                     * @param OriginFileName 文件名  含全路径
                     */
                    void SetOriginFileName(const std::string& _originFileName);

                    /**
                     * 判断参数 OriginFileName 是否已赋值
                     * @return OriginFileName 是否已赋值
                     */
                    bool OriginFileNameHasBeenSet() const;

                    /**
                     * 获取日志创建时间
                     * @return CreateTime 日志创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置日志创建时间
                     * @param CreateTime 日志创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取实例日志类型, run: 运行; kill: 终止
                     * @return InstanceLogType 实例日志类型, run: 运行; kill: 终止
                     */
                    std::string GetInstanceLogType() const;

                    /**
                     * 设置实例日志类型, run: 运行; kill: 终止
                     * @param InstanceLogType 实例日志类型, run: 运行; kill: 终止
                     */
                    void SetInstanceLogType(const std::string& _instanceLogType);

                    /**
                     * 判断参数 InstanceLogType 是否已赋值
                     * @return InstanceLogType 是否已赋值
                     */
                    bool InstanceLogTypeHasBeenSet() const;

                    /**
                     * 获取运行耗时
                     * @return CostTime 运行耗时
                     */
                    double GetCostTime() const;

                    /**
                     * 设置运行耗时
                     * @param CostTime 运行耗时
                     */
                    void SetCostTime(const double& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     */
                    bool CostTimeHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 数据时间
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * 尝试运行次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tries;
                    bool m_triesHasBeenSet;

                    /**
                     * 日志更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastUpdate;
                    bool m_lastUpdateHasBeenSet;

                    /**
                     * 日志所在节点
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * 文件名  含全路径
                     */
                    std::string m_originFileName;
                    bool m_originFileNameHasBeenSet;

                    /**
                     * 日志创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例日志类型, run: 运行; kill: 终止
                     */
                    std::string m_instanceLogType;
                    bool m_instanceLogTypeHasBeenSet;

                    /**
                     * 运行耗时
                     */
                    double m_costTime;
                    bool m_costTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOG_H_
