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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_MODIFYACLREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_MODIFYACLREQUEST_H_

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
                * ModifyAcl请求参数结构体
                */
                class ModifyAclRequest : public AbstractModel
                {
                public:
                    ModifyAclRequest();
                    ~ModifyAclRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取访问权限名称，最大32字符，不能包含空白字符
                     * @return Name 访问权限名称，最大32字符，不能包含空白字符
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置访问权限名称，最大32字符，不能包含空白字符
                     * @param _name 访问权限名称，最大32字符，不能包含空白字符
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
                     * 获取是否允许任意账号登录
                     * @return AllowAnyAccount 是否允许任意账号登录
                     * 
                     */
                    bool GetAllowAnyAccount() const;

                    /**
                     * 设置是否允许任意账号登录
                     * @param _allowAnyAccount 是否允许任意账号登录
                     * 
                     */
                    void SetAllowAnyAccount(const bool& _allowAnyAccount);

                    /**
                     * 判断参数 AllowAnyAccount 是否已赋值
                     * @return AllowAnyAccount 是否已赋值
                     * 
                     */
                    bool AllowAnyAccountHasBeenSet() const;

                    /**
                     * 获取访问权限ID
                     * @return Id 访问权限ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置访问权限ID
                     * @param _id 访问权限ID
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
                     * 获取是否开启剪贴板文件上行，不传时默认为false
                     * @return AllowClipFileUp 是否开启剪贴板文件上行，不传时默认为false
                     * 
                     */
                    bool GetAllowClipFileUp() const;

                    /**
                     * 设置是否开启剪贴板文件上行，不传时默认为false
                     * @param _allowClipFileUp 是否开启剪贴板文件上行，不传时默认为false
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
                     * 获取是否开启剪贴板文件下行，不传时默认为false
                     * @return AllowClipFileDown 是否开启剪贴板文件下行，不传时默认为false
                     * 
                     */
                    bool GetAllowClipFileDown() const;

                    /**
                     * 设置是否开启剪贴板文件下行，不传时默认为false
                     * @param _allowClipFileDown 是否开启剪贴板文件下行，不传时默认为false
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
                     * 获取是否开启剪贴板文本（含图片）上行，不传时默认为false
                     * @return AllowClipTextUp 是否开启剪贴板文本（含图片）上行，不传时默认为false
                     * 
                     */
                    bool GetAllowClipTextUp() const;

                    /**
                     * 设置是否开启剪贴板文本（含图片）上行，不传时默认为false
                     * @param _allowClipTextUp 是否开启剪贴板文本（含图片）上行，不传时默认为false
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
                     * 获取是否开启剪贴板文本（含图片）下行，不传时默认为false
                     * @return AllowClipTextDown 是否开启剪贴板文本（含图片）下行，不传时默认为false
                     * 
                     */
                    bool GetAllowClipTextDown() const;

                    /**
                     * 设置是否开启剪贴板文本（含图片）下行，不传时默认为false
                     * @param _allowClipTextDown 是否开启剪贴板文本（含图片）下行，不传时默认为false
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
                     * 获取是否开启文件传输上传，不传时默认为false
                     * @return AllowFileUp 是否开启文件传输上传，不传时默认为false
                     * 
                     */
                    bool GetAllowFileUp() const;

                    /**
                     * 设置是否开启文件传输上传，不传时默认为false
                     * @param _allowFileUp 是否开启文件传输上传，不传时默认为false
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
                     * 获取文件传输上传大小限制（预留参数，目前暂未使用），不传时默认为0
                     * @return MaxFileUpSize 文件传输上传大小限制（预留参数，目前暂未使用），不传时默认为0
                     * 
                     */
                    uint64_t GetMaxFileUpSize() const;

                    /**
                     * 设置文件传输上传大小限制（预留参数，目前暂未使用），不传时默认为0
                     * @param _maxFileUpSize 文件传输上传大小限制（预留参数，目前暂未使用），不传时默认为0
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
                     * 获取是否开启文件传输下载，不传时默认为false
                     * @return AllowFileDown 是否开启文件传输下载，不传时默认为false
                     * 
                     */
                    bool GetAllowFileDown() const;

                    /**
                     * 设置是否开启文件传输下载，不传时默认为false
                     * @param _allowFileDown 是否开启文件传输下载，不传时默认为false
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
                     * 获取文件传输下载大小限制（预留参数，目前暂未使用），不传时默认为0
                     * @return MaxFileDownSize 文件传输下载大小限制（预留参数，目前暂未使用），不传时默认为0
                     * 
                     */
                    uint64_t GetMaxFileDownSize() const;

                    /**
                     * 设置文件传输下载大小限制（预留参数，目前暂未使用），不传时默认为0
                     * @param _maxFileDownSize 文件传输下载大小限制（预留参数，目前暂未使用），不传时默认为0
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
                     * 获取关联的用户ID
                     * @return UserIdSet 关联的用户ID
                     * 
                     */
                    std::vector<uint64_t> GetUserIdSet() const;

                    /**
                     * 设置关联的用户ID
                     * @param _userIdSet 关联的用户ID
                     * 
                     */
                    void SetUserIdSet(const std::vector<uint64_t>& _userIdSet);

                    /**
                     * 判断参数 UserIdSet 是否已赋值
                     * @return UserIdSet 是否已赋值
                     * 
                     */
                    bool UserIdSetHasBeenSet() const;

                    /**
                     * 获取关联的用户组ID
                     * @return UserGroupIdSet 关联的用户组ID
                     * 
                     */
                    std::vector<uint64_t> GetUserGroupIdSet() const;

                    /**
                     * 设置关联的用户组ID
                     * @param _userGroupIdSet 关联的用户组ID
                     * 
                     */
                    void SetUserGroupIdSet(const std::vector<uint64_t>& _userGroupIdSet);

                    /**
                     * 判断参数 UserGroupIdSet 是否已赋值
                     * @return UserGroupIdSet 是否已赋值
                     * 
                     */
                    bool UserGroupIdSetHasBeenSet() const;

                    /**
                     * 获取关联的资产ID
                     * @return DeviceIdSet 关联的资产ID
                     * 
                     */
                    std::vector<uint64_t> GetDeviceIdSet() const;

                    /**
                     * 设置关联的资产ID
                     * @param _deviceIdSet 关联的资产ID
                     * 
                     */
                    void SetDeviceIdSet(const std::vector<uint64_t>& _deviceIdSet);

                    /**
                     * 判断参数 DeviceIdSet 是否已赋值
                     * @return DeviceIdSet 是否已赋值
                     * 
                     */
                    bool DeviceIdSetHasBeenSet() const;

                    /**
                     * 获取关联的应用资产ID集合，不传时表示不选择任何应用资产
                     * @return AppAssetIdSet 关联的应用资产ID集合，不传时表示不选择任何应用资产
                     * 
                     */
                    std::vector<uint64_t> GetAppAssetIdSet() const;

                    /**
                     * 设置关联的应用资产ID集合，不传时表示不选择任何应用资产
                     * @param _appAssetIdSet 关联的应用资产ID集合，不传时表示不选择任何应用资产
                     * 
                     */
                    void SetAppAssetIdSet(const std::vector<uint64_t>& _appAssetIdSet);

                    /**
                     * 判断参数 AppAssetIdSet 是否已赋值
                     * @return AppAssetIdSet 是否已赋值
                     * 
                     */
                    bool AppAssetIdSetHasBeenSet() const;

                    /**
                     * 获取关联的资产组ID，不传时表示不选择任何资产组
                     * @return DeviceGroupIdSet 关联的资产组ID，不传时表示不选择任何资产组
                     * 
                     */
                    std::vector<uint64_t> GetDeviceGroupIdSet() const;

                    /**
                     * 设置关联的资产组ID，不传时表示不选择任何资产组
                     * @param _deviceGroupIdSet 关联的资产组ID，不传时表示不选择任何资产组
                     * 
                     */
                    void SetDeviceGroupIdSet(const std::vector<uint64_t>& _deviceGroupIdSet);

                    /**
                     * 判断参数 DeviceGroupIdSet 是否已赋值
                     * @return DeviceGroupIdSet 是否已赋值
                     * 
                     */
                    bool DeviceGroupIdSetHasBeenSet() const;

                    /**
                     * 获取关联的资产账号，不传时表示不选择任何资产账号
                     * @return AccountSet 关联的资产账号，不传时表示不选择任何资产账号
                     * 
                     */
                    std::vector<std::string> GetAccountSet() const;

                    /**
                     * 设置关联的资产账号，不传时表示不选择任何资产账号
                     * @param _accountSet 关联的资产账号，不传时表示不选择任何资产账号
                     * 
                     */
                    void SetAccountSet(const std::vector<std::string>& _accountSet);

                    /**
                     * 判断参数 AccountSet 是否已赋值
                     * @return AccountSet 是否已赋值
                     * 
                     */
                    bool AccountSetHasBeenSet() const;

                    /**
                     * 获取关联的高危命令模板ID，不传时表示不选择任何模板
                     * @return CmdTemplateIdSet 关联的高危命令模板ID，不传时表示不选择任何模板
                     * 
                     */
                    std::vector<uint64_t> GetCmdTemplateIdSet() const;

                    /**
                     * 设置关联的高危命令模板ID，不传时表示不选择任何模板
                     * @param _cmdTemplateIdSet 关联的高危命令模板ID，不传时表示不选择任何模板
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
                     * 获取关联高危DB模板ID，不传时表示不选择任何模板
                     * @return ACTemplateIdSet 关联高危DB模板ID，不传时表示不选择任何模板
                     * 
                     */
                    std::vector<std::string> GetACTemplateIdSet() const;

                    /**
                     * 设置关联高危DB模板ID，不传时表示不选择任何模板
                     * @param _aCTemplateIdSet 关联高危DB模板ID，不传时表示不选择任何模板
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
                     * 获取是否开启 RDP 磁盘映射文件上传，不传时默认为false
                     * @return AllowDiskFileUp 是否开启 RDP 磁盘映射文件上传，不传时默认为false
                     * 
                     */
                    bool GetAllowDiskFileUp() const;

                    /**
                     * 设置是否开启 RDP 磁盘映射文件上传，不传时默认为false
                     * @param _allowDiskFileUp 是否开启 RDP 磁盘映射文件上传，不传时默认为false
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
                     * 获取是否开启 RDP 磁盘映射文件下载，不传时默认为false
                     * @return AllowDiskFileDown 是否开启 RDP 磁盘映射文件下载，不传时默认为false
                     * 
                     */
                    bool GetAllowDiskFileDown() const;

                    /**
                     * 设置是否开启 RDP 磁盘映射文件下载，不传时默认为false
                     * @param _allowDiskFileDown 是否开启 RDP 磁盘映射文件下载，不传时默认为false
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
                     * 获取是否开启rz sz文件上传，不传时默认为false
                     * @return AllowShellFileUp 是否开启rz sz文件上传，不传时默认为false
                     * 
                     */
                    bool GetAllowShellFileUp() const;

                    /**
                     * 设置是否开启rz sz文件上传，不传时默认为false
                     * @param _allowShellFileUp 是否开启rz sz文件上传，不传时默认为false
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
                     * 获取是否开启rz sz文件下载，不传时默认为false
                     * @return AllowShellFileDown 是否开启rz sz文件下载，不传时默认为false
                     * 
                     */
                    bool GetAllowShellFileDown() const;

                    /**
                     * 设置是否开启rz sz文件下载，不传时默认为false
                     * @param _allowShellFileDown 是否开启rz sz文件下载，不传时默认为false
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
                     * 获取是否开启 SFTP 文件删除，不传时默认为false
                     * @return AllowFileDel 是否开启 SFTP 文件删除，不传时默认为false
                     * 
                     */
                    bool GetAllowFileDel() const;

                    /**
                     * 设置是否开启 SFTP 文件删除，不传时默认为false
                     * @param _allowFileDel 是否开启 SFTP 文件删除，不传时默认为false
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
                     * 获取访问权限生效时间，如:"2021-09-22T00:00:00+00:00"
生效、失效时间不填则访问权限长期有效
                     * @return ValidateFrom 访问权限生效时间，如:"2021-09-22T00:00:00+00:00"
生效、失效时间不填则访问权限长期有效
                     * 
                     */
                    std::string GetValidateFrom() const;

                    /**
                     * 设置访问权限生效时间，如:"2021-09-22T00:00:00+00:00"
生效、失效时间不填则访问权限长期有效
                     * @param _validateFrom 访问权限生效时间，如:"2021-09-22T00:00:00+00:00"
生效、失效时间不填则访问权限长期有效
                     * 
                     */
                    void SetValidateFrom(const std::string& _validateFrom);

                    /**
                     * 判断参数 ValidateFrom 是否已赋值
                     * @return ValidateFrom 是否已赋值
                     * 
                     */
                    bool ValidateFromHasBeenSet() const;

                    /**
                     * 获取访问权限失效时间，如:"2021-09-23T00:00:00+00:00"
生效、失效时间不填则访问权限长期有效
                     * @return ValidateTo 访问权限失效时间，如:"2021-09-23T00:00:00+00:00"
生效、失效时间不填则访问权限长期有效
                     * 
                     */
                    std::string GetValidateTo() const;

                    /**
                     * 设置访问权限失效时间，如:"2021-09-23T00:00:00+00:00"
生效、失效时间不填则访问权限长期有效
                     * @param _validateTo 访问权限失效时间，如:"2021-09-23T00:00:00+00:00"
生效、失效时间不填则访问权限长期有效
                     * 
                     */
                    void SetValidateTo(const std::string& _validateTo);

                    /**
                     * 判断参数 ValidateTo 是否已赋值
                     * @return ValidateTo 是否已赋值
                     * 
                     */
                    bool ValidateToHasBeenSet() const;

                    /**
                     * 获取权限所属部门的ID，如：1.2.3
                     * @return DepartmentId 权限所属部门的ID，如：1.2.3
                     * 
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置权限所属部门的ID，如：1.2.3
                     * @param _departmentId 权限所属部门的ID，如：1.2.3
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
                     * 获取是否允许使用访问串，不传时默认为true
                     * @return AllowAccessCredential 是否允许使用访问串，不传时默认为true
                     * 
                     */
                    bool GetAllowAccessCredential() const;

                    /**
                     * 设置是否允许使用访问串，不传时默认为true
                     * @param _allowAccessCredential 是否允许使用访问串，不传时默认为true
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
                     * 获取是否允许键盘记录，不传时默认为false
                     * @return AllowKeyboardLogger 是否允许键盘记录，不传时默认为false
                     * 
                     */
                    bool GetAllowKeyboardLogger() const;

                    /**
                     * 设置是否允许键盘记录，不传时默认为false
                     * @param _allowKeyboardLogger 是否允许键盘记录，不传时默认为false
                     * 
                     */
                    void SetAllowKeyboardLogger(const bool& _allowKeyboardLogger);

                    /**
                     * 判断参数 AllowKeyboardLogger 是否已赋值
                     * @return AllowKeyboardLogger 是否已赋值
                     * 
                     */
                    bool AllowKeyboardLoggerHasBeenSet() const;

                    /**
                     * 获取访问串有效期最大时长，秒数，允许使用访问串时需大于0且必须为86400整数倍，不传时默认为9999天对应的秒数
                     * @return MaxAccessCredentialDuration 访问串有效期最大时长，秒数，允许使用访问串时需大于0且必须为86400整数倍，不传时默认为9999天对应的秒数
                     * 
                     */
                    uint64_t GetMaxAccessCredentialDuration() const;

                    /**
                     * 设置访问串有效期最大时长，秒数，允许使用访问串时需大于0且必须为86400整数倍，不传时默认为9999天对应的秒数
                     * @param _maxAccessCredentialDuration 访问串有效期最大时长，秒数，允许使用访问串时需大于0且必须为86400整数倍，不传时默认为9999天对应的秒数
                     * 
                     */
                    void SetMaxAccessCredentialDuration(const uint64_t& _maxAccessCredentialDuration);

                    /**
                     * 判断参数 MaxAccessCredentialDuration 是否已赋值
                     * @return MaxAccessCredentialDuration 是否已赋值
                     * 
                     */
                    bool MaxAccessCredentialDurationHasBeenSet() const;

                private:

                    /**
                     * 访问权限名称，最大32字符，不能包含空白字符
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否开启磁盘映射
                     */
                    bool m_allowDiskRedirect;
                    bool m_allowDiskRedirectHasBeenSet;

                    /**
                     * 是否允许任意账号登录
                     */
                    bool m_allowAnyAccount;
                    bool m_allowAnyAccountHasBeenSet;

                    /**
                     * 访问权限ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 是否开启剪贴板文件上行，不传时默认为false
                     */
                    bool m_allowClipFileUp;
                    bool m_allowClipFileUpHasBeenSet;

                    /**
                     * 是否开启剪贴板文件下行，不传时默认为false
                     */
                    bool m_allowClipFileDown;
                    bool m_allowClipFileDownHasBeenSet;

                    /**
                     * 是否开启剪贴板文本（含图片）上行，不传时默认为false
                     */
                    bool m_allowClipTextUp;
                    bool m_allowClipTextUpHasBeenSet;

                    /**
                     * 是否开启剪贴板文本（含图片）下行，不传时默认为false
                     */
                    bool m_allowClipTextDown;
                    bool m_allowClipTextDownHasBeenSet;

                    /**
                     * 是否开启文件传输上传，不传时默认为false
                     */
                    bool m_allowFileUp;
                    bool m_allowFileUpHasBeenSet;

                    /**
                     * 文件传输上传大小限制（预留参数，目前暂未使用），不传时默认为0
                     */
                    uint64_t m_maxFileUpSize;
                    bool m_maxFileUpSizeHasBeenSet;

                    /**
                     * 是否开启文件传输下载，不传时默认为false
                     */
                    bool m_allowFileDown;
                    bool m_allowFileDownHasBeenSet;

                    /**
                     * 文件传输下载大小限制（预留参数，目前暂未使用），不传时默认为0
                     */
                    uint64_t m_maxFileDownSize;
                    bool m_maxFileDownSizeHasBeenSet;

                    /**
                     * 关联的用户ID
                     */
                    std::vector<uint64_t> m_userIdSet;
                    bool m_userIdSetHasBeenSet;

                    /**
                     * 关联的用户组ID
                     */
                    std::vector<uint64_t> m_userGroupIdSet;
                    bool m_userGroupIdSetHasBeenSet;

                    /**
                     * 关联的资产ID
                     */
                    std::vector<uint64_t> m_deviceIdSet;
                    bool m_deviceIdSetHasBeenSet;

                    /**
                     * 关联的应用资产ID集合，不传时表示不选择任何应用资产
                     */
                    std::vector<uint64_t> m_appAssetIdSet;
                    bool m_appAssetIdSetHasBeenSet;

                    /**
                     * 关联的资产组ID，不传时表示不选择任何资产组
                     */
                    std::vector<uint64_t> m_deviceGroupIdSet;
                    bool m_deviceGroupIdSetHasBeenSet;

                    /**
                     * 关联的资产账号，不传时表示不选择任何资产账号
                     */
                    std::vector<std::string> m_accountSet;
                    bool m_accountSetHasBeenSet;

                    /**
                     * 关联的高危命令模板ID，不传时表示不选择任何模板
                     */
                    std::vector<uint64_t> m_cmdTemplateIdSet;
                    bool m_cmdTemplateIdSetHasBeenSet;

                    /**
                     * 关联高危DB模板ID，不传时表示不选择任何模板
                     */
                    std::vector<std::string> m_aCTemplateIdSet;
                    bool m_aCTemplateIdSetHasBeenSet;

                    /**
                     * 是否开启 RDP 磁盘映射文件上传，不传时默认为false
                     */
                    bool m_allowDiskFileUp;
                    bool m_allowDiskFileUpHasBeenSet;

                    /**
                     * 是否开启 RDP 磁盘映射文件下载，不传时默认为false
                     */
                    bool m_allowDiskFileDown;
                    bool m_allowDiskFileDownHasBeenSet;

                    /**
                     * 是否开启rz sz文件上传，不传时默认为false
                     */
                    bool m_allowShellFileUp;
                    bool m_allowShellFileUpHasBeenSet;

                    /**
                     * 是否开启rz sz文件下载，不传时默认为false
                     */
                    bool m_allowShellFileDown;
                    bool m_allowShellFileDownHasBeenSet;

                    /**
                     * 是否开启 SFTP 文件删除，不传时默认为false
                     */
                    bool m_allowFileDel;
                    bool m_allowFileDelHasBeenSet;

                    /**
                     * 访问权限生效时间，如:"2021-09-22T00:00:00+00:00"
生效、失效时间不填则访问权限长期有效
                     */
                    std::string m_validateFrom;
                    bool m_validateFromHasBeenSet;

                    /**
                     * 访问权限失效时间，如:"2021-09-23T00:00:00+00:00"
生效、失效时间不填则访问权限长期有效
                     */
                    std::string m_validateTo;
                    bool m_validateToHasBeenSet;

                    /**
                     * 权限所属部门的ID，如：1.2.3
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                    /**
                     * 是否允许使用访问串，不传时默认为true
                     */
                    bool m_allowAccessCredential;
                    bool m_allowAccessCredentialHasBeenSet;

                    /**
                     * 是否允许键盘记录，不传时默认为false
                     */
                    bool m_allowKeyboardLogger;
                    bool m_allowKeyboardLoggerHasBeenSet;

                    /**
                     * 访问串有效期最大时长，秒数，允许使用访问串时需大于0且必须为86400整数倍，不传时默认为9999天对应的秒数
                     */
                    uint64_t m_maxAccessCredentialDuration;
                    bool m_maxAccessCredentialDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_MODIFYACLREQUEST_H_
