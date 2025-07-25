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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DELETEUPSTREAMRESPONSE_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DELETEUPSTREAMRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DeleteUpstream返回参数结构体
                */
                class DeleteUpstreamResponse : public AbstractModel
                {
                public:
                    DeleteUpstreamResponse();
                    ~DeleteUpstreamResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取成功删除的后端通道ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamId 成功删除的后端通道ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpstreamId() const;

                    /**
                     * 判断参数 UpstreamId 是否已赋值
                     * @return UpstreamId 是否已赋值
                     * 
                     */
                    bool UpstreamIdHasBeenSet() const;

                private:

                    /**
                     * 成功删除的后端通道ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_upstreamId;
                    bool m_upstreamIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DELETEUPSTREAMRESPONSE_H_
