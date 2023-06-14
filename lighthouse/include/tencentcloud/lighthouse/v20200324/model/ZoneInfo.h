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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_ZONEINFO_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_ZONEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 可用区详细信息
                */
                class ZoneInfo : public AbstractModel
                {
                public:
                    ZoneInfo();
                    ~ZoneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取可用区中文名称
                     * @return ZoneName 可用区中文名称
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置可用区中文名称
                     * @param _zoneName 可用区中文名称
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取实例购买页可用区展示标签
                     * @return InstanceDisplayLabel 实例购买页可用区展示标签
                     * 
                     */
                    std::string GetInstanceDisplayLabel() const;

                    /**
                     * 设置实例购买页可用区展示标签
                     * @param _instanceDisplayLabel 实例购买页可用区展示标签
                     * 
                     */
                    void SetInstanceDisplayLabel(const std::string& _instanceDisplayLabel);

                    /**
                     * 判断参数 InstanceDisplayLabel 是否已赋值
                     * @return InstanceDisplayLabel 是否已赋值
                     * 
                     */
                    bool InstanceDisplayLabelHasBeenSet() const;

                private:

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 可用区中文名称
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 实例购买页可用区展示标签
                     */
                    std::string m_instanceDisplayLabel;
                    bool m_instanceDisplayLabelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_ZONEINFO_H_
