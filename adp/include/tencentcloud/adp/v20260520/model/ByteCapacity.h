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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_BYTECAPACITY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_BYTECAPACITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 知识库容量信息
                */
                class ByteCapacity : public AbstractModel
                {
                public:
                    ByteCapacity();
                    ~ByteCapacity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>最大容量</p>
                     * @return MaxCapacity <p>最大容量</p>
                     * 
                     */
                    std::string GetMaxCapacity() const;

                    /**
                     * 设置<p>最大容量</p>
                     * @param _maxCapacity <p>最大容量</p>
                     * 
                     */
                    void SetMaxCapacity(const std::string& _maxCapacity);

                    /**
                     * 判断参数 MaxCapacity 是否已赋值
                     * @return MaxCapacity 是否已赋值
                     * 
                     */
                    bool MaxCapacityHasBeenSet() const;

                    /**
                     * 获取<p>超量失效容量</p>
                     * @return ExceededInvalidCapacity <p>超量失效容量</p>
                     * 
                     */
                    std::string GetExceededInvalidCapacity() const;

                    /**
                     * 设置<p>超量失效容量</p>
                     * @param _exceededInvalidCapacity <p>超量失效容量</p>
                     * 
                     */
                    void SetExceededInvalidCapacity(const std::string& _exceededInvalidCapacity);

                    /**
                     * 判断参数 ExceededInvalidCapacity 是否已赋值
                     * @return ExceededInvalidCapacity 是否已赋值
                     * 
                     */
                    bool ExceededInvalidCapacityHasBeenSet() const;

                    /**
                     * 获取<p>已使用容量</p>
                     * @return UsedCapacity <p>已使用容量</p>
                     * 
                     */
                    std::string GetUsedCapacity() const;

                    /**
                     * 设置<p>已使用容量</p>
                     * @param _usedCapacity <p>已使用容量</p>
                     * 
                     */
                    void SetUsedCapacity(const std::string& _usedCapacity);

                    /**
                     * 判断参数 UsedCapacity 是否已赋值
                     * @return UsedCapacity 是否已赋值
                     * 
                     */
                    bool UsedCapacityHasBeenSet() const;

                private:

                    /**
                     * <p>最大容量</p>
                     */
                    std::string m_maxCapacity;
                    bool m_maxCapacityHasBeenSet;

                    /**
                     * <p>超量失效容量</p>
                     */
                    std::string m_exceededInvalidCapacity;
                    bool m_exceededInvalidCapacityHasBeenSet;

                    /**
                     * <p>已使用容量</p>
                     */
                    std::string m_usedCapacity;
                    bool m_usedCapacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_BYTECAPACITY_H_
