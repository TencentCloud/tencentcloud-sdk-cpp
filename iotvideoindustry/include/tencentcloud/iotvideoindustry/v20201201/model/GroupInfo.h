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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_GROUPINFO_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_GROUPINFO_H_

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
                * 分组信息详情
                */
                class GroupInfo : public AbstractModel
                {
                public:
                    GroupInfo();
                    ~GroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分组ID
                     * @return GroupId 分组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置分组ID
                     * @param _groupId 分组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取分组名称
                     * @return GroupName 分组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置分组名称
                     * @param _groupName 分组名称
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
                     * 获取分组类型
                     * @return GroupType 分组类型
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置分组类型
                     * @param _groupType 分组类型
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取分组路径
                     * @return GroupPath 分组路径
                     * 
                     */
                    std::string GetGroupPath() const;

                    /**
                     * 设置分组路径
                     * @param _groupPath 分组路径
                     * 
                     */
                    void SetGroupPath(const std::string& _groupPath);

                    /**
                     * 判断参数 GroupPath 是否已赋值
                     * @return GroupPath 是否已赋值
                     * 
                     */
                    bool GroupPathHasBeenSet() const;

                    /**
                     * 获取父分组ID
                     * @return ParentId 父分组ID
                     * 
                     */
                    std::string GetParentId() const;

                    /**
                     * 设置父分组ID
                     * @param _parentId 父分组ID
                     * 
                     */
                    void SetParentId(const std::string& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取分组描述
                     * @return GroupDescribe 分组描述
                     * 
                     */
                    std::string GetGroupDescribe() const;

                    /**
                     * 设置分组描述
                     * @param _groupDescribe 分组描述
                     * 
                     */
                    void SetGroupDescribe(const std::string& _groupDescribe);

                    /**
                     * 判断参数 GroupDescribe 是否已赋值
                     * @return GroupDescribe 是否已赋值
                     * 
                     */
                    bool GroupDescribeHasBeenSet() const;

                    /**
                     * 获取扩展信息
                     * @return ExtraInformation 扩展信息
                     * 
                     */
                    std::string GetExtraInformation() const;

                    /**
                     * 设置扩展信息
                     * @param _extraInformation 扩展信息
                     * 
                     */
                    void SetExtraInformation(const std::string& _extraInformation);

                    /**
                     * 判断参数 ExtraInformation 是否已赋值
                     * @return ExtraInformation 是否已赋值
                     * 
                     */
                    bool ExtraInformationHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取分组状态
                     * @return GroupStatus 分组状态
                     * 
                     */
                    int64_t GetGroupStatus() const;

                    /**
                     * 设置分组状态
                     * @param _groupStatus 分组状态
                     * 
                     */
                    void SetGroupStatus(const int64_t& _groupStatus);

                    /**
                     * 判断参数 GroupStatus 是否已赋值
                     * @return GroupStatus 是否已赋值
                     * 
                     */
                    bool GroupStatusHasBeenSet() const;

                    /**
                     * 获取设备不存在时产生的错误
                     * @return Error 设备不存在时产生的错误
                     * 
                     */
                    std::string GetError() const;

                    /**
                     * 设置设备不存在时产生的错误
                     * @param _error 设备不存在时产生的错误
                     * 
                     */
                    void SetError(const std::string& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                private:

                    /**
                     * 分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 分组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 分组类型
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * 分组路径
                     */
                    std::string m_groupPath;
                    bool m_groupPathHasBeenSet;

                    /**
                     * 父分组ID
                     */
                    std::string m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 分组描述
                     */
                    std::string m_groupDescribe;
                    bool m_groupDescribeHasBeenSet;

                    /**
                     * 扩展信息
                     */
                    std::string m_extraInformation;
                    bool m_extraInformationHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 分组状态
                     */
                    int64_t m_groupStatus;
                    bool m_groupStatusHasBeenSet;

                    /**
                     * 设备不存在时产生的错误
                     */
                    std::string m_error;
                    bool m_errorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_GROUPINFO_H_
