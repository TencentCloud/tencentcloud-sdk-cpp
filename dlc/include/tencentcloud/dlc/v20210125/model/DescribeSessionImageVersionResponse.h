/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESESSIONIMAGEVERSIONRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESESSIONIMAGEVERSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/EngineSessionImage.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeSessionImageVersion返回参数结构体
                */
                class DescribeSessionImageVersionResponse : public AbstractModel
                {
                public:
                    DescribeSessionImageVersionResponse();
                    ~DescribeSessionImageVersionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取扩展镜像列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineSessionImages 扩展镜像列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EngineSessionImage> GetEngineSessionImages() const;

                    /**
                     * 判断参数 EngineSessionImages 是否已赋值
                     * @return EngineSessionImages 是否已赋值
                     * 
                     */
                    bool EngineSessionImagesHasBeenSet() const;

                private:

                    /**
                     * 扩展镜像列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EngineSessionImage> m_engineSessionImages;
                    bool m_engineSessionImagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESESSIONIMAGEVERSIONRESPONSE_H_
