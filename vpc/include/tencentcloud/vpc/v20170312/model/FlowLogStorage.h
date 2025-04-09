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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_FLOWLOGSTORAGE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_FLOWLOGSTORAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 流日志存储信息
                */
                class FlowLogStorage : public AbstractModel
                {
                public:
                    FlowLogStorage();
                    ~FlowLogStorage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储实例Id，当流日志存储类型为ckafka时，必填。
                     * @return StorageId 存储实例Id，当流日志存储类型为ckafka时，必填。
                     * 
                     */
                    std::string GetStorageId() const;

                    /**
                     * 设置存储实例Id，当流日志存储类型为ckafka时，必填。
                     * @param _storageId 存储实例Id，当流日志存储类型为ckafka时，必填。
                     * 
                     */
                    void SetStorageId(const std::string& _storageId);

                    /**
                     * 判断参数 StorageId 是否已赋值
                     * @return StorageId 是否已赋值
                     * 
                     */
                    bool StorageIdHasBeenSet() const;

                    /**
                     * 获取主题Id，当流日志存储类型为ckafka时，必填。
                     * @return StorageTopic 主题Id，当流日志存储类型为ckafka时，必填。
                     * 
                     */
                    std::string GetStorageTopic() const;

                    /**
                     * 设置主题Id，当流日志存储类型为ckafka时，必填。
                     * @param _storageTopic 主题Id，当流日志存储类型为ckafka时，必填。
                     * 
                     */
                    void SetStorageTopic(const std::string& _storageTopic);

                    /**
                     * 判断参数 StorageTopic 是否已赋值
                     * @return StorageTopic 是否已赋值
                     * 
                     */
                    bool StorageTopicHasBeenSet() const;

                private:

                    /**
                     * 存储实例Id，当流日志存储类型为ckafka时，必填。
                     */
                    std::string m_storageId;
                    bool m_storageIdHasBeenSet;

                    /**
                     * 主题Id，当流日志存储类型为ckafka时，必填。
                     */
                    std::string m_storageTopic;
                    bool m_storageTopicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_FLOWLOGSTORAGE_H_
