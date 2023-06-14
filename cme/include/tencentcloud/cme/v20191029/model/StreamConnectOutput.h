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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_STREAMCONNECTOUTPUT_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_STREAMCONNECTOUTPUT_H_

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
                * 云转推输出源。
                */
                class StreamConnectOutput : public AbstractModel
                {
                public:
                    StreamConnectOutput();
                    ~StreamConnectOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云转推输出源标识，转推项目级别唯一。若不填则由后端生成。
                     * @return Id 云转推输出源标识，转推项目级别唯一。若不填则由后端生成。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置云转推输出源标识，转推项目级别唯一。若不填则由后端生成。
                     * @param _id 云转推输出源标识，转推项目级别唯一。若不填则由后端生成。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取云转推输出源名称。
                     * @return Name 云转推输出源名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置云转推输出源名称。
                     * @param _name 云转推输出源名称。
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
                     * 获取云转推输出源类型，取值：
<li>URL ：URL类型</li>
不填默认为URL类型。
                     * @return Type 云转推输出源类型，取值：
<li>URL ：URL类型</li>
不填默认为URL类型。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置云转推输出源类型，取值：
<li>URL ：URL类型</li>
不填默认为URL类型。
                     * @param _type 云转推输出源类型，取值：
<li>URL ：URL类型</li>
不填默认为URL类型。
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
                     * 获取云转推推流地址。
                     * @return PushUrl 云转推推流地址。
                     * 
                     */
                    std::string GetPushUrl() const;

                    /**
                     * 设置云转推推流地址。
                     * @param _pushUrl 云转推推流地址。
                     * 
                     */
                    void SetPushUrl(const std::string& _pushUrl);

                    /**
                     * 判断参数 PushUrl 是否已赋值
                     * @return PushUrl 是否已赋值
                     * 
                     */
                    bool PushUrlHasBeenSet() const;

                private:

                    /**
                     * 云转推输出源标识，转推项目级别唯一。若不填则由后端生成。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 云转推输出源名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 云转推输出源类型，取值：
<li>URL ：URL类型</li>
不填默认为URL类型。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 云转推推流地址。
                     */
                    std::string m_pushUrl;
                    bool m_pushUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_STREAMCONNECTOUTPUT_H_
