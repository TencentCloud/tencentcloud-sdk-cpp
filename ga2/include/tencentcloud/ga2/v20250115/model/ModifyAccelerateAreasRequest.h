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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYACCELERATEAREASREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYACCELERATEAREASREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ga2/v20250115/model/AcceleratorAreas.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * ModifyAccelerateAreas请求参数结构体
                */
                class ModifyAccelerateAreasRequest : public AbstractModel
                {
                public:
                    ModifyAccelerateAreasRequest();
                    ~ModifyAccelerateAreasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>全球加速实例ID。</p>
                     * @return GlobalAcceleratorId <p>全球加速实例ID。</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置<p>全球加速实例ID。</p>
                     * @param _globalAcceleratorId <p>全球加速实例ID。</p>
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取<p>加速地域信息。</p><p>入参限制：数组长度不能超过10。</p>
                     * @return AcceleratorAreas <p>加速地域信息。</p><p>入参限制：数组长度不能超过10。</p>
                     * 
                     */
                    std::vector<AcceleratorAreas> GetAcceleratorAreas() const;

                    /**
                     * 设置<p>加速地域信息。</p><p>入参限制：数组长度不能超过10。</p>
                     * @param _acceleratorAreas <p>加速地域信息。</p><p>入参限制：数组长度不能超过10。</p>
                     * 
                     */
                    void SetAcceleratorAreas(const std::vector<AcceleratorAreas>& _acceleratorAreas);

                    /**
                     * 判断参数 AcceleratorAreas 是否已赋值
                     * @return AcceleratorAreas 是否已赋值
                     * 
                     */
                    bool AcceleratorAreasHasBeenSet() const;

                private:

                    /**
                     * <p>全球加速实例ID。</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * <p>加速地域信息。</p><p>入参限制：数组长度不能超过10。</p>
                     */
                    std::vector<AcceleratorAreas> m_acceleratorAreas;
                    bool m_acceleratorAreasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYACCELERATEAREASREQUEST_H_
