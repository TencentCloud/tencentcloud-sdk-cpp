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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_ACL_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_ACL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dasb/v20191018/model/User.h>
#include <tencentcloud/dasb/v20191018/model/Group.h>
#include <tencentcloud/dasb/v20191018/model/Device.h>
#include <tencentcloud/dasb/v20191018/model/CmdTemplate.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * 访问权限
                */
                class Acl : public AbstractModel
                {
                public:
                    Acl();
                    ~Acl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问权限ID
                     * @return Id 访问权限ID
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置访问权限ID
                     * @param Id 访问权限ID
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取规则名
                     * @return Name 规则名
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名
                     * @param Name 规则名
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
                     * 获取是否开启剪贴板text（目前含图片）上行
                     * @return AllowClipTextUp 是否开启剪贴板text（目前含图片）上行
                     */
                    bool GetAllowClipTextUp() const;

                    /**
                     * 设置是否开启剪贴板text（目前含图片）上行
                     * @param AllowClipTextUp 是否开启剪贴板text（目前含图片）上行
                     */
                    void SetAllowClipTextUp(const bool& _allowClipTextUp);

                    /**
                     * 判断参数 AllowClipTextUp 是否已赋值
                     * @return AllowClipTextUp 是否已赋值
                     */
                    bool AllowClipTextUpHasBeenSet() const;

                    /**
                     * 获取是否开启剪贴板text（目前含图片）下行
                     * @return AllowClipTextDown 是否开启剪贴板text（目前含图片）下行
                     */
                    bool GetAllowClipTextDown() const;

                    /**
                     * 设置是否开启剪贴板text（目前含图片）下行
                     * @param AllowClipTextDown 是否开启剪贴板text（目前含图片）下行
                     */
                    void SetAllowClipTextDown(const bool& _allowClipTextDown);

                    /**
                     * 判断参数 AllowClipTextDown 是否已赋值
                     * @return AllowClipTextDown 是否已赋值
                     */
                    bool AllowClipTextDownHasBeenSet() const;

                    /**
                     * 获取是否开启文件传输上传
                     * @return AllowFileUp 是否开启文件传输上传
                     */
                    bool GetAllowFileUp() const;

                    /**
                     * 设置是否开启文件传输上传
                     * @param AllowFileUp 是否开启文件传输上传
                     */
                    void SetAllowFileUp(const bool& _allowFileUp);

                    /**
                     * 判断参数 AllowFileUp 是否已赋值
                     * @return AllowFileUp 是否已赋值
                     */
                    bool AllowFileUpHasBeenSet() const;

                    /**
                     * 获取文件传输上传大小限制
                     * @return MaxFileUpSize 文件传输上传大小限制
                     */
                    uint64_t GetMaxFileUpSize() const;

                    /**
                     * 设置文件传输上传大小限制
                     * @param MaxFileUpSize 文件传输上传大小限制
                     */
                    void SetMaxFileUpSize(const uint64_t& _maxFileUpSize);

                    /**
                     * 判断参数 MaxFileUpSize 是否已赋值
                     * @return MaxFileUpSize 是否已赋值
                     */
                    bool MaxFileUpSizeHasBeenSet() const;

                    /**
                     * 获取是否开启文件传输下载
                     * @return AllowFileDown 是否开启文件传输下载
                     */
                    bool GetAllowFileDown() const;

                    /**
                     * 设置是否开启文件传输下载
                     * @param AllowFileDown 是否开启文件传输下载
                     */
                    void SetAllowFileDown(const bool& _allowFileDown);

                    /**
                     * 判断参数 AllowFileDown 是否已赋值
                     * @return AllowFileDown 是否已赋值
                     */
                    bool AllowFileDownHasBeenSet() const;

                    /**
                     * 获取文件传输下载大小限制
                     * @return MaxFileDownSize 文件传输下载大小限制
                     */
                    uint64_t GetMaxFileDownSize() const;

                    /**
                     * 设置文件传输下载大小限制
                     * @param MaxFileDownSize 文件传输下载大小限制
                     */
                    void SetMaxFileDownSize(const uint64_t& _maxFileDownSize);

                    /**
                     * 判断参数 MaxFileDownSize 是否已赋值
                     * @return MaxFileDownSize 是否已赋值
                     */
                    bool MaxFileDownSizeHasBeenSet() const;

                    /**
                     * 获取是否允许任意账号登陆
                     * @return AllowAnyAccount 是否允许任意账号登陆
                     */
                    bool GetAllowAnyAccount() const;

                    /**
                     * 设置是否允许任意账号登陆
                     * @param AllowAnyAccount 是否允许任意账号登陆
                     */
                    void SetAllowAnyAccount(const bool& _allowAnyAccount);

                    /**
                     * 判断参数 AllowAnyAccount 是否已赋值
                     * @return AllowAnyAccount 是否已赋值
                     */
                    bool AllowAnyAccountHasBeenSet() const;

                    /**
                     * 获取关联的用户列表
                     * @return UserSet 关联的用户列表
                     */
                    std::vector<User> GetUserSet() const;

                    /**
                     * 设置关联的用户列表
                     * @param UserSet 关联的用户列表
                     */
                    void SetUserSet(const std::vector<User>& _userSet);

                    /**
                     * 判断参数 UserSet 是否已赋值
                     * @return UserSet 是否已赋值
                     */
                    bool UserSetHasBeenSet() const;

                    /**
                     * 获取关联的用户组列表
                     * @return UserGroupSet 关联的用户组列表
                     */
                    std::vector<Group> GetUserGroupSet() const;

                    /**
                     * 设置关联的用户组列表
                     * @param UserGroupSet 关联的用户组列表
                     */
                    void SetUserGroupSet(const std::vector<Group>& _userGroupSet);

                    /**
                     * 判断参数 UserGroupSet 是否已赋值
                     * @return UserGroupSet 是否已赋值
                     */
                    bool UserGroupSetHasBeenSet() const;

                    /**
                     * 获取关联的主机列表
                     * @return DeviceSet 关联的主机列表
                     */
                    std::vector<Device> GetDeviceSet() const;

                    /**
                     * 设置关联的主机列表
                     * @param DeviceSet 关联的主机列表
                     */
                    void SetDeviceSet(const std::vector<Device>& _deviceSet);

                    /**
                     * 判断参数 DeviceSet 是否已赋值
                     * @return DeviceSet 是否已赋值
                     */
                    bool DeviceSetHasBeenSet() const;

                    /**
                     * 获取关联的主机组列表
                     * @return DeviceGroupSet 关联的主机组列表
                     */
                    std::vector<Group> GetDeviceGroupSet() const;

                    /**
                     * 设置关联的主机组列表
                     * @param DeviceGroupSet 关联的主机组列表
                     */
                    void SetDeviceGroupSet(const std::vector<Group>& _deviceGroupSet);

                    /**
                     * 判断参数 DeviceGroupSet 是否已赋值
                     * @return DeviceGroupSet 是否已赋值
                     */
                    bool DeviceGroupSetHasBeenSet() const;

                    /**
                     * 获取关联的账号列表
                     * @return AccountSet 关联的账号列表
                     */
                    std::vector<std::string> GetAccountSet() const;

                    /**
                     * 设置关联的账号列表
                     * @param AccountSet 关联的账号列表
                     */
                    void SetAccountSet(const std::vector<std::string>& _accountSet);

                    /**
                     * 判断参数 AccountSet 是否已赋值
                     * @return AccountSet 是否已赋值
                     */
                    bool AccountSetHasBeenSet() const;

                    /**
                     * 获取关联的高危命令模板列表
                     * @return CmdTemplateSet 关联的高危命令模板列表
                     */
                    std::vector<CmdTemplate> GetCmdTemplateSet() const;

                    /**
                     * 设置关联的高危命令模板列表
                     * @param CmdTemplateSet 关联的高危命令模板列表
                     */
                    void SetCmdTemplateSet(const std::vector<CmdTemplate>& _cmdTemplateSet);

                    /**
                     * 判断参数 CmdTemplateSet 是否已赋值
                     * @return CmdTemplateSet 是否已赋值
                     */
                    bool CmdTemplateSetHasBeenSet() const;

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
                     * 获取是否开启SFTP文件删除
                     * @return AllowFileDel 是否开启SFTP文件删除
                     */
                    bool GetAllowFileDel() const;

                    /**
                     * 设置是否开启SFTP文件删除
                     * @param AllowFileDel 是否开启SFTP文件删除
                     */
                    void SetAllowFileDel(const bool& _allowFileDel);

                    /**
                     * 判断参数 AllowFileDel 是否已赋值
                     * @return AllowFileDel 是否已赋值
                     */
                    bool AllowFileDelHasBeenSet() const;

                    /**
                     * 获取生效日期
                     * @return ValidateFrom 生效日期
                     */
                    std::string GetValidateFrom() const;

                    /**
                     * 设置生效日期
                     * @param ValidateFrom 生效日期
                     */
                    void SetValidateFrom(const std::string& _validateFrom);

                    /**
                     * 判断参数 ValidateFrom 是否已赋值
                     * @return ValidateFrom 是否已赋值
                     */
                    bool ValidateFromHasBeenSet() const;

                    /**
                     * 获取失效日期
                     * @return ValidateTo 失效日期
                     */
                    std::string GetValidateTo() const;

                    /**
                     * 设置失效日期
                     * @param ValidateTo 失效日期
                     */
                    void SetValidateTo(const std::string& _validateTo);

                    /**
                     * 判断参数 ValidateTo 是否已赋值
                     * @return ValidateTo 是否已赋值
                     */
                    bool ValidateToHasBeenSet() const;

                    /**
                     * 获取策略状态，1-已生效，2-未生效，3-已过期
                     * @return Status 策略状态，1-已生效，2-未生效，3-已过期
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置策略状态，1-已生效，2-未生效，3-已过期
                     * @param Status 策略状态，1-已生效，2-未生效，3-已过期
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 访问权限ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 规则名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

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
                     * 是否开启剪贴板text（目前含图片）上行
                     */
                    bool m_allowClipTextUp;
                    bool m_allowClipTextUpHasBeenSet;

                    /**
                     * 是否开启剪贴板text（目前含图片）下行
                     */
                    bool m_allowClipTextDown;
                    bool m_allowClipTextDownHasBeenSet;

                    /**
                     * 是否开启文件传输上传
                     */
                    bool m_allowFileUp;
                    bool m_allowFileUpHasBeenSet;

                    /**
                     * 文件传输上传大小限制
                     */
                    uint64_t m_maxFileUpSize;
                    bool m_maxFileUpSizeHasBeenSet;

                    /**
                     * 是否开启文件传输下载
                     */
                    bool m_allowFileDown;
                    bool m_allowFileDownHasBeenSet;

                    /**
                     * 文件传输下载大小限制
                     */
                    uint64_t m_maxFileDownSize;
                    bool m_maxFileDownSizeHasBeenSet;

                    /**
                     * 是否允许任意账号登陆
                     */
                    bool m_allowAnyAccount;
                    bool m_allowAnyAccountHasBeenSet;

                    /**
                     * 关联的用户列表
                     */
                    std::vector<User> m_userSet;
                    bool m_userSetHasBeenSet;

                    /**
                     * 关联的用户组列表
                     */
                    std::vector<Group> m_userGroupSet;
                    bool m_userGroupSetHasBeenSet;

                    /**
                     * 关联的主机列表
                     */
                    std::vector<Device> m_deviceSet;
                    bool m_deviceSetHasBeenSet;

                    /**
                     * 关联的主机组列表
                     */
                    std::vector<Group> m_deviceGroupSet;
                    bool m_deviceGroupSetHasBeenSet;

                    /**
                     * 关联的账号列表
                     */
                    std::vector<std::string> m_accountSet;
                    bool m_accountSetHasBeenSet;

                    /**
                     * 关联的高危命令模板列表
                     */
                    std::vector<CmdTemplate> m_cmdTemplateSet;
                    bool m_cmdTemplateSetHasBeenSet;

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
                     * 是否开启SFTP文件删除
                     */
                    bool m_allowFileDel;
                    bool m_allowFileDelHasBeenSet;

                    /**
                     * 生效日期
                     */
                    std::string m_validateFrom;
                    bool m_validateFromHasBeenSet;

                    /**
                     * 失效日期
                     */
                    std::string m_validateTo;
                    bool m_validateToHasBeenSet;

                    /**
                     * 策略状态，1-已生效，2-未生效，3-已过期
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_ACL_H_
