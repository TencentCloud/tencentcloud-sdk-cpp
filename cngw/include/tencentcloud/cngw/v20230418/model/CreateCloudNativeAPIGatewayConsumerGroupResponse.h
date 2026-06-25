/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CREATECLOUDNATIVEAPIGATEWAYCONSUMERGROUPRESPONSE_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CREATECLOUDNATIVEAPIGATEWAYCONSUMERGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/CNAPIGwCreateCommonResult.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * CreateCloudNativeAPIGatewayConsumerGroup返回参数结构体
                */
                class CreateCloudNativeAPIGatewayConsumerGroupResponse : public AbstractModel
                {
                public:
                    CreateCloudNativeAPIGatewayConsumerGroupResponse();
                    ~CreateCloudNativeAPIGatewayConsumerGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>创建结果。包含成功标识与新建资源 ID。</p>
                     * @return Result <p>创建结果。包含成功标识与新建资源 ID。</p>
                     * 
                     */
                    CNAPIGwCreateCommonResult GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * <p>创建结果。包含成功标识与新建资源 ID。</p>
                     */
                    CNAPIGwCreateCommonResult m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CREATECLOUDNATIVEAPIGATEWAYCONSUMERGROUPRESPONSE_H_
