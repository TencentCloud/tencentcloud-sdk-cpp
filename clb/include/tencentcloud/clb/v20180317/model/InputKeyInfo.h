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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_INPUTKEYINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_INPUTKEYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 创建Key的信息
                */
                class InputKeyInfo : public AbstractModel
                {
                public:
                    InputKeyInfo();
                    ~InputKeyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Key的名称</p>
                     * @return KeyName <p>Key的名称</p>
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置<p>Key的名称</p>
                     * @param _keyName <p>Key的名称</p>
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
                     * 获取<p>导入的明文Key</p><p>仅允许导入Key模式下输入</p>
                     * @return PlainKey <p>导入的明文Key</p><p>仅允许导入Key模式下输入</p>
                     * 
                     */
                    std::string GetPlainKey() const;

                    /**
                     * 设置<p>导入的明文Key</p><p>仅允许导入Key模式下输入</p>
                     * @param _plainKey <p>导入的明文Key</p><p>仅允许导入Key模式下输入</p>
                     * 
                     */
                    void SetPlainKey(const std::string& _plainKey);

                    /**
                     * 判断参数 PlainKey 是否已赋值
                     * @return PlainKey 是否已赋值
                     * 
                     */
                    bool PlainKeyHasBeenSet() const;

                private:

                    /**
                     * <p>Key的名称</p>
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * <p>导入的明文Key</p><p>仅允许导入Key模式下输入</p>
                     */
                    std::string m_plainKey;
                    bool m_plainKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_INPUTKEYINFO_H_
