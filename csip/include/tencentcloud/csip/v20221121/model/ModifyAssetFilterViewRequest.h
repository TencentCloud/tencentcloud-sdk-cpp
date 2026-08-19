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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYASSETFILTERVIEWREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYASSETFILTERVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyAssetFilterView请求参数结构体
                */
                class ModifyAssetFilterViewRequest : public AbstractModel
                {
                public:
                    ModifyAssetFilterViewRequest();
                    ~ModifyAssetFilterViewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取视图ID
                     * @return ViewID 视图ID
                     * 
                     */
                    uint64_t GetViewID() const;

                    /**
                     * 设置视图ID
                     * @param _viewID 视图ID
                     * 
                     */
                    void SetViewID(const uint64_t& _viewID);

                    /**
                     * 判断参数 ViewID 是否已赋值
                     * @return ViewID 是否已赋值
                     * 
                     */
                    bool ViewIDHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取资产搜索过滤项
                     * @return Filters 资产搜索过滤项
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置资产搜索过滤项
                     * @param _filters 资产搜索过滤项
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 视图ID
                     */
                    uint64_t m_viewID;
                    bool m_viewIDHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 资产搜索过滤项
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYASSETFILTERVIEWREQUEST_H_
