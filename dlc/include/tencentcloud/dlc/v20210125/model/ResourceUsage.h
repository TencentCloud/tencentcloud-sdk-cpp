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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_RESOURCEUSAGE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_RESOURCEUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/ResourceSpec.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 资源用量信息，描述某种资源类型的用量范围
                */
                class ResourceUsage : public AbstractModel
                {
                public:
                    ResourceUsage();
                    ~ResourceUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源规格</p>
                     * @return ResourceSpec <p>资源规格</p>
                     * 
                     */
                    ResourceSpec GetResourceSpec() const;

                    /**
                     * 设置<p>资源规格</p>
                     * @param _resourceSpec <p>资源规格</p>
                     * 
                     */
                    void SetResourceSpec(const ResourceSpec& _resourceSpec);

                    /**
                     * 判断参数 ResourceSpec 是否已赋值
                     * @return ResourceSpec 是否已赋值
                     * 
                     */
                    bool ResourceSpecHasBeenSet() const;

                    /**
                     * 获取<p>最小用量</p>
                     * @return Min <p>最小用量</p>
                     * 
                     */
                    int64_t GetMin() const;

                    /**
                     * 设置<p>最小用量</p>
                     * @param _min <p>最小用量</p>
                     * 
                     */
                    void SetMin(const int64_t& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取<p>最大用量</p>
                     * @return Max <p>最大用量</p>
                     * 
                     */
                    int64_t GetMax() const;

                    /**
                     * 设置<p>最大用量</p>
                     * @param _max <p>最大用量</p>
                     * 
                     */
                    void SetMax(const int64_t& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                private:

                    /**
                     * <p>资源规格</p>
                     */
                    ResourceSpec m_resourceSpec;
                    bool m_resourceSpecHasBeenSet;

                    /**
                     * <p>最小用量</p>
                     */
                    int64_t m_min;
                    bool m_minHasBeenSet;

                    /**
                     * <p>最大用量</p>
                     */
                    int64_t m_max;
                    bool m_maxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_RESOURCEUSAGE_H_
