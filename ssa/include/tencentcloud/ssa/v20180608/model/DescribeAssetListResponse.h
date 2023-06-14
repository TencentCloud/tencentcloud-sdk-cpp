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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEASSETLISTRESPONSE_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEASSETLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/AssetList.h>
#include <tencentcloud/ssa/v20180608/model/AggregationObj.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeAssetList返回参数结构体
                */
                class DescribeAssetListResponse : public AbstractModel
                {
                public:
                    DescribeAssetListResponse();
                    ~DescribeAssetListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资产列表
                     * @return AssetList 资产列表
                     * 
                     */
                    AssetList GetAssetList() const;

                    /**
                     * 判断参数 AssetList 是否已赋值
                     * @return AssetList 是否已赋值
                     * 
                     */
                    bool AssetListHasBeenSet() const;

                    /**
                     * 获取聚合数据
                     * @return AggregationData 聚合数据
                     * 
                     */
                    std::vector<AggregationObj> GetAggregationData() const;

                    /**
                     * 判断参数 AggregationData 是否已赋值
                     * @return AggregationData 是否已赋值
                     * 
                     */
                    bool AggregationDataHasBeenSet() const;

                    /**
                     * 获取命名空间数据
                     * @return NamespaceData 命名空间数据
                     * 
                     */
                    std::vector<std::string> GetNamespaceData() const;

                    /**
                     * 判断参数 NamespaceData 是否已赋值
                     * @return NamespaceData 是否已赋值
                     * 
                     */
                    bool NamespaceDataHasBeenSet() const;

                private:

                    /**
                     * 资产列表
                     */
                    AssetList m_assetList;
                    bool m_assetListHasBeenSet;

                    /**
                     * 聚合数据
                     */
                    std::vector<AggregationObj> m_aggregationData;
                    bool m_aggregationDataHasBeenSet;

                    /**
                     * 命名空间数据
                     */
                    std::vector<std::string> m_namespaceData;
                    bool m_namespaceDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEASSETLISTRESPONSE_H_
