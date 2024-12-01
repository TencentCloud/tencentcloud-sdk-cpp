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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_BLOODPRESSUREITEM_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_BLOODPRESSUREITEM_H_

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
                * 体检报告血压检测信息
                */
                class BloodPressureItem : public AbstractModel
                {
                public:
                    BloodPressureItem();
                    ~BloodPressureItem() = default;
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
                     * 获取数值
                     * @return Result 数值
                     * 
                     */
                    PhysicalBaseItem GetResult() const;

                    /**
                     * 设置数值
                     * @param _result 数值
                     * 
                     */
                    void SetResult(const PhysicalBaseItem& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取单位
                     * @return Unit 单位
                     * 
                     */
                    PhysicalBaseItem GetUnit() const;

                    /**
                     * 设置单位
                     * @param _unit 单位
                     * 
                     */
                    void SetUnit(const PhysicalBaseItem& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取第几次
                     * @return Times 第几次
                     * 
                     */
                    PhysicalBaseItem GetTimes() const;

                    /**
                     * 设置第几次
                     * @param _times 第几次
                     * 
                     */
                    void SetTimes(const PhysicalBaseItem& _times);

                    /**
                     * 判断参数 Times 是否已赋值
                     * @return Times 是否已赋值
                     * 
                     */
                    bool TimesHasBeenSet() const;

                    /**
                     * 获取左右手臂
                     * @return Location 左右手臂
                     * 
                     */
                    PhysicalBaseItem GetLocation() const;

                    /**
                     * 设置左右手臂
                     * @param _location 左右手臂
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
                     * 获取数据在原PDF文件中的第几页
                     * @return Page 数据在原PDF文件中的第几页
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置数据在原PDF文件中的第几页
                     * @param _page 数据在原PDF文件中的第几页
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

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
                     * 数值
                     */
                    PhysicalBaseItem m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 单位
                     */
                    PhysicalBaseItem m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 第几次
                     */
                    PhysicalBaseItem m_times;
                    bool m_timesHasBeenSet;

                    /**
                     * 左右手臂
                     */
                    PhysicalBaseItem m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 数据在原PDF文件中的第几页
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_BLOODPRESSUREITEM_H_
