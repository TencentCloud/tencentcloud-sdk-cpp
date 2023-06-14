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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_DESCRIBEMESHLISTRESPONSE_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_DESCRIBEMESHLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcm/v20210413/model/Mesh.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * DescribeMeshList返回参数结构体
                */
                class DescribeMeshListResponse : public AbstractModel
                {
                public:
                    DescribeMeshListResponse();
                    ~DescribeMeshListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询到的网格信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MeshList 查询到的网格信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Mesh> GetMeshList() const;

                    /**
                     * 判断参数 MeshList 是否已赋值
                     * @return MeshList 是否已赋值
                     * 
                     */
                    bool MeshListHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return Total 总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 查询到的网格信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Mesh> m_meshList;
                    bool m_meshListHasBeenSet;

                    /**
                     * 总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_DESCRIBEMESHLISTRESPONSE_H_
