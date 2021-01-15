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

#ifndef TENCENTCLOUD_APCAS_V20201127_MODEL_LABELDETAILDATA_H_
#define TENCENTCLOUD_APCAS_V20201127_MODEL_LABELDETAILDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apcas/v20201127/model/LabelValue.h>


namespace TencentCloud
{
    namespace Apcas
    {
        namespace V20201127
        {
            namespace Model
            {
                /**
                * 画像标签详情数据对象
                */
                class LabelDetailData : public AbstractModel
                {
                public:
                    LabelDetailData();
                    ~LabelDetailData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签数据对象
                     * @return Value 标签数据对象
                     */
                    LabelValue GetValue() const;

                    /**
                     * 设置标签数据对象
                     * @param Value 标签数据对象
                     */
                    void SetValue(const LabelValue& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取标签表述，如"汽车资讯"、"游戏#手游"等
                     * @return Label 标签表述，如"汽车资讯"、"游戏#手游"等
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置标签表述，如"汽车资讯"、"游戏#手游"等
                     * @param Label 标签表述，如"汽车资讯"、"游戏#手游"等
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     */
                    bool LabelHasBeenSet() const;

                private:

                    /**
                     * 标签数据对象
                     */
                    LabelValue m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 标签表述，如"汽车资讯"、"游戏#手游"等
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APCAS_V20201127_MODEL_LABELDETAILDATA_H_
