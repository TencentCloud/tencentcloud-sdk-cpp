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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEPUBLICIPASSETSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEPUBLICIPASSETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filter.h>
#include <tencentcloud/csip/v20221121/model/AssetTag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribePublicIpAssets请求参数结构体
                */
                class DescribePublicIpAssetsRequest : public AbstractModel
                {
                public:
                    DescribePublicIpAssetsRequest();
                    ~DescribePublicIpAssetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取filte过滤条件
                     * @return Filter filte过滤条件
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置filte过滤条件
                     * @param _filter filte过滤条件
                     * 
                     */
                    void SetFilter(const Filter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取安全中心自定义标签
                     * @return Tags 安全中心自定义标签
                     * 
                     */
                    std::vector<AssetTag> GetTags() const;

                    /**
                     * 设置安全中心自定义标签
                     * @param _tags 安全中心自定义标签
                     * 
                     */
                    void SetTags(const std::vector<AssetTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * filte过滤条件
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 安全中心自定义标签
                     */
                    std::vector<AssetTag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEPUBLICIPASSETSREQUEST_H_
