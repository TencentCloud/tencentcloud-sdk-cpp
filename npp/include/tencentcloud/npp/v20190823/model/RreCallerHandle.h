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

#ifndef TENCENTCLOUD_NPP_V20190823_MODEL_RRECALLERHANDLE_H_
#define TENCENTCLOUD_NPP_V20190823_MODEL_RRECALLERHANDLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/npp/v20190823/model/KeyList.h>


namespace TencentCloud
{
    namespace Npp
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 结构体，主叫呼叫预处理操作，根据不同操作确认是否呼通被叫。如需使用，本结构体需要与 keyList 结构体配合使用，此时这两个参数都为必填项
                */
                class RreCallerHandle : public AbstractModel
                {
                public:
                    RreCallerHandle();
                    ~RreCallerHandle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取呼叫主叫以后，给主叫用户的语音提示，播放该提示时用户所有按键无效
                     * @return ReadPrompt 呼叫主叫以后，给主叫用户的语音提示，播放该提示时用户所有按键无效
                     * 
                     */
                    std::string GetReadPrompt() const;

                    /**
                     * 设置呼叫主叫以后，给主叫用户的语音提示，播放该提示时用户所有按键无效
                     * @param _readPrompt 呼叫主叫以后，给主叫用户的语音提示，播放该提示时用户所有按键无效
                     * 
                     */
                    void SetReadPrompt(const std::string& _readPrompt);

                    /**
                     * 判断参数 ReadPrompt 是否已赋值
                     * @return ReadPrompt 是否已赋值
                     * 
                     */
                    bool ReadPromptHasBeenSet() const;

                    /**
                     * 获取可中断提示，播放该提示时，用户可以按键
                     * @return InterruptPrompt 可中断提示，播放该提示时，用户可以按键
                     * 
                     */
                    std::string GetInterruptPrompt() const;

                    /**
                     * 设置可中断提示，播放该提示时，用户可以按键
                     * @param _interruptPrompt 可中断提示，播放该提示时，用户可以按键
                     * 
                     */
                    void SetInterruptPrompt(const std::string& _interruptPrompt);

                    /**
                     * 判断参数 InterruptPrompt 是否已赋值
                     * @return InterruptPrompt 是否已赋值
                     * 
                     */
                    bool InterruptPromptHasBeenSet() const;

                    /**
                     * 获取对应按键操作,如果没有结构体里定义按键操作用户按键以后都从 interruptPrompt 重新播放
                     * @return KeyList 对应按键操作,如果没有结构体里定义按键操作用户按键以后都从 interruptPrompt 重新播放
                     * 
                     */
                    std::vector<KeyList> GetKeyList() const;

                    /**
                     * 设置对应按键操作,如果没有结构体里定义按键操作用户按键以后都从 interruptPrompt 重新播放
                     * @param _keyList 对应按键操作,如果没有结构体里定义按键操作用户按键以后都从 interruptPrompt 重新播放
                     * 
                     */
                    void SetKeyList(const std::vector<KeyList>& _keyList);

                    /**
                     * 判断参数 KeyList 是否已赋值
                     * @return KeyList 是否已赋值
                     * 
                     */
                    bool KeyListHasBeenSet() const;

                    /**
                     * 获取最多重复播放次数，超过该次数拆线
                     * @return RepeatTimes 最多重复播放次数，超过该次数拆线
                     * 
                     */
                    std::string GetRepeatTimes() const;

                    /**
                     * 设置最多重复播放次数，超过该次数拆线
                     * @param _repeatTimes 最多重复播放次数，超过该次数拆线
                     * 
                     */
                    void SetRepeatTimes(const std::string& _repeatTimes);

                    /**
                     * 判断参数 RepeatTimes 是否已赋值
                     * @return RepeatTimes 是否已赋值
                     * 
                     */
                    bool RepeatTimesHasBeenSet() const;

                    /**
                     * 获取用户按键回调通知地址，如果为空不回调
                     * @return KeyPressUrl 用户按键回调通知地址，如果为空不回调
                     * 
                     */
                    std::string GetKeyPressUrl() const;

                    /**
                     * 设置用户按键回调通知地址，如果为空不回调
                     * @param _keyPressUrl 用户按键回调通知地址，如果为空不回调
                     * 
                     */
                    void SetKeyPressUrl(const std::string& _keyPressUrl);

                    /**
                     * 判断参数 KeyPressUrl 是否已赋值
                     * @return KeyPressUrl 是否已赋值
                     * 
                     */
                    bool KeyPressUrlHasBeenSet() const;

                    /**
                     * 获取提示音男声女声：1女声，2男声。默认女声
                     * @return PromptGender 提示音男声女声：1女声，2男声。默认女声
                     * 
                     */
                    std::string GetPromptGender() const;

                    /**
                     * 设置提示音男声女声：1女声，2男声。默认女声
                     * @param _promptGender 提示音男声女声：1女声，2男声。默认女声
                     * 
                     */
                    void SetPromptGender(const std::string& _promptGender);

                    /**
                     * 判断参数 PromptGender 是否已赋值
                     * @return PromptGender 是否已赋值
                     * 
                     */
                    bool PromptGenderHasBeenSet() const;

                private:

                    /**
                     * 呼叫主叫以后，给主叫用户的语音提示，播放该提示时用户所有按键无效
                     */
                    std::string m_readPrompt;
                    bool m_readPromptHasBeenSet;

                    /**
                     * 可中断提示，播放该提示时，用户可以按键
                     */
                    std::string m_interruptPrompt;
                    bool m_interruptPromptHasBeenSet;

                    /**
                     * 对应按键操作,如果没有结构体里定义按键操作用户按键以后都从 interruptPrompt 重新播放
                     */
                    std::vector<KeyList> m_keyList;
                    bool m_keyListHasBeenSet;

                    /**
                     * 最多重复播放次数，超过该次数拆线
                     */
                    std::string m_repeatTimes;
                    bool m_repeatTimesHasBeenSet;

                    /**
                     * 用户按键回调通知地址，如果为空不回调
                     */
                    std::string m_keyPressUrl;
                    bool m_keyPressUrlHasBeenSet;

                    /**
                     * 提示音男声女声：1女声，2男声。默认女声
                     */
                    std::string m_promptGender;
                    bool m_promptGenderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NPP_V20190823_MODEL_RRECALLERHANDLE_H_
