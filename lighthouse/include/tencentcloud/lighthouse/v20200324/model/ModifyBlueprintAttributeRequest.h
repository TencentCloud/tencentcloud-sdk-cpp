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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYBLUEPRINTATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYBLUEPRINTATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * ModifyBlueprintAttribute请求参数结构体
                */
                class ModifyBlueprintAttributeRequest : public AbstractModel
                {
                public:
                    ModifyBlueprintAttributeRequest();
                    ~ModifyBlueprintAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像 ID。可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值中的BlueprintId获取。
                     * @return BlueprintId 镜像 ID。可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值中的BlueprintId获取。
                     * 
                     */
                    std::string GetBlueprintId() const;

                    /**
                     * 设置镜像 ID。可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值中的BlueprintId获取。
                     * @param _blueprintId 镜像 ID。可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值中的BlueprintId获取。
                     * 
                     */
                    void SetBlueprintId(const std::string& _blueprintId);

                    /**
                     * 判断参数 BlueprintId 是否已赋值
                     * @return BlueprintId 是否已赋值
                     * 
                     */
                    bool BlueprintIdHasBeenSet() const;

                    /**
                     * 获取设置新的镜像名称。最大长度60。
                     * @return BlueprintName 设置新的镜像名称。最大长度60。
                     * 
                     */
                    std::string GetBlueprintName() const;

                    /**
                     * 设置设置新的镜像名称。最大长度60。
                     * @param _blueprintName 设置新的镜像名称。最大长度60。
                     * 
                     */
                    void SetBlueprintName(const std::string& _blueprintName);

                    /**
                     * 判断参数 BlueprintName 是否已赋值
                     * @return BlueprintName 是否已赋值
                     * 
                     */
                    bool BlueprintNameHasBeenSet() const;

                    /**
                     * 获取设置新的镜像描述。最大长度60。
                     * @return Description 设置新的镜像描述。最大长度60。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置设置新的镜像描述。最大长度60。
                     * @param _description 设置新的镜像描述。最大长度60。
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
                     * 镜像 ID。可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值中的BlueprintId获取。
                     */
                    std::string m_blueprintId;
                    bool m_blueprintIdHasBeenSet;

                    /**
                     * 设置新的镜像名称。最大长度60。
                     */
                    std::string m_blueprintName;
                    bool m_blueprintNameHasBeenSet;

                    /**
                     * 设置新的镜像描述。最大长度60。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYBLUEPRINTATTRIBUTEREQUEST_H_
