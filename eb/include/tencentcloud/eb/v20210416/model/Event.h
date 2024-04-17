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
#include <tencentcloud/eb/v20210416/model/Tag.h>


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
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置事件源的信息,新产品上报必须符合EB的规范
                     * @param _source 事件源的信息,新产品上报必须符合EB的规范
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取事件数据，内容由创建事件的系统来控制，当前datacontenttype仅支持application/json;charset=utf-8，所以该字段是json字符串
                     * @return Data 事件数据，内容由创建事件的系统来控制，当前datacontenttype仅支持application/json;charset=utf-8，所以该字段是json字符串
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置事件数据，内容由创建事件的系统来控制，当前datacontenttype仅支持application/json;charset=utf-8，所以该字段是json字符串
                     * @param _data 事件数据，内容由创建事件的系统来控制，当前datacontenttype仅支持application/json;charset=utf-8，所以该字段是json字符串
                     * 
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取事件类型，可自定义，选填。云服务默认写 COS:Created:PostObject，用“：”分割类型字段
                     * @return Type 事件类型，可自定义，选填。云服务默认写 COS:Created:PostObject，用“：”分割类型字段
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置事件类型，可自定义，选填。云服务默认写 COS:Created:PostObject，用“：”分割类型字段
                     * @param _type 事件类型，可自定义，选填。云服务默认写 COS:Created:PostObject，用“：”分割类型字段
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
                     * 获取事件来源详细描述，可自定义，选填。云服务默认为标准qcs资源表示语法：qcs::dts:ap-guangzhou:appid/uin:xxx
                     * @return Subject 事件来源详细描述，可自定义，选填。云服务默认为标准qcs资源表示语法：qcs::dts:ap-guangzhou:appid/uin:xxx
                     * 
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置事件来源详细描述，可自定义，选填。云服务默认为标准qcs资源表示语法：qcs::dts:ap-guangzhou:appid/uin:xxx
                     * @param _subject 事件来源详细描述，可自定义，选填。云服务默认为标准qcs资源表示语法：qcs::dts:ap-guangzhou:appid/uin:xxx
                     * 
                     */
                    void SetSubject(const std::string& _subject);

                    /**
                     * 判断参数 Subject 是否已赋值
                     * @return Subject 是否已赋值
                     * 
                     */
                    bool SubjectHasBeenSet() const;

                    /**
                     * 获取事件发生的毫秒时间戳，
time.Now().UnixNano()/1e6
                     * @return Time 事件发生的毫秒时间戳，
time.Now().UnixNano()/1e6
                     * 
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置事件发生的毫秒时间戳，
time.Now().UnixNano()/1e6
                     * @param _time 事件发生的毫秒时间戳，
time.Now().UnixNano()/1e6
                     * 
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取事件的地域信息，没有则默认是EB所在的地域信息
                     * @return Region 事件的地域信息，没有则默认是EB所在的地域信息
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置事件的地域信息，没有则默认是EB所在的地域信息
                     * @param _region 事件的地域信息，没有则默认是EB所在的地域信息
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取用于描述事件状态，非必须，默认是""
                     * @return Status 用于描述事件状态，非必须，默认是""
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置用于描述事件状态，非必须，默认是""
                     * @param _status 用于描述事件状态，非必须，默认是""
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取事件的唯一id，用户侧主动上传则需要保证风格一致
                     * @return Id 事件的唯一id，用户侧主动上传则需要保证风格一致
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置事件的唯一id，用户侧主动上传则需要保证风格一致
                     * @param _id 事件的唯一id，用户侧主动上传则需要保证风格一致
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
                     * 获取标签列表
                     * @return TagList 标签列表
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置标签列表
                     * @param _tagList 标签列表
                     * 
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

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

                    /**
                     * 事件发生的毫秒时间戳，
time.Now().UnixNano()/1e6
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 事件的地域信息，没有则默认是EB所在的地域信息
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 用于描述事件状态，非必须，默认是""
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 事件的唯一id，用户侧主动上传则需要保证风格一致
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_EVENT_H_
