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

#ifndef TENCENTCLOUD_FMU_V20191213_MODEL_GETMODELLISTRESPONSE_H_
#define TENCENTCLOUD_FMU_V20191213_MODEL_GETMODELLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fmu/v20191213/model/ModelInfo.h>


namespace TencentCloud
{
    namespace Fmu
    {
        namespace V20191213
        {
            namespace Model
            {
                /**
                * GetModelList返回参数结构体
                */
                class GetModelListResponse : public AbstractModel
                {
                public:
                    GetModelListResponse();
                    ~GetModelListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取唇色素材总数量。
                     * @return ModelIdNum 唇色素材总数量。
                     * 
                     */
                    int64_t GetModelIdNum() const;

                    /**
                     * 判断参数 ModelIdNum 是否已赋值
                     * @return ModelIdNum 是否已赋值
                     * 
                     */
                    bool ModelIdNumHasBeenSet() const;

                    /**
                     * 获取素材数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelInfos 素材数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ModelInfo> GetModelInfos() const;

                    /**
                     * 判断参数 ModelInfos 是否已赋值
                     * @return ModelInfos 是否已赋值
                     * 
                     */
                    bool ModelInfosHasBeenSet() const;

                private:

                    /**
                     * 唇色素材总数量。
                     */
                    int64_t m_modelIdNum;
                    bool m_modelIdNumHasBeenSet;

                    /**
                     * 素材数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ModelInfo> m_modelInfos;
                    bool m_modelInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FMU_V20191213_MODEL_GETMODELLISTRESPONSE_H_
