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

#ifndef TENCENTCLOUD_TBM_V20180129_MODEL_DESCRIBEUSERPORTRAITREQUEST_H_
#define TENCENTCLOUD_TBM_V20180129_MODEL_DESCRIBEUSERPORTRAITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbm
    {
        namespace V20180129
        {
            namespace Model
            {
                /**
                * DescribeUserPortrait请求参数结构体
                */
                class DescribeUserPortraitRequest : public AbstractModel
                {
                public:
                    DescribeUserPortraitRequest();
                    ~DescribeUserPortraitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取品牌ID
                     * @return BrandId 品牌ID
                     * 
                     */
                    std::string GetBrandId() const;

                    /**
                     * 设置品牌ID
                     * @param _brandId 品牌ID
                     * 
                     */
                    void SetBrandId(const std::string& _brandId);

                    /**
                     * 判断参数 BrandId 是否已赋值
                     * @return BrandId 是否已赋值
                     * 
                     */
                    bool BrandIdHasBeenSet() const;

                private:

                    /**
                     * 品牌ID
                     */
                    std::string m_brandId;
                    bool m_brandIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBM_V20180129_MODEL_DESCRIBEUSERPORTRAITREQUEST_H_
