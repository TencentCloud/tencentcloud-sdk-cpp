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

#ifndef TENCENTCLOUD_EVT_V20250217_MODEL_COMPLETEAPPROVALREQUEST_H_
#define TENCENTCLOUD_EVT_V20250217_MODEL_COMPLETEAPPROVALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Evt
    {
        namespace V20250217
        {
            namespace Model
            {
                /**
                * CompleteApproval请求参数结构体
                */
                class CompleteApprovalRequest : public AbstractModel
                {
                public:
                    CompleteApprovalRequest();
                    ~CompleteApprovalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>审批单号</p>
                     * @return ApprovalId <p>审批单号</p>
                     * 
                     */
                    std::string GetApprovalId() const;

                    /**
                     * 设置<p>审批单号</p>
                     * @param _approvalId <p>审批单号</p>
                     * 
                     */
                    void SetApprovalId(const std::string& _approvalId);

                    /**
                     * 判断参数 ApprovalId 是否已赋值
                     * @return ApprovalId 是否已赋值
                     * 
                     */
                    bool ApprovalIdHasBeenSet() const;

                    /**
                     * 获取<p>审批节点</p>
                     * @return NodeId <p>审批节点</p>
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>审批节点</p>
                     * @param _nodeId <p>审批节点</p>
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取<p>审批结果，1通过2拒绝</p>
                     * @return Result <p>审批结果，1通过2拒绝</p>
                     * 
                     */
                    uint64_t GetResult() const;

                    /**
                     * 设置<p>审批结果，1通过2拒绝</p>
                     * @param _result <p>审批结果，1通过2拒绝</p>
                     * 
                     */
                    void SetResult(const uint64_t& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取<p>审批意见</p>
                     * @return Opinion <p>审批意见</p>
                     * 
                     */
                    std::string GetOpinion() const;

                    /**
                     * 设置<p>审批意见</p>
                     * @param _opinion <p>审批意见</p>
                     * 
                     */
                    void SetOpinion(const std::string& _opinion);

                    /**
                     * 判断参数 Opinion 是否已赋值
                     * @return Opinion 是否已赋值
                     * 
                     */
                    bool OpinionHasBeenSet() const;

                    /**
                     * 获取<p>审批人的身份认证Token，通过自定义角色体系回调接口分发</p><p>token信息</p>
                     * @return UserToken <p>审批人的身份认证Token，通过自定义角色体系回调接口分发</p><p>token信息</p>
                     * 
                     */
                    std::string GetUserToken() const;

                    /**
                     * 设置<p>审批人的身份认证Token，通过自定义角色体系回调接口分发</p><p>token信息</p>
                     * @param _userToken <p>审批人的身份认证Token，通过自定义角色体系回调接口分发</p><p>token信息</p>
                     * 
                     */
                    void SetUserToken(const std::string& _userToken);

                    /**
                     * 判断参数 UserToken 是否已赋值
                     * @return UserToken 是否已赋值
                     * 
                     */
                    bool UserTokenHasBeenSet() const;

                private:

                    /**
                     * <p>审批单号</p>
                     */
                    std::string m_approvalId;
                    bool m_approvalIdHasBeenSet;

                    /**
                     * <p>审批节点</p>
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>审批结果，1通过2拒绝</p>
                     */
                    uint64_t m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>审批意见</p>
                     */
                    std::string m_opinion;
                    bool m_opinionHasBeenSet;

                    /**
                     * <p>审批人的身份认证Token，通过自定义角色体系回调接口分发</p><p>token信息</p>
                     */
                    std::string m_userToken;
                    bool m_userTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EVT_V20250217_MODEL_COMPLETEAPPROVALREQUEST_H_
