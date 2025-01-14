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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CONFIGKEYVALUE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CONFIGKEYVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 返回配置的文件内容（key-value）
                */
                class ConfigKeyValue : public AbstractModel
                {
                public:
                    ConfigKeyValue();
                    ~ConfigKeyValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取key
                     * @return KeyName key
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置key
                     * @param _keyName key
                     * 
                     */
                    void SetKeyName(const std::string& _keyName);

                    /**
                     * 判断参数 KeyName 是否已赋值
                     * @return KeyName 是否已赋值
                     * 
                     */
                    bool KeyNameHasBeenSet() const;

                    /**
                     * 获取值
                     * @return Value 值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置值
                     * @param _value 值
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Message 备注
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置备注
                     * @param _message 备注
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取1-只读，2-可修改但不可删除，3-可删除
                     * @return Display 1-只读，2-可修改但不可删除，3-可删除
                     * 
                     */
                    int64_t GetDisplay() const;

                    /**
                     * 设置1-只读，2-可修改但不可删除，3-可删除
                     * @param _display 1-只读，2-可修改但不可删除，3-可删除
                     * 
                     */
                    void SetDisplay(const int64_t& _display);

                    /**
                     * 判断参数 Display 是否已赋值
                     * @return Display 是否已赋值
                     * 
                     */
                    bool DisplayHasBeenSet() const;

                    /**
                     * 获取0不支持 1支持热更新
                     * @return SupportHotUpdate 0不支持 1支持热更新
                     * 
                     */
                    int64_t GetSupportHotUpdate() const;

                    /**
                     * 设置0不支持 1支持热更新
                     * @param _supportHotUpdate 0不支持 1支持热更新
                     * 
                     */
                    void SetSupportHotUpdate(const int64_t& _supportHotUpdate);

                    /**
                     * 判断参数 SupportHotUpdate 是否已赋值
                     * @return SupportHotUpdate 是否已赋值
                     * 
                     */
                    bool SupportHotUpdateHasBeenSet() const;

                private:

                    /**
                     * key
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * 值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 1-只读，2-可修改但不可删除，3-可删除
                     */
                    int64_t m_display;
                    bool m_displayHasBeenSet;

                    /**
                     * 0不支持 1支持热更新
                     */
                    int64_t m_supportHotUpdate;
                    bool m_supportHotUpdateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CONFIGKEYVALUE_H_
