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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEXPOSUREAUTOTAGATTRIBUTERESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEXPOSUREAUTOTAGATTRIBUTERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ExposeAssetTypeItem.h>
#include <tencentcloud/csip/v20221121/model/AttributeOptionSet.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeExposureAutoTagAttribute返回参数结构体
                */
                class DescribeExposureAutoTagAttributeResponse : public AbstractModel
                {
                public:
                    DescribeExposureAutoTagAttributeResponse();
                    ~DescribeExposureAutoTagAttributeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资产类型</p>
                     * @return AssetTypeList <p>资产类型</p>
                     * 
                     */
                    std::vector<ExposeAssetTypeItem> GetAssetTypeList() const;

                    /**
                     * 判断参数 AssetTypeList 是否已赋值
                     * @return AssetTypeList 是否已赋值
                     * 
                     */
                    bool AssetTypeListHasBeenSet() const;

                    /**
                     * 获取<p>标签集合</p>
                     * @return TagList <p>标签集合</p>
                     * 
                     */
                    std::vector<AttributeOptionSet> GetTagList() const;

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取<p>开放状态集合</p>
                     * @return OpenStatusList <p>开放状态集合</p>
                     * 
                     */
                    std::vector<AttributeOptionSet> GetOpenStatusList() const;

                    /**
                     * 判断参数 OpenStatusList 是否已赋值
                     * @return OpenStatusList 是否已赋值
                     * 
                     */
                    bool OpenStatusListHasBeenSet() const;

                private:

                    /**
                     * <p>资产类型</p>
                     */
                    std::vector<ExposeAssetTypeItem> m_assetTypeList;
                    bool m_assetTypeListHasBeenSet;

                    /**
                     * <p>标签集合</p>
                     */
                    std::vector<AttributeOptionSet> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>开放状态集合</p>
                     */
                    std::vector<AttributeOptionSet> m_openStatusList;
                    bool m_openStatusListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEXPOSUREAUTOTAGATTRIBUTERESPONSE_H_
