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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_SPECCONFIG_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_SPECCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/SpecConfigInfo.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * 按机型分类的规格配置
                */
                class SpecConfig : public AbstractModel
                {
                public:
                    SpecConfig();
                    ~SpecConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规格机型
                     * @return Machine 规格机型
                     * 
                     */
                    std::string GetMachine() const;

                    /**
                     * 设置规格机型
                     * @param _machine 规格机型
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
                     * 获取规格列表
                     * @return SpecConfigInfos 规格列表
                     * 
                     */
                    std::vector<SpecConfigInfo> GetSpecConfigInfos() const;

                    /**
                     * 设置规格列表
                     * @param _specConfigInfos 规格列表
                     * 
                     */
                    void SetSpecConfigInfos(const std::vector<SpecConfigInfo>& _specConfigInfos);

                    /**
                     * 判断参数 SpecConfigInfos 是否已赋值
                     * @return SpecConfigInfos 是否已赋值
                     * 
                     */
                    bool SpecConfigInfosHasBeenSet() const;

                private:

                    /**
                     * 规格机型
                     */
                    std::string m_machine;
                    bool m_machineHasBeenSet;

                    /**
                     * 规格列表
                     */
                    std::vector<SpecConfigInfo> m_specConfigInfos;
                    bool m_specConfigInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_SPECCONFIG_H_
