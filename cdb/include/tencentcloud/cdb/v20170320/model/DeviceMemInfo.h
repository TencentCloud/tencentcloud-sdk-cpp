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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DEVICEMEMINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DEVICEMEMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 实例所在物理机内存监控信息
                */
                class DeviceMemInfo : public AbstractModel
                {
                public:
                    DeviceMemInfo();
                    ~DeviceMemInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总内存大小。free命令中Mem:一行total的值,单位：KB
                     * @return Total 总内存大小。free命令中Mem:一行total的值,单位：KB
                     * 
                     */
                    std::vector<int64_t> GetTotal() const;

                    /**
                     * 设置总内存大小。free命令中Mem:一行total的值,单位：KB
                     * @param _total 总内存大小。free命令中Mem:一行total的值,单位：KB
                     * 
                     */
                    void SetTotal(const std::vector<int64_t>& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取已使用内存。free命令中Mem:一行used的值,单位：KB
                     * @return Used 已使用内存。free命令中Mem:一行used的值,单位：KB
                     * 
                     */
                    std::vector<int64_t> GetUsed() const;

                    /**
                     * 设置已使用内存。free命令中Mem:一行used的值,单位：KB
                     * @param _used 已使用内存。free命令中Mem:一行used的值,单位：KB
                     * 
                     */
                    void SetUsed(const std::vector<int64_t>& _used);

                    /**
                     * 判断参数 Used 是否已赋值
                     * @return Used 是否已赋值
                     * 
                     */
                    bool UsedHasBeenSet() const;

                private:

                    /**
                     * 总内存大小。free命令中Mem:一行total的值,单位：KB
                     */
                    std::vector<int64_t> m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 已使用内存。free命令中Mem:一行used的值,单位：KB
                     */
                    std::vector<int64_t> m_used;
                    bool m_usedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DEVICEMEMINFO_H_
