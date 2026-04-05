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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_DELETEGLOBALACCELERATORREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_DELETEGLOBALACCELERATORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * DeleteGlobalAccelerator请求参数结构体
                */
                class DeleteGlobalAcceleratorRequest : public AbstractModel
                {
                public:
                    DeleteGlobalAcceleratorRequest();
                    ~DeleteGlobalAcceleratorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取全球加速实例ID。
                     * @return GlobalAcceleratorId 全球加速实例ID。
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置全球加速实例ID。
                     * @param _globalAcceleratorId 全球加速实例ID。
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                private:

                    /**
                     * 全球加速实例ID。
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_DELETEGLOBALACCELERATORREQUEST_H_
