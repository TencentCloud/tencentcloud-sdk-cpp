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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_PROBETASKBASICCONFIGURATION_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_PROBETASKBASICCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * 拨测任务基础配置
                */
                class ProbeTaskBasicConfiguration : public AbstractModel
                {
                public:
                    ProbeTaskBasicConfiguration();
                    ~ProbeTaskBasicConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取拨测任务名称
                     * @return Name 拨测任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置拨测任务名称
                     * @param _name 拨测任务名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取拨测目标地址
                     * @return TargetAddress 拨测目标地址
                     * 
                     */
                    std::string GetTargetAddress() const;

                    /**
                     * 设置拨测目标地址
                     * @param _targetAddress 拨测目标地址
                     * 
                     */
                    void SetTargetAddress(const std::string& _targetAddress);

                    /**
                     * 判断参数 TargetAddress 是否已赋值
                     * @return TargetAddress 是否已赋值
                     * 
                     */
                    bool TargetAddressHasBeenSet() const;

                private:

                    /**
                     * 拨测任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 拨测目标地址
                     */
                    std::string m_targetAddress;
                    bool m_targetAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_PROBETASKBASICCONFIGURATION_H_
