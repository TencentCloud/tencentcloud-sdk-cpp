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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_UPDATESERVERLESSSPACEREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_UPDATESERVERLESSSPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/EsAcl.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * UpdateServerlessSpace请求参数结构体
                */
                class UpdateServerlessSpaceRequest : public AbstractModel
                {
                public:
                    UpdateServerlessSpaceRequest();
                    ~UpdateServerlessSpaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Serveless索引空间ID
                     * @return SpaceId Serveless索引空间ID
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置Serveless索引空间ID
                     * @param _spaceId Serveless索引空间ID
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取Serveless索引空间名
                     * @return SpaceName Serveless索引空间名
                     * 
                     */
                    std::string GetSpaceName() const;

                    /**
                     * 设置Serveless索引空间名
                     * @param _spaceName Serveless索引空间名
                     * 
                     */
                    void SetSpaceName(const std::string& _spaceName);

                    /**
                     * 判断参数 SpaceName 是否已赋值
                     * @return SpaceName 是否已赋值
                     * 
                     */
                    bool SpaceNameHasBeenSet() const;

                    /**
                     * 获取kibana内网开关
                     * @return KibanaPrivateAccess kibana内网开关
                     * 
                     */
                    std::string GetKibanaPrivateAccess() const;

                    /**
                     * 设置kibana内网开关
                     * @param _kibanaPrivateAccess kibana内网开关
                     * 
                     */
                    void SetKibanaPrivateAccess(const std::string& _kibanaPrivateAccess);

                    /**
                     * 判断参数 KibanaPrivateAccess 是否已赋值
                     * @return KibanaPrivateAccess 是否已赋值
                     * 
                     */
                    bool KibanaPrivateAccessHasBeenSet() const;

                    /**
                     * 获取kibana公网开关
                     * @return KibanaPublicAccess kibana公网开关
                     * 
                     */
                    std::string GetKibanaPublicAccess() const;

                    /**
                     * 设置kibana公网开关
                     * @param _kibanaPublicAccess kibana公网开关
                     * 
                     */
                    void SetKibanaPublicAccess(const std::string& _kibanaPublicAccess);

                    /**
                     * 判断参数 KibanaPublicAccess 是否已赋值
                     * @return KibanaPublicAccess 是否已赋值
                     * 
                     */
                    bool KibanaPublicAccessHasBeenSet() const;

                    /**
                     * 获取kibana公网白名单
                     * @return KibanaPublicAcl kibana公网白名单
                     * 
                     */
                    EsAcl GetKibanaPublicAcl() const;

                    /**
                     * 设置kibana公网白名单
                     * @param _kibanaPublicAcl kibana公网白名单
                     * 
                     */
                    void SetKibanaPublicAcl(const EsAcl& _kibanaPublicAcl);

                    /**
                     * 判断参数 KibanaPublicAcl 是否已赋值
                     * @return KibanaPublicAcl 是否已赋值
                     * 
                     */
                    bool KibanaPublicAclHasBeenSet() const;

                private:

                    /**
                     * Serveless索引空间ID
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * Serveless索引空间名
                     */
                    std::string m_spaceName;
                    bool m_spaceNameHasBeenSet;

                    /**
                     * kibana内网开关
                     */
                    std::string m_kibanaPrivateAccess;
                    bool m_kibanaPrivateAccessHasBeenSet;

                    /**
                     * kibana公网开关
                     */
                    std::string m_kibanaPublicAccess;
                    bool m_kibanaPublicAccessHasBeenSet;

                    /**
                     * kibana公网白名单
                     */
                    EsAcl m_kibanaPublicAcl;
                    bool m_kibanaPublicAclHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_UPDATESERVERLESSSPACEREQUEST_H_
