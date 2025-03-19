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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICESPACEINFO_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICESPACEINFO_H_

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
                * 设备位置信息
                */
                class DeviceSpaceInfo : public AbstractModel
                {
                public:
                    DeviceSpaceInfo();
                    ~DeviceSpaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取空间Id
                     * @return Id 空间Id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置空间Id
                     * @param _id 空间Id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取空间名字
                     * @return Name 空间名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置空间名字
                     * @param _name 空间名字
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
                     * 获取空间级别
                     * @return Level 空间级别
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置空间级别
                     * @param _level 空间级别
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取空间编码
                     * @return Code 空间编码
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置空间编码
                     * @param _code 空间编码
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                private:

                    /**
                     * 空间Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 空间名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 空间级别
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 空间编码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICESPACEINFO_H_
