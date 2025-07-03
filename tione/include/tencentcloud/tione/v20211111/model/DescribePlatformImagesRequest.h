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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEPLATFORMIMAGESREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEPLATFORMIMAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/Filter.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribePlatformImages请求参数结构体
                */
                class DescribePlatformImagesRequest : public AbstractModel
                {
                public:
                    DescribePlatformImagesRequest();
                    ~DescribePlatformImagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤器,  Name支持ImageId/ImageName/SupportDataPipeline/AllowSaveAllContent/ImageRange，其中ImageRange支持枚举值Train,Inference,Notebook
                     * @return Filters 过滤器,  Name支持ImageId/ImageName/SupportDataPipeline/AllowSaveAllContent/ImageRange，其中ImageRange支持枚举值Train,Inference,Notebook
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤器,  Name支持ImageId/ImageName/SupportDataPipeline/AllowSaveAllContent/ImageRange，其中ImageRange支持枚举值Train,Inference,Notebook
                     * @param _filters 过滤器,  Name支持ImageId/ImageName/SupportDataPipeline/AllowSaveAllContent/ImageRange，其中ImageRange支持枚举值Train,Inference,Notebook
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取偏移信息
                     * @return Offset 偏移信息
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移信息
                     * @param _offset 偏移信息
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量, 默认100
                     * @return Limit 返回数量, 默认100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量, 默认100
                     * @param _limit 返回数量, 默认100
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 过滤器,  Name支持ImageId/ImageName/SupportDataPipeline/AllowSaveAllContent/ImageRange，其中ImageRange支持枚举值Train,Inference,Notebook
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移信息
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量, 默认100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEPLATFORMIMAGESREQUEST_H_
