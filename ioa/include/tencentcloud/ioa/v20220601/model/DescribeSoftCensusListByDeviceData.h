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
                     * 获取<p>终端用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName <p>终端用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>终端用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName <p>终端用户名</p>
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
                     * 获取<p>mac地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MacAddr <p>mac地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMacAddr() const;

                    /**
                     * 设置<p>mac地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _macAddr <p>mac地址</p>
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
                     * 获取<p>终端计算机名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>终端计算机名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>终端计算机名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>终端计算机名称</p>
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
                     * 获取<p>终端组路径名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupNamePath <p>终端组路径名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupNamePath() const;

                    /**
                     * 设置<p>终端组路径名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupNamePath <p>终端组路径名</p>
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
                     * 获取<p>IP地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ip <p>IP地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>IP地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ip <p>IP地址</p>
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
                     * 获取<p>唯一标识Mid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mid <p>唯一标识Mid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMid() const;

                    /**
                     * 设置<p>唯一标识Mid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mid <p>唯一标识Mid</p>
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
                     * 获取<p>企业账户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IoaUserName <p>企业账户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIoaUserName() const;

                    /**
                     * 设置<p>企业账户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ioaUserName <p>企业账户名</p>
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
                     * 获取<p>终端分组Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId <p>终端分组Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置<p>终端分组Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupId <p>终端分组Id(只支持32位)</p>
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
                     * 获取<p>终端组名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName <p>终端组名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>终端组名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupName <p>终端组名</p>
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
                     * 获取<p>终端列表Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id <p>终端列表Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>终端列表Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id <p>终端列表Id(只支持32位)</p>
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
                     * 获取<p>软件数量(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SoftNum <p>软件数量(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSoftNum() const;

                    /**
                     * 设置<p>软件数量(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _softNum <p>软件数量(只支持32位)</p>
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
                     * 获取<p>盗版风险（1=风险;2=未知）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PiracyRisk <p>盗版风险（1=风险;2=未知）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPiracyRisk() const;

                    /**
                     * 设置<p>盗版风险（1=风险;2=未知）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _piracyRisk <p>盗版风险（1=风险;2=未知）</p>
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

                    /**
                     * 获取<p>终端备注名</p>
                     * @return RemarkName <p>终端备注名</p>
                     * 
                     */
                    std::string GetRemarkName() const;

                    /**
                     * 设置<p>终端备注名</p>
                     * @param _remarkName <p>终端备注名</p>
                     * 
                     */
                    void SetRemarkName(const std::string& _remarkName);

                    /**
                     * 判断参数 RemarkName 是否已赋值
                     * @return RemarkName 是否已赋值
                     * 
                     */
                    bool RemarkNameHasBeenSet() const;

                private:

                    /**
                     * <p>终端用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>mac地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_macAddr;
                    bool m_macAddrHasBeenSet;

                    /**
                     * <p>终端计算机名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>终端组路径名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupNamePath;
                    bool m_groupNamePathHasBeenSet;

                    /**
                     * <p>IP地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>唯一标识Mid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mid;
                    bool m_midHasBeenSet;

                    /**
                     * <p>企业账户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ioaUserName;
                    bool m_ioaUserNameHasBeenSet;

                    /**
                     * <p>终端分组Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>终端组名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>终端列表Id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>软件数量(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_softNum;
                    bool m_softNumHasBeenSet;

                    /**
                     * <p>盗版风险（1=风险;2=未知）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_piracyRisk;
                    bool m_piracyRiskHasBeenSet;

                    /**
                     * <p>终端备注名</p>
                     */
                    std::string m_remarkName;
                    bool m_remarkNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBESOFTCENSUSLISTBYDEVICEDATA_H_
