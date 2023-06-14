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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEROLELISTREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEROLELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/RoleTags.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * DescribeRoleList请求参数结构体
                */
                class DescribeRoleListRequest : public AbstractModel
                {
                public:
                    DescribeRoleListRequest();
                    ~DescribeRoleListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页码，从1开始
                     * @return Page 页码，从1开始
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置页码，从1开始
                     * @param _page 页码，从1开始
                     * 
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取每页行数，不能大于200
                     * @return Rp 每页行数，不能大于200
                     * 
                     */
                    uint64_t GetRp() const;

                    /**
                     * 设置每页行数，不能大于200
                     * @param _rp 每页行数，不能大于200
                     * 
                     */
                    void SetRp(const uint64_t& _rp);

                    /**
                     * 判断参数 Rp 是否已赋值
                     * @return Rp 是否已赋值
                     * 
                     */
                    bool RpHasBeenSet() const;

                    /**
                     * 获取标签筛选
                     * @return Tags 标签筛选
                     * 
                     */
                    std::vector<RoleTags> GetTags() const;

                    /**
                     * 设置标签筛选
                     * @param _tags 标签筛选
                     * 
                     */
                    void SetTags(const std::vector<RoleTags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 页码，从1开始
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 每页行数，不能大于200
                     */
                    uint64_t m_rp;
                    bool m_rpHasBeenSet;

                    /**
                     * 标签筛选
                     */
                    std::vector<RoleTags> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEROLELISTREQUEST_H_
