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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEAUDITCONFIGRESPONSE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEAUDITCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeAuditConfig返回参数结构体
                */
                class DescribeAuditConfigResponse : public AbstractModel
                {
                public:
                    DescribeAuditConfigResponse();
                    ~DescribeAuditConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取true表示全审计，false表示规则审计
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuditAll true表示全审计，false表示规则审计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAuditAll() const;

                    /**
                     * 判断参数 AuditAll 是否已赋值
                     * @return AuditAll 是否已赋值
                     * 
                     */
                    bool AuditAllHasBeenSet() const;

                    /**
                     * 获取该实例开通数据库审计的时间。
                     * @return CreateTime 该实例开通数据库审计的时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取审计日志保存时长。
单位：天。目前支持的保存时长包括：0、30、180、365，1095、1825。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogExpireDay 审计日志保存时长。
单位：天。目前支持的保存时长包括：0、30、180、365，1095、1825。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLogExpireDay() const;

                    /**
                     * 判断参数 LogExpireDay 是否已赋值
                     * @return LogExpireDay 是否已赋值
                     * 
                     */
                    bool LogExpireDayHasBeenSet() const;

                    /**
                     * 获取审计日志存储类型。目前仅支持storage：存储型。
                     * @return LogType 审计日志存储类型。目前仅支持storage：存储型。
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取是否正在关闭审计功能。
<ul><li>true：是。</li><li>false：否。</li></ul>
                     * @return IsClosing 是否正在关闭审计功能。
<ul><li>true：是。</li><li>false：否。</li></ul>
                     * 
                     */
                    std::string GetIsClosing() const;

                    /**
                     * 判断参数 IsClosing 是否已赋值
                     * @return IsClosing 是否已赋值
                     * 
                     */
                    bool IsClosingHasBeenSet() const;

                    /**
                     * 获取是否正在开启审计功能。<ul><li>true：是。</li><li>false：否。</li></ul>
                     * @return IsOpening 是否正在开启审计功能。<ul><li>true：是。</li><li>false：否。</li></ul>
                     * 
                     */
                    std::string GetIsOpening() const;

                    /**
                     * 判断参数 IsOpening 是否已赋值
                     * @return IsOpening 是否已赋值
                     * 
                     */
                    bool IsOpeningHasBeenSet() const;

                private:

                    /**
                     * 实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * true表示全审计，false表示规则审计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_auditAll;
                    bool m_auditAllHasBeenSet;

                    /**
                     * 该实例开通数据库审计的时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 审计日志保存时长。
单位：天。目前支持的保存时长包括：0、30、180、365，1095、1825。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * 审计日志存储类型。目前仅支持storage：存储型。
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 是否正在关闭审计功能。
<ul><li>true：是。</li><li>false：否。</li></ul>
                     */
                    std::string m_isClosing;
                    bool m_isClosingHasBeenSet;

                    /**
                     * 是否正在开启审计功能。<ul><li>true：是。</li><li>false：否。</li></ul>
                     */
                    std::string m_isOpening;
                    bool m_isOpeningHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEAUDITCONFIGRESPONSE_H_
