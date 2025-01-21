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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_POSTMAXSIZEPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_POSTMAXSIZEPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * POST 请求上传文件流式传输最大限制。
                */
                class PostMaxSizeParameters : public AbstractModel
                {
                public:
                    PostMaxSizeParameters();
                    ~PostMaxSizeParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启 POST 请求上传文件限制，单位为 Byte，平台默认为限制为 32 * 2<sup>20</sup> Byte，取值有：<li>on：开启限制；</li><li>off：关闭限制。</li>
                     * @return Switch 是否开启 POST 请求上传文件限制，单位为 Byte，平台默认为限制为 32 * 2<sup>20</sup> Byte，取值有：<li>on：开启限制；</li><li>off：关闭限制。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置是否开启 POST 请求上传文件限制，单位为 Byte，平台默认为限制为 32 * 2<sup>20</sup> Byte，取值有：<li>on：开启限制；</li><li>off：关闭限制。</li>
                     * @param _switch 是否开启 POST 请求上传文件限制，单位为 Byte，平台默认为限制为 32 * 2<sup>20</sup> Byte，取值有：<li>on：开启限制；</li><li>off：关闭限制。</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取POST 请求上传文件流式传输最大限制，单位为 Byte，取值：1 * 2<sup>20</sup> Byte～500 * 2<sup>20</sup> Byte。
                     * @return MaxSize POST 请求上传文件流式传输最大限制，单位为 Byte，取值：1 * 2<sup>20</sup> Byte～500 * 2<sup>20</sup> Byte。
                     * 
                     */
                    int64_t GetMaxSize() const;

                    /**
                     * 设置POST 请求上传文件流式传输最大限制，单位为 Byte，取值：1 * 2<sup>20</sup> Byte～500 * 2<sup>20</sup> Byte。
                     * @param _maxSize POST 请求上传文件流式传输最大限制，单位为 Byte，取值：1 * 2<sup>20</sup> Byte～500 * 2<sup>20</sup> Byte。
                     * 
                     */
                    void SetMaxSize(const int64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                private:

                    /**
                     * 是否开启 POST 请求上传文件限制，单位为 Byte，平台默认为限制为 32 * 2<sup>20</sup> Byte，取值有：<li>on：开启限制；</li><li>off：关闭限制。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * POST 请求上传文件流式传输最大限制，单位为 Byte，取值：1 * 2<sup>20</sup> Byte～500 * 2<sup>20</sup> Byte。
                     */
                    int64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_POSTMAXSIZEPARAMETERS_H_
