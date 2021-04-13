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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_GROUPITEM_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_GROUPITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * 分组信息
                */
                class GroupItem : public AbstractModel
                {
                public:
                    GroupItem();
                    ~GroupItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName 分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupName 分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取父分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentId 父分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetParentId() const;

                    /**
                     * 设置父分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ParentId 父分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetParentId(const std::string& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId 分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupId 分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取分组路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupPath 分组路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGroupPath() const;

                    /**
                     * 设置分组路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupPath 分组路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupPath(const std::string& _groupPath);

                    /**
                     * 判断参数 GroupPath 是否已赋值
                     * @return GroupPath 是否已赋值
                     */
                    bool GroupPathHasBeenSet() const;

                    /**
                     * 获取分组描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupDescribe 分组描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGroupDescribe() const;

                    /**
                     * 设置分组描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupDescribe 分组描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupDescribe(const std::string& _groupDescribe);

                    /**
                     * 判断参数 GroupDescribe 是否已赋值
                     * @return GroupDescribe 是否已赋值
                     */
                    bool GroupDescribeHasBeenSet() const;

                    /**
                     * 获取分组绑定设备数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceNum 分组绑定设备数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetDeviceNum() const;

                    /**
                     * 设置分组绑定设备数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeviceNum 分组绑定设备数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeviceNum(const int64_t& _deviceNum);

                    /**
                     * 判断参数 DeviceNum 是否已赋值
                     * @return DeviceNum 是否已赋值
                     */
                    bool DeviceNumHasBeenSet() const;

                    /**
                     * 获取子分组数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubGroupNum 子分组数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSubGroupNum() const;

                    /**
                     * 设置子分组数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubGroupNum 子分组数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubGroupNum(const int64_t& _subGroupNum);

                    /**
                     * 判断参数 SubGroupNum 是否已赋值
                     * @return SubGroupNum 是否已赋值
                     */
                    bool SubGroupNumHasBeenSet() const;

                    /**
                     * 获取分组附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraInformation 分组附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExtraInformation() const;

                    /**
                     * 设置分组附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExtraInformation 分组附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExtraInformation(const std::string& _extraInformation);

                    /**
                     * 判断参数 ExtraInformation 是否已赋值
                     * @return ExtraInformation 是否已赋值
                     */
                    bool ExtraInformationHasBeenSet() const;

                    /**
                     * 获取分组类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupType 分组类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置分组类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupType 分组类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取分组状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupStatus 分组状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetGroupStatus() const;

                    /**
                     * 设置分组状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupStatus 分组状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupStatus(const int64_t& _groupStatus);

                    /**
                     * 判断参数 GroupStatus 是否已赋值
                     * @return GroupStatus 是否已赋值
                     */
                    bool GroupStatusHasBeenSet() const;

                private:

                    /**
                     * 分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 父分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 分组路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupPath;
                    bool m_groupPathHasBeenSet;

                    /**
                     * 分组描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupDescribe;
                    bool m_groupDescribeHasBeenSet;

                    /**
                     * 分组绑定设备数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_deviceNum;
                    bool m_deviceNumHasBeenSet;

                    /**
                     * 子分组数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_subGroupNum;
                    bool m_subGroupNumHasBeenSet;

                    /**
                     * 分组附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extraInformation;
                    bool m_extraInformationHasBeenSet;

                    /**
                     * 分组类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 分组状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_groupStatus;
                    bool m_groupStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_GROUPITEM_H_
