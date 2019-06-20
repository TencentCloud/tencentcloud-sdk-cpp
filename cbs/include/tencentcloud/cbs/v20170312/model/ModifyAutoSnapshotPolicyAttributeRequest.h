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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYAUTOSNAPSHOTPOLICYATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYAUTOSNAPSHOTPOLICYATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/Policy.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyAutoSnapshotPolicyAttribute请求参数结构体
                */
                class ModifyAutoSnapshotPolicyAttributeRequest : public AbstractModel
                {
                public:
                    ModifyAutoSnapshotPolicyAttributeRequest();
                    ~ModifyAutoSnapshotPolicyAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取定期快照策略ID。
                     * @return AutoSnapshotPolicyId 定期快照策略ID。
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 设置定期快照策略ID。
                     * @param AutoSnapshotPolicyId 定期快照策略ID。
                     */
                    void SetAutoSnapshotPolicyId(const std::string& _autoSnapshotPolicyId);

                    /**
                     * 判断参数 AutoSnapshotPolicyId 是否已赋值
                     * @return AutoSnapshotPolicyId 是否已赋值
                     */
                    bool AutoSnapshotPolicyIdHasBeenSet() const;

                    /**
                     * 获取定期快照的执行策略。
                     * @return Policy 定期快照的执行策略。
                     */
                    std::vector<Policy> GetPolicy() const;

                    /**
                     * 设置定期快照的执行策略。
                     * @param Policy 定期快照的执行策略。
                     */
                    void SetPolicy(const std::vector<Policy>& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取要创建的定期快照策略名。不传则默认为“未命名”。最大长度不能超60个字节。
                     * @return AutoSnapshotPolicyName 要创建的定期快照策略名。不传则默认为“未命名”。最大长度不能超60个字节。
                     */
                    std::string GetAutoSnapshotPolicyName() const;

                    /**
                     * 设置要创建的定期快照策略名。不传则默认为“未命名”。最大长度不能超60个字节。
                     * @param AutoSnapshotPolicyName 要创建的定期快照策略名。不传则默认为“未命名”。最大长度不能超60个字节。
                     */
                    void SetAutoSnapshotPolicyName(const std::string& _autoSnapshotPolicyName);

                    /**
                     * 判断参数 AutoSnapshotPolicyName 是否已赋值
                     * @return AutoSnapshotPolicyName 是否已赋值
                     */
                    bool AutoSnapshotPolicyNameHasBeenSet() const;

                    /**
                     * 获取是否激活定期快照策略，FALSE表示未激活，TRUE表示激活，默认为TRUE。
                     * @return IsActivated 是否激活定期快照策略，FALSE表示未激活，TRUE表示激活，默认为TRUE。
                     */
                    bool GetIsActivated() const;

                    /**
                     * 设置是否激活定期快照策略，FALSE表示未激活，TRUE表示激活，默认为TRUE。
                     * @param IsActivated 是否激活定期快照策略，FALSE表示未激活，TRUE表示激活，默认为TRUE。
                     */
                    void SetIsActivated(const bool& _isActivated);

                    /**
                     * 判断参数 IsActivated 是否已赋值
                     * @return IsActivated 是否已赋值
                     */
                    bool IsActivatedHasBeenSet() const;

                    /**
                     * 获取通过该定期快照策略创建的快照是否永久保留。FALSE表示非永久保留，TRUE表示永久保留，默认为FALSE。
                     * @return IsPermanent 通过该定期快照策略创建的快照是否永久保留。FALSE表示非永久保留，TRUE表示永久保留，默认为FALSE。
                     */
                    bool GetIsPermanent() const;

                    /**
                     * 设置通过该定期快照策略创建的快照是否永久保留。FALSE表示非永久保留，TRUE表示永久保留，默认为FALSE。
                     * @param IsPermanent 通过该定期快照策略创建的快照是否永久保留。FALSE表示非永久保留，TRUE表示永久保留，默认为FALSE。
                     */
                    void SetIsPermanent(const bool& _isPermanent);

                    /**
                     * 判断参数 IsPermanent 是否已赋值
                     * @return IsPermanent 是否已赋值
                     */
                    bool IsPermanentHasBeenSet() const;

                    /**
                     * 获取通过该定期快照策略创建的快照保留天数，该参数不可与`IsPermanent`参数冲突，即若定期快照策略设置为永久保留，`RetentionDays`应置0。
                     * @return RetentionDays 通过该定期快照策略创建的快照保留天数，该参数不可与`IsPermanent`参数冲突，即若定期快照策略设置为永久保留，`RetentionDays`应置0。
                     */
                    uint64_t GetRetentionDays() const;

                    /**
                     * 设置通过该定期快照策略创建的快照保留天数，该参数不可与`IsPermanent`参数冲突，即若定期快照策略设置为永久保留，`RetentionDays`应置0。
                     * @param RetentionDays 通过该定期快照策略创建的快照保留天数，该参数不可与`IsPermanent`参数冲突，即若定期快照策略设置为永久保留，`RetentionDays`应置0。
                     */
                    void SetRetentionDays(const uint64_t& _retentionDays);

                    /**
                     * 判断参数 RetentionDays 是否已赋值
                     * @return RetentionDays 是否已赋值
                     */
                    bool RetentionDaysHasBeenSet() const;

                private:

                    /**
                     * 定期快照策略ID。
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                    /**
                     * 定期快照的执行策略。
                     */
                    std::vector<Policy> m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * 要创建的定期快照策略名。不传则默认为“未命名”。最大长度不能超60个字节。
                     */
                    std::string m_autoSnapshotPolicyName;
                    bool m_autoSnapshotPolicyNameHasBeenSet;

                    /**
                     * 是否激活定期快照策略，FALSE表示未激活，TRUE表示激活，默认为TRUE。
                     */
                    bool m_isActivated;
                    bool m_isActivatedHasBeenSet;

                    /**
                     * 通过该定期快照策略创建的快照是否永久保留。FALSE表示非永久保留，TRUE表示永久保留，默认为FALSE。
                     */
                    bool m_isPermanent;
                    bool m_isPermanentHasBeenSet;

                    /**
                     * 通过该定期快照策略创建的快照保留天数，该参数不可与`IsPermanent`参数冲突，即若定期快照策略设置为永久保留，`RetentionDays`应置0。
                     */
                    uint64_t m_retentionDays;
                    bool m_retentionDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYAUTOSNAPSHOTPOLICYATTRIBUTEREQUEST_H_
