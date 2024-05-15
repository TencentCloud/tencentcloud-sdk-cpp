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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_NEWALERTKEY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_NEWALERTKEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 该结构体用来传入告警的key，以更新告警的status
                */
                class NewAlertKey : public AbstractModel
                {
                public:
                    NewAlertKey();
                    ~NewAlertKey() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取需要更改的用户appid
                     * @return AppId 需要更改的用户appid
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置需要更改的用户appid
                     * @param _appId 需要更改的用户appid
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取告警类别
                     * @return Type 告警类别
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置告警类别
                     * @param _type 告警类别
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取告警子类别
                     * @return SubType 告警子类别
                     * 
                     */
                    std::string GetSubType() const;

                    /**
                     * 设置告警子类别
                     * @param _subType 告警子类别
                     * 
                     */
                    void SetSubType(const std::string& _subType);

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     * 
                     */
                    bool SubTypeHasBeenSet() const;

                    /**
                     * 获取告警来源
                     * @return Source 告警来源
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置告警来源
                     * @param _source 告警来源
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取告警名称
                     * @return Name 告警名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置告警名称
                     * @param _name 告警名称
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
                     * 获取告警key
                     * @return Key 告警key
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置告警key
                     * @param _key 告警key
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取时间
                     * @return Date 时间
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置时间
                     * @param _date 时间
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
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
                     * 需要更改的用户appid
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 告警类别
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 告警子类别
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                    /**
                     * 告警来源
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 告警名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 告警key
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 时间
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_NEWALERTKEY_H_
