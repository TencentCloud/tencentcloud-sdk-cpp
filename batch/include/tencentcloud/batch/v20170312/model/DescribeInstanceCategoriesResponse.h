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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEINSTANCECATEGORIESRESPONSE_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEINSTANCECATEGORIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/InstanceCategoryItem.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeInstanceCategories返回参数结构体
                */
                class DescribeInstanceCategoriesResponse : public AbstractModel
                {
                public:
                    DescribeInstanceCategoriesResponse();
                    ~DescribeInstanceCategoriesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取CVM实例分类列表
                     * @return InstanceCategorySet CVM实例分类列表
                     * 
                     */
                    std::vector<InstanceCategoryItem> GetInstanceCategorySet() const;

                    /**
                     * 判断参数 InstanceCategorySet 是否已赋值
                     * @return InstanceCategorySet 是否已赋值
                     * 
                     */
                    bool InstanceCategorySetHasBeenSet() const;

                private:

                    /**
                     * CVM实例分类列表
                     */
                    std::vector<InstanceCategoryItem> m_instanceCategorySet;
                    bool m_instanceCategorySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEINSTANCECATEGORIESRESPONSE_H_
