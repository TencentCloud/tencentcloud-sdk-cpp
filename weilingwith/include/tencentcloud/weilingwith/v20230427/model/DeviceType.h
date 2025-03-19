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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICETYPE_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICETYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 设备类型
                */
                class DeviceType : public AbstractModel
                {
                public:
                    DeviceType();
                    ~DeviceType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备类型编码
                     * @return Code 设备类型编码
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置设备类型编码
                     * @param _code 设备类型编码
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取设备类型名称
                     * @return Name 设备类型名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置设备类型名称
                     * @param _name 设备类型名称
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
                     * 获取父设备类型编码
                     * @return ParentCode 父设备类型编码
                     * 
                     */
                    std::string GetParentCode() const;

                    /**
                     * 设置父设备类型编码
                     * @param _parentCode 父设备类型编码
                     * 
                     */
                    void SetParentCode(const std::string& _parentCode);

                    /**
                     * 判断参数 ParentCode 是否已赋值
                     * @return ParentCode 是否已赋值
                     * 
                     */
                    bool ParentCodeHasBeenSet() const;

                    /**
                     * 获取父设备类型名称
                     * @return ParentName 父设备类型名称
                     * 
                     */
                    std::string GetParentName() const;

                    /**
                     * 设置父设备类型名称
                     * @param _parentName 父设备类型名称
                     * 
                     */
                    void SetParentName(const std::string& _parentName);

                    /**
                     * 判断参数 ParentName 是否已赋值
                     * @return ParentName 是否已赋值
                     * 
                     */
                    bool ParentNameHasBeenSet() const;

                    /**
                     * 获取是否子系统，1是

                     * @return IsSubsystem 是否子系统，1是

                     * 
                     */
                    int64_t GetIsSubsystem() const;

                    /**
                     * 设置是否子系统，1是

                     * @param _isSubsystem 是否子系统，1是

                     * 
                     */
                    void SetIsSubsystem(const int64_t& _isSubsystem);

                    /**
                     * 判断参数 IsSubsystem 是否已赋值
                     * @return IsSubsystem 是否已赋值
                     * 
                     */
                    bool IsSubsystemHasBeenSet() const;

                private:

                    /**
                     * 设备类型编码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 设备类型名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 父设备类型编码
                     */
                    std::string m_parentCode;
                    bool m_parentCodeHasBeenSet;

                    /**
                     * 父设备类型名称
                     */
                    std::string m_parentName;
                    bool m_parentNameHasBeenSet;

                    /**
                     * 是否子系统，1是

                     */
                    int64_t m_isSubsystem;
                    bool m_isSubsystemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICETYPE_H_
