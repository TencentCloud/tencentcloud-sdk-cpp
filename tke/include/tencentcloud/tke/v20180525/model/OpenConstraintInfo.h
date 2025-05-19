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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_OPENCONSTRAINTINFO_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_OPENCONSTRAINTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 策略实例信息
                */
                class OpenConstraintInfo : public AbstractModel
                {
                public:
                    OpenConstraintInfo();
                    ~OpenConstraintInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略实例关联事件数
                     * @return EventNums 策略实例关联事件数
                     * 
                     */
                    uint64_t GetEventNums() const;

                    /**
                     * 设置策略实例关联事件数
                     * @param _eventNums 策略实例关联事件数
                     * 
                     */
                    void SetEventNums(const uint64_t& _eventNums);

                    /**
                     * 判断参数 EventNums 是否已赋值
                     * @return EventNums 是否已赋值
                     * 
                     */
                    bool EventNumsHasBeenSet() const;

                    /**
                     * 获取策略实例名称
                     * @return Name 策略实例名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置策略实例名称
                     * @param _name 策略实例名称
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
                     * 获取实例yaml详情base64编码
                     * @return YamlDetail 实例yaml详情base64编码
                     * 
                     */
                    std::string GetYamlDetail() const;

                    /**
                     * 设置实例yaml详情base64编码
                     * @param _yamlDetail 实例yaml详情base64编码
                     * 
                     */
                    void SetYamlDetail(const std::string& _yamlDetail);

                    /**
                     * 判断参数 YamlDetail 是否已赋值
                     * @return YamlDetail 是否已赋值
                     * 
                     */
                    bool YamlDetailHasBeenSet() const;

                private:

                    /**
                     * 策略实例关联事件数
                     */
                    uint64_t m_eventNums;
                    bool m_eventNumsHasBeenSet;

                    /**
                     * 策略实例名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 实例yaml详情base64编码
                     */
                    std::string m_yamlDetail;
                    bool m_yamlDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_OPENCONSTRAINTINFO_H_
