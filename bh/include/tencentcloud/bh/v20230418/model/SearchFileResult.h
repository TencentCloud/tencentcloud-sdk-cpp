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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_SEARCHFILERESULT_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_SEARCHFILERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 文件传输检索结果
                */
                class SearchFileResult : public AbstractModel
                {
                public:
                    SearchFileResult();
                    ~SearchFileResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>文件传输的时间</p>
                     * @return Time <p>文件传输的时间</p>
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置<p>文件传输的时间</p>
                     * @param _time <p>文件传输的时间</p>
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取<p>用户名</p>
                     * @return UserName <p>用户名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户名</p>
                     * @param _userName <p>用户名</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>姓名</p>
                     * @return RealName <p>姓名</p>
                     * 
                     */
                    std::string GetRealName() const;

                    /**
                     * 设置<p>姓名</p>
                     * @param _realName <p>姓名</p>
                     * 
                     */
                    void SetRealName(const std::string& _realName);

                    /**
                     * 判断参数 RealName 是否已赋值
                     * @return RealName 是否已赋值
                     * 
                     */
                    bool RealNameHasBeenSet() const;

                    /**
                     * 获取<p>资产ID</p>
                     * @return InstanceId <p>资产ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>资产ID</p>
                     * @param _instanceId <p>资产ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>资产名称</p>
                     * @return DeviceName <p>资产名称</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>资产名称</p>
                     * @param _deviceName <p>资产名称</p>
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取<p>资产公网IP</p>
                     * @return PublicIp <p>资产公网IP</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>资产公网IP</p>
                     * @param _publicIp <p>资产公网IP</p>
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取<p>资产内网IP</p>
                     * @return PrivateIp <p>资产内网IP</p>
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置<p>资产内网IP</p>
                     * @param _privateIp <p>资产内网IP</p>
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取<p>操作结果：1 - 已放行，2 - 已阻断</p>
                     * @return Action <p>操作结果：1 - 已放行，2 - 已阻断</p>
                     * 
                     */
                    uint64_t GetAction() const;

                    /**
                     * 设置<p>操作结果：1 - 已放行，2 - 已阻断</p>
                     * @param _action <p>操作结果：1 - 已放行，2 - 已阻断</p>
                     * 
                     */
                    void SetAction(const uint64_t& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>操作类型：1 - 文件上传，2 - 文件下载，3 - 文件删除，4 - 文件(夹)移动，5 - 文件(夹)重命名，6 - 新建文件夹，9 - 删除文件夹</p>
                     * @return Method <p>操作类型：1 - 文件上传，2 - 文件下载，3 - 文件删除，4 - 文件(夹)移动，5 - 文件(夹)重命名，6 - 新建文件夹，9 - 删除文件夹</p>
                     * 
                     */
                    uint64_t GetMethod() const;

                    /**
                     * 设置<p>操作类型：1 - 文件上传，2 - 文件下载，3 - 文件删除，4 - 文件(夹)移动，5 - 文件(夹)重命名，6 - 新建文件夹，9 - 删除文件夹</p>
                     * @param _method <p>操作类型：1 - 文件上传，2 - 文件下载，3 - 文件删除，4 - 文件(夹)移动，5 - 文件(夹)重命名，6 - 新建文件夹，9 - 删除文件夹</p>
                     * 
                     */
                    void SetMethod(const uint64_t& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取<p>下载的文件（夹）路径及名称</p>
                     * @return FileCurr <p>下载的文件（夹）路径及名称</p>
                     * 
                     */
                    std::string GetFileCurr() const;

                    /**
                     * 设置<p>下载的文件（夹）路径及名称</p>
                     * @param _fileCurr <p>下载的文件（夹）路径及名称</p>
                     * 
                     */
                    void SetFileCurr(const std::string& _fileCurr);

                    /**
                     * 判断参数 FileCurr 是否已赋值
                     * @return FileCurr 是否已赋值
                     * 
                     */
                    bool FileCurrHasBeenSet() const;

                    /**
                     * 获取<p>上传或新建文件（夹）路径及名称</p>
                     * @return FileNew <p>上传或新建文件（夹）路径及名称</p>
                     * 
                     */
                    std::string GetFileNew() const;

                    /**
                     * 设置<p>上传或新建文件（夹）路径及名称</p>
                     * @param _fileNew <p>上传或新建文件（夹）路径及名称</p>
                     * 
                     */
                    void SetFileNew(const std::string& _fileNew);

                    /**
                     * 判断参数 FileNew 是否已赋值
                     * @return FileNew 是否已赋值
                     * 
                     */
                    bool FileNewHasBeenSet() const;

                    /**
                     * 获取<p>会话id</p>
                     * @return Sid <p>会话id</p>
                     * 
                     */
                    std::string GetSid() const;

                    /**
                     * 设置<p>会话id</p>
                     * @param _sid <p>会话id</p>
                     * 
                     */
                    void SetSid(const std::string& _sid);

                    /**
                     * 判断参数 Sid 是否已赋值
                     * @return Sid 是否已赋值
                     * 
                     */
                    bool SidHasBeenSet() const;

                    /**
                     * 获取<p>账号</p>
                     * @return Account <p>账号</p>
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置<p>账号</p>
                     * @param _account <p>账号</p>
                     * 
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取<p>来源id</p>
                     * @return FromIp <p>来源id</p>
                     * 
                     */
                    std::string GetFromIp() const;

                    /**
                     * 设置<p>来源id</p>
                     * @param _fromIp <p>来源id</p>
                     * 
                     */
                    void SetFromIp(const std::string& _fromIp);

                    /**
                     * 判断参数 FromIp 是否已赋值
                     * @return FromIp 是否已赋值
                     * 
                     */
                    bool FromIpHasBeenSet() const;

                    /**
                     * 获取<p>协议</p>
                     * @return Protocol <p>协议</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>协议</p>
                     * @param _protocol <p>协议</p>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>文件大小</p>
                     * @return Size <p>文件大小</p>
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置<p>文件大小</p>
                     * @param _size <p>文件大小</p>
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取<p>复核时间</p>
                     * @return ConfirmTime <p>复核时间</p>
                     * 
                     */
                    std::string GetConfirmTime() const;

                    /**
                     * 设置<p>复核时间</p>
                     * @param _confirmTime <p>复核时间</p>
                     * 
                     */
                    void SetConfirmTime(const std::string& _confirmTime);

                    /**
                     * 判断参数 ConfirmTime 是否已赋值
                     * @return ConfirmTime 是否已赋值
                     * 
                     */
                    bool ConfirmTimeHasBeenSet() const;

                    /**
                     * 获取<p>用户部门id</p>
                     * @return UserDepartmentId <p>用户部门id</p>
                     * 
                     */
                    std::string GetUserDepartmentId() const;

                    /**
                     * 设置<p>用户部门id</p>
                     * @param _userDepartmentId <p>用户部门id</p>
                     * 
                     */
                    void SetUserDepartmentId(const std::string& _userDepartmentId);

                    /**
                     * 判断参数 UserDepartmentId 是否已赋值
                     * @return UserDepartmentId 是否已赋值
                     * 
                     */
                    bool UserDepartmentIdHasBeenSet() const;

                    /**
                     * 获取<p>用户部门name</p>
                     * @return UserDepartmentName <p>用户部门name</p>
                     * 
                     */
                    std::string GetUserDepartmentName() const;

                    /**
                     * 设置<p>用户部门name</p>
                     * @param _userDepartmentName <p>用户部门name</p>
                     * 
                     */
                    void SetUserDepartmentName(const std::string& _userDepartmentName);

                    /**
                     * 判断参数 UserDepartmentName 是否已赋值
                     * @return UserDepartmentName 是否已赋值
                     * 
                     */
                    bool UserDepartmentNameHasBeenSet() const;

                    /**
                     * 获取<p>设备部门id</p>
                     * @return DeviceDepartmentId <p>设备部门id</p>
                     * 
                     */
                    std::string GetDeviceDepartmentId() const;

                    /**
                     * 设置<p>设备部门id</p>
                     * @param _deviceDepartmentId <p>设备部门id</p>
                     * 
                     */
                    void SetDeviceDepartmentId(const std::string& _deviceDepartmentId);

                    /**
                     * 判断参数 DeviceDepartmentId 是否已赋值
                     * @return DeviceDepartmentId 是否已赋值
                     * 
                     */
                    bool DeviceDepartmentIdHasBeenSet() const;

                    /**
                     * 获取<p>设备部门name</p>
                     * @return DeviceDepartmentName <p>设备部门name</p>
                     * 
                     */
                    std::string GetDeviceDepartmentName() const;

                    /**
                     * 设置<p>设备部门name</p>
                     * @param _deviceDepartmentName <p>设备部门name</p>
                     * 
                     */
                    void SetDeviceDepartmentName(const std::string& _deviceDepartmentName);

                    /**
                     * 判断参数 DeviceDepartmentName 是否已赋值
                     * @return DeviceDepartmentName 是否已赋值
                     * 
                     */
                    bool DeviceDepartmentNameHasBeenSet() const;

                    /**
                     * 获取<p>签名值</p>
                     * @return SignValue <p>签名值</p>
                     * 
                     */
                    std::string GetSignValue() const;

                    /**
                     * 设置<p>签名值</p>
                     * @param _signValue <p>签名值</p>
                     * 
                     */
                    void SetSignValue(const std::string& _signValue);

                    /**
                     * 判断参数 SignValue 是否已赋值
                     * @return SignValue 是否已赋值
                     * 
                     */
                    bool SignValueHasBeenSet() const;

                private:

                    /**
                     * <p>文件传输的时间</p>
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * <p>用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>姓名</p>
                     */
                    std::string m_realName;
                    bool m_realNameHasBeenSet;

                    /**
                     * <p>资产ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>资产名称</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>资产公网IP</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>资产内网IP</p>
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * <p>操作结果：1 - 已放行，2 - 已阻断</p>
                     */
                    uint64_t m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>操作类型：1 - 文件上传，2 - 文件下载，3 - 文件删除，4 - 文件(夹)移动，5 - 文件(夹)重命名，6 - 新建文件夹，9 - 删除文件夹</p>
                     */
                    uint64_t m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>下载的文件（夹）路径及名称</p>
                     */
                    std::string m_fileCurr;
                    bool m_fileCurrHasBeenSet;

                    /**
                     * <p>上传或新建文件（夹）路径及名称</p>
                     */
                    std::string m_fileNew;
                    bool m_fileNewHasBeenSet;

                    /**
                     * <p>会话id</p>
                     */
                    std::string m_sid;
                    bool m_sidHasBeenSet;

                    /**
                     * <p>账号</p>
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * <p>来源id</p>
                     */
                    std::string m_fromIp;
                    bool m_fromIpHasBeenSet;

                    /**
                     * <p>协议</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>文件大小</p>
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>复核时间</p>
                     */
                    std::string m_confirmTime;
                    bool m_confirmTimeHasBeenSet;

                    /**
                     * <p>用户部门id</p>
                     */
                    std::string m_userDepartmentId;
                    bool m_userDepartmentIdHasBeenSet;

                    /**
                     * <p>用户部门name</p>
                     */
                    std::string m_userDepartmentName;
                    bool m_userDepartmentNameHasBeenSet;

                    /**
                     * <p>设备部门id</p>
                     */
                    std::string m_deviceDepartmentId;
                    bool m_deviceDepartmentIdHasBeenSet;

                    /**
                     * <p>设备部门name</p>
                     */
                    std::string m_deviceDepartmentName;
                    bool m_deviceDepartmentNameHasBeenSet;

                    /**
                     * <p>签名值</p>
                     */
                    std::string m_signValue;
                    bool m_signValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_SEARCHFILERESULT_H_
