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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPALEVELGROUPREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPALEVELGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/ItemLevel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * CreateDSPALevelGroup请求参数结构体
                */
                class CreateDSPALevelGroupRequest : public AbstractModel
                {
                public:
                    CreateDSPALevelGroupRequest();
                    ~CreateDSPALevelGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例ID
                     * @return DspaId DSPA实例ID
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例ID
                     * @param _dspaId DSPA实例ID
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取分级组名称，唯一性约束，最多60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
                     * @return Name 分级组名称，唯一性约束，最多60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置分级组名称，唯一性约束，最多60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
                     * @param _name 分级组名称，唯一性约束，最多60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
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
                     * 获取分级标识配置
                     * @return ItemLevels 分级标识配置
                     * 
                     */
                    std::vector<ItemLevel> GetItemLevels() const;

                    /**
                     * 设置分级标识配置
                     * @param _itemLevels 分级标识配置
                     * 
                     */
                    void SetItemLevels(const std::vector<ItemLevel>& _itemLevels);

                    /**
                     * 判断参数 ItemLevels 是否已赋值
                     * @return ItemLevels 是否已赋值
                     * 
                     */
                    bool ItemLevelsHasBeenSet() const;

                    /**
                     * 获取分级组描述，最多1024字符
                     * @return Description 分级组描述，最多1024字符
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置分级组描述，最多1024字符
                     * @param _description 分级组描述，最多1024字符
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * DSPA实例ID
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 分级组名称，唯一性约束，最多60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 分级标识配置
                     */
                    std::vector<ItemLevel> m_itemLevels;
                    bool m_itemLevelsHasBeenSet;

                    /**
                     * 分级组描述，最多1024字符
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPALEVELGROUPREQUEST_H_
