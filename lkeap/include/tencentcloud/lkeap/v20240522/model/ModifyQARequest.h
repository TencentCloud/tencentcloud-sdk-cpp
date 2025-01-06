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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_MODIFYQAREQUEST_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_MODIFYQAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/AttributeLabelReferItem.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * ModifyQA请求参数结构体
                */
                class ModifyQARequest : public AbstractModel
                {
                public:
                    ModifyQARequest();
                    ~ModifyQARequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取属性标签
                     * @return AttributeLabels 属性标签
                     * 
                     */
                    std::vector<AttributeLabelReferItem> GetAttributeLabels() const;

                    /**
                     * 设置属性标签
                     * @param _attributeLabels 属性标签
                     * 
                     */
                    void SetAttributeLabels(const std::vector<AttributeLabelReferItem>& _attributeLabels);

                    /**
                     * 判断参数 AttributeLabels 是否已赋值
                     * @return AttributeLabels 是否已赋值
                     * 
                     */
                    bool AttributeLabelsHasBeenSet() const;

                private:

                    /**
                     * 属性标签
                     */
                    std::vector<AttributeLabelReferItem> m_attributeLabels;
                    bool m_attributeLabelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_MODIFYQAREQUEST_H_
