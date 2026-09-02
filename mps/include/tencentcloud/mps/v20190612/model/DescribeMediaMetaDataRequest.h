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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEMEDIAMETADATAREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEMEDIAMETADATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeMediaMetaData请求参数结构体
                */
                class DescribeMediaMetaDataRequest : public AbstractModel
                {
                public:
                    DescribeMediaMetaDataRequest();
                    ~DescribeMediaMetaDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>需要获取元信息的文件输入信息。</p>
                     * @return InputInfo <p>需要获取元信息的文件输入信息。</p>
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置<p>需要获取元信息的文件输入信息。</p>
                     * @param _inputInfo <p>需要获取元信息的文件输入信息。</p>
                     * 
                     */
                    void SetInputInfo(const MediaInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取<p>指定为slow时，增加接口超时时间</p><p>枚举值：</p><ul><li>slow： 增加接口超时时间</li></ul>
                     * @return Mode <p>指定为slow时，增加接口超时时间</p><p>枚举值：</p><ul><li>slow： 增加接口超时时间</li></ul>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>指定为slow时，增加接口超时时间</p><p>枚举值：</p><ul><li>slow： 增加接口超时时间</li></ul>
                     * @param _mode <p>指定为slow时，增加接口超时时间</p><p>枚举值：</p><ul><li>slow： 增加接口超时时间</li></ul>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * <p>需要获取元信息的文件输入信息。</p>
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * <p>指定为slow时，增加接口超时时间</p><p>枚举值：</p><ul><li>slow： 增加接口超时时间</li></ul>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEMEDIAMETADATAREQUEST_H_
