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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETTAGATTRIBUTESRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETTAGATTRIBUTESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/FilterDataObject.h>
#include <tencentcloud/csip/v20221121/model/AssetTagTreeNode.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAssetTagAttributes返回参数结构体
                */
                class DescribeAssetTagAttributesResponse : public AbstractModel
                {
                public:
                    DescribeAssetTagAttributesResponse();
                    ~DescribeAssetTagAttributesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>过滤条件</p>
                     * @return FilterConditions <p>过滤条件</p>
                     * 
                     */
                    std::vector<FilterDataObject> GetFilterConditions() const;

                    /**
                     * 判断参数 FilterConditions 是否已赋值
                     * @return FilterConditions 是否已赋值
                     * 
                     */
                    bool FilterConditionsHasBeenSet() const;

                    /**
                     * 获取<p>打标策略通用属性</p>
                     * @return TaggingAttributes <p>打标策略通用属性</p>
                     * 
                     */
                    std::vector<FilterDataObject> GetTaggingAttributes() const;

                    /**
                     * 判断参数 TaggingAttributes 是否已赋值
                     * @return TaggingAttributes 是否已赋值
                     * 
                     */
                    bool TaggingAttributesHasBeenSet() const;

                    /**
                     * 获取<p>已有标签键列表</p>
                     * @return TagKeyList <p>已有标签键列表</p>
                     * 
                     */
                    std::vector<FilterDataObject> GetTagKeyList() const;

                    /**
                     * 判断参数 TagKeyList 是否已赋值
                     * @return TagKeyList 是否已赋值
                     * 
                     */
                    bool TagKeyListHasBeenSet() const;

                    /**
                     * 获取<p>可选颜色列表</p>
                     * @return ColorOptions <p>可选颜色列表</p>
                     * 
                     */
                    std::vector<FilterDataObject> GetColorOptions() const;

                    /**
                     * 判断参数 ColorOptions 是否已赋值
                     * @return ColorOptions 是否已赋值
                     * 
                     */
                    bool ColorOptionsHasBeenSet() const;

                    /**
                     * 获取<p>资产类型列表</p>
                     * @return AssetTypeList <p>资产类型列表</p>
                     * 
                     */
                    std::vector<FilterDataObject> GetAssetTypeList() const;

                    /**
                     * 判断参数 AssetTypeList 是否已赋值
                     * @return AssetTypeList 是否已赋值
                     * 
                     */
                    bool AssetTypeListHasBeenSet() const;

                    /**
                     * 获取<p>标签树</p>
                     * @return TagTree <p>标签树</p>
                     * 
                     */
                    std::vector<AssetTagTreeNode> GetTagTree() const;

                    /**
                     * 判断参数 TagTree 是否已赋值
                     * @return TagTree 是否已赋值
                     * 
                     */
                    bool TagTreeHasBeenSet() const;

                private:

                    /**
                     * <p>过滤条件</p>
                     */
                    std::vector<FilterDataObject> m_filterConditions;
                    bool m_filterConditionsHasBeenSet;

                    /**
                     * <p>打标策略通用属性</p>
                     */
                    std::vector<FilterDataObject> m_taggingAttributes;
                    bool m_taggingAttributesHasBeenSet;

                    /**
                     * <p>已有标签键列表</p>
                     */
                    std::vector<FilterDataObject> m_tagKeyList;
                    bool m_tagKeyListHasBeenSet;

                    /**
                     * <p>可选颜色列表</p>
                     */
                    std::vector<FilterDataObject> m_colorOptions;
                    bool m_colorOptionsHasBeenSet;

                    /**
                     * <p>资产类型列表</p>
                     */
                    std::vector<FilterDataObject> m_assetTypeList;
                    bool m_assetTypeListHasBeenSet;

                    /**
                     * <p>标签树</p>
                     */
                    std::vector<AssetTagTreeNode> m_tagTree;
                    bool m_tagTreeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETTAGATTRIBUTESRESPONSE_H_
