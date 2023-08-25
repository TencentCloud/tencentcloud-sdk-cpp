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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DELETECOSMETARESOURCEREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DELETECOSMETARESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DeleteCosMetaResource请求参数结构体
                */
                class DeleteCosMetaResourceRequest : public AbstractModel
                {
                public:
                    DeleteCosMetaResourceRequest();
                    ~DeleteCosMetaResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id。
                     * @return DspaId 实例Id。
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置实例Id。
                     * @param _dspaId 实例Id。
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
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置资源所处地域。
                     * @param _resourceRegion 资源所处地域。
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取资源实例ID。
                     * @return ResourceIds 资源实例ID。
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置资源实例ID。
                     * @param _resourceIds 资源实例ID。
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                private:

                    /**
                     * 实例Id。
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 资源所处地域。
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 资源实例ID。
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DELETECOSMETARESOURCEREQUEST_H_
