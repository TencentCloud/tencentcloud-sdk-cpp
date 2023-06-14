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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_INSTANCECATEGORYITEM_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_INSTANCECATEGORYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 实例分类列表
                */
                class InstanceCategoryItem : public AbstractModel
                {
                public:
                    InstanceCategoryItem();
                    ~InstanceCategoryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例类型名
                     * @return InstanceCategory 实例类型名
                     * 
                     */
                    std::string GetInstanceCategory() const;

                    /**
                     * 设置实例类型名
                     * @param _instanceCategory 实例类型名
                     * 
                     */
                    void SetInstanceCategory(const std::string& _instanceCategory);

                    /**
                     * 判断参数 InstanceCategory 是否已赋值
                     * @return InstanceCategory 是否已赋值
                     * 
                     */
                    bool InstanceCategoryHasBeenSet() const;

                    /**
                     * 获取实例族列表
                     * @return InstanceFamilySet 实例族列表
                     * 
                     */
                    std::vector<std::string> GetInstanceFamilySet() const;

                    /**
                     * 设置实例族列表
                     * @param _instanceFamilySet 实例族列表
                     * 
                     */
                    void SetInstanceFamilySet(const std::vector<std::string>& _instanceFamilySet);

                    /**
                     * 判断参数 InstanceFamilySet 是否已赋值
                     * @return InstanceFamilySet 是否已赋值
                     * 
                     */
                    bool InstanceFamilySetHasBeenSet() const;

                private:

                    /**
                     * 实例类型名
                     */
                    std::string m_instanceCategory;
                    bool m_instanceCategoryHasBeenSet;

                    /**
                     * 实例族列表
                     */
                    std::vector<std::string> m_instanceFamilySet;
                    bool m_instanceFamilySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_INSTANCECATEGORYITEM_H_
