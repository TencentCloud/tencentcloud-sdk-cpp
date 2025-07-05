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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_GETREQUESTTARGETNODETYPESRESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_GETREQUESTTARGETNODETYPESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetRequestTargetNodeTypes返回参数结构体
                */
                class GetRequestTargetNodeTypesResponse : public AbstractModel
                {
                public:
                    GetRequestTargetNodeTypesResponse();
                    ~GetRequestTargetNodeTypesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取接收请求的目标节点类型列表
                     * @return TargetNodeTypes 接收请求的目标节点类型列表
                     * 
                     */
                    std::vector<std::string> GetTargetNodeTypes() const;

                    /**
                     * 判断参数 TargetNodeTypes 是否已赋值
                     * @return TargetNodeTypes 是否已赋值
                     * 
                     */
                    bool TargetNodeTypesHasBeenSet() const;

                private:

                    /**
                     * 接收请求的目标节点类型列表
                     */
                    std::vector<std::string> m_targetNodeTypes;
                    bool m_targetNodeTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_GETREQUESTTARGETNODETYPESRESPONSE_H_
