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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_LISTPLATFORMPRODUCTSRESPONSE_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_LISTPLATFORMPRODUCTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/PlatformProduct.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * ListPlatformProducts返回参数结构体
                */
                class ListPlatformProductsResponse : public AbstractModel
                {
                public:
                    ListPlatformProductsResponse();
                    ~ListPlatformProductsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取平台产品列表
                     * @return PlatformProducts 平台产品列表
                     * 
                     */
                    std::vector<PlatformProduct> GetPlatformProducts() const;

                    /**
                     * 判断参数 PlatformProducts 是否已赋值
                     * @return PlatformProducts 是否已赋值
                     * 
                     */
                    bool PlatformProductsHasBeenSet() const;

                private:

                    /**
                     * 平台产品列表
                     */
                    std::vector<PlatformProduct> m_platformProducts;
                    bool m_platformProductsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_LISTPLATFORMPRODUCTSRESPONSE_H_
