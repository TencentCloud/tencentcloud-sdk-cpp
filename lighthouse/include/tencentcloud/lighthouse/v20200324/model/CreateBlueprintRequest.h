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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEBLUEPRINTREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEBLUEPRINTREQUEST_H_

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
                * CreateBlueprint请求参数结构体
                */
                class CreateBlueprintRequest : public AbstractModel
                {
                public:
                    CreateBlueprintRequest();
                    ~CreateBlueprintRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像名称。最大长度60。
                     * @return BlueprintName 镜像名称。最大长度60。
                     */
                    std::string GetBlueprintName() const;

                    /**
                     * 设置镜像名称。最大长度60。
                     * @param BlueprintName 镜像名称。最大长度60。
                     */
                    void SetBlueprintName(const std::string& _blueprintName);

                    /**
                     * 判断参数 BlueprintName 是否已赋值
                     * @return BlueprintName 是否已赋值
                     */
                    bool BlueprintNameHasBeenSet() const;

                    /**
                     * 获取镜像描述。最大长度60。
                     * @return Description 镜像描述。最大长度60。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置镜像描述。最大长度60。
                     * @param Description 镜像描述。最大长度60。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取需要制作镜像的实例ID。
                     * @return InstanceId 需要制作镜像的实例ID。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置需要制作镜像的实例ID。
                     * @param InstanceId 需要制作镜像的实例ID。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 镜像名称。最大长度60。
                     */
                    std::string m_blueprintName;
                    bool m_blueprintNameHasBeenSet;

                    /**
                     * 镜像描述。最大长度60。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 需要制作镜像的实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEBLUEPRINTREQUEST_H_
