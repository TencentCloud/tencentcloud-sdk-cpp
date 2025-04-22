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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBESOFTCENSUSLISTBYDEVICEDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBESOFTCENSUSLISTBYDEVICEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 软件统计响应对象集合
                */
                class DescribeSoftCensusListByDeviceData : public AbstractModel
                {
                public:
                    DescribeSoftCensusListByDeviceData();
                    ~DescribeSoftCensusListByDeviceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取终端用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName 终端用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置终端用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName 终端用户名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取mac地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MacAddr mac地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMacAddr() const;

                    /**
                     * 设置mac地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _macAddr mac地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMacAddr(const std::string& _macAddr);

                    /**
                     * 判断参数 MacAddr 是否已赋值
                     * @return MacAddr 是否已赋值
                     * 
                     */
                    bool MacAddrHasBeenSet() const;

                    /**
                     * 获取终端计算机名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 终端计算机名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置终端计算机名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 终端计算机名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取终端组路径名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupNamePath 终端组路径名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupNamePath() const;

                    /**
                     * 设置终端组路径名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupNamePath 终端组路径名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupNamePath(const std::string& _groupNamePath);

                    /**
                     * 判断参数 GroupNamePath 是否已赋值
                     * @return GroupNamePath 是否已赋值
                     * 
                     */
                    bool GroupNamePathHasBeenSet() const;

                    /**
                     * 获取IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ip IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ip IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取唯一标识Mid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mid 唯一标识Mid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMid() const;

                    /**
                     * 设置唯一标识Mid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mid 唯一标识Mid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMid(const std::string& _mid);

                    /**
                     * 判断参数 Mid 是否已赋值
                     * @return Mid 是否已赋值
                     * 
                     */
                    bool MidHasBeenSet() const;

                    /**
                     * 获取企业账户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IoaUserName 企业账户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIoaUserName() const;

                    /**
                     * 设置企业账户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ioaUserName 企业账户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIoaUserName(const std::string& _ioaUserName);

                    /**
                     * 判断参数 IoaUserName 是否已赋值
                     * @return IoaUserName 是否已赋值
                     * 
                     */
                    bool IoaUserNameHasBeenSet() const;

                    /**
                     * 获取终端分组Id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId 终端分组Id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置终端分组Id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupId 终端分组Id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取终端组名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName 终端组名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置终端组名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupName 终端组名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取终端列表Id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 终端列表Id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置终端列表Id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 终端列表Id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取软件数量(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SoftNum 软件数量(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSoftNum() const;

                    /**
                     * 设置软件数量(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _softNum 软件数量(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSoftNum(const int64_t& _softNum);

                    /**
                     * 判断参数 SoftNum 是否已赋值
                     * @return SoftNum 是否已赋值
                     * 
                     */
                    bool SoftNumHasBeenSet() const;

                    /**
                     * 获取盗版风险（1=风险;2=未知）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PiracyRisk 盗版风险（1=风险;2=未知）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPiracyRisk() const;

                    /**
                     * 设置盗版风险（1=风险;2=未知）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _piracyRisk 盗版风险（1=风险;2=未知）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPiracyRisk(const int64_t& _piracyRisk);

                    /**
                     * 判断参数 PiracyRisk 是否已赋值
                     * @return PiracyRisk 是否已赋值
                     * 
                     */
                    bool PiracyRiskHasBeenSet() const;

                private:

                    /**
                     * 终端用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * mac地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_macAddr;
                    bool m_macAddrHasBeenSet;

                    /**
                     * 终端计算机名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 终端组路径名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupNamePath;
                    bool m_groupNamePathHasBeenSet;

                    /**
                     * IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 唯一标识Mid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mid;
                    bool m_midHasBeenSet;

                    /**
                     * 企业账户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ioaUserName;
                    bool m_ioaUserNameHasBeenSet;

                    /**
                     * 终端分组Id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 终端组名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 终端列表Id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 软件数量(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_softNum;
                    bool m_softNumHasBeenSet;

                    /**
                     * 盗版风险（1=风险;2=未知）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_piracyRisk;
                    bool m_piracyRiskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBESOFTCENSUSLISTBYDEVICEDATA_H_
