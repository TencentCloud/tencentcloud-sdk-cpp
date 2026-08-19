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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETTYPENODE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETTYPENODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 资产树-资产类型节点
                */
                class AssetTypeNode : public AbstractModel
                {
                public:
                    AssetTypeNode();
                    ~AssetTypeNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资产类型</p>
                     * @return AssetType <p>资产类型</p>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>资产类型</p>
                     * @param _assetType <p>资产类型</p>
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>资产类型名称</p>
                     * @return AssetTypeName <p>资产类型名称</p>
                     * 
                     */
                    std::string GetAssetTypeName() const;

                    /**
                     * 设置<p>资产类型名称</p>
                     * @param _assetTypeName <p>资产类型名称</p>
                     * 
                     */
                    void SetAssetTypeName(const std::string& _assetTypeName);

                    /**
                     * 判断参数 AssetTypeName 是否已赋值
                     * @return AssetTypeName 是否已赋值
                     * 
                     */
                    bool AssetTypeNameHasBeenSet() const;

                    /**
                     * 获取<p>资产类型数量</p>
                     * @return AssetCount <p>资产类型数量</p>
                     * 
                     */
                    uint64_t GetAssetCount() const;

                    /**
                     * 设置<p>资产类型数量</p>
                     * @param _assetCount <p>资产类型数量</p>
                     * 
                     */
                    void SetAssetCount(const uint64_t& _assetCount);

                    /**
                     * 判断参数 AssetCount 是否已赋值
                     * @return AssetCount 是否已赋值
                     * 
                     */
                    bool AssetCountHasBeenSet() const;

                    /**
                     * 获取<p>资产类型ID</p>
                     * @return AssetTypeID <p>资产类型ID</p>
                     * 
                     */
                    uint64_t GetAssetTypeID() const;

                    /**
                     * 设置<p>资产类型ID</p>
                     * @param _assetTypeID <p>资产类型ID</p>
                     * 
                     */
                    void SetAssetTypeID(const uint64_t& _assetTypeID);

                    /**
                     * 判断参数 AssetTypeID 是否已赋值
                     * @return AssetTypeID 是否已赋值
                     * 
                     */
                    bool AssetTypeIDHasBeenSet() const;

                private:

                    /**
                     * <p>资产类型</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>资产类型名称</p>
                     */
                    std::string m_assetTypeName;
                    bool m_assetTypeNameHasBeenSet;

                    /**
                     * <p>资产类型数量</p>
                     */
                    uint64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * <p>资产类型ID</p>
                     */
                    uint64_t m_assetTypeID;
                    bool m_assetTypeIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETTYPENODE_H_
