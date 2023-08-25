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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DELETEDSPAMETARESOURCEREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DELETEDSPAMETARESOURCEREQUEST_H_

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
                * DeleteDSPAMetaResource请求参数结构体
                */
                class DeleteDSPAMetaResourceRequest : public AbstractModel
                {
                public:
                    DeleteDSPAMetaResourceRequest();
                    ~DeleteDSPAMetaResourceRequest() = default;
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
                     * 获取用户云资源ID。
                     * @return ResourceIDs 用户云资源ID。
                     * 
                     */
                    std::vector<std::string> GetResourceIDs() const;

                    /**
                     * 设置用户云资源ID。
                     * @param _resourceIDs 用户云资源ID。
                     * 
                     */
                    void SetResourceIDs(const std::vector<std::string>& _resourceIDs);

                    /**
                     * 判断参数 ResourceIDs 是否已赋值
                     * @return ResourceIDs 是否已赋值
                     * 
                     */
                    bool ResourceIDsHasBeenSet() const;

                private:

                    /**
                     * DSPA实例ID。
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 用户云资源ID。
                     */
                    std::vector<std::string> m_resourceIDs;
                    bool m_resourceIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DELETEDSPAMETARESOURCEREQUEST_H_
