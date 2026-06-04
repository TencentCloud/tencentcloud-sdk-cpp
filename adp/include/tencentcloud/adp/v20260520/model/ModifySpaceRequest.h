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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYSPACEREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYSPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/FieldMask.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ModifySpace请求参数结构体
                */
                class ModifySpaceRequest : public AbstractModel
                {
                public:
                    ModifySpaceRequest();
                    ~ModifySpaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作空间名称,长度最大30个字符
                     * @return Name 工作空间名称,长度最大30个字符
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置工作空间名称,长度最大30个字符
                     * @param _name 工作空间名称,长度最大30个字符
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
                     * 获取空间描述，长度最大150个字符
                     * @return Description 空间描述，长度最大150个字符
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置空间描述，长度最大150个字符
                     * @param _description 空间描述，长度最大150个字符
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取空间id
                     * @return SpaceId 空间id
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置空间id
                     * @param _spaceId 空间id
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取指定需要更新的字段，支持name和description
                     * @return FieldMask 指定需要更新的字段，支持name和description
                     * 
                     */
                    FieldMask GetFieldMask() const;

                    /**
                     * 设置指定需要更新的字段，支持name和description
                     * @param _fieldMask 指定需要更新的字段，支持name和description
                     * 
                     */
                    void SetFieldMask(const FieldMask& _fieldMask);

                    /**
                     * 判断参数 FieldMask 是否已赋值
                     * @return FieldMask 是否已赋值
                     * 
                     */
                    bool FieldMaskHasBeenSet() const;

                private:

                    /**
                     * 工作空间名称,长度最大30个字符
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 空间描述，长度最大150个字符
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 空间id
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * 指定需要更新的字段，支持name和description
                     */
                    FieldMask m_fieldMask;
                    bool m_fieldMaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYSPACEREQUEST_H_
