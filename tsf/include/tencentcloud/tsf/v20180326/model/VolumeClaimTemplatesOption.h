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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_VOLUMECLAIMTEMPLATESOPTION_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_VOLUMECLAIMTEMPLATESOPTION_H_

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
                * VolumeClaim模板项
                */
                class VolumeClaimTemplatesOption : public AbstractModel
                {
                public:
                    VolumeClaimTemplatesOption();
                    ~VolumeClaimTemplatesOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取StorageClass名称
                     * @return StorageClass StorageClass名称
                     * 
                     */
                    std::string GetStorageClass() const;

                    /**
                     * 设置StorageClass名称
                     * @param _storageClass StorageClass名称
                     * 
                     */
                    void SetStorageClass(const std::string& _storageClass);

                    /**
                     * 判断参数 StorageClass 是否已赋值
                     * @return StorageClass 是否已赋值
                     * 
                     */
                    bool StorageClassHasBeenSet() const;

                    /**
                     * 获取访问模式
                     * @return AccessModes 访问模式
                     * 
                     */
                    std::vector<std::string> GetAccessModes() const;

                    /**
                     * 设置访问模式
                     * @param _accessModes 访问模式
                     * 
                     */
                    void SetAccessModes(const std::vector<std::string>& _accessModes);

                    /**
                     * 判断参数 AccessModes 是否已赋值
                     * @return AccessModes 是否已赋值
                     * 
                     */
                    bool AccessModesHasBeenSet() const;

                    /**
                     * 获取卷空间的预占声明
                     * @return StorageRequest 卷空间的预占声明
                     * 
                     */
                    int64_t GetStorageRequest() const;

                    /**
                     * 设置卷空间的预占声明
                     * @param _storageRequest 卷空间的预占声明
                     * 
                     */
                    void SetStorageRequest(const int64_t& _storageRequest);

                    /**
                     * 判断参数 StorageRequest 是否已赋值
                     * @return StorageRequest 是否已赋值
                     * 
                     */
                    bool StorageRequestHasBeenSet() const;

                private:

                    /**
                     * StorageClass名称
                     */
                    std::string m_storageClass;
                    bool m_storageClassHasBeenSet;

                    /**
                     * 访问模式
                     */
                    std::vector<std::string> m_accessModes;
                    bool m_accessModesHasBeenSet;

                    /**
                     * 卷空间的预占声明
                     */
                    int64_t m_storageRequest;
                    bool m_storageRequestHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_VOLUMECLAIMTEMPLATESOPTION_H_
