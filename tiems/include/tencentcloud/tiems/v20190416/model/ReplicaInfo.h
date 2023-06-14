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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_REPLICAINFO_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_REPLICAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * 实例信息
                */
                class ReplicaInfo : public AbstractModel
                {
                public:
                    ReplicaInfo();
                    ~ReplicaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例名称
                     * @return Name 实例名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置实例名称
                     * @param _name 实例名称
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
                     * 获取弹性网卡模式时，弹性网卡Ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EniIp 弹性网卡模式时，弹性网卡Ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEniIp() const;

                    /**
                     * 设置弹性网卡模式时，弹性网卡Ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eniIp 弹性网卡模式时，弹性网卡Ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEniIp(const std::string& _eniIp);

                    /**
                     * 判断参数 EniIp 是否已赋值
                     * @return EniIp 是否已赋值
                     * 
                     */
                    bool EniIpHasBeenSet() const;

                    /**
                     * 获取Normal: 正常运行中; Abnormal: 异常；Waiting：等待中
                     * @return Status Normal: 正常运行中; Abnormal: 异常；Waiting：等待中
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Normal: 正常运行中; Abnormal: 异常；Waiting：等待中
                     * @param _status Normal: 正常运行中; Abnormal: 异常；Waiting：等待中
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取当 status为 Abnormal 的时候，一些额外的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 当 status为 Abnormal 的时候，一些额外的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置当 status为 Abnormal 的时候，一些额外的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message 当 status为 Abnormal 的时候，一些额外的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 启动时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取重启次数
                     * @return Restarted 重启次数
                     * 
                     */
                    uint64_t GetRestarted() const;

                    /**
                     * 设置重启次数
                     * @param _restarted 重启次数
                     * 
                     */
                    void SetRestarted(const uint64_t& _restarted);

                    /**
                     * 判断参数 Restarted 是否已赋值
                     * @return Restarted 是否已赋值
                     * 
                     */
                    bool RestartedHasBeenSet() const;

                private:

                    /**
                     * 实例名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 弹性网卡模式时，弹性网卡Ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eniIp;
                    bool m_eniIpHasBeenSet;

                    /**
                     * Normal: 正常运行中; Abnormal: 异常；Waiting：等待中
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 当 status为 Abnormal 的时候，一些额外的信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 重启次数
                     */
                    uint64_t m_restarted;
                    bool m_restartedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_REPLICAINFO_H_
