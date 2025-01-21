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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_STATUSCODECACHEPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_STATUSCODECACHEPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/StatusCodeCacheParam.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 状态码缓存 TTL 配置参数。
                */
                class StatusCodeCacheParameters : public AbstractModel
                {
                public:
                    StatusCodeCacheParameters();
                    ~StatusCodeCacheParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取状态码缓存 TTL 。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusCodeCacheParams 状态码缓存 TTL 。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StatusCodeCacheParam> GetStatusCodeCacheParams() const;

                    /**
                     * 设置状态码缓存 TTL 。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusCodeCacheParams 状态码缓存 TTL 。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusCodeCacheParams(const std::vector<StatusCodeCacheParam>& _statusCodeCacheParams);

                    /**
                     * 判断参数 StatusCodeCacheParams 是否已赋值
                     * @return StatusCodeCacheParams 是否已赋值
                     * 
                     */
                    bool StatusCodeCacheParamsHasBeenSet() const;

                private:

                    /**
                     * 状态码缓存 TTL 。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StatusCodeCacheParam> m_statusCodeCacheParams;
                    bool m_statusCodeCacheParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_STATUSCODECACHEPARAMETERS_H_
