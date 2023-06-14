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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_LISTLAYERVERSIONSRESPONSE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_LISTLAYERVERSIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/LayerVersionInfo.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ListLayerVersions返回参数结构体
                */
                class ListLayerVersionsResponse : public AbstractModel
                {
                public:
                    ListLayerVersionsResponse();
                    ~ListLayerVersionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取层版本列表
                     * @return LayerVersions 层版本列表
                     * 
                     */
                    std::vector<LayerVersionInfo> GetLayerVersions() const;

                    /**
                     * 判断参数 LayerVersions 是否已赋值
                     * @return LayerVersions 是否已赋值
                     * 
                     */
                    bool LayerVersionsHasBeenSet() const;

                private:

                    /**
                     * 层版本列表
                     */
                    std::vector<LayerVersionInfo> m_layerVersions;
                    bool m_layerVersionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_LISTLAYERVERSIONSRESPONSE_H_
