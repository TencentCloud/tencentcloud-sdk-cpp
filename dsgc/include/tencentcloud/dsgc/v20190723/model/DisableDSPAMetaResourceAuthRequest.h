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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DISABLEDSPAMETARESOURCEAUTHREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DISABLEDSPAMETARESOURCEAUTHREQUEST_H_

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
                * DisableDSPAMetaResourceAuth请求参数结构体
                */
                class DisableDSPAMetaResourceAuthRequest : public AbstractModel
                {
                public:
                    DisableDSPAMetaResourceAuthRequest();
                    ~DisableDSPAMetaResourceAuthRequest() = default;
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
                     * 获取资源类型。
                     * @return MetaType 资源类型。
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置资源类型。
                     * @param _metaType 资源类型。
                     * 
                     */
                    void SetMetaType(const std::string& _metaType);

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     * 
                     */
                    bool MetaTypeHasBeenSet() const;

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
                     * 获取用户云资源ID列表。
                     * @return ResourceIDs 用户云资源ID列表。
                     * 
                     */
                    std::vector<std::string> GetResourceIDs() const;

                    /**
                     * 设置用户云资源ID列表。
                     * @param _resourceIDs 用户云资源ID列表。
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
                     * 资源类型。
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                    /**
                     * 资源所处地域。
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 用户云资源ID列表。
                     */
                    std::vector<std::string> m_resourceIDs;
                    bool m_resourceIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DISABLEDSPAMETARESOURCEAUTHREQUEST_H_
