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

#ifndef TENCENTCLOUD_REGION_V20220627_MODEL_DESCRIBEZONESREQUEST_H_
#define TENCENTCLOUD_REGION_V20220627_MODEL_DESCRIBEZONESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Region
    {
        namespace V20220627
        {
            namespace Model
            {
                /**
                * DescribeZones请求参数结构体
                */
                class DescribeZonesRequest : public AbstractModel
                {
                public:
                    DescribeZonesRequest();
                    ~DescribeZonesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待查询产品的名称，例如cvm，具体取值请查询DescribeProducts接口
                     * @return Product 待查询产品的名称，例如cvm，具体取值请查询DescribeProducts接口
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置待查询产品的名称，例如cvm，具体取值请查询DescribeProducts接口
                     * @param _product 待查询产品的名称，例如cvm，具体取值请查询DescribeProducts接口
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取不传或者0表示不查询【可选业务白名单】，1表示查询【可选业务白名单】，该参数设置了1，只有在业务白名单查不到情况下，才会查该白名单
                     * @return Scene 不传或者0表示不查询【可选业务白名单】，1表示查询【可选业务白名单】，该参数设置了1，只有在业务白名单查不到情况下，才会查该白名单
                     * 
                     */
                    int64_t GetScene() const;

                    /**
                     * 设置不传或者0表示不查询【可选业务白名单】，1表示查询【可选业务白名单】，该参数设置了1，只有在业务白名单查不到情况下，才会查该白名单
                     * @param _scene 不传或者0表示不查询【可选业务白名单】，1表示查询【可选业务白名单】，该参数设置了1，只有在业务白名单查不到情况下，才会查该白名单
                     * 
                     */
                    void SetScene(const int64_t& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                private:

                    /**
                     * 待查询产品的名称，例如cvm，具体取值请查询DescribeProducts接口
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 不传或者0表示不查询【可选业务白名单】，1表示查询【可选业务白名单】，该参数设置了1，只有在业务白名单查不到情况下，才会查该白名单
                     */
                    int64_t m_scene;
                    bool m_sceneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REGION_V20220627_MODEL_DESCRIBEZONESREQUEST_H_
