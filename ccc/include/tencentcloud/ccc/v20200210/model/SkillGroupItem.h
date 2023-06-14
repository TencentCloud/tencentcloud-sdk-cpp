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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_SKILLGROUPITEM_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_SKILLGROUPITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 技能组信息
                */
                class SkillGroupItem : public AbstractModel
                {
                public:
                    SkillGroupItem();
                    ~SkillGroupItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取技能组ID
                     * @return SkillGroupId 技能组ID
                     * 
                     */
                    int64_t GetSkillGroupId() const;

                    /**
                     * 设置技能组ID
                     * @param _skillGroupId 技能组ID
                     * 
                     */
                    void SetSkillGroupId(const int64_t& _skillGroupId);

                    /**
                     * 判断参数 SkillGroupId 是否已赋值
                     * @return SkillGroupId 是否已赋值
                     * 
                     */
                    bool SkillGroupIdHasBeenSet() const;

                    /**
                     * 获取技能组名称
                     * @return SkillGroupName 技能组名称
                     * 
                     */
                    std::string GetSkillGroupName() const;

                    /**
                     * 设置技能组名称
                     * @param _skillGroupName 技能组名称
                     * 
                     */
                    void SetSkillGroupName(const std::string& _skillGroupName);

                    /**
                     * 判断参数 SkillGroupName 是否已赋值
                     * @return SkillGroupName 是否已赋值
                     * 
                     */
                    bool SkillGroupNameHasBeenSet() const;

                    /**
                     * 获取优先级
                     * @return Priority 优先级
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置优先级
                     * @param _priority 优先级
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取类型：IM、TEL、ALL（全媒体）
                     * @return Type 类型：IM、TEL、ALL（全媒体）
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型：IM、TEL、ALL（全媒体）
                     * @param _type 类型：IM、TEL、ALL（全媒体）
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 技能组ID
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                    /**
                     * 技能组名称
                     */
                    std::string m_skillGroupName;
                    bool m_skillGroupNameHasBeenSet;

                    /**
                     * 优先级
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 类型：IM、TEL、ALL（全媒体）
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_SKILLGROUPITEM_H_
