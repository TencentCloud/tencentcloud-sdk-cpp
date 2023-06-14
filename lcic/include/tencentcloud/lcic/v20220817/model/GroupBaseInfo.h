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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_GROUPBASEINFO_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_GROUPBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * 批量创建群组基础信息
                */
                class GroupBaseInfo : public AbstractModel
                {
                public:
                    GroupBaseInfo();
                    ~GroupBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取待创建群组名
                     * @return GroupName 待创建群组名
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置待创建群组名
                     * @param _groupName 待创建群组名
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
                     * 获取群组主讲人ID
                     * @return TeacherId 群组主讲人ID
                     * 
                     */
                    std::string GetTeacherId() const;

                    /**
                     * 设置群组主讲人ID
                     * @param _teacherId 群组主讲人ID
                     * 
                     */
                    void SetTeacherId(const std::string& _teacherId);

                    /**
                     * 判断参数 TeacherId 是否已赋值
                     * @return TeacherId 是否已赋值
                     * 
                     */
                    bool TeacherIdHasBeenSet() const;

                private:

                    /**
                     * 待创建群组名
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 群组主讲人ID
                     */
                    std::string m_teacherId;
                    bool m_teacherIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_GROUPBASEINFO_H_
