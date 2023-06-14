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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBECONFIGLISTREQUEST_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBECONFIGLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeConfigList请求参数结构体
                */
                class DescribeConfigListRequest : public AbstractModel
                {
                public:
                    DescribeConfigListRequest();
                    ~DescribeConfigListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索过滤条件
                     * @return Filter 搜索过滤条件
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置搜索过滤条件
                     * @param _filter 搜索过滤条件
                     * 
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * 搜索过滤条件
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBECONFIGLISTREQUEST_H_
