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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_BOX_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_BOX_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiia/v20190529/model/ImageRect.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * 图像主体区域。
                */
                class Box : public AbstractModel
                {
                public:
                    Box();
                    ~Box() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图像主体区域。
                     * @return Rect 图像主体区域。
                     * 
                     */
                    ImageRect GetRect() const;

                    /**
                     * 设置图像主体区域。
                     * @param _rect 图像主体区域。
                     * 
                     */
                    void SetRect(const ImageRect& _rect);

                    /**
                     * 判断参数 Rect 是否已赋值
                     * @return Rect 是否已赋值
                     * 
                     */
                    bool RectHasBeenSet() const;

                    /**
                     * 获取置信度。
                     * @return Score 置信度。
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置置信度。
                     * @param _score 置信度。
                     * 
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取主体区域类目ID
                     * @return CategoryId 主体区域类目ID
                     * 
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置主体区域类目ID
                     * @param _categoryId 主体区域类目ID
                     * 
                     */
                    void SetCategoryId(const int64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                private:

                    /**
                     * 图像主体区域。
                     */
                    ImageRect m_rect;
                    bool m_rectHasBeenSet;

                    /**
                     * 置信度。
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 主体区域类目ID
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_BOX_H_
