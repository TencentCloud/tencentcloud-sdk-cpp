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

#ifndef TENCENTCLOUD_EIS_V20210601_MODEL_GETRUNTIMEMCREQUEST_H_
#define TENCENTCLOUD_EIS_V20210601_MODEL_GETRUNTIMEMCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eis
    {
        namespace V20210601
        {
            namespace Model
            {
                /**
                * GetRuntimeMC请求参数结构体
                */
                class GetRuntimeMCRequest : public AbstractModel
                {
                public:
                    GetRuntimeMCRequest();
                    ~GetRuntimeMCRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境id
                     * @return RuntimeId 环境id
                     * 
                     */
                    int64_t GetRuntimeId() const;

                    /**
                     * 设置环境id
                     * @param _runtimeId 环境id
                     * 
                     */
                    void SetRuntimeId(const int64_t& _runtimeId);

                    /**
                     * 判断参数 RuntimeId 是否已赋值
                     * @return RuntimeId 是否已赋值
                     * 
                     */
                    bool RuntimeIdHasBeenSet() const;

                    /**
                     * 获取环境地域
                     * @return Zone 环境地域
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置环境地域
                     * @param _zone 环境地域
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取环境运行类型：0:运行时类型、1:api类型
                     * @return RuntimeClass 环境运行类型：0:运行时类型、1:api类型
                     * 
                     */
                    int64_t GetRuntimeClass() const;

                    /**
                     * 设置环境运行类型：0:运行时类型、1:api类型
                     * @param _runtimeClass 环境运行类型：0:运行时类型、1:api类型
                     * 
                     */
                    void SetRuntimeClass(const int64_t& _runtimeClass);

                    /**
                     * 判断参数 RuntimeClass 是否已赋值
                     * @return RuntimeClass 是否已赋值
                     * 
                     */
                    bool RuntimeClassHasBeenSet() const;

                private:

                    /**
                     * 环境id
                     */
                    int64_t m_runtimeId;
                    bool m_runtimeIdHasBeenSet;

                    /**
                     * 环境地域
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 环境运行类型：0:运行时类型、1:api类型
                     */
                    int64_t m_runtimeClass;
                    bool m_runtimeClassHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIS_V20210601_MODEL_GETRUNTIMEMCREQUEST_H_
