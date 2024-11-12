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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSESTRATEGYMACHINEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSESTRATEGYMACHINEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 防勒索机器硬盘配置
                */
                class RansomDefenseStrategyMachineInfo : public AbstractModel
                {
                public:
                    RansomDefenseStrategyMachineInfo();
                    ~RansomDefenseStrategyMachineInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主机uuid
                     * @return Uuid 主机uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机uuid
                     * @param _uuid 主机uuid
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取指定硬盘列表，为空时表示所有硬盘：disk_id1|disk_name1;disk_id2|disk_name2
                     * @return DiskInfo 指定硬盘列表，为空时表示所有硬盘：disk_id1|disk_name1;disk_id2|disk_name2
                     * 
                     */
                    std::string GetDiskInfo() const;

                    /**
                     * 设置指定硬盘列表，为空时表示所有硬盘：disk_id1|disk_name1;disk_id2|disk_name2
                     * @param _diskInfo 指定硬盘列表，为空时表示所有硬盘：disk_id1|disk_name1;disk_id2|disk_name2
                     * 
                     */
                    void SetDiskInfo(const std::string& _diskInfo);

                    /**
                     * 判断参数 DiskInfo 是否已赋值
                     * @return DiskInfo 是否已赋值
                     * 
                     */
                    bool DiskInfoHasBeenSet() const;

                private:

                    /**
                     * 主机uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 指定硬盘列表，为空时表示所有硬盘：disk_id1|disk_name1;disk_id2|disk_name2
                     */
                    std::string m_diskInfo;
                    bool m_diskInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSESTRATEGYMACHINEINFO_H_
