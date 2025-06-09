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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CHECKATTRIBUTELABELREFERRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CHECKATTRIBUTELABELREFERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AttributeLabelRefByWorkflow.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * CheckAttributeLabelRefer返回参数结构体
                */
                class CheckAttributeLabelReferResponse : public AbstractModel
                {
                public:
                    CheckAttributeLabelReferResponse();
                    ~CheckAttributeLabelReferResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否引用
                     * @return IsRefer 是否引用
                     * 
                     */
                    bool GetIsRefer() const;

                    /**
                     * 判断参数 IsRefer 是否已赋值
                     * @return IsRefer 是否已赋值
                     * 
                     */
                    bool IsReferHasBeenSet() const;

                    /**
                     * 获取引用的工作流详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return List 引用的工作流详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AttributeLabelRefByWorkflow> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * 是否引用
                     */
                    bool m_isRefer;
                    bool m_isReferHasBeenSet;

                    /**
                     * 引用的工作流详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AttributeLabelRefByWorkflow> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CHECKATTRIBUTELABELREFERRESPONSE_H_
