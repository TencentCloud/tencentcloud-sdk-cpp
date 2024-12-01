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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_DRUGINSTRUCTIONOBJECTRESPONSE_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_DRUGINSTRUCTIONOBJECTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfo.h>
#include <tencentcloud/mrs/v20200910/model/BiologicalProductInfo.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * DrugInstructionObject返回参数结构体
                */
                class DrugInstructionObjectResponse : public AbstractModel
                {
                public:
                    DrugInstructionObjectResponse();
                    ~DrugInstructionObjectResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取药品说明书消息定义
                     * @return ChemicalProductInfo 药品说明书消息定义
                     * 
                     */
                    ChemicalProductInfo GetChemicalProductInfo() const;

                    /**
                     * 判断参数 ChemicalProductInfo 是否已赋值
                     * @return ChemicalProductInfo 是否已赋值
                     * 
                     */
                    bool ChemicalProductInfoHasBeenSet() const;

                    /**
                     * 获取预防用生物制品说明书
                     * @return BiologicalProductInfo 预防用生物制品说明书
                     * 
                     */
                    BiologicalProductInfo GetBiologicalProductInfo() const;

                    /**
                     * 判断参数 BiologicalProductInfo 是否已赋值
                     * @return BiologicalProductInfo 是否已赋值
                     * 
                     */
                    bool BiologicalProductInfoHasBeenSet() const;

                private:

                    /**
                     * 药品说明书消息定义
                     */
                    ChemicalProductInfo m_chemicalProductInfo;
                    bool m_chemicalProductInfoHasBeenSet;

                    /**
                     * 预防用生物制品说明书
                     */
                    BiologicalProductInfo m_biologicalProductInfo;
                    bool m_biologicalProductInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_DRUGINSTRUCTIONOBJECTRESPONSE_H_
