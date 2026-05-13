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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMAPPROVESTATUSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMAPPROVESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyDspmApproveStatus请求参数结构体
                */
                class ModifyDspmApproveStatusRequest : public AbstractModel
                {
                public:
                    ModifyDspmApproveStatusRequest();
                    ~ModifyDspmApproveStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取申请单id
                     * @return OrderId 申请单id
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置申请单id
                     * @param _orderId 申请单id
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取状态。1-通过 2-拒绝
                     * @return Status 状态。1-通过 2-拒绝
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态。1-通过 2-拒绝
                     * @param _status 状态。1-通过 2-拒绝
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取审批信息
                     * @return Comment 审批信息
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置审批信息
                     * @param _comment 审批信息
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * 申请单id
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 状态。1-通过 2-拒绝
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 审批信息
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMAPPROVESTATUSREQUEST_H_
