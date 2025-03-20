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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_CDCSIZE_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_CDCSIZE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 显示独享集群的大小
                */
                class CdcSize : public AbstractModel
                {
                public:
                    CdcSize();
                    ~CdcSize() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取独享集群的总容量大小，单位GiB
                     * @return DiskTotal 独享集群的总容量大小，单位GiB
                     * 
                     */
                    uint64_t GetDiskTotal() const;

                    /**
                     * 设置独享集群的总容量大小，单位GiB
                     * @param _diskTotal 独享集群的总容量大小，单位GiB
                     * 
                     */
                    void SetDiskTotal(const uint64_t& _diskTotal);

                    /**
                     * 判断参数 DiskTotal 是否已赋值
                     * @return DiskTotal 是否已赋值
                     * 
                     */
                    bool DiskTotalHasBeenSet() const;

                    /**
                     * 获取独享集群的可用容量大小，单位GiB
                     * @return DiskAvailable 独享集群的可用容量大小，单位GiB
                     * 
                     */
                    uint64_t GetDiskAvailable() const;

                    /**
                     * 设置独享集群的可用容量大小，单位GiB
                     * @param _diskAvailable 独享集群的可用容量大小，单位GiB
                     * 
                     */
                    void SetDiskAvailable(const uint64_t& _diskAvailable);

                    /**
                     * 判断参数 DiskAvailable 是否已赋值
                     * @return DiskAvailable 是否已赋值
                     * 
                     */
                    bool DiskAvailableHasBeenSet() const;

                private:

                    /**
                     * 独享集群的总容量大小，单位GiB
                     */
                    uint64_t m_diskTotal;
                    bool m_diskTotalHasBeenSet;

                    /**
                     * 独享集群的可用容量大小，单位GiB
                     */
                    uint64_t m_diskAvailable;
                    bool m_diskAvailableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_CDCSIZE_H_
