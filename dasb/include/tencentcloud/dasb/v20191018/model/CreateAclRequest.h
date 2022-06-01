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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_CREATEACLREQUEST_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_CREATEACLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * CreateAcl请求参数结构体
                */
                class CreateAclRequest : public AbstractModel
                {
                public:
                    CreateAclRequest();
                    ~CreateAclRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取权限名称，最大32字符，不能包含空白字符
                     * @return Name 权限名称，最大32字符，不能包含空白字符
                     */
                    std::string GetName() const;

                    /**
                     * 设置权限名称，最大32字符，不能包含空白字符
                     * @param Name 权限名称，最大32字符，不能包含空白字符
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取是否开启磁盘映射
                     * @return AllowDiskRedirect 是否开启磁盘映射
                     */
                    bool GetAllowDiskRedirect() const;

                    /**
                     * 设置是否开启磁盘映射
                     * @param AllowDiskRedirect 是否开启磁盘映射
                     */
                    void SetAllowDiskRedirect(const bool& _allowDiskRedirect);

                    /**
                     * 判断参数 AllowDiskRedirect 是否已赋值
                     * @return AllowDiskRedirect 是否已赋值
                     */
                    bool AllowDiskRedirectHasBeenSet() const;

                    /**
                     * 获取是否允许任意账号登录
                     * @return AllowAnyAccount 是否允许任意账号登录
                     */
                    bool GetAllowAnyAccount() const;

                    /**
                     * 设置是否允许任意账号登录
                     * @param AllowAnyAccount 是否允许任意账号登录
                     */
                    void SetAllowAnyAccount(const bool& _allowAnyAccount);

                    /**
                     * 判断参数 AllowAnyAccount 是否已赋值
                     * @return AllowAnyAccount 是否已赋值
                     */
                    bool AllowAnyAccountHasBeenSet() const;

                    /**
                     * 获取是否开启剪贴板文件上行
                     * @return AllowClipFileUp 是否开启剪贴板文件上行
                     */
                    bool GetAllowClipFileUp() const;

                    /**
                     * 设置是否开启剪贴板文件上行
                     * @param AllowClipFileUp 是否开启剪贴板文件上行
                     */
                    void SetAllowClipFileUp(const bool& _allowClipFileUp);

                    /**
                     * 判断参数 AllowClipFileUp 是否已赋值
                     * @return AllowClipFileUp 是否已赋值
                     */
                    bool AllowClipFileUpHasBeenSet() const;

                    /**
                     * 获取是否开启剪贴板文件下行
                     * @return AllowClipFileDown 是否开启剪贴板文件下行
                     */
                    bool GetAllowClipFileDown() const;

                    /**
                     * 设置是否开启剪贴板文件下行
                     * @param AllowClipFileDown 是否开启剪贴板文件下行
                     */
                    void SetAllowClipFileDown(const bool& _allowClipFileDown);

                    /**
                     * 判断参数 AllowClipFileDown 是否已赋值
                     * @return AllowClipFileDown 是否已赋值
                     */
                    bool AllowClipFileDownHasBeenSet() const;

                    /**
                     * 获取是否开启剪贴板文本（含图片）上行
                     * @return AllowClipTextUp 是否开启剪贴板文本（含图片）上行
                     */
                    bool GetAllowClipTextUp() const;

                    /**
                     * 设置是否开启剪贴板文本（含图片）上行
                     * @param AllowClipTextUp 是否开启剪贴板文本（含图片）上行
                     */
                    void SetAllowClipTextUp(const bool& _allowClipTextUp);

                    /**
                     * 判断参数 AllowClipTextUp 是否已赋值
                     * @return AllowClipTextUp 是否已赋值
                     */
                    bool AllowClipTextUpHasBeenSet() const;

                    /**
                     * 获取是否开启剪贴板文本（含图片）下行
                     * @return AllowClipTextDown 是否开启剪贴板文本（含图片）下行
                     */
                    bool GetAllowClipTextDown() const;

                    /**
                     * 设置是否开启剪贴板文本（含图片）下行
                     * @param AllowClipTextDown 是否开启剪贴板文本（含图片）下行
                     */
                    void SetAllowClipTextDown(const bool& _allowClipTextDown);

                    /**
                     * 判断参数 AllowClipTextDown 是否已赋值
                     * @return AllowClipTextDown 是否已赋值
                     */
                    bool AllowClipTextDownHasBeenSet() const;

                    /**
                     * 获取是否开启 SFTP 文件上传
                     * @return AllowFileUp 是否开启 SFTP 文件上传
                     */
                    bool GetAllowFileUp() const;

                    /**
                     * 设置是否开启 SFTP 文件上传
                     * @param AllowFileUp 是否开启 SFTP 文件上传
                     */
                    void SetAllowFileUp(const bool& _allowFileUp);

                    /**
                     * 判断参数 AllowFileUp 是否已赋值
                     * @return AllowFileUp 是否已赋值
                     */
                    bool AllowFileUpHasBeenSet() const;

                    /**
                     * 获取文件传输上传大小限制（预留参数，目前暂未使用）
                     * @return MaxFileUpSize 文件传输上传大小限制（预留参数，目前暂未使用）
                     */
                    uint64_t GetMaxFileUpSize() const;

                    /**
                     * 设置文件传输上传大小限制（预留参数，目前暂未使用）
                     * @param MaxFileUpSize 文件传输上传大小限制（预留参数，目前暂未使用）
                     */
                    void SetMaxFileUpSize(const uint64_t& _maxFileUpSize);

                    /**
                     * 判断参数 MaxFileUpSize 是否已赋值
                     * @return MaxFileUpSize 是否已赋值
                     */
                    bool MaxFileUpSizeHasBeenSet() const;

                    /**
                     * 获取是否开启 SFTP 文件下载
                     * @return AllowFileDown 是否开启 SFTP 文件下载
                     */
                    bool GetAllowFileDown() const;

                    /**
                     * 设置是否开启 SFTP 文件下载
                     * @param AllowFileDown 是否开启 SFTP 文件下载
                     */
                    void SetAllowFileDown(const bool& _allowFileDown);

                    /**
                     * 判断参数 AllowFileDown 是否已赋值
                     * @return AllowFileDown 是否已赋值
                     */
                    bool AllowFileDownHasBeenSet() const;

                    /**
                     * 获取文件传输下载大小限制（预留参数，目前暂未使用）
                     * @return MaxFileDownSize 文件传输下载大小限制（预留参数，目前暂未使用）
                     */
                    uint64_t GetMaxFileDownSize() const;

                    /**
                     * 设置文件传输下载大小限制（预留参数，目前暂未使用）
                     * @param MaxFileDownSize 文件传输下载大小限制（预留参数，目前暂未使用）
                     */
                    void SetMaxFileDownSize(const uint64_t& _maxFileDownSize);

                    /**
                     * 判断参数 MaxFileDownSize 是否已赋值
                     * @return MaxFileDownSize 是否已赋值
                     */
                    bool MaxFileDownSizeHasBeenSet() const;

                    /**
                     * 获取关联的用户ID集合
                     * @return UserIdSet 关联的用户ID集合
                     */
                    std::vector<uint64_t> GetUserIdSet() const;

                    /**
                     * 设置关联的用户ID集合
                     * @param UserIdSet 关联的用户ID集合
                     */
                    void SetUserIdSet(const std::vector<uint64_t>& _userIdSet);

                    /**
                     * 判断参数 UserIdSet 是否已赋值
                     * @return UserIdSet 是否已赋值
                     */
                    bool UserIdSetHasBeenSet() const;

                    /**
                     * 获取关联的用户组ID
                     * @return UserGroupIdSet 关联的用户组ID
                     */
                    std::vector<uint64_t> GetUserGroupIdSet() const;

                    /**
                     * 设置关联的用户组ID
                     * @param UserGroupIdSet 关联的用户组ID
                     */
                    void SetUserGroupIdSet(const std::vector<uint64_t>& _userGroupIdSet);

                    /**
                     * 判断参数 UserGroupIdSet 是否已赋值
                     * @return UserGroupIdSet 是否已赋值
                     */
                    bool UserGroupIdSetHasBeenSet() const;

                    /**
                     * 获取关联的资产ID集合
                     * @return DeviceIdSet 关联的资产ID集合
                     */
                    std::vector<uint64_t> GetDeviceIdSet() const;

                    /**
                     * 设置关联的资产ID集合
                     * @param DeviceIdSet 关联的资产ID集合
                     */
                    void SetDeviceIdSet(const std::vector<uint64_t>& _deviceIdSet);

                    /**
                     * 判断参数 DeviceIdSet 是否已赋值
                     * @return DeviceIdSet 是否已赋值
                     */
                    bool DeviceIdSetHasBeenSet() const;

                    /**
                     * 获取关联的资产组ID
                     * @return DeviceGroupIdSet 关联的资产组ID
                     */
                    std::vector<uint64_t> GetDeviceGroupIdSet() const;

                    /**
                     * 设置关联的资产组ID
                     * @param DeviceGroupIdSet 关联的资产组ID
                     */
                    void SetDeviceGroupIdSet(const std::vector<uint64_t>& _deviceGroupIdSet);

                    /**
                     * 判断参数 DeviceGroupIdSet 是否已赋值
                     * @return DeviceGroupIdSet 是否已赋值
                     */
                    bool DeviceGroupIdSetHasBeenSet() const;

                    /**
                     * 获取关联的账号
                     * @return AccountSet 关联的账号
                     */
                    std::vector<std::string> GetAccountSet() const;

                    /**
                     * 设置关联的账号
                     * @param AccountSet 关联的账号
                     */
                    void SetAccountSet(const std::vector<std::string>& _accountSet);

                    /**
                     * 判断参数 AccountSet 是否已赋值
                     * @return AccountSet 是否已赋值
                     */
                    bool AccountSetHasBeenSet() const;

                    /**
                     * 获取关联的高危命令模板ID
                     * @return CmdTemplateIdSet 关联的高危命令模板ID
                     */
                    std::vector<uint64_t> GetCmdTemplateIdSet() const;

                    /**
                     * 设置关联的高危命令模板ID
                     * @param CmdTemplateIdSet 关联的高危命令模板ID
                     */
                    void SetCmdTemplateIdSet(const std::vector<uint64_t>& _cmdTemplateIdSet);

                    /**
                     * 判断参数 CmdTemplateIdSet 是否已赋值
                     * @return CmdTemplateIdSet 是否已赋值
                     */
                    bool CmdTemplateIdSetHasBeenSet() const;

                    /**
                     * 获取是否开启rdp磁盘映射文件上传
                     * @return AllowDiskFileUp 是否开启rdp磁盘映射文件上传
                     */
                    bool GetAllowDiskFileUp() const;

                    /**
                     * 设置是否开启rdp磁盘映射文件上传
                     * @param AllowDiskFileUp 是否开启rdp磁盘映射文件上传
                     */
                    void SetAllowDiskFileUp(const bool& _allowDiskFileUp);

                    /**
                     * 判断参数 AllowDiskFileUp 是否已赋值
                     * @return AllowDiskFileUp 是否已赋值
                     */
                    bool AllowDiskFileUpHasBeenSet() const;

                    /**
                     * 获取是否开启rdp磁盘映射文件下载
                     * @return AllowDiskFileDown 是否开启rdp磁盘映射文件下载
                     */
                    bool GetAllowDiskFileDown() const;

                    /**
                     * 设置是否开启rdp磁盘映射文件下载
                     * @param AllowDiskFileDown 是否开启rdp磁盘映射文件下载
                     */
                    void SetAllowDiskFileDown(const bool& _allowDiskFileDown);

                    /**
                     * 判断参数 AllowDiskFileDown 是否已赋值
                     * @return AllowDiskFileDown 是否已赋值
                     */
                    bool AllowDiskFileDownHasBeenSet() const;

                    /**
                     * 获取是否开启rz sz文件上传
                     * @return AllowShellFileUp 是否开启rz sz文件上传
                     */
                    bool GetAllowShellFileUp() const;

                    /**
                     * 设置是否开启rz sz文件上传
                     * @param AllowShellFileUp 是否开启rz sz文件上传
                     */
                    void SetAllowShellFileUp(const bool& _allowShellFileUp);

                    /**
                     * 判断参数 AllowShellFileUp 是否已赋值
                     * @return AllowShellFileUp 是否已赋值
                     */
                    bool AllowShellFileUpHasBeenSet() const;

                    /**
                     * 获取是否开启rz sz文件下载
                     * @return AllowShellFileDown 是否开启rz sz文件下载
                     */
                    bool GetAllowShellFileDown() const;

                    /**
                     * 设置是否开启rz sz文件下载
                     * @param AllowShellFileDown 是否开启rz sz文件下载
                     */
                    void SetAllowShellFileDown(const bool& _allowShellFileDown);

                    /**
                     * 判断参数 AllowShellFileDown 是否已赋值
                     * @return AllowShellFileDown 是否已赋值
                     */
                    bool AllowShellFileDownHasBeenSet() const;

                    /**
                     * 获取是否开启 SFTP 文件删除
                     * @return AllowFileDel 是否开启 SFTP 文件删除
                     */
                    bool GetAllowFileDel() const;

                    /**
                     * 设置是否开启 SFTP 文件删除
                     * @param AllowFileDel 是否开启 SFTP 文件删除
                     */
                    void SetAllowFileDel(const bool& _allowFileDel);

                    /**
                     * 判断参数 AllowFileDel 是否已赋值
                     * @return AllowFileDel 是否已赋值
                     */
                    bool AllowFileDelHasBeenSet() const;

                    /**
                     * 获取访问权限生效时间，如:"2021-09-22T00:00:00+00:00"
生效、失效时间不填则访问权限长期有效
                     * @return ValidateFrom 访问权限生效时间，如:"2021-09-22T00:00:00+00:00"
生效、失效时间不填则访问权限长期有效
                     */
                    std::string GetValidateFrom() const;

                    /**
                     * 设置访问权限生效时间，如:"2021-09-22T00:00:00+00:00"
生效、失效时间不填则访问权限长期有效
                     * @param ValidateFrom 访问权限生效时间，如:"2021-09-22T00:00:00+00:00"
生效、失效时间不填则访问权限长期有效
                     */
                    void SetValidateFrom(const std::string& _validateFrom);

                    /**
                     * 判断参数 ValidateFrom 是否已赋值
                     * @return ValidateFrom 是否已赋值
                     */
                    bool ValidateFromHasBeenSet() const;

                    /**
                     * 获取访问权限失效时间，如:"2021-09-23T00:00:00+00:00"
生效、失效时间不填则访问权限长期有效
                     * @return ValidateTo 访问权限失效时间，如:"2021-09-23T00:00:00+00:00"
生效、失效时间不填则访问权限长期有效
                     */
                    std::string GetValidateTo() const;

                    /**
                     * 设置访问权限失效时间，如:"2021-09-23T00:00:00+00:00"
生效、失效时间不填则访问权限长期有效
                     * @param ValidateTo 访问权限失效时间，如:"2021-09-23T00:00:00+00:00"
生效、失效时间不填则访问权限长期有效
                     */
                    void SetValidateTo(const std::string& _validateTo);

                    /**
                     * 判断参数 ValidateTo 是否已赋值
                     * @return ValidateTo 是否已赋值
                     */
                    bool ValidateToHasBeenSet() const;

                private:

                    /**
                     * 权限名称，最大32字符，不能包含空白字符
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
                     * 关联的用户ID集合
                     */
                    std::vector<uint64_t> m_userIdSet;
                    bool m_userIdSetHasBeenSet;

                    /**
                     * 关联的用户组ID
                     */
                    std::vector<uint64_t> m_userGroupIdSet;
                    bool m_userGroupIdSetHasBeenSet;

                    /**
                     * 关联的资产ID集合
                     */
                    std::vector<uint64_t> m_deviceIdSet;
                    bool m_deviceIdSetHasBeenSet;

                    /**
                     * 关联的资产组ID
                     */
                    std::vector<uint64_t> m_deviceGroupIdSet;
                    bool m_deviceGroupIdSetHasBeenSet;

                    /**
                     * 关联的账号
                     */
                    std::vector<std::string> m_accountSet;
                    bool m_accountSetHasBeenSet;

                    /**
                     * 关联的高危命令模板ID
                     */
                    std::vector<uint64_t> m_cmdTemplateIdSet;
                    bool m_cmdTemplateIdSetHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_CREATEACLREQUEST_H_
