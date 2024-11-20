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
                     * 获取文件传输的时间
                     * @return Time 文件传输的时间
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置文件传输的时间
                     * @param _time 文件传输的时间
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
                     * 获取用户名
                     * @return UserName 用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
                     * @param _userName 用户名
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
                     * 获取姓名
                     * @return RealName 姓名
                     * 
                     */
                    std::string GetRealName() const;

                    /**
                     * 设置姓名
                     * @param _realName 姓名
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
                     * 获取资产ID
                     * @return InstanceId 资产ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置资产ID
                     * @param _instanceId 资产ID
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
                     * 获取资产名称
                     * @return DeviceName 资产名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置资产名称
                     * @param _deviceName 资产名称
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
                     * 获取资产公网IP
                     * @return PublicIp 资产公网IP
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置资产公网IP
                     * @param _publicIp 资产公网IP
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
                     * 获取资产内网IP
                     * @return PrivateIp 资产内网IP
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置资产内网IP
                     * @param _privateIp 资产内网IP
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
                     * 获取操作结果：1 - 已执行，2 - 已阻断
                     * @return Action 操作结果：1 - 已执行，2 - 已阻断
                     * 
                     */
                    uint64_t GetAction() const;

                    /**
                     * 设置操作结果：1 - 已执行，2 - 已阻断
                     * @param _action 操作结果：1 - 已执行，2 - 已阻断
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
                     * 获取操作类型：1 - 文件上传，2 - 文件下载，3 - 文件删除，4 - 文件(夹)移动，5 - 文件(夹)重命名，6 - 新建文件夹，9 - 删除文件夹
                     * @return Method 操作类型：1 - 文件上传，2 - 文件下载，3 - 文件删除，4 - 文件(夹)移动，5 - 文件(夹)重命名，6 - 新建文件夹，9 - 删除文件夹
                     * 
                     */
                    uint64_t GetMethod() const;

                    /**
                     * 设置操作类型：1 - 文件上传，2 - 文件下载，3 - 文件删除，4 - 文件(夹)移动，5 - 文件(夹)重命名，6 - 新建文件夹，9 - 删除文件夹
                     * @param _method 操作类型：1 - 文件上传，2 - 文件下载，3 - 文件删除，4 - 文件(夹)移动，5 - 文件(夹)重命名，6 - 新建文件夹，9 - 删除文件夹
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
                     * 获取下载的文件（夹）路径及名称
                     * @return FileCurr 下载的文件（夹）路径及名称
                     * 
                     */
                    std::string GetFileCurr() const;

                    /**
                     * 设置下载的文件（夹）路径及名称
                     * @param _fileCurr 下载的文件（夹）路径及名称
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
                     * 获取上传或新建文件（夹）路径及名称
                     * @return FileNew 上传或新建文件（夹）路径及名称
                     * 
                     */
                    std::string GetFileNew() const;

                    /**
                     * 设置上传或新建文件（夹）路径及名称
                     * @param _fileNew 上传或新建文件（夹）路径及名称
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
                     * 获取会话id
                     * @return Sid 会话id
                     * 
                     */
                    std::string GetSid() const;

                    /**
                     * 设置会话id
                     * @param _sid 会话id
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
                     * 获取账号
                     * @return Account 账号
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置账号
                     * @param _account 账号
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
                     * 获取来源id
                     * @return FromIp 来源id
                     * 
                     */
                    std::string GetFromIp() const;

                    /**
                     * 设置来源id
                     * @param _fromIp 来源id
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
                     * 获取协议
                     * @return Protocol 协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议
                     * @param _protocol 协议
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
                     * 获取文件大小
                     * @return Size 文件大小
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置文件大小
                     * @param _size 文件大小
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
                     * 获取复核时间
                     * @return ConfirmTime 复核时间
                     * 
                     */
                    std::string GetConfirmTime() const;

                    /**
                     * 设置复核时间
                     * @param _confirmTime 复核时间
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
                     * 获取用户部门id
                     * @return UserDepartmentId 用户部门id
                     * 
                     */
                    std::string GetUserDepartmentId() const;

                    /**
                     * 设置用户部门id
                     * @param _userDepartmentId 用户部门id
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
                     * 获取用户部门name
                     * @return UserDepartmentName 用户部门name
                     * 
                     */
                    std::string GetUserDepartmentName() const;

                    /**
                     * 设置用户部门name
                     * @param _userDepartmentName 用户部门name
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
                     * 获取设备部门id
                     * @return DeviceDepartmentId 设备部门id
                     * 
                     */
                    std::string GetDeviceDepartmentId() const;

                    /**
                     * 设置设备部门id
                     * @param _deviceDepartmentId 设备部门id
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
                     * 获取设备部门name	
                     * @return DeviceDepartmentName 设备部门name	
                     * 
                     */
                    std::string GetDeviceDepartmentName() const;

                    /**
                     * 设置设备部门name	
                     * @param _deviceDepartmentName 设备部门name	
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
                     * 获取签名值
                     * @return SignValue 签名值
                     * 
                     */
                    std::string GetSignValue() const;

                    /**
                     * 设置签名值
                     * @param _signValue 签名值
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
                     * 文件传输的时间
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 姓名
                     */
                    std::string m_realName;
                    bool m_realNameHasBeenSet;

                    /**
                     * 资产ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 资产名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 资产公网IP
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 资产内网IP
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 操作结果：1 - 已执行，2 - 已阻断
                     */
                    uint64_t m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 操作类型：1 - 文件上传，2 - 文件下载，3 - 文件删除，4 - 文件(夹)移动，5 - 文件(夹)重命名，6 - 新建文件夹，9 - 删除文件夹
                     */
                    uint64_t m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 下载的文件（夹）路径及名称
                     */
                    std::string m_fileCurr;
                    bool m_fileCurrHasBeenSet;

                    /**
                     * 上传或新建文件（夹）路径及名称
                     */
                    std::string m_fileNew;
                    bool m_fileNewHasBeenSet;

                    /**
                     * 会话id
                     */
                    std::string m_sid;
                    bool m_sidHasBeenSet;

                    /**
                     * 账号
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * 来源id
                     */
                    std::string m_fromIp;
                    bool m_fromIpHasBeenSet;

                    /**
                     * 协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 文件大小
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 复核时间
                     */
                    std::string m_confirmTime;
                    bool m_confirmTimeHasBeenSet;

                    /**
                     * 用户部门id
                     */
                    std::string m_userDepartmentId;
                    bool m_userDepartmentIdHasBeenSet;

                    /**
                     * 用户部门name
                     */
                    std::string m_userDepartmentName;
                    bool m_userDepartmentNameHasBeenSet;

                    /**
                     * 设备部门id
                     */
                    std::string m_deviceDepartmentId;
                    bool m_deviceDepartmentIdHasBeenSet;

                    /**
                     * 设备部门name	
                     */
                    std::string m_deviceDepartmentName;
                    bool m_deviceDepartmentNameHasBeenSet;

                    /**
                     * 签名值
                     */
                    std::string m_signValue;
                    bool m_signValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_SEARCHFILERESULT_H_
