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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_QUERYUSERAUTHORITYRESPONSE_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_QUERYUSERAUTHORITYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dataagent/v20250513/model/ModelUserAuthority.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * QueryUserAuthority返回参数结构体
                */
                class QueryUserAuthorityResponse : public AbstractModel
                {
                public:
                    QueryUserAuthorityResponse();
                    ~QueryUserAuthorityResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取对象权限信息
                     * @return ModelUserAuthority 对象权限信息
                     * 
                     */
                    ModelUserAuthority GetModelUserAuthority() const;

                    /**
                     * 判断参数 ModelUserAuthority 是否已赋值
                     * @return ModelUserAuthority 是否已赋值
                     * 
                     */
                    bool ModelUserAuthorityHasBeenSet() const;

                private:

                    /**
                     * 对象权限信息
                     */
                    ModelUserAuthority m_modelUserAuthority;
                    bool m_modelUserAuthorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_QUERYUSERAUTHORITYRESPONSE_H_
