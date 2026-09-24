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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_CLOUDVERSIONAPPROVALACTION_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_CLOUDVERSIONAPPROVALACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * Version 一次审批动作条目。
                */
                class CloudVersionApprovalAction : public AbstractModel
                {
                public:
                    CloudVersionApprovalAction();
                    ~CloudVersionApprovalAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>动作 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActionId <p>动作 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActionId() const;

                    /**
                     * 设置<p>动作 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _actionId <p>动作 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActionId(const std::string& _actionId);

                    /**
                     * 判断参数 ActionId 是否已赋值
                     * @return ActionId 是否已赋值
                     * 
                     */
                    bool ActionIdHasBeenSet() const;

                    /**
                     * 获取<p>动作类型。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActionType <p>动作类型。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置<p>动作类型。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _actionType <p>动作类型。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取<p>动作发起者类型。USER 用户；SYSTEM 系统自动通过。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActorType <p>动作发起者类型。USER 用户；SYSTEM 系统自动通过。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActorType() const;

                    /**
                     * 设置<p>动作发起者类型。USER 用户；SYSTEM 系统自动通过。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _actorType <p>动作发起者类型。USER 用户；SYSTEM 系统自动通过。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActorType(const std::string& _actorType);

                    /**
                     * 判断参数 ActorType 是否已赋值
                     * @return ActorType 是否已赋值
                     * 
                     */
                    bool ActorTypeHasBeenSet() const;

                    /**
                     * 获取<p>发起者主账号 UIN。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActorUin <p>发起者主账号 UIN。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActorUin() const;

                    /**
                     * 设置<p>发起者主账号 UIN。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _actorUin <p>发起者主账号 UIN。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActorUin(const std::string& _actorUin);

                    /**
                     * 判断参数 ActorUin 是否已赋值
                     * @return ActorUin 是否已赋值
                     * 
                     */
                    bool ActorUinHasBeenSet() const;

                    /**
                     * 获取<p>发起者子账号 UIN。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActorSubAccountUin <p>发起者子账号 UIN。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActorSubAccountUin() const;

                    /**
                     * 设置<p>发起者子账号 UIN。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _actorSubAccountUin <p>发起者子账号 UIN。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActorSubAccountUin(const std::string& _actorSubAccountUin);

                    /**
                     * 判断参数 ActorSubAccountUin 是否已赋值
                     * @return ActorSubAccountUin 是否已赋值
                     * 
                     */
                    bool ActorSubAccountUinHasBeenSet() const;

                    /**
                     * 获取<p>动作留言。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Comment <p>动作留言。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>动作留言。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comment <p>动作留言。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取<p>发生时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>发生时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>发生时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>发生时间。</p>
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
                     * 获取<p>对应云 API 请求的 RequestId。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestId <p>对应云 API 请求的 RequestId。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置<p>对应云 API 请求的 RequestId。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestId <p>对应云 API 请求的 RequestId。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                private:

                    /**
                     * <p>动作 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_actionId;
                    bool m_actionIdHasBeenSet;

                    /**
                     * <p>动作类型。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * <p>动作发起者类型。USER 用户；SYSTEM 系统自动通过。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_actorType;
                    bool m_actorTypeHasBeenSet;

                    /**
                     * <p>发起者主账号 UIN。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_actorUin;
                    bool m_actorUinHasBeenSet;

                    /**
                     * <p>发起者子账号 UIN。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_actorSubAccountUin;
                    bool m_actorSubAccountUinHasBeenSet;

                    /**
                     * <p>动作留言。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>发生时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>对应云 API 请求的 RequestId。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_CLOUDVERSIONAPPROVALACTION_H_
