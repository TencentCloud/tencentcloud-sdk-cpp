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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_ITEMCOORDINATE_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_ITEMCOORDINATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Coordinate.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 检验指标内容坐标
                */
                class ItemCoordinate : public AbstractModel
                {
                public:
                    ItemCoordinate();
                    ~ItemCoordinate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>指标项名称坐标</p>
                     * @return Name <p>指标项名称坐标</p>
                     * 
                     */
                    Coordinate GetName() const;

                    /**
                     * 设置<p>指标项名称坐标</p>
                     * @param _name <p>指标项名称坐标</p>
                     * 
                     */
                    void SetName(const Coordinate& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>指标结果称坐标</p>
                     * @return Result <p>指标结果称坐标</p>
                     * 
                     */
                    Coordinate GetResult() const;

                    /**
                     * 设置<p>指标结果称坐标</p>
                     * @param _result <p>指标结果称坐标</p>
                     * 
                     */
                    void SetResult(const Coordinate& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取<p>指标项范围坐标</p>
                     * @return Range <p>指标项范围坐标</p>
                     * 
                     */
                    Coordinate GetRange() const;

                    /**
                     * 设置<p>指标项范围坐标</p>
                     * @param _range <p>指标项范围坐标</p>
                     * 
                     */
                    void SetRange(const Coordinate& _range);

                    /**
                     * 判断参数 Range 是否已赋值
                     * @return Range 是否已赋值
                     * 
                     */
                    bool RangeHasBeenSet() const;

                private:

                    /**
                     * <p>指标项名称坐标</p>
                     */
                    Coordinate m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>指标结果称坐标</p>
                     */
                    Coordinate m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>指标项范围坐标</p>
                     */
                    Coordinate m_range;
                    bool m_rangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_ITEMCOORDINATE_H_
