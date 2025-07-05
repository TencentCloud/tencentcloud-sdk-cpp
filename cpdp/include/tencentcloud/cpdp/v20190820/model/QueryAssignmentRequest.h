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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYASSIGNMENTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYASSIGNMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryAssignment请求参数结构体
                */
                class QueryAssignmentRequest : public AbstractModel
                {
                public:
                    QueryAssignmentRequest();
                    ~QueryAssignmentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主播ID
                     * @return AnchorId 主播ID
                     * 
                     */
                    std::string GetAnchorId() const;

                    /**
                     * 设置主播ID
                     * @param _anchorId 主播ID
                     * 
                     */
                    void SetAnchorId(const std::string& _anchorId);

                    /**
                     * 判断参数 AnchorId 是否已赋值
                     * @return AnchorId 是否已赋值
                     * 
                     */
                    bool AnchorIdHasBeenSet() const;

                private:

                    /**
                     * 主播ID
                     */
                    std::string m_anchorId;
                    bool m_anchorIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYASSIGNMENTREQUEST_H_
