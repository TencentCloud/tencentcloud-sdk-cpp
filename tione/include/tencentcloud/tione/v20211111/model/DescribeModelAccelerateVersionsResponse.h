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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELACCELERATEVERSIONSRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELACCELERATEVERSIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ModelAccelerateVersion.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeModelAccelerateVersions返回参数结构体
                */
                class DescribeModelAccelerateVersionsResponse : public AbstractModel
                {
                public:
                    DescribeModelAccelerateVersionsResponse();
                    ~DescribeModelAccelerateVersionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取优化模型总数； 注意接口是分页拉取的，total是指优化模型节点总数，不是本次返回中ModelAccelerateVersions数组的大小
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 优化模型总数； 注意接口是分页拉取的，total是指优化模型节点总数，不是本次返回中ModelAccelerateVersions数组的大小
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取优化模型列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelAccelerateVersions 优化模型列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ModelAccelerateVersion> GetModelAccelerateVersions() const;

                    /**
                     * 判断参数 ModelAccelerateVersions 是否已赋值
                     * @return ModelAccelerateVersions 是否已赋值
                     * 
                     */
                    bool ModelAccelerateVersionsHasBeenSet() const;

                private:

                    /**
                     * 优化模型总数； 注意接口是分页拉取的，total是指优化模型节点总数，不是本次返回中ModelAccelerateVersions数组的大小
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 优化模型列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ModelAccelerateVersion> m_modelAccelerateVersions;
                    bool m_modelAccelerateVersionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELACCELERATEVERSIONSRESPONSE_H_
