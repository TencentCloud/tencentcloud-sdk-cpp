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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_LOCALDISKINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_LOCALDISKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 节点本地盘信息
                */
                class LocalDiskInfo : public AbstractModel
                {
                public:
                    LocalDiskInfo();
                    ~LocalDiskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取本地盘类型<li>LOCAL_SATA：大数据型</li><li>NVME_SSD：高IO型</li>
                     * @return LocalDiskType 本地盘类型<li>LOCAL_SATA：大数据型</li><li>NVME_SSD：高IO型</li>
                     * 
                     */
                    std::string GetLocalDiskType() const;

                    /**
                     * 设置本地盘类型<li>LOCAL_SATA：大数据型</li><li>NVME_SSD：高IO型</li>
                     * @param _localDiskType 本地盘类型<li>LOCAL_SATA：大数据型</li><li>NVME_SSD：高IO型</li>
                     * 
                     */
                    void SetLocalDiskType(const std::string& _localDiskType);

                    /**
                     * 判断参数 LocalDiskType 是否已赋值
                     * @return LocalDiskType 是否已赋值
                     * 
                     */
                    bool LocalDiskTypeHasBeenSet() const;

                    /**
                     * 获取本地盘单盘大小
                     * @return LocalDiskSize 本地盘单盘大小
                     * 
                     */
                    uint64_t GetLocalDiskSize() const;

                    /**
                     * 设置本地盘单盘大小
                     * @param _localDiskSize 本地盘单盘大小
                     * 
                     */
                    void SetLocalDiskSize(const uint64_t& _localDiskSize);

                    /**
                     * 判断参数 LocalDiskSize 是否已赋值
                     * @return LocalDiskSize 是否已赋值
                     * 
                     */
                    bool LocalDiskSizeHasBeenSet() const;

                    /**
                     * 获取本地盘块数
                     * @return LocalDiskCount 本地盘块数
                     * 
                     */
                    uint64_t GetLocalDiskCount() const;

                    /**
                     * 设置本地盘块数
                     * @param _localDiskCount 本地盘块数
                     * 
                     */
                    void SetLocalDiskCount(const uint64_t& _localDiskCount);

                    /**
                     * 判断参数 LocalDiskCount 是否已赋值
                     * @return LocalDiskCount 是否已赋值
                     * 
                     */
                    bool LocalDiskCountHasBeenSet() const;

                private:

                    /**
                     * 本地盘类型<li>LOCAL_SATA：大数据型</li><li>NVME_SSD：高IO型</li>
                     */
                    std::string m_localDiskType;
                    bool m_localDiskTypeHasBeenSet;

                    /**
                     * 本地盘单盘大小
                     */
                    uint64_t m_localDiskSize;
                    bool m_localDiskSizeHasBeenSet;

                    /**
                     * 本地盘块数
                     */
                    uint64_t m_localDiskCount;
                    bool m_localDiskCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_LOCALDISKINFO_H_
