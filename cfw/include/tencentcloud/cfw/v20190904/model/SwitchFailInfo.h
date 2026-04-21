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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SWITCHFAILINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SWITCHFAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 开关开启错误码数据
                */
                class SwitchFailInfo : public AbstractModel
                {
                public:
                    SwitchFailInfo();
                    ~SwitchFailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自增唯一ID
                     * @return Id 自增唯一ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置自增唯一ID
                     * @param _id 自增唯一ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取开关名称
                     * @return Name 开关名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置开关名称
                     * @param _name 开关名称
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
                     * 获取防火墙开关变动状态，小于0
                     * @return Status 防火墙开关变动状态，小于0
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置防火墙开关变动状态，小于0
                     * @param _status 防火墙开关变动状态，小于0
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 自增唯一ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 开关名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 防火墙开关变动状态，小于0
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SWITCHFAILINFO_H_
