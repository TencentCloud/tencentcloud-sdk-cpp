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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_LABELVALUE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_LABELVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 描述label详细信息
                */
                class LabelValue : public AbstractModel
                {
                public:
                    LabelValue();
                    ~LabelValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签名称
                     * @return LabelName 标签名称
                     * 
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置标签名称
                     * @param _labelName 标签名称
                     * 
                     */
                    void SetLabelName(const std::string& _labelName);

                    /**
                     * 判断参数 LabelName 是否已赋值
                     * @return LabelName 是否已赋值
                     * 
                     */
                    bool LabelNameHasBeenSet() const;

                    /**
                     * 获取标签的颜色
                     * @return LabelColor 标签的颜色
                     * 
                     */
                    std::string GetLabelColor() const;

                    /**
                     * 设置标签的颜色
                     * @param _labelColor 标签的颜色
                     * 
                     */
                    void SetLabelColor(const std::string& _labelColor);

                    /**
                     * 判断参数 LabelColor 是否已赋值
                     * @return LabelColor 是否已赋值
                     * 
                     */
                    bool LabelColorHasBeenSet() const;

                private:

                    /**
                     * 标签名称
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                    /**
                     * 标签的颜色
                     */
                    std::string m_labelColor;
                    bool m_labelColorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_LABELVALUE_H_
