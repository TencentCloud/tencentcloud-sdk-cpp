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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_HIGHPRIORITYMODIFYITEM_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_HIGHPRIORITYMODIFYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 高优路由表条目修改属性。
                */
                class HighPriorityModifyItem : public AbstractModel
                {
                public:
                    HighPriorityModifyItem();
                    ~HighPriorityModifyItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取高优路由条目唯一ID。
                     * @return HighPriorityRouteId 高优路由条目唯一ID。
                     * 
                     */
                    std::string GetHighPriorityRouteId() const;

                    /**
                     * 设置高优路由条目唯一ID。
                     * @param _highPriorityRouteId 高优路由条目唯一ID。
                     * 
                     */
                    void SetHighPriorityRouteId(const std::string& _highPriorityRouteId);

                    /**
                     * 判断参数 HighPriorityRouteId 是否已赋值
                     * @return HighPriorityRouteId 是否已赋值
                     * 
                     */
                    bool HighPriorityRouteIdHasBeenSet() const;

                    /**
                     * 获取高优路由条目描述。
                     * @return Description 高优路由条目描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置高优路由条目描述。
                     * @param _description 高优路由条目描述。
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
                     * 高优路由条目唯一ID。
                     */
                    std::string m_highPriorityRouteId;
                    bool m_highPriorityRouteIdHasBeenSet;

                    /**
                     * 高优路由条目描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_HIGHPRIORITYMODIFYITEM_H_
