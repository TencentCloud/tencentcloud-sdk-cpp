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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_APPROVETICKETREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_APPROVETICKETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ApproveTicket请求参数结构体
                */
                class ApproveTicketRequest : public AbstractModel
                {
                public:
                    ApproveTicketRequest();
                    ~ApproveTicketRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工单唯一id，数据库索引id
                     * @return Id 工单唯一id，数据库索引id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置工单唯一id，数据库索引id
                     * @param _id 工单唯一id，数据库索引id
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
                     * 获取2-审批通过，4-审批驳回
                     * @return Status 2-审批通过，4-审批驳回
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置2-审批通过，4-审批驳回
                     * @param _status 2-审批通过，4-审批驳回
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
                     * 获取审批意见
                     * @return ApproveDesc 审批意见
                     * 
                     */
                    std::string GetApproveDesc() const;

                    /**
                     * 设置审批意见
                     * @param _approveDesc 审批意见
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
                     * 获取申请时间戳，单位微妙
                     * @return ApplyTimeVersion 申请时间戳，单位微妙
                     * 
                     */
                    int64_t GetApplyTimeVersion() const;

                    /**
                     * 设置申请时间戳，单位微妙
                     * @param _applyTimeVersion 申请时间戳，单位微妙
                     * 
                     */
                    void SetApplyTimeVersion(const int64_t& _applyTimeVersion);

                    /**
                     * 判断参数 ApplyTimeVersion 是否已赋值
                     * @return ApplyTimeVersion 是否已赋值
                     * 
                     */
                    bool ApplyTimeVersionHasBeenSet() const;

                    /**
                     * 获取审批权限工单时，设置的有效期开始时间，默认为当前时间
                     * @return StartTime 审批权限工单时，设置的有效期开始时间，默认为当前时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置审批权限工单时，设置的有效期开始时间，默认为当前时间
                     * @param _startTime 审批权限工单时，设置的有效期开始时间，默认为当前时间
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
                     * 获取审批权限工单时，设置的有效期的结束时间，默认有限期为1天
                     * @return EndTime 审批权限工单时，设置的有效期的结束时间，默认有限期为1天
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置审批权限工单时，设置的有效期的结束时间，默认有限期为1天
                     * @param _endTime 审批权限工单时，设置的有效期的结束时间，默认有限期为1天
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
                     * 获取是否开启磁盘映射
                     * @return AllowDiskRedirect 是否开启磁盘映射
                     * 
                     */
                    bool GetAllowDiskRedirect() const;

                    /**
                     * 设置是否开启磁盘映射
                     * @param _allowDiskRedirect 是否开启磁盘映射
                     * 
                     */
                    void SetAllowDiskRedirect(const bool& _allowDiskRedirect);

                    /**
                     * 判断参数 AllowDiskRedirect 是否已赋值
                     * @return AllowDiskRedirect 是否已赋值
                     * 
                     */
                    bool AllowDiskRedirectHasBeenSet() const;

                    /**
                     * 获取是否开启剪贴板文件上行
                     * @return AllowClipFileUp 是否开启剪贴板文件上行
                     * 
                     */
                    bool GetAllowClipFileUp() const;

                    /**
                     * 设置是否开启剪贴板文件上行
                     * @param _allowClipFileUp 是否开启剪贴板文件上行
                     * 
                     */
                    void SetAllowClipFileUp(const bool& _allowClipFileUp);

                    /**
                     * 判断参数 AllowClipFileUp 是否已赋值
                     * @return AllowClipFileUp 是否已赋值
                     * 
                     */
                    bool AllowClipFileUpHasBeenSet() const;

                    /**
                     * 获取是否开启剪贴板文件下行
                     * @return AllowClipFileDown 是否开启剪贴板文件下行
                     * 
                     */
                    bool GetAllowClipFileDown() const;

                    /**
                     * 设置是否开启剪贴板文件下行
                     * @param _allowClipFileDown 是否开启剪贴板文件下行
                     * 
                     */
                    void SetAllowClipFileDown(const bool& _allowClipFileDown);

                    /**
                     * 判断参数 AllowClipFileDown 是否已赋值
                     * @return AllowClipFileDown 是否已赋值
                     * 
                     */
                    bool AllowClipFileDownHasBeenSet() const;

                    /**
                     * 获取是否开启剪贴板文本（含图片）上行
                     * @return AllowClipTextUp 是否开启剪贴板文本（含图片）上行
                     * 
                     */
                    bool GetAllowClipTextUp() const;

                    /**
                     * 设置是否开启剪贴板文本（含图片）上行
                     * @param _allowClipTextUp 是否开启剪贴板文本（含图片）上行
                     * 
                     */
                    void SetAllowClipTextUp(const bool& _allowClipTextUp);

                    /**
                     * 判断参数 AllowClipTextUp 是否已赋值
                     * @return AllowClipTextUp 是否已赋值
                     * 
                     */
                    bool AllowClipTextUpHasBeenSet() const;

                    /**
                     * 获取是否开启剪贴板文本（含图片）下行
                     * @return AllowClipTextDown 是否开启剪贴板文本（含图片）下行
                     * 
                     */
                    bool GetAllowClipTextDown() const;

                    /**
                     * 设置是否开启剪贴板文本（含图片）下行
                     * @param _allowClipTextDown 是否开启剪贴板文本（含图片）下行
                     * 
                     */
                    void SetAllowClipTextDown(const bool& _allowClipTextDown);

                    /**
                     * 判断参数 AllowClipTextDown 是否已赋值
                     * @return AllowClipTextDown 是否已赋值
                     * 
                     */
                    bool AllowClipTextDownHasBeenSet() const;

                    /**
                     * 获取是否开启 SFTP 文件上传
                     * @return AllowFileUp 是否开启 SFTP 文件上传
                     * 
                     */
                    bool GetAllowFileUp() const;

                    /**
                     * 设置是否开启 SFTP 文件上传
                     * @param _allowFileUp 是否开启 SFTP 文件上传
                     * 
                     */
                    void SetAllowFileUp(const bool& _allowFileUp);

                    /**
                     * 判断参数 AllowFileUp 是否已赋值
                     * @return AllowFileUp 是否已赋值
                     * 
                     */
                    bool AllowFileUpHasBeenSet() const;

                    /**
                     * 获取文件传输上传大小限制（预留参数，目前暂未使用）
                     * @return MaxFileUpSize 文件传输上传大小限制（预留参数，目前暂未使用）
                     * 
                     */
                    uint64_t GetMaxFileUpSize() const;

                    /**
                     * 设置文件传输上传大小限制（预留参数，目前暂未使用）
                     * @param _maxFileUpSize 文件传输上传大小限制（预留参数，目前暂未使用）
                     * 
                     */
                    void SetMaxFileUpSize(const uint64_t& _maxFileUpSize);

                    /**
                     * 判断参数 MaxFileUpSize 是否已赋值
                     * @return MaxFileUpSize 是否已赋值
                     * 
                     */
                    bool MaxFileUpSizeHasBeenSet() const;

                    /**
                     * 获取是否开启 SFTP 文件下载
                     * @return AllowFileDown 是否开启 SFTP 文件下载
                     * 
                     */
                    bool GetAllowFileDown() const;

                    /**
                     * 设置是否开启 SFTP 文件下载
                     * @param _allowFileDown 是否开启 SFTP 文件下载
                     * 
                     */
                    void SetAllowFileDown(const bool& _allowFileDown);

                    /**
                     * 判断参数 AllowFileDown 是否已赋值
                     * @return AllowFileDown 是否已赋值
                     * 
                     */
                    bool AllowFileDownHasBeenSet() const;

                    /**
                     * 获取文件传输下载大小限制（预留参数，目前暂未使用）
                     * @return MaxFileDownSize 文件传输下载大小限制（预留参数，目前暂未使用）
                     * 
                     */
                    uint64_t GetMaxFileDownSize() const;

                    /**
                     * 设置文件传输下载大小限制（预留参数，目前暂未使用）
                     * @param _maxFileDownSize 文件传输下载大小限制（预留参数，目前暂未使用）
                     * 
                     */
                    void SetMaxFileDownSize(const uint64_t& _maxFileDownSize);

                    /**
                     * 判断参数 MaxFileDownSize 是否已赋值
                     * @return MaxFileDownSize 是否已赋值
                     * 
                     */
                    bool MaxFileDownSizeHasBeenSet() const;

                    /**
                     * 获取是否开启rdp磁盘映射文件上传
                     * @return AllowDiskFileUp 是否开启rdp磁盘映射文件上传
                     * 
                     */
                    bool GetAllowDiskFileUp() const;

                    /**
                     * 设置是否开启rdp磁盘映射文件上传
                     * @param _allowDiskFileUp 是否开启rdp磁盘映射文件上传
                     * 
                     */
                    void SetAllowDiskFileUp(const bool& _allowDiskFileUp);

                    /**
                     * 判断参数 AllowDiskFileUp 是否已赋值
                     * @return AllowDiskFileUp 是否已赋值
                     * 
                     */
                    bool AllowDiskFileUpHasBeenSet() const;

                    /**
                     * 获取是否开启rdp磁盘映射文件下载
                     * @return AllowDiskFileDown 是否开启rdp磁盘映射文件下载
                     * 
                     */
                    bool GetAllowDiskFileDown() const;

                    /**
                     * 设置是否开启rdp磁盘映射文件下载
                     * @param _allowDiskFileDown 是否开启rdp磁盘映射文件下载
                     * 
                     */
                    void SetAllowDiskFileDown(const bool& _allowDiskFileDown);

                    /**
                     * 判断参数 AllowDiskFileDown 是否已赋值
                     * @return AllowDiskFileDown 是否已赋值
                     * 
                     */
                    bool AllowDiskFileDownHasBeenSet() const;

                    /**
                     * 获取是否开启rz sz文件上传
                     * @return AllowShellFileUp 是否开启rz sz文件上传
                     * 
                     */
                    bool GetAllowShellFileUp() const;

                    /**
                     * 设置是否开启rz sz文件上传
                     * @param _allowShellFileUp 是否开启rz sz文件上传
                     * 
                     */
                    void SetAllowShellFileUp(const bool& _allowShellFileUp);

                    /**
                     * 判断参数 AllowShellFileUp 是否已赋值
                     * @return AllowShellFileUp 是否已赋值
                     * 
                     */
                    bool AllowShellFileUpHasBeenSet() const;

                    /**
                     * 获取是否开启rz sz文件下载
                     * @return AllowShellFileDown 是否开启rz sz文件下载
                     * 
                     */
                    bool GetAllowShellFileDown() const;

                    /**
                     * 设置是否开启rz sz文件下载
                     * @param _allowShellFileDown 是否开启rz sz文件下载
                     * 
                     */
                    void SetAllowShellFileDown(const bool& _allowShellFileDown);

                    /**
                     * 判断参数 AllowShellFileDown 是否已赋值
                     * @return AllowShellFileDown 是否已赋值
                     * 
                     */
                    bool AllowShellFileDownHasBeenSet() const;

                    /**
                     * 获取是否开启 SFTP 文件删除
                     * @return AllowFileDel 是否开启 SFTP 文件删除
                     * 
                     */
                    bool GetAllowFileDel() const;

                    /**
                     * 设置是否开启 SFTP 文件删除
                     * @param _allowFileDel 是否开启 SFTP 文件删除
                     * 
                     */
                    void SetAllowFileDel(const bool& _allowFileDel);

                    /**
                     * 判断参数 AllowFileDel 是否已赋值
                     * @return AllowFileDel 是否已赋值
                     * 
                     */
                    bool AllowFileDelHasBeenSet() const;

                    /**
                     * 获取是否允许使用访问串，默认允许
                     * @return AllowAccessCredential 是否允许使用访问串，默认允许
                     * 
                     */
                    bool GetAllowAccessCredential() const;

                    /**
                     * 设置是否允许使用访问串，默认允许
                     * @param _allowAccessCredential 是否允许使用访问串，默认允许
                     * 
                     */
                    void SetAllowAccessCredential(const bool& _allowAccessCredential);

                    /**
                     * 判断参数 AllowAccessCredential 是否已赋值
                     * @return AllowAccessCredential 是否已赋值
                     * 
                     */
                    bool AllowAccessCredentialHasBeenSet() const;

                    /**
                     * 获取关联的高危命令模板ID
                     * @return CmdTemplateIdSet 关联的高危命令模板ID
                     * 
                     */
                    std::vector<uint64_t> GetCmdTemplateIdSet() const;

                    /**
                     * 设置关联的高危命令模板ID
                     * @param _cmdTemplateIdSet 关联的高危命令模板ID
                     * 
                     */
                    void SetCmdTemplateIdSet(const std::vector<uint64_t>& _cmdTemplateIdSet);

                    /**
                     * 判断参数 CmdTemplateIdSet 是否已赋值
                     * @return CmdTemplateIdSet 是否已赋值
                     * 
                     */
                    bool CmdTemplateIdSetHasBeenSet() const;

                    /**
                     * 获取关联高危DB模板ID
                     * @return ACTemplateIdSet 关联高危DB模板ID
                     * 
                     */
                    std::vector<std::string> GetACTemplateIdSet() const;

                    /**
                     * 设置关联高危DB模板ID
                     * @param _aCTemplateIdSet 关联高危DB模板ID
                     * 
                     */
                    void SetACTemplateIdSet(const std::vector<std::string>& _aCTemplateIdSet);

                    /**
                     * 判断参数 ACTemplateIdSet 是否已赋值
                     * @return ACTemplateIdSet 是否已赋值
                     * 
                     */
                    bool ACTemplateIdSetHasBeenSet() const;

                    /**
                     * 获取部门id
                     * @return DepartmentId 部门id
                     * 
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置部门id
                     * @param _departmentId 部门id
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
                     * 获取是否允许键盘记录
                     * @return AllowKeyboardLogger 是否允许键盘记录
                     * 
                     */
                    bool GetAllowKeyboardLogger() const;

                    /**
                     * 设置是否允许键盘记录
                     * @param _allowKeyboardLogger 是否允许键盘记录
                     * 
                     */
                    void SetAllowKeyboardLogger(const bool& _allowKeyboardLogger);

                    /**
                     * 判断参数 AllowKeyboardLogger 是否已赋值
                     * @return AllowKeyboardLogger 是否已赋值
                     * 
                     */
                    bool AllowKeyboardLoggerHasBeenSet() const;

                private:

                    /**
                     * 工单唯一id，数据库索引id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 2-审批通过，4-审批驳回
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 审批意见
                     */
                    std::string m_approveDesc;
                    bool m_approveDescHasBeenSet;

                    /**
                     * 申请时间戳，单位微妙
                     */
                    int64_t m_applyTimeVersion;
                    bool m_applyTimeVersionHasBeenSet;

                    /**
                     * 审批权限工单时，设置的有效期开始时间，默认为当前时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 审批权限工单时，设置的有效期的结束时间，默认有限期为1天
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 是否开启磁盘映射
                     */
                    bool m_allowDiskRedirect;
                    bool m_allowDiskRedirectHasBeenSet;

                    /**
                     * 是否开启剪贴板文件上行
                     */
                    bool m_allowClipFileUp;
                    bool m_allowClipFileUpHasBeenSet;

                    /**
                     * 是否开启剪贴板文件下行
                     */
                    bool m_allowClipFileDown;
                    bool m_allowClipFileDownHasBeenSet;

                    /**
                     * 是否开启剪贴板文本（含图片）上行
                     */
                    bool m_allowClipTextUp;
                    bool m_allowClipTextUpHasBeenSet;

                    /**
                     * 是否开启剪贴板文本（含图片）下行
                     */
                    bool m_allowClipTextDown;
                    bool m_allowClipTextDownHasBeenSet;

                    /**
                     * 是否开启 SFTP 文件上传
                     */
                    bool m_allowFileUp;
                    bool m_allowFileUpHasBeenSet;

                    /**
                     * 文件传输上传大小限制（预留参数，目前暂未使用）
                     */
                    uint64_t m_maxFileUpSize;
                    bool m_maxFileUpSizeHasBeenSet;

                    /**
                     * 是否开启 SFTP 文件下载
                     */
                    bool m_allowFileDown;
                    bool m_allowFileDownHasBeenSet;

                    /**
                     * 文件传输下载大小限制（预留参数，目前暂未使用）
                     */
                    uint64_t m_maxFileDownSize;
                    bool m_maxFileDownSizeHasBeenSet;

                    /**
                     * 是否开启rdp磁盘映射文件上传
                     */
                    bool m_allowDiskFileUp;
                    bool m_allowDiskFileUpHasBeenSet;

                    /**
                     * 是否开启rdp磁盘映射文件下载
                     */
                    bool m_allowDiskFileDown;
                    bool m_allowDiskFileDownHasBeenSet;

                    /**
                     * 是否开启rz sz文件上传
                     */
                    bool m_allowShellFileUp;
                    bool m_allowShellFileUpHasBeenSet;

                    /**
                     * 是否开启rz sz文件下载
                     */
                    bool m_allowShellFileDown;
                    bool m_allowShellFileDownHasBeenSet;

                    /**
                     * 是否开启 SFTP 文件删除
                     */
                    bool m_allowFileDel;
                    bool m_allowFileDelHasBeenSet;

                    /**
                     * 是否允许使用访问串，默认允许
                     */
                    bool m_allowAccessCredential;
                    bool m_allowAccessCredentialHasBeenSet;

                    /**
                     * 关联的高危命令模板ID
                     */
                    std::vector<uint64_t> m_cmdTemplateIdSet;
                    bool m_cmdTemplateIdSetHasBeenSet;

                    /**
                     * 关联高危DB模板ID
                     */
                    std::vector<std::string> m_aCTemplateIdSet;
                    bool m_aCTemplateIdSetHasBeenSet;

                    /**
                     * 部门id
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                    /**
                     * 是否允许键盘记录
                     */
                    bool m_allowKeyboardLogger;
                    bool m_allowKeyboardLoggerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_APPROVETICKETREQUEST_H_
