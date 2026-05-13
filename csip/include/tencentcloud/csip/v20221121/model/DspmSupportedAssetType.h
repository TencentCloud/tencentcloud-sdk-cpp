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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMSUPPORTEDASSETTYPE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMSUPPORTEDASSETTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RegionConfig.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * dspm支持的产品信息
                */
                class DspmSupportedAssetType : public AbstractModel
                {
                public:
                    DspmSupportedAssetType();
                    ~DspmSupportedAssetType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>产品名（用于查询）</p>
                     * @return Product <p>产品名（用于查询）</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>产品名（用于查询）</p>
                     * @param _product <p>产品名（用于查询）</p>
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
                     * 获取<p>地域列表</p>
                     * @return Regions <p>地域列表</p>
                     * 
                     */
                    std::vector<RegionConfig> GetRegions() const;

                    /**
                     * 设置<p>地域列表</p>
                     * @param _regions <p>地域列表</p>
                     * 
                     */
                    void SetRegions(const std::vector<RegionConfig>& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * 
                     */
                    bool RegionsHasBeenSet() const;

                    /**
                     * 获取<p>产品名-用于展示</p>
                     * @return ProductDisplayName <p>产品名-用于展示</p>
                     * 
                     */
                    std::string GetProductDisplayName() const;

                    /**
                     * 设置<p>产品名-用于展示</p>
                     * @param _productDisplayName <p>产品名-用于展示</p>
                     * 
                     */
                    void SetProductDisplayName(const std::string& _productDisplayName);

                    /**
                     * 判断参数 ProductDisplayName 是否已赋值
                     * @return ProductDisplayName 是否已赋值
                     * 
                     */
                    bool ProductDisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>产品组名</p>
                     * @return ProductGroup <p>产品组名</p>
                     * 
                     */
                    std::string GetProductGroup() const;

                    /**
                     * 设置<p>产品组名</p>
                     * @param _productGroup <p>产品组名</p>
                     * 
                     */
                    void SetProductGroup(const std::string& _productGroup);

                    /**
                     * 判断参数 ProductGroup 是否已赋值
                     * @return ProductGroup 是否已赋值
                     * 
                     */
                    bool ProductGroupHasBeenSet() const;

                    /**
                     * 获取<p>给定资产类型的资产实例总数</p>
                     * @return AssetTotal <p>给定资产类型的资产实例总数</p>
                     * 
                     */
                    int64_t GetAssetTotal() const;

                    /**
                     * 设置<p>给定资产类型的资产实例总数</p>
                     * @param _assetTotal <p>给定资产类型的资产实例总数</p>
                     * 
                     */
                    void SetAssetTotal(const int64_t& _assetTotal);

                    /**
                     * 判断参数 AssetTotal 是否已赋值
                     * @return AssetTotal 是否已赋值
                     * 
                     */
                    bool AssetTotalHasBeenSet() const;

                private:

                    /**
                     * <p>产品名（用于查询）</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>地域列表</p>
                     */
                    std::vector<RegionConfig> m_regions;
                    bool m_regionsHasBeenSet;

                    /**
                     * <p>产品名-用于展示</p>
                     */
                    std::string m_productDisplayName;
                    bool m_productDisplayNameHasBeenSet;

                    /**
                     * <p>产品组名</p>
                     */
                    std::string m_productGroup;
                    bool m_productGroupHasBeenSet;

                    /**
                     * <p>给定资产类型的资产实例总数</p>
                     */
                    int64_t m_assetTotal;
                    bool m_assetTotalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMSUPPORTEDASSETTYPE_H_
