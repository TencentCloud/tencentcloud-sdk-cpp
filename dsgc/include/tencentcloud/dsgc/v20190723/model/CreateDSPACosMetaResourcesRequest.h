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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPACOSMETARESOURCESREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPACOSMETARESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/CosBucketItem.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * CreateDSPACosMetaResources请求参数结构体
                */
                class CreateDSPACosMetaResourcesRequest : public AbstractModel
                {
                public:
                    CreateDSPACosMetaResourcesRequest();
                    ~CreateDSPACosMetaResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例ID。
                     * @return DspaId DSPA实例ID。
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例ID。
                     * @param _dspaId DSPA实例ID。
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取资源所处地域。
                     * @return ResourceRegion 资源所处地域。
                     * @deprecated
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置资源所处地域。
                     * @param _resourceRegion 资源所处地域。
                     * @deprecated
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * @deprecated
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取COS桶列表
                     * @return Buckets COS桶列表
                     * @deprecated
                     */
                    std::vector<std::string> GetBuckets() const;

                    /**
                     * 设置COS桶列表
                     * @param _buckets COS桶列表
                     * @deprecated
                     */
                    void SetBuckets(const std::vector<std::string>& _buckets);

                    /**
                     * 判断参数 Buckets 是否已赋值
                     * @return Buckets 是否已赋值
                     * @deprecated
                     */
                    bool BucketsHasBeenSet() const;

                    /**
                     * 获取必填，COS资源列表
                     * @return CosBucketItems 必填，COS资源列表
                     * 
                     */
                    std::vector<CosBucketItem> GetCosBucketItems() const;

                    /**
                     * 设置必填，COS资源列表
                     * @param _cosBucketItems 必填，COS资源列表
                     * 
                     */
                    void SetCosBucketItems(const std::vector<CosBucketItem>& _cosBucketItems);

                    /**
                     * 判断参数 CosBucketItems 是否已赋值
                     * @return CosBucketItems 是否已赋值
                     * 
                     */
                    bool CosBucketItemsHasBeenSet() const;

                private:

                    /**
                     * DSPA实例ID。
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 资源所处地域。
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * COS桶列表
                     */
                    std::vector<std::string> m_buckets;
                    bool m_bucketsHasBeenSet;

                    /**
                     * 必填，COS资源列表
                     */
                    std::vector<CosBucketItem> m_cosBucketItems;
                    bool m_cosBucketItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPACOSMETARESOURCESREQUEST_H_
