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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_FORWARDINGTARGET_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_FORWARDINGTARGET_H_

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
                * 呼转目标
                */
                class ForwardingTarget : public AbstractModel
                {
                public:
                    ForwardingTarget();
                    ~ForwardingTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取呼转目标类型 1 座席 2 技能组 3 分机
                     * @return Type 呼转目标类型 1 座席 2 技能组 3 分机
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置呼转目标类型 1 座席 2 技能组 3 分机
                     * @param _type 呼转目标类型 1 座席 2 技能组 3 分机
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取呼转目标为座席的账号 Type 为 1 时填写
                     * @return StaffUserId 呼转目标为座席的账号 Type 为 1 时填写
                     * 
                     */
                    std::string GetStaffUserId() const;

                    /**
                     * 设置呼转目标为座席的账号 Type 为 1 时填写
                     * @param _staffUserId 呼转目标为座席的账号 Type 为 1 时填写
                     * 
                     */
                    void SetStaffUserId(const std::string& _staffUserId);

                    /**
                     * 判断参数 StaffUserId 是否已赋值
                     * @return StaffUserId 是否已赋值
                     * 
                     */
                    bool StaffUserIdHasBeenSet() const;

                    /**
                     * 获取呼转目标为技能组的 ID，Type 为 2 时填写
                     * @return SkillGroupId 呼转目标为技能组的 ID，Type 为 2 时填写
                     * 
                     */
                    int64_t GetSkillGroupId() const;

                    /**
                     * 设置呼转目标为技能组的 ID，Type 为 2 时填写
                     * @param _skillGroupId 呼转目标为技能组的 ID，Type 为 2 时填写
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
                     * 获取呼转目标为分机的账号，Type 为 3 时填写
                     * @return Extension 呼转目标为分机的账号，Type 为 3 时填写
                     * 
                     */
                    std::string GetExtension() const;

                    /**
                     * 设置呼转目标为分机的账号，Type 为 3 时填写
                     * @param _extension 呼转目标为分机的账号，Type 为 3 时填写
                     * 
                     */
                    void SetExtension(const std::string& _extension);

                    /**
                     * 判断参数 Extension 是否已赋值
                     * @return Extension 是否已赋值
                     * 
                     */
                    bool ExtensionHasBeenSet() const;

                private:

                    /**
                     * 呼转目标类型 1 座席 2 技能组 3 分机
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 呼转目标为座席的账号 Type 为 1 时填写
                     */
                    std::string m_staffUserId;
                    bool m_staffUserIdHasBeenSet;

                    /**
                     * 呼转目标为技能组的 ID，Type 为 2 时填写
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                    /**
                     * 呼转目标为分机的账号，Type 为 3 时填写
                     */
                    std::string m_extension;
                    bool m_extensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_FORWARDINGTARGET_H_
