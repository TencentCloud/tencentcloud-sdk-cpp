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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDOCKERCONTAINERDETAILRESPONSE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDOCKERCONTAINERDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeDockerContainerDetail返回参数结构体
                */
                class DescribeDockerContainerDetailResponse : public AbstractModel
                {
                public:
                    DescribeDockerContainerDetailResponse();
                    ~DescribeDockerContainerDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Docker容器详情，json字符串base64编码。
                     * @return ContainerDetail Docker容器详情，json字符串base64编码。
                     * 
                     */
                    std::string GetContainerDetail() const;

                    /**
                     * 判断参数 ContainerDetail 是否已赋值
                     * @return ContainerDetail 是否已赋值
                     * 
                     */
                    bool ContainerDetailHasBeenSet() const;

                private:

                    /**
                     * Docker容器详情，json字符串base64编码。
                     */
                    std::string m_containerDetail;
                    bool m_containerDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDOCKERCONTAINERDETAILRESPONSE_H_
