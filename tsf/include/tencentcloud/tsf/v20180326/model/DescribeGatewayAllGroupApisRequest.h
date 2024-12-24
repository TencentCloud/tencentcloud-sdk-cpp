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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEGATEWAYALLGROUPAPISREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEGATEWAYALLGROUPAPISREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeGatewayAllGroupApis请求参数结构体
                */
                class DescribeGatewayAllGroupApisRequest : public AbstractModel
                {
                public:
                    DescribeGatewayAllGroupApisRequest();
                    ~DescribeGatewayAllGroupApisRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关部署组ID
                     * @return GatewayDeployGroupId 网关部署组ID
                     * 
                     */
                    std::string GetGatewayDeployGroupId() const;

                    /**
                     * 设置网关部署组ID
                     * @param _gatewayDeployGroupId 网关部署组ID
                     * 
                     */
                    void SetGatewayDeployGroupId(const std::string& _gatewayDeployGroupId);

                    /**
                     * 判断参数 GatewayDeployGroupId 是否已赋值
                     * @return GatewayDeployGroupId 是否已赋值
                     * 
                     */
                    bool GatewayDeployGroupIdHasBeenSet() const;

                    /**
                     * 获取搜索关键字，支持命名空间名称或服务名称
                     * @return SearchWord 搜索关键字，支持命名空间名称或服务名称
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置搜索关键字，支持命名空间名称或服务名称
                     * @param _searchWord 搜索关键字，支持命名空间名称或服务名称
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                private:

                    /**
                     * 网关部署组ID
                     */
                    std::string m_gatewayDeployGroupId;
                    bool m_gatewayDeployGroupIdHasBeenSet;

                    /**
                     * 搜索关键字，支持命名空间名称或服务名称
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEGATEWAYALLGROUPAPISREQUEST_H_
