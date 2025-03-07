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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_COMMONOPTION_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_COMMONOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 通用选项
                */
                class CommonOption : public AbstractModel
                {
                public:
                    CommonOption();
                    ~CommonOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取-
                     * @return LabelName -
                     * 
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置-
                     * @param _labelName -
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
                     * 获取-
                     * @return Operator -
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置-
                     * @param _operator -
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取-
                     * @return LabelValue -
                     * 
                     */
                    std::string GetLabelValue() const;

                    /**
                     * 设置-
                     * @param _labelValue -
                     * 
                     */
                    void SetLabelValue(const std::string& _labelValue);

                    /**
                     * 判断参数 LabelValue 是否已赋值
                     * @return LabelValue 是否已赋值
                     * 
                     */
                    bool LabelValueHasBeenSet() const;

                private:

                    /**
                     * -
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                    /**
                     * -
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * -
                     */
                    std::string m_labelValue;
                    bool m_labelValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_COMMONOPTION_H_
