/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESIGNATEDZONEINFODICT_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESIGNATEDZONEINFODICT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 用户可选的可用区信息
                */
                class DesignatedZoneInfoDict : public AbstractModel
                {
                public:
                    DesignatedZoneInfoDict();
                    ~DesignatedZoneInfoDict() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可用区Id
                     * @return DesignatedZone 可用区Id
                     * 
                     */
                    std::string GetDesignatedZone() const;

                    /**
                     * 设置可用区Id
                     * @param _designatedZone 可用区Id
                     * 
                     */
                    void SetDesignatedZone(const std::string& _designatedZone);

                    /**
                     * 判断参数 DesignatedZone 是否已赋值
                     * @return DesignatedZone 是否已赋值
                     * 
                     */
                    bool DesignatedZoneHasBeenSet() const;

                    /**
                     * 获取可用区名称
                     * @return DesignatedZoneName 可用区名称
                     * 
                     */
                    std::string GetDesignatedZoneName() const;

                    /**
                     * 设置可用区名称
                     * @param _designatedZoneName 可用区名称
                     * 
                     */
                    void SetDesignatedZoneName(const std::string& _designatedZoneName);

                    /**
                     * 判断参数 DesignatedZoneName 是否已赋值
                     * @return DesignatedZoneName 是否已赋值
                     * 
                     */
                    bool DesignatedZoneNameHasBeenSet() const;

                    /**
                     * 获取可用区类型
                     * @return DesignatedZoneType 可用区类型
                     * 
                     */
                    std::string GetDesignatedZoneType() const;

                    /**
                     * 设置可用区类型
                     * @param _designatedZoneType 可用区类型
                     * 
                     */
                    void SetDesignatedZoneType(const std::string& _designatedZoneType);

                    /**
                     * 判断参数 DesignatedZoneType 是否已赋值
                     * @return DesignatedZoneType 是否已赋值
                     * 
                     */
                    bool DesignatedZoneTypeHasBeenSet() const;

                private:

                    /**
                     * 可用区Id
                     */
                    std::string m_designatedZone;
                    bool m_designatedZoneHasBeenSet;

                    /**
                     * 可用区名称
                     */
                    std::string m_designatedZoneName;
                    bool m_designatedZoneNameHasBeenSet;

                    /**
                     * 可用区类型
                     */
                    std::string m_designatedZoneType;
                    bool m_designatedZoneTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESIGNATEDZONEINFODICT_H_
