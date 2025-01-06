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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_CREATEATTRIBUTELABELREQUEST_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_CREATEATTRIBUTELABELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/AttributeLabelItem.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * CreateAttributeLabel请求参数结构体
                */
                class CreateAttributeLabelRequest : public AbstractModel
                {
                public:
                    CreateAttributeLabelRequest();
                    ~CreateAttributeLabelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取属性标签信息
                     * @return Labels 属性标签信息
                     * 
                     */
                    std::vector<AttributeLabelItem> GetLabels() const;

                    /**
                     * 设置属性标签信息
                     * @param _labels 属性标签信息
                     * 
                     */
                    void SetLabels(const std::vector<AttributeLabelItem>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                private:

                    /**
                     * 属性标签信息
                     */
                    std::vector<AttributeLabelItem> m_labels;
                    bool m_labelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_CREATEATTRIBUTELABELREQUEST_H_
