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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_LABELWITHVALUES_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_LABELWITHVALUES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 标签及对应的值
                */
                class LabelWithValues : public AbstractModel
                {
                public:
                    LabelWithValues();
                    ~LabelWithValues() = default;
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
                     * 获取标签值
                     * @return LabelValues 标签值
                     * 
                     */
                    std::vector<std::string> GetLabelValues() const;

                    /**
                     * 设置标签值
                     * @param _labelValues 标签值
                     * 
                     */
                    void SetLabelValues(const std::vector<std::string>& _labelValues);

                    /**
                     * 判断参数 LabelValues 是否已赋值
                     * @return LabelValues 是否已赋值
                     * 
                     */
                    bool LabelValuesHasBeenSet() const;

                private:

                    /**
                     * 标签名称
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                    /**
                     * 标签值
                     */
                    std::vector<std::string> m_labelValues;
                    bool m_labelValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_LABELWITHVALUES_H_
