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

#ifndef TENCENTCLOUD_BPAAS_V20181217_MODEL_OUTAPPROVEBPAASAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_BPAAS_V20181217_MODEL_OUTAPPROVEBPAASAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bpaas
    {
        namespace V20181217
        {
            namespace Model
            {
                /**
                * OutApproveBpaasApplication请求参数结构体
                */
                class OutApproveBpaasApplicationRequest : public AbstractModel
                {
                public:
                    OutApproveBpaasApplicationRequest();
                    ~OutApproveBpaasApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取状态  1:通过  2:拒绝
                     * @return Status 状态  1:通过  2:拒绝
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态  1:通过  2:拒绝
                     * @param _status 状态  1:通过  2:拒绝
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取审批单id
                     * @return ApproveId 审批单id
                     * 
                     */
                    uint64_t GetApproveId() const;

                    /**
                     * 设置审批单id
                     * @param _approveId 审批单id
                     * 
                     */
                    void SetApproveId(const uint64_t& _approveId);

                    /**
                     * 判断参数 ApproveId 是否已赋值
                     * @return ApproveId 是否已赋值
                     * 
                     */
                    bool ApproveIdHasBeenSet() const;

                    /**
                     * 获取审批意见
                     * @return Msg 审批意见
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 设置审批意见
                     * @param _msg 审批意见
                     * 
                     */
                    void SetMsg(const std::string& _msg);

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                private:

                    /**
                     * 状态  1:通过  2:拒绝
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 审批单id
                     */
                    uint64_t m_approveId;
                    bool m_approveIdHasBeenSet;

                    /**
                     * 审批意见
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BPAAS_V20181217_MODEL_OUTAPPROVEBPAASAPPLICATIONREQUEST_H_
