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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_GETCUSTOMIZATIONLISTRESPONSE_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_GETCUSTOMIZATIONLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/asr/v20190614/model/Model.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * GetCustomizationList返回参数结构体
                */
                class GetCustomizationListResponse : public AbstractModel
                {
                public:
                    GetCustomizationListResponse();
                    ~GetCustomizationListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取自学习模型数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 自学习模型数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Model> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取自学习模型总量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 自学习模型总量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 自学习模型数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Model> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 自学习模型总量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_GETCUSTOMIZATIONLISTRESPONSE_H_
