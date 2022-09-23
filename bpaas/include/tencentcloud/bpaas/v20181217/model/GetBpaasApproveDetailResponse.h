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

#ifndef TENCENTCLOUD_BPAAS_V20181217_MODEL_GETBPAASAPPROVEDETAILRESPONSE_H_
#define TENCENTCLOUD_BPAAS_V20181217_MODEL_GETBPAASAPPROVEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bpaas/v20181217/model/ApplyParam.h>
#include <tencentcloud/bpaas/v20181217/model/StatusNode.h>


namespace TencentCloud
{
    namespace Bpaas
    {
        namespace V20181217
        {
            namespace Model
            {
                /**
                * GetBpaasApproveDetail返回参数结构体
                */
                class GetBpaasApproveDetailResponse : public AbstractModel
                {
                public:
                    GetBpaasApproveDetailResponse();
                    ~GetBpaasApproveDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取申请人uin
                     * @return ApplyUin 申请人uin
                     */
                    uint64_t GetApplyUin() const;

                    /**
                     * 判断参数 ApplyUin 是否已赋值
                     * @return ApplyUin 是否已赋值
                     */
                    bool ApplyUinHasBeenSet() const;

                    /**
                     * 获取申请人主账号
                     * @return ApplyOwnUin 申请人主账号
                     */
                    uint64_t GetApplyOwnUin() const;

                    /**
                     * 判断参数 ApplyOwnUin 是否已赋值
                     * @return ApplyOwnUin 是否已赋值
                     */
                    bool ApplyOwnUinHasBeenSet() const;

                    /**
                     * 获取申请人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplyUinNick 申请人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApplyUinNick() const;

                    /**
                     * 判断参数 ApplyUinNick 是否已赋值
                     * @return ApplyUinNick 是否已赋值
                     */
                    bool ApplyUinNickHasBeenSet() const;

                    /**
                     * 获取审批流id
                     * @return BpaasId 审批流id
                     */
                    uint64_t GetBpaasId() const;

                    /**
                     * 判断参数 BpaasId 是否已赋值
                     * @return BpaasId 是否已赋值
                     */
                    bool BpaasIdHasBeenSet() const;

                    /**
                     * 获取审批流名称
                     * @return BpaasName 审批流名称
                     */
                    std::string GetBpaasName() const;

                    /**
                     * 判断参数 BpaasName 是否已赋值
                     * @return BpaasName 是否已赋值
                     */
                    bool BpaasNameHasBeenSet() const;

                    /**
                     * 获取申请参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationParams 申请参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApplyParam> GetApplicationParams() const;

                    /**
                     * 判断参数 ApplicationParams 是否已赋值
                     * @return ApplicationParams 是否已赋值
                     */
                    bool ApplicationParamsHasBeenSet() const;

                    /**
                     * 获取申请原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reason 申请原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetReason() const;

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取申请时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 申请时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取申请单状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 申请单状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nodes 节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StatusNode> GetNodes() const;

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     */
                    bool NodesHasBeenSet() const;

                    /**
                     * 获取正在审批的节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApprovingNodeId 正在审批的节点id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApprovingNodeId() const;

                    /**
                     * 判断参数 ApprovingNodeId 是否已赋值
                     * @return ApprovingNodeId 是否已赋值
                     */
                    bool ApprovingNodeIdHasBeenSet() const;

                private:

                    /**
                     * 申请人uin
                     */
                    uint64_t m_applyUin;
                    bool m_applyUinHasBeenSet;

                    /**
                     * 申请人主账号
                     */
                    uint64_t m_applyOwnUin;
                    bool m_applyOwnUinHasBeenSet;

                    /**
                     * 申请人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applyUinNick;
                    bool m_applyUinNickHasBeenSet;

                    /**
                     * 审批流id
                     */
                    uint64_t m_bpaasId;
                    bool m_bpaasIdHasBeenSet;

                    /**
                     * 审批流名称
                     */
                    std::string m_bpaasName;
                    bool m_bpaasNameHasBeenSet;

                    /**
                     * 申请参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApplyParam> m_applicationParams;
                    bool m_applicationParamsHasBeenSet;

                    /**
                     * 申请原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 申请时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 申请单状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StatusNode> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * 正在审批的节点id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approvingNodeId;
                    bool m_approvingNodeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BPAAS_V20181217_MODEL_GETBPAASAPPROVEDETAILRESPONSE_H_
