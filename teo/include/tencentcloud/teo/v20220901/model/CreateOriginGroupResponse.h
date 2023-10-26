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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEORIGINGROUPRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEORIGINGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateOriginGroup返回参数结构体
                */
                class CreateOriginGroupResponse : public AbstractModel
                {
                public:
                    CreateOriginGroupResponse();
                    ~CreateOriginGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取源站组ID。
                     * @return OriginGroupId 源站组ID。
                     * 
                     */
                    std::string GetOriginGroupId() const;

                    /**
                     * 判断参数 OriginGroupId 是否已赋值
                     * @return OriginGroupId 是否已赋值
                     * 
                     */
                    bool OriginGroupIdHasBeenSet() const;

                private:

                    /**
                     * 源站组ID。
                     */
                    std::string m_originGroupId;
                    bool m_originGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEORIGINGROUPRESPONSE_H_
