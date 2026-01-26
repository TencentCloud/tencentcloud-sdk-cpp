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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_GETRESOURCEPRIVILEGEDETAILRSP_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_GETRESOURCEPRIVILEGEDETAILRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ResourcePrivilegeDetail.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * GetResourcePrivilegeDetailRsp
                */
                class GetResourcePrivilegeDetailRsp : public AbstractModel
                {
                public:
                    GetResourcePrivilegeDetailRsp();
                    ~GetResourcePrivilegeDetailRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取权限详情列表
                     * @return Details 权限详情列表
                     * 
                     */
                    std::vector<ResourcePrivilegeDetail> GetDetails() const;

                    /**
                     * 设置权限详情列表
                     * @param _details 权限详情列表
                     * 
                     */
                    void SetDetails(const std::vector<ResourcePrivilegeDetail>& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                    /**
                     * 获取总计
                     * @return TotalCount 总计
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置总计
                     * @param _totalCount 总计
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 权限详情列表
                     */
                    std::vector<ResourcePrivilegeDetail> m_details;
                    bool m_detailsHasBeenSet;

                    /**
                     * 总计
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_GETRESOURCEPRIVILEGEDETAILRSP_H_
