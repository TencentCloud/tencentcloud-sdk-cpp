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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_NOTICECONTENTTMPL_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_NOTICECONTENTTMPL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/NoticeContentTmplItem.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 自定义通知内容模板
                */
                class NoticeContentTmpl : public AbstractModel
                {
                public:
                    NoticeContentTmpl();
                    ~NoticeContentTmpl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义通知内容模板id，唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TmplID 自定义通知内容模板id，唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTmplID() const;

                    /**
                     * 设置自定义通知内容模板id，唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tmplID 自定义通知内容模板id，唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTmplID(const std::string& _tmplID);

                    /**
                     * 判断参数 TmplID 是否已赋值
                     * @return TmplID 是否已赋值
                     * 
                     */
                    bool TmplIDHasBeenSet() const;

                    /**
                     * 获取自定义通知内容模板名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TmplName 自定义通知内容模板名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTmplName() const;

                    /**
                     * 设置自定义通知内容模板名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tmplName 自定义通知内容模板名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTmplName(const std::string& _tmplName);

                    /**
                     * 判断参数 TmplName 是否已赋值
                     * @return TmplName 是否已赋值
                     * 
                     */
                    bool TmplNameHasBeenSet() const;

                    /**
                     * 获取通知内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TmplContents 通知内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NoticeContentTmplItem GetTmplContents() const;

                    /**
                     * 设置通知内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tmplContents 通知内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTmplContents(const NoticeContentTmplItem& _tmplContents);

                    /**
                     * 判断参数 TmplContents 是否已赋值
                     * @return TmplContents 是否已赋值
                     * 
                     */
                    bool TmplContentsHasBeenSet() const;

                    /**
                     * 获取Unix时间戳，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime Unix时间戳，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Unix时间戳，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime Unix时间戳，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Unix时间戳，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime Unix时间戳，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置Unix时间戳，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime Unix时间戳，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取最后修改人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModifier 最后修改人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastModifier() const;

                    /**
                     * 设置最后修改人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastModifier 最后修改人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastModifier(const std::string& _lastModifier);

                    /**
                     * 判断参数 LastModifier 是否已赋值
                     * @return LastModifier 是否已赋值
                     * 
                     */
                    bool LastModifierHasBeenSet() const;

                    /**
                     * 获取创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creator 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creator 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取监控类型
                     * @return MonitorType 监控类型
                     * 
                     */
                    std::string GetMonitorType() const;

                    /**
                     * 设置监控类型
                     * @param _monitorType 监控类型
                     * 
                     */
                    void SetMonitorType(const std::string& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取模板语言 en/zh
                     * @return TmplLanguage 模板语言 en/zh
                     * 
                     */
                    std::string GetTmplLanguage() const;

                    /**
                     * 设置模板语言 en/zh
                     * @param _tmplLanguage 模板语言 en/zh
                     * 
                     */
                    void SetTmplLanguage(const std::string& _tmplLanguage);

                    /**
                     * 判断参数 TmplLanguage 是否已赋值
                     * @return TmplLanguage 是否已赋值
                     * 
                     */
                    bool TmplLanguageHasBeenSet() const;

                private:

                    /**
                     * 自定义通知内容模板id，唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tmplID;
                    bool m_tmplIDHasBeenSet;

                    /**
                     * 自定义通知内容模板名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tmplName;
                    bool m_tmplNameHasBeenSet;

                    /**
                     * 通知内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NoticeContentTmplItem m_tmplContents;
                    bool m_tmplContentsHasBeenSet;

                    /**
                     * Unix时间戳，秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Unix时间戳，秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 最后修改人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastModifier;
                    bool m_lastModifierHasBeenSet;

                    /**
                     * 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 监控类型
                     */
                    std::string m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * 模板语言 en/zh
                     */
                    std::string m_tmplLanguage;
                    bool m_tmplLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_NOTICECONTENTTMPL_H_
