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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_EVENT_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_EVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * eb event信息
                */
                class Event : public AbstractModel
                {
                public:
                    Event();
                    ~Event() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件源的信息,新产品上报必须符合EB的规范
                     * @return Source 事件源的信息,新产品上报必须符合EB的规范
                     */
                    std::string GetSource() const;

                    /**
                     * 设置事件源的信息,新产品上报必须符合EB的规范
                     * @param Source 事件源的信息,新产品上报必须符合EB的规范
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取事件数据，内容由创建事件的系统来控制，当前datacontenttype仅支持application/json;charset=utf-8，所以该字段是json字符串
                     * @return Data 事件数据，内容由创建事件的系统来控制，当前datacontenttype仅支持application/json;charset=utf-8，所以该字段是json字符串
                     */
                    std::string GetData() const;

                    /**
                     * 设置事件数据，内容由创建事件的系统来控制，当前datacontenttype仅支持application/json;charset=utf-8，所以该字段是json字符串
                     * @param Data 事件数据，内容由创建事件的系统来控制，当前datacontenttype仅支持application/json;charset=utf-8，所以该字段是json字符串
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取事件类型，可自定义，选填。云服务默认写 COS:Created:PostObject，用“：”分割类型字段
                     * @return Type 事件类型，可自定义，选填。云服务默认写 COS:Created:PostObject，用“：”分割类型字段
                     */
                    std::string GetType() const;

                    /**
                     * 设置事件类型，可自定义，选填。云服务默认写 COS:Created:PostObject，用“：”分割类型字段
                     * @param Type 事件类型，可自定义，选填。云服务默认写 COS:Created:PostObject，用“：”分割类型字段
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取事件来源详细描述，可自定义，选填。云服务默认为标准qcs资源表示语法：qcs::dts:ap-guangzhou:appid/uin:xxx
                     * @return Subject 事件来源详细描述，可自定义，选填。云服务默认为标准qcs资源表示语法：qcs::dts:ap-guangzhou:appid/uin:xxx
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置事件来源详细描述，可自定义，选填。云服务默认为标准qcs资源表示语法：qcs::dts:ap-guangzhou:appid/uin:xxx
                     * @param Subject 事件来源详细描述，可自定义，选填。云服务默认为标准qcs资源表示语法：qcs::dts:ap-guangzhou:appid/uin:xxx
                     */
                    void SetSubject(const std::string& _subject);

                    /**
                     * 判断参数 Subject 是否已赋值
                     * @return Subject 是否已赋值
                     */
                    bool SubjectHasBeenSet() const;

                private:

                    /**
                     * 事件源的信息,新产品上报必须符合EB的规范
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 事件数据，内容由创建事件的系统来控制，当前datacontenttype仅支持application/json;charset=utf-8，所以该字段是json字符串
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 事件类型，可自定义，选填。云服务默认写 COS:Created:PostObject，用“：”分割类型字段
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 事件来源详细描述，可自定义，选填。云服务默认为标准qcs资源表示语法：qcs::dts:ap-guangzhou:appid/uin:xxx
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_EVENT_H_
