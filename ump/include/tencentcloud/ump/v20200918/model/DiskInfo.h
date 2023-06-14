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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_DISKINFO_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_DISKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * 硬盘监控信息
                */
                class DiskInfo : public AbstractModel
                {
                public:
                    DiskInfo();
                    ~DiskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取硬盘名字
                     * @return DiskName 硬盘名字
                     * 
                     */
                    std::string GetDiskName() const;

                    /**
                     * 设置硬盘名字
                     * @param _diskName 硬盘名字
                     * 
                     */
                    void SetDiskName(const std::string& _diskName);

                    /**
                     * 判断参数 DiskName 是否已赋值
                     * @return DiskName 是否已赋值
                     * 
                     */
                    bool DiskNameHasBeenSet() const;

                    /**
                     * 获取硬盘使用率
                     * @return Usage 硬盘使用率
                     * 
                     */
                    double GetUsage() const;

                    /**
                     * 设置硬盘使用率
                     * @param _usage 硬盘使用率
                     * 
                     */
                    void SetUsage(const double& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                private:

                    /**
                     * 硬盘名字
                     */
                    std::string m_diskName;
                    bool m_diskNameHasBeenSet;

                    /**
                     * 硬盘使用率
                     */
                    double m_usage;
                    bool m_usageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_DISKINFO_H_
