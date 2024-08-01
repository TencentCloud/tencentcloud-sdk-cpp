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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_RESOURCEBUNDLE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_RESOURCEBUNDLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * redis独享集群资源包
                */
                class ResourceBundle : public AbstractModel
                {
                public:
                    ResourceBundle();
                    ~ResourceBundle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源包名称
                     * @return ResourceBundleName 资源包名称
                     * 
                     */
                    std::string GetResourceBundleName() const;

                    /**
                     * 设置资源包名称
                     * @param _resourceBundleName 资源包名称
                     * 
                     */
                    void SetResourceBundleName(const std::string& _resourceBundleName);

                    /**
                     * 判断参数 ResourceBundleName 是否已赋值
                     * @return ResourceBundleName 是否已赋值
                     * 
                     */
                    bool ResourceBundleNameHasBeenSet() const;

                    /**
                     * 获取可售卖内存，单位：GB
                     * @return AvailableMemory 可售卖内存，单位：GB
                     * 
                     */
                    int64_t GetAvailableMemory() const;

                    /**
                     * 设置可售卖内存，单位：GB
                     * @param _availableMemory 可售卖内存，单位：GB
                     * 
                     */
                    void SetAvailableMemory(const int64_t& _availableMemory);

                    /**
                     * 判断参数 AvailableMemory 是否已赋值
                     * @return AvailableMemory 是否已赋值
                     * 
                     */
                    bool AvailableMemoryHasBeenSet() const;

                    /**
                     * 获取资源包个数
                     * @return Count 资源包个数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置资源包个数
                     * @param _count 资源包个数
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 资源包名称
                     */
                    std::string m_resourceBundleName;
                    bool m_resourceBundleNameHasBeenSet;

                    /**
                     * 可售卖内存，单位：GB
                     */
                    int64_t m_availableMemory;
                    bool m_availableMemoryHasBeenSet;

                    /**
                     * 资源包个数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_RESOURCEBUNDLE_H_
