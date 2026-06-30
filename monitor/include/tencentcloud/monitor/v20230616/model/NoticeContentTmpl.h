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
                     * 获取<p>自定义通知内容模板id，唯一id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TmplID <p>自定义通知内容模板id，唯一id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTmplID() const;

                    /**
                     * 设置<p>自定义通知内容模板id，唯一id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tmplID <p>自定义通知内容模板id，唯一id</p>
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
                     * 获取<p>自定义通知内容模板名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TmplName <p>自定义通知内容模板名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTmplName() const;

                    /**
                     * 设置<p>自定义通知内容模板名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tmplName <p>自定义通知内容模板名</p>
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
                     * 获取<p>通知内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TmplContents <p>通知内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NoticeContentTmplItem GetTmplContents() const;

                    /**
                     * 设置<p>通知内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tmplContents <p>通知内容</p>
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
                     * 获取<p>Unix时间戳，秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>Unix时间戳，秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>Unix时间戳，秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>Unix时间戳，秒</p>
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
                     * 获取<p>Unix时间戳，秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>Unix时间戳，秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置<p>Unix时间戳，秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>Unix时间戳，秒</p>
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
                     * 获取<p>最后修改人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModifier <p>最后修改人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastModifier() const;

                    /**
                     * 设置<p>最后修改人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastModifier <p>最后修改人</p>
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
                     * 获取<p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creator <p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creator <p>创建人</p>
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
                     * 获取<p>监控类型</p>
                     * @return MonitorType <p>监控类型</p>
                     * 
                     */
                    std::string GetMonitorType() const;

                    /**
                     * 设置<p>监控类型</p>
                     * @param _monitorType <p>监控类型</p>
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
                     * 获取<p>模板语言 en/zh</p>
                     * @return TmplLanguage <p>模板语言 en/zh</p>
                     * 
                     */
                    std::string GetTmplLanguage() const;

                    /**
                     * 设置<p>模板语言 en/zh</p>
                     * @param _tmplLanguage <p>模板语言 en/zh</p>
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
                     * <p>自定义通知内容模板id，唯一id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tmplID;
                    bool m_tmplIDHasBeenSet;

                    /**
                     * <p>自定义通知内容模板名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tmplName;
                    bool m_tmplNameHasBeenSet;

                    /**
                     * <p>通知内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NoticeContentTmplItem m_tmplContents;
                    bool m_tmplContentsHasBeenSet;

                    /**
                     * <p>Unix时间戳，秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Unix时间戳，秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>最后修改人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastModifier;
                    bool m_lastModifierHasBeenSet;

                    /**
                     * <p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>监控类型</p>
                     */
                    std::string m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * <p>模板语言 en/zh</p>
                     */
                    std::string m_tmplLanguage;
                    bool m_tmplLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_NOTICECONTENTTMPL_H_
