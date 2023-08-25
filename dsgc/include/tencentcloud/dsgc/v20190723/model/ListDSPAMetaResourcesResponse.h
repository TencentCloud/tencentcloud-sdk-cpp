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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_LISTDSPAMETARESOURCESRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_LISTDSPAMETARESOURCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/DspaUserResourceMeta.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * ListDSPAMetaResources返回参数结构体
                */
                class ListDSPAMetaResourcesResponse : public AbstractModel
                {
                public:
                    ListDSPAMetaResourcesResponse();
                    ~ListDSPAMetaResourcesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例ID。
                     * @return DspaId DSPA实例ID。
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取用户资源列表。
                     * @return Resources 用户资源列表。
                     * 
                     */
                    std::vector<DspaUserResourceMeta> GetResources() const;

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取资源总量。
                     * @return TotalCount 资源总量。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * DSPA实例ID。
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 用户资源列表。
                     */
                    std::vector<DspaUserResourceMeta> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * 资源总量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_LISTDSPAMETARESOURCESRESPONSE_H_
