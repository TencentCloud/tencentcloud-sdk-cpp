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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_CREATEASSETRESPONSE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_CREATEASSETRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * CreateAsset返回参数结构体
                */
                class CreateAssetResponse : public AbstractModel
                {
                public:
                    CreateAssetResponse();
                    ~CreateAssetResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取生成包ID
                     * @return AssetId 生成包ID
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取生成包的全局唯一资源标识符
                     * @return AssetArn 生成包的全局唯一资源标识符
                     * 
                     */
                    std::string GetAssetArn() const;

                    /**
                     * 判断参数 AssetArn 是否已赋值
                     * @return AssetArn 是否已赋值
                     * 
                     */
                    bool AssetArnHasBeenSet() const;

                private:

                    /**
                     * 生成包ID
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 生成包的全局唯一资源标识符
                     */
                    std::string m_assetArn;
                    bool m_assetArnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_CREATEASSETRESPONSE_H_
