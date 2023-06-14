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

#ifndef TENCENTCLOUD_NPP_V20190823_MODEL_KEYLIST_H_
#define TENCENTCLOUD_NPP_V20190823_MODEL_KEYLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Npp
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 对应按键操作,如果没有结构体里定义按键操作用户按键以后都从 interruptPrompt 重新播放
                */
                class KeyList : public AbstractModel
                {
                public:
                    KeyList();
                    ~KeyList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户按键（0-9、*、#、A-D)
                     * @return Key 用户按键（0-9、*、#、A-D)
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置用户按键（0-9、*、#、A-D)
                     * @param _key 用户按键（0-9、*、#、A-D)
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
                     * 获取1: 呼通被叫 2：interruptPrompt 重播提示 3：拆线
                     * @return Operate 1: 呼通被叫 2：interruptPrompt 重播提示 3：拆线
                     * 
                     */
                    std::string GetOperate() const;

                    /**
                     * 设置1: 呼通被叫 2：interruptPrompt 重播提示 3：拆线
                     * @param _operate 1: 呼通被叫 2：interruptPrompt 重播提示 3：拆线
                     * 
                     */
                    void SetOperate(const std::string& _operate);

                    /**
                     * 判断参数 Operate 是否已赋值
                     * @return Operate 是否已赋值
                     * 
                     */
                    bool OperateHasBeenSet() const;

                private:

                    /**
                     * 用户按键（0-9、*、#、A-D)
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 1: 呼通被叫 2：interruptPrompt 重播提示 3：拆线
                     */
                    std::string m_operate;
                    bool m_operateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NPP_V20190823_MODEL_KEYLIST_H_
