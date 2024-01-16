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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ADDSHAREUNITRESOURCESREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ADDSHAREUNITRESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/ProductResource.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * AddShareUnitResources请求参数结构体
                */
                class AddShareUnitResourcesRequest : public AbstractModel
                {
                public:
                    AddShareUnitResourcesRequest();
                    ~AddShareUnitResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取共享单元ID。
                     * @return UnitId 共享单元ID。
                     * 
                     */
                    std::string GetUnitId() const;

                    /**
                     * 设置共享单元ID。
                     * @param _unitId 共享单元ID。
                     * 
                     */
                    void SetUnitId(const std::string& _unitId);

                    /**
                     * 判断参数 UnitId 是否已赋值
                     * @return UnitId 是否已赋值
                     * 
                     */
                    bool UnitIdHasBeenSet() const;

                    /**
                     * 获取共享单元地域。
                     * @return Area 共享单元地域。
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置共享单元地域。
                     * @param _area 共享单元地域。
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取共享资源类型。支持共享的资源类型,请参见[资源共享概述](https://cloud.tencent.com/document/product/850/59489)
                     * @return Type 共享资源类型。支持共享的资源类型,请参见[资源共享概述](https://cloud.tencent.com/document/product/850/59489)
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置共享资源类型。支持共享的资源类型,请参见[资源共享概述](https://cloud.tencent.com/document/product/850/59489)
                     * @param _type 共享资源类型。支持共享的资源类型,请参见[资源共享概述](https://cloud.tencent.com/document/product/850/59489)
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取共享资源列表。最大10个。
                     * @return Resources 共享资源列表。最大10个。
                     * 
                     */
                    std::vector<ProductResource> GetResources() const;

                    /**
                     * 设置共享资源列表。最大10个。
                     * @param _resources 共享资源列表。最大10个。
                     * 
                     */
                    void SetResources(const std::vector<ProductResource>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                private:

                    /**
                     * 共享单元ID。
                     */
                    std::string m_unitId;
                    bool m_unitIdHasBeenSet;

                    /**
                     * 共享单元地域。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 共享资源类型。支持共享的资源类型,请参见[资源共享概述](https://cloud.tencent.com/document/product/850/59489)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 共享资源列表。最大10个。
                     */
                    std::vector<ProductResource> m_resources;
                    bool m_resourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ADDSHAREUNITRESOURCESREQUEST_H_
