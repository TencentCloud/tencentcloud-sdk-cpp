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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEPOLICYCATEGORYLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEPOLICYCATEGORYLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BaselineSystemCategory.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeBaselinePolicyCategoryList返回参数结构体
                */
                class DescribeBaselinePolicyCategoryListResponse : public AbstractModel
                {
                public:
                    DescribeBaselinePolicyCategoryListResponse();
                    ~DescribeBaselinePolicyCategoryListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>系统父分类列表，含每个父分类下的子分类与检测项 ID 列表。</p>
                     * @return SystemCategoryList <p>系统父分类列表，含每个父分类下的子分类与检测项 ID 列表。</p>
                     * 
                     */
                    std::vector<BaselineSystemCategory> GetSystemCategoryList() const;

                    /**
                     * 判断参数 SystemCategoryList 是否已赋值
                     * @return SystemCategoryList 是否已赋值
                     * 
                     */
                    bool SystemCategoryListHasBeenSet() const;

                private:

                    /**
                     * <p>系统父分类列表，含每个父分类下的子分类与检测项 ID 列表。</p>
                     */
                    std::vector<BaselineSystemCategory> m_systemCategoryList;
                    bool m_systemCategoryListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEPOLICYCATEGORYLISTRESPONSE_H_
