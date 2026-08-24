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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_ASPINFO_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_ASPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/Policy.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 备份的执行策略信息
                */
                class AspInfo : public AbstractModel
                {
                public:
                    AspInfo();
                    ~AspInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份策略ID
                     * @return AspId 备份策略ID
                     * 
                     */
                    std::string GetAspId() const;

                    /**
                     * 设置备份策略ID
                     * @param _aspId 备份策略ID
                     * 
                     */
                    void SetAspId(const std::string& _aspId);

                    /**
                     * 判断参数 AspId 是否已赋值
                     * @return AspId 是否已赋值
                     * 
                     */
                    bool AspIdHasBeenSet() const;

                    /**
                     * 获取备份策略名称
                     * @return AspName 备份策略名称
                     * 
                     */
                    std::string GetAspName() const;

                    /**
                     * 设置备份策略名称
                     * @param _aspName 备份策略名称
                     * 
                     */
                    void SetAspName(const std::string& _aspName);

                    /**
                     * 判断参数 AspName 是否已赋值
                     * @return AspName 是否已赋值
                     * 
                     */
                    bool AspNameHasBeenSet() const;

                    /**
                     * 获取备份策略状态
                     * @return AspState 备份策略状态
                     * 
                     */
                    std::string GetAspState() const;

                    /**
                     * 设置备份策略状态
                     * @param _aspState 备份策略状态
                     * 
                     */
                    void SetAspState(const std::string& _aspState);

                    /**
                     * 判断参数 AspState 是否已赋值
                     * @return AspState 是否已赋值
                     * 
                     */
                    bool AspStateHasBeenSet() const;

                    /**
                     * 获取备份策略执行详情
                     * @return Policy 备份策略执行详情
                     * 
                     */
                    std::vector<Policy> GetPolicy() const;

                    /**
                     * 设置备份策略执行详情
                     * @param _policy 备份策略执行详情
                     * 
                     */
                    void SetPolicy(const std::vector<Policy>& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取备份策略是否使能
                     * @return IsActivated 备份策略是否使能
                     * 
                     */
                    bool GetIsActivated() const;

                    /**
                     * 设置备份策略是否使能
                     * @param _isActivated 备份策略是否使能
                     * 
                     */
                    void SetIsActivated(const bool& _isActivated);

                    /**
                     * 判断参数 IsActivated 是否已赋值
                     * @return IsActivated 是否已赋值
                     * 
                     */
                    bool IsActivatedHasBeenSet() const;

                    /**
                     * 获取是否永久保留
                     * @return IsPermanent 是否永久保留
                     * 
                     */
                    bool GetIsPermanent() const;

                    /**
                     * 设置是否永久保留
                     * @param _isPermanent 是否永久保留
                     * 
                     */
                    void SetIsPermanent(const bool& _isPermanent);

                    /**
                     * 判断参数 IsPermanent 是否已赋值
                     * @return IsPermanent 是否已赋值
                     * 
                     */
                    bool IsPermanentHasBeenSet() const;

                    /**
                     * 获取保留时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetentionDays 保留时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRetentionDays() const;

                    /**
                     * 设置保留时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retentionDays 保留时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetentionDays(const uint64_t& _retentionDays);

                    /**
                     * 判断参数 RetentionDays 是否已赋值
                     * @return RetentionDays 是否已赋值
                     * 
                     */
                    bool RetentionDaysHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 备份策略ID
                     */
                    std::string m_aspId;
                    bool m_aspIdHasBeenSet;

                    /**
                     * 备份策略名称
                     */
                    std::string m_aspName;
                    bool m_aspNameHasBeenSet;

                    /**
                     * 备份策略状态
                     */
                    std::string m_aspState;
                    bool m_aspStateHasBeenSet;

                    /**
                     * 备份策略执行详情
                     */
                    std::vector<Policy> m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * 备份策略是否使能
                     */
                    bool m_isActivated;
                    bool m_isActivatedHasBeenSet;

                    /**
                     * 是否永久保留
                     */
                    bool m_isPermanent;
                    bool m_isPermanentHasBeenSet;

                    /**
                     * 保留时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_retentionDays;
                    bool m_retentionDaysHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_ASPINFO_H_
