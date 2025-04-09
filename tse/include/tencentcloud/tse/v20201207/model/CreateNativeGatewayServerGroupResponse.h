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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CREATENATIVEGATEWAYSERVERGROUPRESPONSE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CREATENATIVEGATEWAYSERVERGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayServerGroupResult.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * CreateNativeGatewayServerGroup返回参数结构体
                */
                class CreateNativeGatewayServerGroupResponse : public AbstractModel
                {
                public:
                    CreateNativeGatewayServerGroupResponse();
                    ~CreateNativeGatewayServerGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取网关分组创建信息
                     * @return Result 网关分组创建信息
                     * 
                     */
                    CreateCloudNativeAPIGatewayServerGroupResult GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 网关分组创建信息
                     */
                    CreateCloudNativeAPIGatewayServerGroupResult m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATENATIVEGATEWAYSERVERGROUPRESPONSE_H_
