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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBECUSTOMPERSONDETAILRESPONSE_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBECUSTOMPERSONDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/CustomPersonInfo.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * DescribeCustomPersonDetail返回参数结构体
                */
                class DescribeCustomPersonDetailResponse : public AbstractModel
                {
                public:
                    DescribeCustomPersonDetailResponse();
                    ~DescribeCustomPersonDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义人物信息
                     * @return PersonInfo 自定义人物信息
                     * 
                     */
                    CustomPersonInfo GetPersonInfo() const;

                    /**
                     * 判断参数 PersonInfo 是否已赋值
                     * @return PersonInfo 是否已赋值
                     * 
                     */
                    bool PersonInfoHasBeenSet() const;

                    /**
                     * 获取出现该自定义人物的所有分析人物Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskIdSet 出现该自定义人物的所有分析人物Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTaskIdSet() const;

                    /**
                     * 判断参数 TaskIdSet 是否已赋值
                     * @return TaskIdSet 是否已赋值
                     * 
                     */
                    bool TaskIdSetHasBeenSet() const;

                private:

                    /**
                     * 自定义人物信息
                     */
                    CustomPersonInfo m_personInfo;
                    bool m_personInfoHasBeenSet;

                    /**
                     * 出现该自定义人物的所有分析人物Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_taskIdSet;
                    bool m_taskIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBECUSTOMPERSONDETAILRESPONSE_H_
