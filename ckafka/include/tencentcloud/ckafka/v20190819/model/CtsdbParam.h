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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CTSDBPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CTSDBPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Ctsdb类型入参
                */
                class CtsdbParam : public AbstractModel
                {
                public:
                    CtsdbParam();
                    ~CtsdbParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取连接管理实例资源
                     * @return Resource 连接管理实例资源
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置连接管理实例资源
                     * @param _resource 连接管理实例资源
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取Ctsdb的metric
                     * @return CtsdbMetric Ctsdb的metric
                     * 
                     */
                    std::string GetCtsdbMetric() const;

                    /**
                     * 设置Ctsdb的metric
                     * @param _ctsdbMetric Ctsdb的metric
                     * 
                     */
                    void SetCtsdbMetric(const std::string& _ctsdbMetric);

                    /**
                     * 判断参数 CtsdbMetric 是否已赋值
                     * @return CtsdbMetric 是否已赋值
                     * 
                     */
                    bool CtsdbMetricHasBeenSet() const;

                private:

                    /**
                     * 连接管理实例资源
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Ctsdb的metric
                     */
                    std::string m_ctsdbMetric;
                    bool m_ctsdbMetricHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CTSDBPARAM_H_
