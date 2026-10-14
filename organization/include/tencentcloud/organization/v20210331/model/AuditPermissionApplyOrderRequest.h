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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_AUDITPERMISSIONAPPLYORDERREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_AUDITPERMISSIONAPPLYORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * AuditPermissionApplyOrder请求参数结构体
                */
                class AuditPermissionApplyOrderRequest : public AbstractModel
                {
                public:
                    AuditPermissionApplyOrderRequest();
                    ~AuditPermissionApplyOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>空间 ID</p>
                     * @return ZoneId <p>空间 ID</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>空间 ID</p>
                     * @param _zoneId <p>空间 ID</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>申请单 ID</p>
                     * @return ApplyId <p>申请单 ID</p>
                     * 
                     */
                    std::string GetApplyId() const;

                    /**
                     * 设置<p>申请单 ID</p>
                     * @param _applyId <p>申请单 ID</p>
                     * 
                     */
                    void SetApplyId(const std::string& _applyId);

                    /**
                     * 判断参数 ApplyId 是否已赋值
                     * @return ApplyId 是否已赋值
                     * 
                     */
                    bool ApplyIdHasBeenSet() const;

                    /**
                     * 获取<p>审批结果</p><p>枚举值：</p><ul><li>Approve： 通过</li><li>Reject： 拒绝</li></ul>
                     * @return AuditResult <p>审批结果</p><p>枚举值：</p><ul><li>Approve： 通过</li><li>Reject： 拒绝</li></ul>
                     * 
                     */
                    std::string GetAuditResult() const;

                    /**
                     * 设置<p>审批结果</p><p>枚举值：</p><ul><li>Approve： 通过</li><li>Reject： 拒绝</li></ul>
                     * @param _auditResult <p>审批结果</p><p>枚举值：</p><ul><li>Approve： 通过</li><li>Reject： 拒绝</li></ul>
                     * 
                     */
                    void SetAuditResult(const std::string& _auditResult);

                    /**
                     * 判断参数 AuditResult 是否已赋值
                     * @return AuditResult 是否已赋值
                     * 
                     */
                    bool AuditResultHasBeenSet() const;

                    /**
                     * 获取<p>审批意见</p>
                     * @return AuditOpinion <p>审批意见</p>
                     * 
                     */
                    std::string GetAuditOpinion() const;

                    /**
                     * 设置<p>审批意见</p>
                     * @param _auditOpinion <p>审批意见</p>
                     * 
                     */
                    void SetAuditOpinion(const std::string& _auditOpinion);

                    /**
                     * 判断参数 AuditOpinion 是否已赋值
                     * @return AuditOpinion 是否已赋值
                     * 
                     */
                    bool AuditOpinionHasBeenSet() const;

                private:

                    /**
                     * <p>空间 ID</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>申请单 ID</p>
                     */
                    std::string m_applyId;
                    bool m_applyIdHasBeenSet;

                    /**
                     * <p>审批结果</p><p>枚举值：</p><ul><li>Approve： 通过</li><li>Reject： 拒绝</li></ul>
                     */
                    std::string m_auditResult;
                    bool m_auditResultHasBeenSet;

                    /**
                     * <p>审批意见</p>
                     */
                    std::string m_auditOpinion;
                    bool m_auditOpinionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_AUDITPERMISSIONAPPLYORDERREQUEST_H_
