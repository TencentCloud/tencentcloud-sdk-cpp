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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_TICKET_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_TICKET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bh/v20230418/model/Acl.h>
#include <tencentcloud/bh/v20230418/model/DepartmentManagerUser.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 运维工单
                */
                class Ticket : public AbstractModel
                {
                public:
                    Ticket();
                    ~Ticket() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据库主键</p>
                     * @return Id <p>数据库主键</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>数据库主键</p>
                     * @param _id <p>数据库主键</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>工单ID,id-s3ed4r5e</p>
                     * @return TicketId <p>工单ID,id-s3ed4r5e</p>
                     * 
                     */
                    std::string GetTicketId() const;

                    /**
                     * 设置<p>工单ID,id-s3ed4r5e</p>
                     * @param _ticketId <p>工单ID,id-s3ed4r5e</p>
                     * 
                     */
                    void SetTicketId(const std::string& _ticketId);

                    /**
                     * 判断参数 TicketId 是否已赋值
                     * @return TicketId 是否已赋值
                     * 
                     */
                    bool TicketIdHasBeenSet() const;

                    /**
                     * 获取<p>工单类型，0-运维访问工单，1-权限工单, 2-数据库变更工单,3-自动执行命令/脚本工单</p>
                     * @return TicketType <p>工单类型，0-运维访问工单，1-权限工单, 2-数据库变更工单,3-自动执行命令/脚本工单</p>
                     * 
                     */
                    uint64_t GetTicketType() const;

                    /**
                     * 设置<p>工单类型，0-运维访问工单，1-权限工单, 2-数据库变更工单,3-自动执行命令/脚本工单</p>
                     * @param _ticketType <p>工单类型，0-运维访问工单，1-权限工单, 2-数据库变更工单,3-自动执行命令/脚本工单</p>
                     * 
                     */
                    void SetTicketType(const uint64_t& _ticketType);

                    /**
                     * 判断参数 TicketType 是否已赋值
                     * @return TicketType 是否已赋值
                     * 
                     */
                    bool TicketTypeHasBeenSet() const;

                    /**
                     * 获取<p>acl权限</p>
                     * @return Acl <p>acl权限</p>
                     * 
                     */
                    Acl GetAcl() const;

                    /**
                     * 设置<p>acl权限</p>
                     * @param _acl <p>acl权限</p>
                     * 
                     */
                    void SetAcl(const Acl& _acl);

                    /**
                     * 判断参数 Acl 是否已赋值
                     * @return Acl 是否已赋值
                     * 
                     */
                    bool AclHasBeenSet() const;

                    /**
                     * 获取<p>运维开始时间</p>
                     * @return StartTime <p>运维开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>运维开始时间</p>
                     * @param _startTime <p>运维开始时间</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>运维结束时间</p>
                     * @return EndTime <p>运维结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>运维结束时间</p>
                     * @param _endTime <p>运维结束时间</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>工单状态，0待提交(草稿)，1待审批，2批准，3已执行，4驳回,5删除，6过期</p>
                     * @return Status <p>工单状态，0待提交(草稿)，1待审批，2批准，3已执行，4驳回,5删除，6过期</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>工单状态，0待提交(草稿)，1待审批，2批准，3已执行，4驳回,5删除，6过期</p>
                     * @param _status <p>工单状态，0待提交(草稿)，1待审批，2批准，3已执行，4驳回,5删除，6过期</p>
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
                     * 获取<p>申请时间</p>
                     * @return ApplyTime <p>申请时间</p>
                     * 
                     */
                    std::string GetApplyTime() const;

                    /**
                     * 设置<p>申请时间</p>
                     * @param _applyTime <p>申请时间</p>
                     * 
                     */
                    void SetApplyTime(const std::string& _applyTime);

                    /**
                     * 判断参数 ApplyTime 是否已赋值
                     * @return ApplyTime 是否已赋值
                     * 
                     */
                    bool ApplyTimeHasBeenSet() const;

                    /**
                     * 获取<p>申请人用户Id</p>
                     * @return ApplyUser <p>申请人用户Id</p>
                     * 
                     */
                    uint64_t GetApplyUser() const;

                    /**
                     * 设置<p>申请人用户Id</p>
                     * @param _applyUser <p>申请人用户Id</p>
                     * 
                     */
                    void SetApplyUser(const uint64_t& _applyUser);

                    /**
                     * 判断参数 ApplyUser 是否已赋值
                     * @return ApplyUser 是否已赋值
                     * 
                     */
                    bool ApplyUserHasBeenSet() const;

                    /**
                     * 获取<p>审批人uin</p>
                     * @return ApproveUser <p>审批人uin</p>
                     * 
                     */
                    std::string GetApproveUser() const;

                    /**
                     * 设置<p>审批人uin</p>
                     * @param _approveUser <p>审批人uin</p>
                     * 
                     */
                    void SetApproveUser(const std::string& _approveUser);

                    /**
                     * 判断参数 ApproveUser 是否已赋值
                     * @return ApproveUser 是否已赋值
                     * 
                     */
                    bool ApproveUserHasBeenSet() const;

                    /**
                     * 获取<p>工单审批备注</p>
                     * @return ApproveDesc <p>工单审批备注</p>
                     * 
                     */
                    std::string GetApproveDesc() const;

                    /**
                     * 设置<p>工单审批备注</p>
                     * @param _approveDesc <p>工单审批备注</p>
                     * 
                     */
                    void SetApproveDesc(const std::string& _approveDesc);

                    /**
                     * 判断参数 ApproveDesc 是否已赋值
                     * @return ApproveDesc 是否已赋值
                     * 
                     */
                    bool ApproveDescHasBeenSet() const;

                    /**
                     * 获取<p>acl权限Id</p>
                     * @return AclId <p>acl权限Id</p>
                     * 
                     */
                    uint64_t GetAclId() const;

                    /**
                     * 设置<p>acl权限Id</p>
                     * @param _aclId <p>acl权限Id</p>
                     * 
                     */
                    void SetAclId(const uint64_t& _aclId);

                    /**
                     * 判断参数 AclId 是否已赋值
                     * @return AclId 是否已赋值
                     * 
                     */
                    bool AclIdHasBeenSet() const;

                    /**
                     * 获取<p>待审批状态下，可以审批的人</p>
                     * @return ApproveUserSet <p>待审批状态下，可以审批的人</p>
                     * 
                     */
                    std::vector<std::string> GetApproveUserSet() const;

                    /**
                     * 设置<p>待审批状态下，可以审批的人</p>
                     * @param _approveUserSet <p>待审批状态下，可以审批的人</p>
                     * 
                     */
                    void SetApproveUserSet(const std::vector<std::string>& _approveUserSet);

                    /**
                     * 判断参数 ApproveUserSet 是否已赋值
                     * @return ApproveUserSet 是否已赋值
                     * 
                     */
                    bool ApproveUserSetHasBeenSet() const;

                    /**
                     * 获取<p>审批人信息</p>
                     * @return ApproveUserInfoSet <p>审批人信息</p>
                     * 
                     */
                    std::vector<DepartmentManagerUser> GetApproveUserInfoSet() const;

                    /**
                     * 设置<p>审批人信息</p>
                     * @param _approveUserInfoSet <p>审批人信息</p>
                     * 
                     */
                    void SetApproveUserInfoSet(const std::vector<DepartmentManagerUser>& _approveUserInfoSet);

                    /**
                     * 判断参数 ApproveUserInfoSet 是否已赋值
                     * @return ApproveUserInfoSet 是否已赋值
                     * 
                     */
                    bool ApproveUserInfoSetHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>申请权限</p>
                     * @return Name <p>申请权限</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>申请权限</p>
                     * @param _name <p>申请权限</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>审批时间</p>
                     * @return ApproveTime <p>审批时间</p>
                     * 
                     */
                    std::string GetApproveTime() const;

                    /**
                     * 设置<p>审批时间</p>
                     * @param _approveTime <p>审批时间</p>
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
                     * 获取<p>部门ID</p>
                     * @return DepartmentId <p>部门ID</p>
                     * 
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置<p>部门ID</p>
                     * @param _departmentId <p>部门ID</p>
                     * 
                     */
                    void SetDepartmentId(const std::string& _departmentId);

                    /**
                     * 判断参数 DepartmentId 是否已赋值
                     * @return DepartmentId 是否已赋值
                     * 
                     */
                    bool DepartmentIdHasBeenSet() const;

                    /**
                     * 获取<p>部门名称</p>
                     * @return DepartmentName <p>部门名称</p>
                     * 
                     */
                    std::string GetDepartmentName() const;

                    /**
                     * 设置<p>部门名称</p>
                     * @param _departmentName <p>部门名称</p>
                     * 
                     */
                    void SetDepartmentName(const std::string& _departmentName);

                    /**
                     * 判断参数 DepartmentName 是否已赋值
                     * @return DepartmentName 是否已赋值
                     * 
                     */
                    bool DepartmentNameHasBeenSet() const;

                    /**
                     * 获取<p>部门Sequence</p>
                     * @return DepartmentSequence <p>部门Sequence</p>
                     * 
                     */
                    uint64_t GetDepartmentSequence() const;

                    /**
                     * 设置<p>部门Sequence</p>
                     * @param _departmentSequence <p>部门Sequence</p>
                     * 
                     */
                    void SetDepartmentSequence(const uint64_t& _departmentSequence);

                    /**
                     * 判断参数 DepartmentSequence 是否已赋值
                     * @return DepartmentSequence 是否已赋值
                     * 
                     */
                    bool DepartmentSequenceHasBeenSet() const;

                    /**
                     * 获取<p>申请人用户名</p>
                     * @return ApplyUserName <p>申请人用户名</p>
                     * 
                     */
                    std::string GetApplyUserName() const;

                    /**
                     * 设置<p>申请人用户名</p>
                     * @param _applyUserName <p>申请人用户名</p>
                     * 
                     */
                    void SetApplyUserName(const std::string& _applyUserName);

                    /**
                     * 判断参数 ApplyUserName 是否已赋值
                     * @return ApplyUserName 是否已赋值
                     * 
                     */
                    bool ApplyUserNameHasBeenSet() const;

                    /**
                     * 获取<p>申请人真实姓名</p>
                     * @return ApplyRealName <p>申请人真实姓名</p>
                     * 
                     */
                    std::string GetApplyRealName() const;

                    /**
                     * 设置<p>申请人真实姓名</p>
                     * @param _applyRealName <p>申请人真实姓名</p>
                     * 
                     */
                    void SetApplyRealName(const std::string& _applyRealName);

                    /**
                     * 判断参数 ApplyRealName 是否已赋值
                     * @return ApplyRealName 是否已赋值
                     * 
                     */
                    bool ApplyRealNameHasBeenSet() const;

                    /**
                     * 获取<p>申请时间戳，微妙</p>
                     * @return ApplyTimeVersion <p>申请时间戳，微妙</p>
                     * 
                     */
                    int64_t GetApplyTimeVersion() const;

                    /**
                     * 设置<p>申请时间戳，微妙</p>
                     * @param _applyTimeVersion <p>申请时间戳，微妙</p>
                     * 
                     */
                    void SetApplyTimeVersion(const int64_t& _applyTimeVersion);

                    /**
                     * 判断参数 ApplyTimeVersion 是否已赋值
                     * @return ApplyTimeVersion 是否已赋值
                     * 
                     */
                    bool ApplyTimeVersionHasBeenSet() const;

                private:

                    /**
                     * <p>数据库主键</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>工单ID,id-s3ed4r5e</p>
                     */
                    std::string m_ticketId;
                    bool m_ticketIdHasBeenSet;

                    /**
                     * <p>工单类型，0-运维访问工单，1-权限工单, 2-数据库变更工单,3-自动执行命令/脚本工单</p>
                     */
                    uint64_t m_ticketType;
                    bool m_ticketTypeHasBeenSet;

                    /**
                     * <p>acl权限</p>
                     */
                    Acl m_acl;
                    bool m_aclHasBeenSet;

                    /**
                     * <p>运维开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>运维结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>工单状态，0待提交(草稿)，1待审批，2批准，3已执行，4驳回,5删除，6过期</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>申请时间</p>
                     */
                    std::string m_applyTime;
                    bool m_applyTimeHasBeenSet;

                    /**
                     * <p>申请人用户Id</p>
                     */
                    uint64_t m_applyUser;
                    bool m_applyUserHasBeenSet;

                    /**
                     * <p>审批人uin</p>
                     */
                    std::string m_approveUser;
                    bool m_approveUserHasBeenSet;

                    /**
                     * <p>工单审批备注</p>
                     */
                    std::string m_approveDesc;
                    bool m_approveDescHasBeenSet;

                    /**
                     * <p>acl权限Id</p>
                     */
                    uint64_t m_aclId;
                    bool m_aclIdHasBeenSet;

                    /**
                     * <p>待审批状态下，可以审批的人</p>
                     */
                    std::vector<std::string> m_approveUserSet;
                    bool m_approveUserSetHasBeenSet;

                    /**
                     * <p>审批人信息</p>
                     */
                    std::vector<DepartmentManagerUser> m_approveUserInfoSet;
                    bool m_approveUserInfoSetHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>申请权限</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>审批时间</p>
                     */
                    std::string m_approveTime;
                    bool m_approveTimeHasBeenSet;

                    /**
                     * <p>部门ID</p>
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                    /**
                     * <p>部门名称</p>
                     */
                    std::string m_departmentName;
                    bool m_departmentNameHasBeenSet;

                    /**
                     * <p>部门Sequence</p>
                     */
                    uint64_t m_departmentSequence;
                    bool m_departmentSequenceHasBeenSet;

                    /**
                     * <p>申请人用户名</p>
                     */
                    std::string m_applyUserName;
                    bool m_applyUserNameHasBeenSet;

                    /**
                     * <p>申请人真实姓名</p>
                     */
                    std::string m_applyRealName;
                    bool m_applyRealNameHasBeenSet;

                    /**
                     * <p>申请时间戳，微妙</p>
                     */
                    int64_t m_applyTimeVersion;
                    bool m_applyTimeVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_TICKET_H_
