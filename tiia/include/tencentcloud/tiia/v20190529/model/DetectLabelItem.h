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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTLABELITEM_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTLABELITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * 图像标签检测结果。
                */
                class DetectLabelItem : public AbstractModel
                {
                public:
                    DetectLabelItem();
                    ~DetectLabelItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片中的物体名称。
                     * @return Name 图片中的物体名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置图片中的物体名称。
                     * @param _name 图片中的物体名称。
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
                     * 获取算法对于Name的置信度，0-100之间，值越高，表示对于Name越确定。
                     * @return Confidence 算法对于Name的置信度，0-100之间，值越高，表示对于Name越确定。
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置算法对于Name的置信度，0-100之间，值越高，表示对于Name越确定。
                     * @param _confidence 算法对于Name的置信度，0-100之间，值越高，表示对于Name越确定。
                     * 
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取标签的一级分类
                     * @return FirstCategory 标签的一级分类
                     * 
                     */
                    std::string GetFirstCategory() const;

                    /**
                     * 设置标签的一级分类
                     * @param _firstCategory 标签的一级分类
                     * 
                     */
                    void SetFirstCategory(const std::string& _firstCategory);

                    /**
                     * 判断参数 FirstCategory 是否已赋值
                     * @return FirstCategory 是否已赋值
                     * 
                     */
                    bool FirstCategoryHasBeenSet() const;

                    /**
                     * 获取标签的二级分类
                     * @return SecondCategory 标签的二级分类
                     * 
                     */
                    std::string GetSecondCategory() const;

                    /**
                     * 设置标签的二级分类
                     * @param _secondCategory 标签的二级分类
                     * 
                     */
                    void SetSecondCategory(const std::string& _secondCategory);

                    /**
                     * 判断参数 SecondCategory 是否已赋值
                     * @return SecondCategory 是否已赋值
                     * 
                     */
                    bool SecondCategoryHasBeenSet() const;

                private:

                    /**
                     * 图片中的物体名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 算法对于Name的置信度，0-100之间，值越高，表示对于Name越确定。
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 标签的一级分类
                     */
                    std::string m_firstCategory;
                    bool m_firstCategoryHasBeenSet;

                    /**
                     * 标签的二级分类
                     */
                    std::string m_secondCategory;
                    bool m_secondCategoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTLABELITEM_H_
