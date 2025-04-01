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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHENTITYOFPOLICY_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHENTITYOFPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * 策略关联的实体信息
                */
                class AttachEntityOfPolicy : public AbstractModel
                {
                public:
                    AttachEntityOfPolicy();
                    ~AttachEntityOfPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实体ID
                     * @return Id 实体ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置实体ID
                     * @param _id 实体ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取实体名称
                     * @return Name 实体名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置实体名称
                     * @param _name 实体名称
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
                     * 获取实体Uin
                     * @return Uin 实体Uin
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置实体Uin
                     * @param _uin 实体Uin
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取关联类型。1 用户关联 ； 2 用户组关联 3 角色关联
                     * @return RelatedType 关联类型。1 用户关联 ； 2 用户组关联 3 角色关联
                     * 
                     */
                    uint64_t GetRelatedType() const;

                    /**
                     * 设置关联类型。1 用户关联 ； 2 用户组关联 3 角色关联
                     * @param _relatedType 关联类型。1 用户关联 ； 2 用户组关联 3 角色关联
                     * 
                     */
                    void SetRelatedType(const uint64_t& _relatedType);

                    /**
                     * 判断参数 RelatedType 是否已赋值
                     * @return RelatedType 是否已赋值
                     * 
                     */
                    bool RelatedTypeHasBeenSet() const;

                    /**
                     * 获取策略关联时间
                     * @return AttachmentTime 策略关联时间
                     * 
                     */
                    std::string GetAttachmentTime() const;

                    /**
                     * 设置策略关联时间
                     * @param _attachmentTime 策略关联时间
                     * 
                     */
                    void SetAttachmentTime(const std::string& _attachmentTime);

                    /**
                     * 判断参数 AttachmentTime 是否已赋值
                     * @return AttachmentTime 是否已赋值
                     * 
                     */
                    bool AttachmentTimeHasBeenSet() const;

                private:

                    /**
                     * 实体ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 实体名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 实体Uin
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 关联类型。1 用户关联 ； 2 用户组关联 3 角色关联
                     */
                    uint64_t m_relatedType;
                    bool m_relatedTypeHasBeenSet;

                    /**
                     * 策略关联时间
                     */
                    std::string m_attachmentTime;
                    bool m_attachmentTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHENTITYOFPOLICY_H_
