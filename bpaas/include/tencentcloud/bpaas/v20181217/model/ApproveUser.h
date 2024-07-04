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

#ifndef TENCENTCLOUD_BPAAS_V20181217_MODEL_APPROVEUSER_H_
#define TENCENTCLOUD_BPAAS_V20181217_MODEL_APPROVEUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bpaas/v20181217/model/Scf.h>


namespace TencentCloud
{
    namespace Bpaas
    {
        namespace V20181217
        {
            namespace Model
            {
                /**
                * 审批人
                */
                class ApproveUser : public AbstractModel
                {
                public:
                    ApproveUser();
                    ~ApproveUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户uin
                     * @return Uin 用户uin
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置用户uin
                     * @param _uin 用户uin
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取用户类型 (1:用户  2:用户组)
                     * @return Type 用户类型 (1:用户  2:用户组)
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置用户类型 (1:用户  2:用户组)
                     * @param _type 用户类型 (1:用户  2:用户组)
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
                     * 获取用户描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Desc 用户描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置用户描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _desc 用户描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nick 用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nick 用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNick(const std::string& _nick);

                    /**
                     * 判断参数 Nick 是否已赋值
                     * @return Nick 是否已赋值
                     * 
                     */
                    bool NickHasBeenSet() const;

                    /**
                     * 获取动态获取Scf
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Scf 动态获取Scf
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Scf GetScf() const;

                    /**
                     * 设置动态获取Scf
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scf 动态获取Scf
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScf(const Scf& _scf);

                    /**
                     * 判断参数 Scf 是否已赋值
                     * @return Scf 是否已赋值
                     * 
                     */
                    bool ScfHasBeenSet() const;

                    /**
                     * 获取审批状态 （取值范围 0:待审批  1:审批通过  2:拒绝  6:其他人已审批）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveStatus 审批状态 （取值范围 0:待审批  1:审批通过  2:拒绝  6:其他人已审批）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetApproveStatus() const;

                    /**
                     * 设置审批状态 （取值范围 0:待审批  1:审批通过  2:拒绝  6:其他人已审批）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approveStatus 审批状态 （取值范围 0:待审批  1:审批通过  2:拒绝  6:其他人已审批）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApproveStatus(const uint64_t& _approveStatus);

                    /**
                     * 判断参数 ApproveStatus 是否已赋值
                     * @return ApproveStatus 是否已赋值
                     * 
                     */
                    bool ApproveStatusHasBeenSet() const;

                    /**
                     * 获取审批意见
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveMsg 审批意见
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApproveMsg() const;

                    /**
                     * 设置审批意见
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approveMsg 审批意见
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApproveMsg(const std::string& _approveMsg);

                    /**
                     * 判断参数 ApproveMsg 是否已赋值
                     * @return ApproveMsg 是否已赋值
                     * 
                     */
                    bool ApproveMsgHasBeenSet() const;

                    /**
                     * 获取审批时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveTime 审批时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApproveTime() const;

                    /**
                     * 设置审批时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approveTime 审批时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApproveTime(const std::string& _approveTime);

                    /**
                     * 判断参数 ApproveTime 是否已赋值
                     * @return ApproveTime 是否已赋值
                     * 
                     */
                    bool ApproveTimeHasBeenSet() const;

                    /**
                     * 获取审批组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveGroup 审批组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApproveGroup() const;

                    /**
                     * 设置审批组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approveGroup 审批组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApproveGroup(const std::string& _approveGroup);

                    /**
                     * 判断参数 ApproveGroup 是否已赋值
                     * @return ApproveGroup 是否已赋值
                     * 
                     */
                    bool ApproveGroupHasBeenSet() const;

                private:

                    /**
                     * 用户uin
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 用户类型 (1:用户  2:用户组)
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 用户描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * 动态获取Scf
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Scf m_scf;
                    bool m_scfHasBeenSet;

                    /**
                     * 审批状态 （取值范围 0:待审批  1:审批通过  2:拒绝  6:其他人已审批）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_approveStatus;
                    bool m_approveStatusHasBeenSet;

                    /**
                     * 审批意见
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approveMsg;
                    bool m_approveMsgHasBeenSet;

                    /**
                     * 审批时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approveTime;
                    bool m_approveTimeHasBeenSet;

                    /**
                     * 审批组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approveGroup;
                    bool m_approveGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BPAAS_V20181217_MODEL_APPROVEUSER_H_
