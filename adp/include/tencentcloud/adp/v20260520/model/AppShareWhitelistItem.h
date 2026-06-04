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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPSHAREWHITELISTITEM_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPSHAREWHITELISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 应用分享白名单项
                */
                class AppShareWhitelistItem : public AbstractModel
                {
                public:
                    AppShareWhitelistItem();
                    ~AppShareWhitelistItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取白名单类型。枚举值: 1:UIN账号, 2:手机号码, 3:邮箱地址, 4:IP地址
                     * @return Type 白名单类型。枚举值: 1:UIN账号, 2:手机号码, 3:邮箱地址, 4:IP地址
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置白名单类型。枚举值: 1:UIN账号, 2:手机号码, 3:邮箱地址, 4:IP地址
                     * @param _type 白名单类型。枚举值: 1:UIN账号, 2:手机号码, 3:邮箱地址, 4:IP地址
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取白名单值列表(UIN/手机号/邮箱/IP等)
                     * @return Values 白名单值列表(UIN/手机号/邮箱/IP等)
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置白名单值列表(UIN/手机号/邮箱/IP等)
                     * @param _values 白名单值列表(UIN/手机号/邮箱/IP等)
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * 白名单类型。枚举值: 1:UIN账号, 2:手机号码, 3:邮箱地址, 4:IP地址
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 白名单值列表(UIN/手机号/邮箱/IP等)
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPSHAREWHITELISTITEM_H_
