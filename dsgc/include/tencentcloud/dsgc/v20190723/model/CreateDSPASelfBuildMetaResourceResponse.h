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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPASELFBUILDMETARESOURCERESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPASELFBUILDMETARESOURCERESPONSE_H_

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
                * CreateDSPASelfBuildMetaResource返回参数结构体
                */
                class CreateDSPASelfBuildMetaResourceResponse : public AbstractModel
                {
                public:
                    CreateDSPASelfBuildMetaResourceResponse();
                    ~CreateDSPASelfBuildMetaResourceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取连通性测试情况，success表示可正常访问，failed表示无法访问。
                     * @return ConnectivityStatus 连通性测试情况，success表示可正常访问，failed表示无法访问。
                     * 
                     */
                    std::string GetConnectivityStatus() const;

                    /**
                     * 判断参数 ConnectivityStatus 是否已赋值
                     * @return ConnectivityStatus 是否已赋值
                     * 
                     */
                    bool ConnectivityStatusHasBeenSet() const;

                    /**
                     * 获取连通性描述字段，如果连通性测试失败，这里会返回无法访问的相关信息说明。
                     * @return ConnectivityDescription 连通性描述字段，如果连通性测试失败，这里会返回无法访问的相关信息说明。
                     * 
                     */
                    std::string GetConnectivityDescription() const;

                    /**
                     * 判断参数 ConnectivityDescription 是否已赋值
                     * @return ConnectivityDescription 是否已赋值
                     * 
                     */
                    bool ConnectivityDescriptionHasBeenSet() const;

                private:

                    /**
                     * 连通性测试情况，success表示可正常访问，failed表示无法访问。
                     */
                    std::string m_connectivityStatus;
                    bool m_connectivityStatusHasBeenSet;

                    /**
                     * 连通性描述字段，如果连通性测试失败，这里会返回无法访问的相关信息说明。
                     */
                    std::string m_connectivityDescription;
                    bool m_connectivityDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPASELFBUILDMETARESOURCERESPONSE_H_
