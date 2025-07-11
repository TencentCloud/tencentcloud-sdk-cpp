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

#ifndef TENCENTCLOUD_EIS_V20210601_MODEL_LISTRUNTIMESMCREQUEST_H_
#define TENCENTCLOUD_EIS_V20210601_MODEL_LISTRUNTIMESMCREQUEST_H_

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
                * ListRuntimesMC请求参数结构体
                */
                class ListRuntimesMCRequest : public AbstractModel
                {
                public:
                    ListRuntimesMCRequest();
                    ~ListRuntimesMCRequest() = default;
                    std::string ToJsonString() const;


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

                    /**
                     * 获取计划类型：0-pro 1-lite
                     * @return PlanType 计划类型：0-pro 1-lite
                     * 
                     */
                    int64_t GetPlanType() const;

                    /**
                     * 设置计划类型：0-pro 1-lite
                     * @param _planType 计划类型：0-pro 1-lite
                     * 
                     */
                    void SetPlanType(const int64_t& _planType);

                    /**
                     * 判断参数 PlanType 是否已赋值
                     * @return PlanType 是否已赋值
                     * 
                     */
                    bool PlanTypeHasBeenSet() const;

                private:

                    /**
                     * 环境运行类型：0:运行时类型、1:api类型
                     */
                    int64_t m_runtimeClass;
                    bool m_runtimeClassHasBeenSet;

                    /**
                     * 计划类型：0-pro 1-lite
                     */
                    int64_t m_planType;
                    bool m_planTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIS_V20210601_MODEL_LISTRUNTIMESMCREQUEST_H_
