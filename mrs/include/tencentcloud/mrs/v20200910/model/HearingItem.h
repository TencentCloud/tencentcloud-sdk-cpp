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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_HEARINGITEM_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_HEARINGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/PhysicalBaseItem.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 听力信息
                */
                class HearingItem : public AbstractModel
                {
                public:
                    HearingItem();
                    ~HearingItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型
                     * @return Name 类型
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置类型
                     * @param _name 类型
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
                     * 获取项目原文
                     * @return Item 项目原文
                     * 
                     */
                    PhysicalBaseItem GetItem() const;

                    /**
                     * 设置项目原文
                     * @param _item 项目原文
                     * 
                     */
                    void SetItem(const PhysicalBaseItem& _item);

                    /**
                     * 判断参数 Item 是否已赋值
                     * @return Item 是否已赋值
                     * 
                     */
                    bool ItemHasBeenSet() const;

                    /**
                     * 获取方位
                     * @return Location 方位
                     * 
                     */
                    PhysicalBaseItem GetLocation() const;

                    /**
                     * 设置方位
                     * @param _location 方位
                     * 
                     */
                    void SetLocation(const PhysicalBaseItem& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Result 描述
                     * 
                     */
                    PhysicalBaseItem GetResult() const;

                    /**
                     * 设置描述
                     * @param _result 描述
                     * 
                     */
                    void SetResult(const PhysicalBaseItem& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 类型
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 项目原文
                     */
                    PhysicalBaseItem m_item;
                    bool m_itemHasBeenSet;

                    /**
                     * 方位
                     */
                    PhysicalBaseItem m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 描述
                     */
                    PhysicalBaseItem m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_HEARINGITEM_H_
