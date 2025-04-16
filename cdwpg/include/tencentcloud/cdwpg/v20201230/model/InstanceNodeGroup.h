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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCENODEGROUP_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCENODEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/DiskSpecPlus.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * 集群节点信息
                */
                class InstanceNodeGroup : public AbstractModel
                {
                public:
                    InstanceNodeGroup();
                    ~InstanceNodeGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机型
                     * @return SpecName 机型
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置机型
                     * @param _specName 机型
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取磁盘信息
                     * @return DataDisk 磁盘信息
                     * 
                     */
                    DiskSpecPlus GetDataDisk() const;

                    /**
                     * 设置磁盘信息
                     * @param _dataDisk 磁盘信息
                     * 
                     */
                    void SetDataDisk(const DiskSpecPlus& _dataDisk);

                    /**
                     * 判断参数 DataDisk 是否已赋值
                     * @return DataDisk 是否已赋值
                     * 
                     */
                    bool DataDiskHasBeenSet() const;

                    /**
                     * 获取机器个数
                     * @return CvmCount 机器个数
                     * 
                     */
                    int64_t GetCvmCount() const;

                    /**
                     * 设置机器个数
                     * @param _cvmCount 机器个数
                     * 
                     */
                    void SetCvmCount(const int64_t& _cvmCount);

                    /**
                     * 判断参数 CvmCount 是否已赋值
                     * @return CvmCount 是否已赋值
                     * 
                     */
                    bool CvmCountHasBeenSet() const;

                private:

                    /**
                     * 机型
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * 磁盘信息
                     */
                    DiskSpecPlus m_dataDisk;
                    bool m_dataDiskHasBeenSet;

                    /**
                     * 机器个数
                     */
                    int64_t m_cvmCount;
                    bool m_cvmCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCENODEGROUP_H_
