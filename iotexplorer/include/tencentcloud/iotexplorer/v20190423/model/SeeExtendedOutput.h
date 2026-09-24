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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEEXTENDEDOUTPUT_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEEXTENDEDOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TWeSee 扩展输出字段
                */
                class SeeExtendedOutput : public AbstractModel
                {
                public:
                    SeeExtendedOutput();
                    ~SeeExtendedOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>提示词标识符</p><p>枚举值：</p><ul><li>overview： 内容概述</li><li>scene： 场景关键词</li><li>events： 事件关键词</li><li>objects： 物品关键词</li></ul>
                     * @return Key <p>提示词标识符</p><p>枚举值：</p><ul><li>overview： 内容概述</li><li>scene： 场景关键词</li><li>events： 事件关键词</li><li>objects： 物品关键词</li></ul>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>提示词标识符</p><p>枚举值：</p><ul><li>overview： 内容概述</li><li>scene： 场景关键词</li><li>events： 事件关键词</li><li>objects： 物品关键词</li></ul>
                     * @param _key <p>提示词标识符</p><p>枚举值：</p><ul><li>overview： 内容概述</li><li>scene： 场景关键词</li><li>events： 事件关键词</li><li>objects： 物品关键词</li></ul>
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
                     * 获取<p>模型输出的扩展内容文本</p>
                     * @return Output <p>模型输出的扩展内容文本</p>
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置<p>模型输出的扩展内容文本</p>
                     * @param _output <p>模型输出的扩展内容文本</p>
                     * 
                     */
                    void SetOutput(const std::string& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * <p>提示词标识符</p><p>枚举值：</p><ul><li>overview： 内容概述</li><li>scene： 场景关键词</li><li>events： 事件关键词</li><li>objects： 物品关键词</li></ul>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>模型输出的扩展内容文本</p>
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEEXTENDEDOUTPUT_H_
