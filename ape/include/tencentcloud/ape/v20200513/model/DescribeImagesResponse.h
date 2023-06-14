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

#ifndef TENCENTCLOUD_APE_V20200513_MODEL_DESCRIBEIMAGESRESPONSE_H_
#define TENCENTCLOUD_APE_V20200513_MODEL_DESCRIBEIMAGESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ape/v20200513/model/ImageItem.h>


namespace TencentCloud
{
    namespace Ape
    {
        namespace V20200513
        {
            namespace Model
            {
                /**
                * DescribeImages返回参数结构体
                */
                class DescribeImagesResponse : public AbstractModel
                {
                public:
                    DescribeImagesResponse();
                    ~DescribeImagesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取页偏移量
                     * @return Offset 页偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取页大小
                     * @return Limit 页大小
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取总条数
                     * @return Total 总条数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取是否有下一页
                     * @return HaveMore 是否有下一页
                     * 
                     */
                    bool GetHaveMore() const;

                    /**
                     * 判断参数 HaveMore 是否已赋值
                     * @return HaveMore 是否已赋值
                     * 
                     */
                    bool HaveMoreHasBeenSet() const;

                    /**
                     * 获取图片信息数组
                     * @return Items 图片信息数组
                     * 
                     */
                    std::vector<ImageItem> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 页偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 页大小
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 总条数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 是否有下一页
                     */
                    bool m_haveMore;
                    bool m_haveMoreHasBeenSet;

                    /**
                     * 图片信息数组
                     */
                    std::vector<ImageItem> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APE_V20200513_MODEL_DESCRIBEIMAGESRESPONSE_H_
