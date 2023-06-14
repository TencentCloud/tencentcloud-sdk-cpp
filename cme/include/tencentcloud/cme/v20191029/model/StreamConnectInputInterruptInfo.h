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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_STREAMCONNECTINPUTINTERRUPTINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_STREAMCONNECTINPUTINTERRUPTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 云转推输入断流信息。
                */
                class StreamConnectInputInterruptInfo : public AbstractModel
                {
                public:
                    StreamConnectInputInterruptInfo();
                    ~StreamConnectInputInterruptInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云转推输入源标识，取值有：
<li>Main：主源；</li>
<li>Backup：备源。</li>
                     * @return EndPoint 云转推输入源标识，取值有：
<li>Main：主源；</li>
<li>Backup：备源。</li>
                     * 
                     */
                    std::string GetEndPoint() const;

                    /**
                     * 设置云转推输入源标识，取值有：
<li>Main：主源；</li>
<li>Backup：备源。</li>
                     * @param _endPoint 云转推输入源标识，取值有：
<li>Main：主源；</li>
<li>Backup：备源。</li>
                     * 
                     */
                    void SetEndPoint(const std::string& _endPoint);

                    /**
                     * 判断参数 EndPoint 是否已赋值
                     * @return EndPoint 是否已赋值
                     * 
                     */
                    bool EndPointHasBeenSet() const;

                private:

                    /**
                     * 云转推输入源标识，取值有：
<li>Main：主源；</li>
<li>Backup：备源。</li>
                     */
                    std::string m_endPoint;
                    bool m_endPointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_STREAMCONNECTINPUTINTERRUPTINFO_H_
