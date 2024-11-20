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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_SEARCHFILEBYSIDRESULT_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_SEARCHFILEBYSIDRESULT_H_

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
                * 文件操作搜索结果
                */
                class SearchFileBySidResult : public AbstractModel
                {
                public:
                    SearchFileBySidResult();
                    ~SearchFileBySidResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取会话Id
                     * @return Sid 会话Id
                     * 
                     */
                    std::string GetSid() const;

                    /**
                     * 设置会话Id
                     * @param _sid 会话Id
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
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param _instanceId 实例Id
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
                     * 获取资产账号
                     * @return Account 资产账号
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置资产账号
                     * @param _account 资产账号
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
                     * 获取来源Ip
                     * @return FromIp 来源Ip
                     * 
                     */
                    std::string GetFromIp() const;

                    /**
                     * 设置来源Ip
                     * @param _fromIp 来源Ip
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
                     * 获取文件操作时间
                     * @return Time 文件操作时间
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置文件操作时间
                     * @param _time 文件操作时间
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
                     * 获取1-上传文件 2-下载文件 3-删除文件 4-移动文件 5-重命名文件 6-新建文件夹 7-移动文件夹 8-重命名文件夹 9-删除文件夹
                     * @return Method 1-上传文件 2-下载文件 3-删除文件 4-移动文件 5-重命名文件 6-新建文件夹 7-移动文件夹 8-重命名文件夹 9-删除文件夹
                     * 
                     */
                    int64_t GetMethod() const;

                    /**
                     * 设置1-上传文件 2-下载文件 3-删除文件 4-移动文件 5-重命名文件 6-新建文件夹 7-移动文件夹 8-重命名文件夹 9-删除文件夹
                     * @param _method 1-上传文件 2-下载文件 3-删除文件 4-移动文件 5-重命名文件 6-新建文件夹 7-移动文件夹 8-重命名文件夹 9-删除文件夹
                     * 
                     */
                    void SetMethod(const int64_t& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取文件传输协议
                     * @return Protocol 文件传输协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置文件传输协议
                     * @param _protocol 文件传输协议
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
                     * 获取method为上传、下载、删除时文件在服务器上的位置, 或重命名、移动文件前文件的位置
                     * @return FileCurr method为上传、下载、删除时文件在服务器上的位置, 或重命名、移动文件前文件的位置
                     * 
                     */
                    std::string GetFileCurr() const;

                    /**
                     * 设置method为上传、下载、删除时文件在服务器上的位置, 或重命名、移动文件前文件的位置
                     * @param _fileCurr method为上传、下载、删除时文件在服务器上的位置, 或重命名、移动文件前文件的位置
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
                     * 获取method为重命名、移动文件时代表移动后的新位置.其他情况为null
                     * @return FileNew method为重命名、移动文件时代表移动后的新位置.其他情况为null
                     * 
                     */
                    std::string GetFileNew() const;

                    /**
                     * 设置method为重命名、移动文件时代表移动后的新位置.其他情况为null
                     * @param _fileNew method为重命名、移动文件时代表移动后的新位置.其他情况为null
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
                     * 获取method为上传文件、下载文件、删除文件时显示文件大小。其他情况为null
                     * @return Size method为上传文件、下载文件、删除文件时显示文件大小。其他情况为null
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置method为上传文件、下载文件、删除文件时显示文件大小。其他情况为null
                     * @param _size method为上传文件、下载文件、删除文件时显示文件大小。其他情况为null
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取堡垒机拦截情况, 1-已执行，  2-被阻断
                     * @return Action 堡垒机拦截情况, 1-已执行，  2-被阻断
                     * 
                     */
                    int64_t GetAction() const;

                    /**
                     * 设置堡垒机拦截情况, 1-已执行，  2-被阻断
                     * @param _action 堡垒机拦截情况, 1-已执行，  2-被阻断
                     * 
                     */
                    void SetAction(const int64_t& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取复核时间，当Action是3时，需有复核时间
                     * @return ConfirmTime 复核时间，当Action是3时，需有复核时间
                     * 
                     */
                    std::string GetConfirmTime() const;

                    /**
                     * 设置复核时间，当Action是3时，需有复核时间
                     * @param _confirmTime 复核时间，当Action是3时，需有复核时间
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
                     * 获取用户部门Id
                     * @return UserDepartmentId 用户部门Id
                     * 
                     */
                    std::string GetUserDepartmentId() const;

                    /**
                     * 设置用户部门Id
                     * @param _userDepartmentId 用户部门Id
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
                     * 会话Id
                     */
                    std::string m_sid;
                    bool m_sidHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 资产账号
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * 来源Ip
                     */
                    std::string m_fromIp;
                    bool m_fromIpHasBeenSet;

                    /**
                     * 文件操作时间
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 1-上传文件 2-下载文件 3-删除文件 4-移动文件 5-重命名文件 6-新建文件夹 7-移动文件夹 8-重命名文件夹 9-删除文件夹
                     */
                    int64_t m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 文件传输协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * method为上传、下载、删除时文件在服务器上的位置, 或重命名、移动文件前文件的位置
                     */
                    std::string m_fileCurr;
                    bool m_fileCurrHasBeenSet;

                    /**
                     * method为重命名、移动文件时代表移动后的新位置.其他情况为null
                     */
                    std::string m_fileNew;
                    bool m_fileNewHasBeenSet;

                    /**
                     * method为上传文件、下载文件、删除文件时显示文件大小。其他情况为null
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 堡垒机拦截情况, 1-已执行，  2-被阻断
                     */
                    int64_t m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 复核时间，当Action是3时，需有复核时间
                     */
                    std::string m_confirmTime;
                    bool m_confirmTimeHasBeenSet;

                    /**
                     * 用户部门Id
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

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_SEARCHFILEBYSIDRESULT_H_
