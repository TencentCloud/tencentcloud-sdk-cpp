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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETEEKSCONTAINERINSTANCESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETEEKSCONTAINERINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DeleteEKSContainerInstances请求参数结构体
                */
                class DeleteEKSContainerInstancesRequest : public AbstractModel
                {
                public:
                    DeleteEKSContainerInstancesRequest();
                    ~DeleteEKSContainerInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要删除的EksCi的Id。 最大数量不超过20
                     * @return EksCiIds 需要删除的EksCi的Id。 最大数量不超过20
                     * 
                     */
                    std::vector<std::string> GetEksCiIds() const;

                    /**
                     * 设置需要删除的EksCi的Id。 最大数量不超过20
                     * @param _eksCiIds 需要删除的EksCi的Id。 最大数量不超过20
                     * 
                     */
                    void SetEksCiIds(const std::vector<std::string>& _eksCiIds);

                    /**
                     * 判断参数 EksCiIds 是否已赋值
                     * @return EksCiIds 是否已赋值
                     * 
                     */
                    bool EksCiIdsHasBeenSet() const;

                    /**
                     * 获取是否释放为EksCi自动创建的Eip
                     * @return ReleaseAutoCreatedEip 是否释放为EksCi自动创建的Eip
                     * 
                     */
                    bool GetReleaseAutoCreatedEip() const;

                    /**
                     * 设置是否释放为EksCi自动创建的Eip
                     * @param _releaseAutoCreatedEip 是否释放为EksCi自动创建的Eip
                     * 
                     */
                    void SetReleaseAutoCreatedEip(const bool& _releaseAutoCreatedEip);

                    /**
                     * 判断参数 ReleaseAutoCreatedEip 是否已赋值
                     * @return ReleaseAutoCreatedEip 是否已赋值
                     * 
                     */
                    bool ReleaseAutoCreatedEipHasBeenSet() const;

                private:

                    /**
                     * 需要删除的EksCi的Id。 最大数量不超过20
                     */
                    std::vector<std::string> m_eksCiIds;
                    bool m_eksCiIdsHasBeenSet;

                    /**
                     * 是否释放为EksCi自动创建的Eip
                     */
                    bool m_releaseAutoCreatedEip;
                    bool m_releaseAutoCreatedEipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETEEKSCONTAINERINSTANCESREQUEST_H_
