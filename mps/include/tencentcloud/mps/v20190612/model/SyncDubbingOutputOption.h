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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SYNCDUBBINGOUTPUTOPTION_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SYNCDUBBINGOUTPUTOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 同步配音输出参数设置
                */
                class SyncDubbingOutputOption : public AbstractModel
                {
                public:
                    SyncDubbingOutputOption();
                    ~SyncDubbingOutputOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>合成结果输出类型</p><p>枚举值：</p><ul><li>data： 音频base64编码</li><li>url： 音频url，有效期24小时</li></ul>
                     * @return Type <p>合成结果输出类型</p><p>枚举值：</p><ul><li>data： 音频base64编码</li><li>url： 音频url，有效期24小时</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>合成结果输出类型</p><p>枚举值：</p><ul><li>data： 音频base64编码</li><li>url： 音频url，有效期24小时</li></ul>
                     * @param _type <p>合成结果输出类型</p><p>枚举值：</p><ul><li>data： 音频base64编码</li><li>url： 音频url，有效期24小时</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>合成结果输出类型</p><p>枚举值：</p><ul><li>data： 音频base64编码</li><li>url： 音频url，有效期24小时</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SYNCDUBBINGOUTPUTOPTION_H_
