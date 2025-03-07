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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_EMPTYDIROPTION_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_EMPTYDIROPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 空目录选项
                */
                class EmptyDirOption : public AbstractModel
                {
                public:
                    EmptyDirOption();
                    ~EmptyDirOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取-
                     * @return EnableMemory -
                     * 
                     */
                    bool GetEnableMemory() const;

                    /**
                     * 设置-
                     * @param _enableMemory -
                     * 
                     */
                    void SetEnableMemory(const bool& _enableMemory);

                    /**
                     * 判断参数 EnableMemory 是否已赋值
                     * @return EnableMemory 是否已赋值
                     * 
                     */
                    bool EnableMemoryHasBeenSet() const;

                    /**
                     * 获取-
                     * @return StorageCapacity -
                     * 
                     */
                    int64_t GetStorageCapacity() const;

                    /**
                     * 设置-
                     * @param _storageCapacity -
                     * 
                     */
                    void SetStorageCapacity(const int64_t& _storageCapacity);

                    /**
                     * 判断参数 StorageCapacity 是否已赋值
                     * @return StorageCapacity 是否已赋值
                     * 
                     */
                    bool StorageCapacityHasBeenSet() const;

                    /**
                     * 获取-
                     * @return StorageUnit -
                     * 
                     */
                    std::string GetStorageUnit() const;

                    /**
                     * 设置-
                     * @param _storageUnit -
                     * 
                     */
                    void SetStorageUnit(const std::string& _storageUnit);

                    /**
                     * 判断参数 StorageUnit 是否已赋值
                     * @return StorageUnit 是否已赋值
                     * 
                     */
                    bool StorageUnitHasBeenSet() const;

                    /**
                     * 获取-
                     * @return SizeLimit -
                     * 
                     */
                    std::string GetSizeLimit() const;

                    /**
                     * 设置-
                     * @param _sizeLimit -
                     * 
                     */
                    void SetSizeLimit(const std::string& _sizeLimit);

                    /**
                     * 判断参数 SizeLimit 是否已赋值
                     * @return SizeLimit 是否已赋值
                     * 
                     */
                    bool SizeLimitHasBeenSet() const;

                private:

                    /**
                     * -
                     */
                    bool m_enableMemory;
                    bool m_enableMemoryHasBeenSet;

                    /**
                     * -
                     */
                    int64_t m_storageCapacity;
                    bool m_storageCapacityHasBeenSet;

                    /**
                     * -
                     */
                    std::string m_storageUnit;
                    bool m_storageUnitHasBeenSet;

                    /**
                     * -
                     */
                    std::string m_sizeLimit;
                    bool m_sizeLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_EMPTYDIROPTION_H_
