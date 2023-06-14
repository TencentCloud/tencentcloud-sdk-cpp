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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_INSTANCESPEC_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_INSTANCESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/SpecConfigInfo.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 按机型归类的实例可售卖规格信息
                */
                class InstanceSpec : public AbstractModel
                {
                public:
                    InstanceSpec();
                    ~InstanceSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备型号
                     * @return Machine 设备型号
                     * 
                     */
                    std::string GetMachine() const;

                    /**
                     * 设置设备型号
                     * @param _machine 设备型号
                     * 
                     */
                    void SetMachine(const std::string& _machine);

                    /**
                     * 判断参数 Machine 是否已赋值
                     * @return Machine 是否已赋值
                     * 
                     */
                    bool MachineHasBeenSet() const;

                    /**
                     * 获取该机型对应的可售卖规格列表
                     * @return SpecInfos 该机型对应的可售卖规格列表
                     * 
                     */
                    std::vector<SpecConfigInfo> GetSpecInfos() const;

                    /**
                     * 设置该机型对应的可售卖规格列表
                     * @param _specInfos 该机型对应的可售卖规格列表
                     * 
                     */
                    void SetSpecInfos(const std::vector<SpecConfigInfo>& _specInfos);

                    /**
                     * 判断参数 SpecInfos 是否已赋值
                     * @return SpecInfos 是否已赋值
                     * 
                     */
                    bool SpecInfosHasBeenSet() const;

                private:

                    /**
                     * 设备型号
                     */
                    std::string m_machine;
                    bool m_machineHasBeenSet;

                    /**
                     * 该机型对应的可售卖规格列表
                     */
                    std::vector<SpecConfigInfo> m_specInfos;
                    bool m_specInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_INSTANCESPEC_H_
